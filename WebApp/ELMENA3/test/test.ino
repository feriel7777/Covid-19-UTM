void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);Serial.begin(9600);
}

void loop() {

int  b=digitalRead(2);
int a=digitalRead(4);
int  c=digitalRead(7);
Serial.print(a); Serial.print(b);Serial.print(c);Serial.println();

}
