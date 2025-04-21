#include <NewPing.h>

#define TRIGGER_PIN  2
#define ECHO_PIN     3
#define MAX_DISTANCE 500

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(50);
  unsigned int uS = sonar.ping();
  Serial.print("Distance: ");
  Serial.print(uS / US_ROUNDTRIP_CM);
  Serial.println("cm");
}
