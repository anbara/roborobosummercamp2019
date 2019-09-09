const int trigPin = 10; //トリガーピンを10番ピンに指定
const int echoPin = 11; //エコーピンを11番ピンに指定

long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT); //トリガピンをアウトプットに指定 Sets the trigPin as an Output
pinMode(echoPin, INPUT); //エコーピンをインプットに指定 Sets the echoPin as an Input
Serial.begin(9600); //シリアル Starts the serial communication
}

void loop() {
// トリガピンをLOWにする　Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
//トリガピンを10マイクロ秒HIGHにする Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
//エコーピンのパルス幅の測定 Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
//距離の計算 Calculating the distance
distance= duration*0.034/2;
//シリアルモニタに距離の表示 Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
}
