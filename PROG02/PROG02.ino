/**********************************************************************************
**                                                                               **
**                             DISPLAY DE 7 SEGMENTS                             **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int a = 5;          // donar nom al pin 5 de l’Arduino
const int b = 6;          // donar nom al pin 6 de l’Arduino
const int c = 7;          // donar nom al pin 7 de l’Arduino
const int d = 8;          // donar nom al pin 8 de l’Arduino
const int e = 9;          // donar nom al pin 9 de l’Arduino
const int f = 10;         // donar nom al pin 10 de l’Arduino
const int g = 11;
const int buttonPin = 2;
const int ledPin = 13;
unsigned long temp = 500;
int buttonState = 0;
int num = 0;
//********** Setup ****************************************************************
void setup()
{
  pinMode(a, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(b, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(c, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(d, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(e, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(f, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(g, OUTPUT);
  pinMode(buttonPin, INPUT);
}

//********** Loop *****************************************************************
void loop()
{
 buttonState = digitalRead(buttonPin);
 if(digitalRead(buttonState)==1)
 {
  buttonState=!buttonState;
 }
 switch(num)
 {
 case 0:
 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(e, HIGH);
 digitalWrite(f, HIGH);
 digitalWrite(g, LOW);

 delay(temp);
 break;
 
 case 1:
 digitalWrite(a, LOW);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, LOW);

 delay(temp);
 break;

 case 2:
 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, LOW);
 digitalWrite(d, HIGH);
 digitalWrite(e, HIGH);
 digitalWrite(f, LOW);
 digitalWrite(g, HIGH);

 delay(temp);
 break;

 case 3:
 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, HIGH);

 delay(temp);
 break;

 case 4:
 digitalWrite(a, LOW);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);

 delay(temp);
 break;

 case 5:
 digitalWrite(a, HIGH);
 digitalWrite(b, LOW);
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(e, LOW);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);

 delay(temp);
 break;

 case 6:
 digitalWrite(a, LOW);
 digitalWrite(b, LOW);
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(e, HIGH);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);

 delay(temp);
 break;

 case 7:
 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, LOW);

 delay(temp);
 break;

 case 8:
 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(e, HIGH);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);

 delay(temp);
 break;

 case 9:
 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);

 delay(temp);
 break;
 
 default:
 digitalWrite(a, LOW);
 digitalWrite(b, LOW);
 digitalWrite(c, LOW);
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, LOW);

 delay(temp);
 }
 if(buttonState==1)
 {
  num++;
 }
 if(num==10)
 {
  num=0;
  }
 }


//********** Funcions *************************************************************
