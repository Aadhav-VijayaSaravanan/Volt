#include <dht.h>
#include <LiquidCrystal.h>

#define Type DHT11

int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int sensePin = 2;
dht DHT;

float humidity;
float tempC;

int setTime = 500;
int dt = 1000;

void setup() {
  Serial.begin(9600);
  delay(setTime);
  lcd.begin(16, 2);
}

void loop() {
  lcd.clear();  // Clear the display

  DHT.read11(sensePin);

  humidity = DHT.humidity;
  tempC = DHT.temperature;

  lcd.setCursor(0, 0);
  lcd.print("Temperature = ");
  lcd.print(tempC);

  lcd.setCursor(0, 1);
  lcd.print("Humidity = ");
  lcd.print(humidity);
  lcd.print(" %");

  delay(500);

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("% Temperature ");
  Serial.print(tempC);
  Serial.println(" C ");
  
  delay(dt); // Delay before reading the sensor again
}
