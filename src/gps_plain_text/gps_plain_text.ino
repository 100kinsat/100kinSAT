HardwareSerial gps(2);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("start");
  gps.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(gps.available()){
    Serial.write(gps.read());
  }
}
