int sensor = 0; //読み取り値の変数設定

void setup() {
Serial.begin(9600); //シリアル通信のデータ転送レートを9600bpsで指定
}

void loop(){
val = analogRead(0); //A0ピンの値を読み取り

Serial.print(val); //読み取り値を表示
delay(100); //100m秒（0.1秒)ごとに表示させるための遅延
}
