#include <SoftwareSerial.h>
#include <TinyGPS++.h>
#define GSM_TX 3
#define GSM_RX 4
#define GPS_TX 11
#define GPS_RX 10
#define SWITCH_PIN 7
#define BUZZER_PIN 8
SoftwareSerial gsmSerial(GSM_TX, GSM_RX);
SoftwareSerial gpsSerial(GPS_TX, GPS_RX);
TinyGPSPlus gps;
String emergencyContact = "+919667970120";
void setup() {
  Serial.begin(9600);
  gsmSerial.begin(9600);
  gpsSerial.begin(9600);
  pinMode(SWITCH_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  
  digitalWrite(BUZZER_PIN, LOW);
}
void loop() {
  int switchState = digitalRead(SWITCH_PIN);
  if (switchState == HIGH) {
    sendEmergencyMessage();
  }
  while (gpsSerial.available() > 0) {
    if (gps.encode(gpsSerial.read())) {
      displayGPSInfo(); {
        displayGSMInfo();
      }
    }
  }
}
void sendEmergencyMessage() {
  gpsSerial.println("$PMTK225,1*2F");
  while (!gps.location.isValid()) {
    delay(1000);
  }
  
  String latitude = String(gps.location.lat(), 6);
  String longitude = String(gps.location.lng(), 6);
  gsmSerial.println("AT+CMGF=1");
  delay(1000);
  gsmSerial.print("AT+CMGS=\"");
  gsmSerial.print(emergencyContact);
  gsmSerial.println("\"");
  delay(1000);
  gsmSerial.print("Emergency! Help me! My location: ");
  gsmSerial.print("Latitude: ");
  gsmSerial.print(latitude);
  gsmSerial.print(", Longitude: ");
  gsmSerial.println(longitude);
  gsmSerial.write(26);
  delay(1000);
}
void displayGPSInfo() {
  if (gps.location.isValid()) {
    Serial.print("Latitude: ");
    18 | P a g e
    Serial.println(gps.location.lat(), 6);
    Serial.print("Longitude: ");
    Serial.println(gps.location.lng(), 6);
  } else {
    Serial.println("Waiting for GPS fix...");
  }
}
void displayGSMInfo()
{
  Serial.println("Checking GSM SIM900A status...");
  if (gsmSerial.available()) {
    char c = gsmSerial.read();
    Serial.print(c);
  }
  gsmSerial.println("AT");
}
