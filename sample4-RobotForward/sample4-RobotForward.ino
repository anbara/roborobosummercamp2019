// Define pin name and number
const int PWMAPin = 6;
const int AIN2Pin = 7;
const int AIN1Pin = 8;

const int PWMBPin = 10;
const int BIN2Pin = 11;
const int BIN1Pin = 12;

const int STBYPin = 9; 

// 最初の1回だけ実行される関数
// the setup function runs once when you press reset or power the board
void setup() {
  // Pin setting : output mode (output or input or inputpullup)
  pinMode(AIN2Pin, OUTPUT);
  pinMode(AIN1Pin, OUTPUT);
  pinMode(STBYPin, OUTPUT);

  analogWrite(PWMAPin, 127); // PWM is 0 to 255 (8bit)
  analogWrite(PWMBPin, 127); // PWM is 0 to 255 (8bit)

  digitalWrite(STBYPin, HIGH);

  digitalWrite(AIN1Pin, HIGH);
  digitalWrite(AIN2Pin, LOW);
  digitalWrite(BIN1Pin, HIGH);
  digitalWrite(BIN2Pin, LOW);
}

// 無限にループする関数
// the loop function runs over and over again forever
void loop() {
  
}
