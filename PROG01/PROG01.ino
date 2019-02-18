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
unsigned long temp = 500;
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
}

//********** Loop *****************************************************************
void loop()
{
 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(e, HIGH);
 digitalWrite(f, HIGH);
 digitalWrite(g, LOW);

 delay(temp);

 digitalWrite(a, LOW);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, LOW);

 delay(temp);

 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, LOW);
 digitalWrite(d, HIGH);
 digitalWrite(e, HIGH);
 digitalWrite(f, LOW);
 digitalWrite(g, HIGH);

 delay(temp);

 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, HIGH);

 delay(temp);

 digitalWrite(a, LOW);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);

 delay(temp);

 digitalWrite(a, HIGH);
 digitalWrite(b, LOW);
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(e, LOW);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);

 delay(temp);

 digitalWrite(a, LOW);
 digitalWrite(b, LOW);
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(e, HIGH);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);

 delay(temp);

 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, LOW);

 delay(temp);

 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(e, HIGH);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);

 delay(temp);

 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);

 delay(temp);
}

//********** Funcions *************************************************************
