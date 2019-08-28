// LEDを接続するpinを2番ピンに指定
const int ledPin 2 

// 最初の1回だけ実行される関数
// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(ledPin, OUTPUT);
}

// 無限にループする関数
// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second (1000ms = 1s)
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second (1000ms = 1s)
}
