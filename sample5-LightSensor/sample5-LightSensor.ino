const int sensor = 0; // センサを接続するpinを番ピンに指定
int val; //センサ用変数

void setup() {
Serial.begin(9600); //シリアル通信のデータ転送レートを9600bpsで指定
}

void loop(){
val = analogRead(0); //A0ピンの値を読み取り
Serial.print(val); //読み取り値を表示
delay(100); //100m秒（0.1秒)ごとに表示させるための遅延
}
