#define LED 16

void setup() {
  // LEDに接続したピンを「出力（OUTPUT）」に設定
  pinMode(LED, OUTPUT);
}

void loop() {
  // LEDを点灯
  digitalWrite(LED, HIGH);
  delay(500);
  // LEDを消灯
  digitalWrite(LED, LOW);
  delay(500);
}
