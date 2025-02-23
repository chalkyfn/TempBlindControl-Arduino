#include <DHT.h>

#define DHTPIN 14
#define led 17
#define  DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  led.
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);

  float temperature  = dht.readTemperature();

  if (isnan(temperature)){
   led.digitalWrite(1);
  }


}
