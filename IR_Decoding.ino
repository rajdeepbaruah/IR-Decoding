//Code Written By RAJDEEP BARUAH

#include<IRremote.h>

int REC_PIN = 10;
IRrecv irrecv(REC_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();

}

void loop() {
  if(irrecv.decode(&results))
  {
    Serial.println(results.value);
    irrecv.resume();
  }
}
