int fireLed = 13;
int heartLed = 12;
int waitLed = 11;
int liveLed = 10;
int shinyLed = 9;
int natureLed = 8;
int eyesLed = 7;
int bubbleLed = 6;
int waterLed = 5;
int flowerLed = 4;

int fadeAmount = 1;


void setup() 
{
  
  Serial.begin(9600);
  
  pinMode(fireLed, OUTPUT);
  pinMode(heartLed, OUTPUT);
  pinMode(waitLed, OUTPUT);
  pinMode(liveLed, OUTPUT);
  pinMode(shinyLed, OUTPUT);
  pinMode(natureLed, OUTPUT);
  pinMode(eyesLed, OUTPUT);
  pinMode(bubbleLed, OUTPUT);
  pinMode(waterLed, OUTPUT);
  pinMode(flowerLed, OUTPUT);
}
void loop() 
{

//Activate which leds you want
  
  //fire();
  //heart();
  //wait();
  //live();
  //shiny();
  nature();
  //eyes();
  //bubble();
  //water();
  //flower();
  
}

void fire()
{
  digitalWrite (fireLed, HIGH);
  delay(50);
  digitalWrite (fireLed, LOW);
  delay(10);
  digitalWrite (fireLed, HIGH);
  delay(100);
  digitalWrite (fireLed, LOW);
  delay(10);
  digitalWrite (fireLed, HIGH);
  delay(500);
  digitalWrite (fireLed, LOW);
  delay(5);
  digitalWrite (fireLed, HIGH);
  delay(750);
  digitalWrite (fireLed, LOW);
  delay(10);
  digitalWrite (fireLed, HIGH);
  delay(2000);
  digitalWrite (fireLed, LOW);
  delay(5);
  
  digitalWrite (fireLed, HIGH);
  delay(50);
  digitalWrite (fireLed, LOW);
  delay(10);
  digitalWrite (fireLed, HIGH);
  delay(100);
  digitalWrite (fireLed, LOW);
  delay(10);
  digitalWrite (fireLed, HIGH);
  delay(500);
  digitalWrite (fireLed, LOW);
  delay(5);
  digitalWrite (fireLed, HIGH);
  delay(750);
  digitalWrite (fireLed, LOW);
  delay(10);
  digitalWrite (fireLed, HIGH);
  delay(2000);
  digitalWrite (fireLed, LOW);
  delay(5);
}

void heart()
{
  digitalWrite (heartLed, HIGH);
  delay(500);
  digitalWrite (heartLed, LOW);
  delay(50);
  digitalWrite (heartLed, HIGH);
  delay(300);
  digitalWrite (heartLed, LOW);
  delay(75);
  digitalWrite (heartLed, HIGH);
  delay(500);
  digitalWrite (heartLed, LOW);
  delay(50);
  digitalWrite (heartLed, HIGH);
  delay(300);
  digitalWrite (heartLed, LOW);
  delay(75);
  digitalWrite (heartLed, HIGH);
  delay(500);
  digitalWrite (heartLed, LOW);
  delay(50);
  digitalWrite (heartLed, HIGH);
  delay(300);
  digitalWrite (heartLed, LOW);
  delay(75);
  digitalWrite (heartLed, HIGH);
  delay(500);
  digitalWrite (heartLed, LOW);
  delay(50);
  digitalWrite (heartLed, HIGH);
  delay(300);
  digitalWrite (heartLed, LOW);
  delay(75);
  digitalWrite (heartLed, HIGH);
  delay(500);
  digitalWrite (heartLed, LOW);
  delay(50);
  digitalWrite (heartLed, HIGH);
  delay(300);
  digitalWrite (heartLed, LOW);
  delay(75);
  digitalWrite (heartLed, HIGH);
  delay(500);
  digitalWrite (heartLed, LOW);
  delay(50);
  digitalWrite (heartLed, HIGH);
  delay(300);
  digitalWrite (heartLed, LOW);
  delay(75);
  digitalWrite (heartLed, HIGH);
  delay(500);
  digitalWrite (heartLed, LOW);
  delay(50);
  digitalWrite (heartLed, HIGH);
  delay(300);
  digitalWrite (heartLed, LOW);
  delay(75);
  digitalWrite (heartLed, HIGH);
  delay(500);
  digitalWrite (heartLed, LOW);
  delay(50);
  digitalWrite (heartLed, HIGH);
  delay(300);
  digitalWrite (heartLed, LOW);
  delay(75);
  digitalWrite (heartLed, HIGH);
  delay(500);
  digitalWrite (heartLed, LOW);
  delay(50);
  digitalWrite (heartLed, HIGH);
  delay(300);
  digitalWrite (heartLed, LOW);
  delay(75);
}

void wait()
{
  analogWrite(waitLed, 25);
  delay(1000);
  analogWrite(waitLed, 50);
  delay(750);
  analogWrite(waitLed, 100);
  delay(500);
  analogWrite(waitLed, 150);
  delay(250);
  analogWrite(waitLed, 255);
  delay(100);
  analogWrite(waitLed, 5);
  delay(10);
  analogWrite(waitLed, 0);
  delay(300);
  analogWrite(waitLed, 5);
  delay(200);
  analogWrite(waitLed, 0);
  delay(3000);

  analogWrite(waitLed, 25);
  delay(1000);
  analogWrite(waitLed, 50);
  delay(750);
  analogWrite(waitLed, 100);
  delay(500);
  analogWrite(waitLed, 150);
  delay(250);
  analogWrite(waitLed, 255);
  delay(100);
  analogWrite(waitLed, 5);
  delay(10);
  analogWrite(waitLed, 0);
  delay(300);
  analogWrite(waitLed, 5);
  delay(200);
  analogWrite(waitLed, 0);
  delay(3000);

  analogWrite(waitLed, 25);
  delay(1000);
  analogWrite(waitLed, 50);
  delay(750);
  analogWrite(waitLed, 100);
  delay(500);
  analogWrite(waitLed, 150);
  delay(250);
  analogWrite(waitLed, 255);
  delay(100);
  analogWrite(waitLed, 5);
  delay(10);
  analogWrite(waitLed, 0);
  delay(300);
  analogWrite(waitLed, 5);
  delay(200);
  analogWrite(waitLed, 0);
  delay(3000);

  analogWrite(waitLed, 25);
  delay(1000);
  analogWrite(waitLed, 50);
  delay(750);
  analogWrite(waitLed, 100);
  delay(500);
  analogWrite(waitLed, 150);
  delay(250);
  analogWrite(waitLed, 255);
  delay(100);
  analogWrite(waitLed, 5);
  delay(10);
  analogWrite(waitLed, 0);
  delay(300);
  analogWrite(waitLed, 5);
  delay(200);
  analogWrite(waitLed, 0);
  delay(3000);
}

void live()
{
  
  fadeAmount++;
  analogWrite(liveLed, fadeAmount);
  delay(10 );
  if(fadeAmount == 255)
  {
    fadeAmount = 0;
  }
  Serial.println(fadeAmount);
}

void shiny()
{
  fadeAmount++;
  analogWrite(shinyLed, fadeAmount);
  delay(50);
  
  if(fadeAmount == 255)
  {
    delay(2000);
    fadeAmount = 0;
  }
}

void nature()
{
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(200);

  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(600);

  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(20);
  digitalWrite (natureLed, HIGH);
  delay(20);
  digitalWrite (natureLed, LOW);
  delay(200);
}

void eyes()
{
  digitalWrite (eyesLed, HIGH);
  delay(3000);
  digitalWrite (eyesLed, LOW);
  delay(150);
  
  digitalWrite (eyesLed, HIGH);
  delay(2000);
  digitalWrite (eyesLed, LOW);
  delay(100);

  digitalWrite (eyesLed, HIGH);
  delay(1500);
  digitalWrite (eyesLed, LOW);
  delay(150);
}

void bubble()
{
  digitalWrite (bubbleLed, HIGH);
  delay(150);
  digitalWrite (bubbleLed, LOW);
  delay(150);
}

void water()
{
  digitalWrite (waterLed, HIGH);
  
}

void flower()
{
  digitalWrite (flowerLed, HIGH);
  delay(150);
  digitalWrite (flowerLed, LOW);
  delay(150);
}

