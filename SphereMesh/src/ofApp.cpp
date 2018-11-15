#include "ofApp.h"

#define PIN_LED 12
#define PIN_BUTTON 11
#define PIN_POTMETER 1      //Draaiding
#define PIN_LDR 0           //Lichtgevoeligheidsding

//--------------------------------------------------------------
void ofApp::setup()
{
    // set listener - call ofApp::setupArduino when arduino is ready for use
    ofAddListener(arduino.EInitialized, this, &ofApp::setupArduino);
    
    // connect to the Arduino
    // use the same device name used in the Arduino IDE
    arduino.connect("/dev/cu.usbmodem1411"); //Noa's arduino likes to switch between 1411 and 1421
    arduino.sendFirmwareVersionRequest(); // workaround for ofArduino/firmatabug
//±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±
    ofBackground(ofColor::black);
    primitive = ofIcoSpherePrimitive(sphereradius, 2);
    
    light.setDirectional();
    light.setDiffuseColor(ofColor::white);
    light.enable();
}

//--------------------------------------------------------------
void ofApp::update()
{
    arduino.update();
    //    ofLog() << "isArduinoReady" << arduino.isArduinoReady() << endl;
    potValue = arduino.getAnalog(1);
    //================================================
    //buttonValue = arduino.getDigital(11);
    potValue / 10;
    
    auto triangles = primitive.getMesh().getUniqueFaces();
    float displacement = sin(ofGetElapsedTimef()* 4) * 10;
    
    for (int i = 0; i <triangles.size(); i++)
    {
        ofVec3f faceNormal = triangles[i].getFaceNormal();
        for (int j = 1; j < 3; j++)
        {
            triangles[i].setVertex(j, triangles[i].getVertex(j)+ faceNormal * displacement);
        }
    }
    
    primitive.getMesh().setFromTriangles(triangles);
}

//--------------------------------------------------------------
void ofApp::draw()
{
    
    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
    
    primitive.rotateDeg(spinX, 1, 0, 1);
    primitive.rotateDeg(spinY, 0, 0, 1);
    
    
    if(drawWireframe) 
    {
        primitive.drawWireframe();
    }
    else
    {
        primitive.draw();
    }
    
    ofSetIcoSphereResolution(potValue);

    
    
//============
    cam.setVFlip(true);
    cam.begin();
    
    ofEnableLighting();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    if(key == ' ')
    {
        drawWireframe = !drawWireframe;
    }
}

void ofApp::setupArduino(const int& version)
{
    // remove listener because we don't need it anymore
    ofRemoveListener(arduino.EInitialized, this, &ofApp::setupArduino);
    
    // print firmware name and version to the console
    ofLog() << "Arduino firmware found: " << arduino.getFirmwareName()
    << " v" << arduino.getMajorFirmwareVersion() << "." << arduino.getMinorFirmwareVersion();
    
    arduino.sendDigitalPinMode(PIN_LED, ARD_OUTPUT);
    arduino.sendDigitalPinMode(PIN_BUTTON, ARD_INPUT);
    arduino.sendAnalogPinReporting(PIN_LDR, ARD_ANALOG);
    arduino.sendAnalogPinReporting(PIN_POTMETER, ARD_ANALOG);  // Geeft value terug
    
    // set listeners for pin events
    ofAddListener(arduino.EDigitalPinChanged, this, &ofApp::digitalPinChanged);
    ofAddListener(arduino.EAnalogPinChanged, this, &ofApp::analogPinChanged);
}

void ofApp::digitalPinChanged(const int& pinNum)
{
    // get value with arduino.getDigital(pinNum)
    ofLogNotice() << "Digital Pin " << pinNum << " value: " << arduino.getDigital(pinNum) << endl;
}

void ofApp::analogPinChanged(const int& pinNum)
{
    // get value with arduino.getAnalog(pinNum));
    ofLogNotice() << "Analog Pin " << pinNum << " value: " << arduino.getAnalog(pinNum) << endl;
}
