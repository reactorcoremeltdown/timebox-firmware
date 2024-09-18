#include <Arduino.h>
#include <BLEMidi.h>

const int activity1pin = 14;
int activity1state = 0;

const int activity2pin = 12;
int activity2state = 0;

const int activity3pin = 32;
int activity3state = 0;

const int activity4pin = 33;
int activity4state = 0;

const int activity5pin = 35;
int activity5state = 0;

const int activity6pin = 34;
int activity6state = 0;

const int activity7pin = 25;
int activity7state = 0;

const int activity8pin = 26;
int activity8state = 0;

const int activity9pin = 27;
int activity9state = 0;


void setup() {
  pinMode(activity1pin, INPUT);
  pinMode(activity2pin, INPUT);
  pinMode(activity3pin, INPUT);
  pinMode(activity4pin, INPUT);
  pinMode(activity5pin, INPUT);
  pinMode(activity6pin, INPUT);
  pinMode(activity7pin, INPUT);
  pinMode(activity8pin, INPUT);
  pinMode(activity9pin, INPUT);

  Serial.begin(115200);
  Serial.println("Initializing bluetooth");
  BLEMidiServer.begin("Timebox MK I");
  Serial.println("Waiting for connections...");
}

void loop() {
  int activity1currentstate = digitalRead(activity1pin);
  int activity2currentstate = digitalRead(activity2pin);
  int activity3currentstate = digitalRead(activity3pin);
  int activity4currentstate = digitalRead(activity4pin);
  int activity5currentstate = digitalRead(activity5pin);
  int activity6currentstate = digitalRead(activity6pin);
  int activity7currentstate = digitalRead(activity7pin);
  int activity8currentstate = digitalRead(activity8pin);
  int activity9currentstate = digitalRead(activity9pin);

  if(BLEMidiServer.isConnected()) {
    if(activity1currentstate != activity1state) {
      Serial.println("Activity 1 triggered");
      switch(activity1currentstate) {
        case 0:
          BLEMidiServer.noteOn(0,72,127);
          break;
        case 1:
          BLEMidiServer.noteOff(0,72,127);
          break;
      }
      activity1state = activity1currentstate;
    }
    if(activity2currentstate != activity2state) {
      Serial.println("Activity 2 triggered");
      switch(activity2currentstate) {
        case 0:
          BLEMidiServer.noteOn(0,73,127);
          break;
        case 1:
          BLEMidiServer.noteOff(0,73,127);
          break;
      }
      activity2state = activity2currentstate;
    }
    if(activity3currentstate != activity3state) {
      Serial.println("Activity 3 triggered");
      switch(activity3currentstate) {
        case 0:
          BLEMidiServer.noteOn(0,74,127);
          break;
        case 1:
          BLEMidiServer.noteOff(0,74,127);
          break;
      }
      activity3state = activity3currentstate;
    }
    if(activity4currentstate != activity4state) {
      Serial.println("Activity 4 triggered");
      switch(activity4currentstate) {
        case 0:
          BLEMidiServer.noteOn(0,75,127);
          break;
        case 1:
          BLEMidiServer.noteOff(0,75,127);
          break;
      }
      activity4state = activity4currentstate;
    }
    if(activity5currentstate != activity5state) {
      Serial.println("Activity 5 triggered");
      switch(activity5currentstate) {
        case 0:
          BLEMidiServer.noteOn(0,76,127);
          break;
        case 1:
          BLEMidiServer.noteOff(0,76,127);
          break;
      }
      activity5state = activity5currentstate;
    }
    if(activity6currentstate != activity6state) {
      Serial.println("Activity 6 triggered");
      switch(activity6currentstate) {
        case 0:
          BLEMidiServer.noteOn(0,77,127);
          break;
        case 1:
          BLEMidiServer.noteOff(0,77,127);
          break;
      }
      activity6state = activity6currentstate;
    }
    if(activity7currentstate != activity7state) {
      Serial.println("Activity 7 triggered");
      switch(activity7currentstate) {
        case 0:
          BLEMidiServer.noteOn(0,78,127);
          break;
        case 1:
          BLEMidiServer.noteOff(0,78,127);
          break;
      }
      activity7state = activity7currentstate;
    }
    if(activity8currentstate != activity8state) {
      Serial.println("Activity 8 triggered");
      switch(activity8currentstate) {
        case 0:
          BLEMidiServer.noteOn(0,79,127);
          break;
        case 1:
          BLEMidiServer.noteOff(0,79,127);
          break;
      }
      activity8state = activity8currentstate;
    }
    if(activity9currentstate != activity9state) {
      Serial.println("Activity 9 triggered");
      switch(activity9currentstate) {
        case 0:
          BLEMidiServer.noteOn(0,80,127);
          break;
        case 1:
          BLEMidiServer.noteOff(0,80,127);
          break;
      }
      activity9state = activity9currentstate;
    }
  }
}
