// Define pin name and number

//motor
const int PWMAPin = 6;
const int AIN2Pin = 7;
const int AIN1Pin = 8;
const int STBYPin = 9; 
const int PWMBPin = 10;
const int BIN2Pin = 11;
const int BIN1Pin = 12;

//sensor
const int sensor = 0; // センサを接続するpinを番ピンに指定

//センサ用変数
int val;


void setup() {
  pinMode(AIN2Pin, OUTPUT);
  pinMode(AIN1Pin, OUTPUT);
  pinMode(STBYPin, OUTPUT);
  digitalWrite(STBYPin, HIGH);
  Serial.begin(9600); //シリアル通信のデータ転送レートを9600bpsで指定
}

void loop() {
  val = analogRead(0); //A0ピンの値を読み取り

  if (val > 500) {
    analogWrite(PWMAPin, 127); // PWM is 0 to 255 (8bit)
    analogWrite(PWMBPin, 127); // PWM is 0 to 255 (8bit)
    digitalWrite(AIN1Pin, HIGH);
    digitalWrite(AIN2Pin, LOW);
    digitalWrite(BIN1Pin, HIGH);
    digitalWrite(BIN2Pin, LOW);
  } else {
    analogWrite(PWMAPin, 0); // PWM is 0 to 255 (8bit)
    analogWrite(PWMBPin, 0); // PWM is 0 to 255 (8bit)
  }

  Serial.println(val); //読み取り値を表示
  delay(100); //100m秒（0.1秒)ごとに表示させるための遅延
}
