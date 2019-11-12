int ldrcenter=A1;
int motor1=2;
int motor2=3;
int motor3=4;
int motor4=5; 
void setup() {
  //int  ldrcenter =A2;
  Serial.begin(9600);
 pinMode (A1,INPUT);
 pinMode (2,OUTPUT);
 pinMode (3,OUTPUT);
pinMode (4,OUTPUT);
 pinMode (5,OUTPUT);
 int value1 =analogRead(ldrcenter);
Serial.print(value1);
Serial.print("....................................");

delay(500);

if (value1>500)
 forward();
 
}
void forward() 
{
  digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
     digitalWrite(5,HIGH);
  
}
