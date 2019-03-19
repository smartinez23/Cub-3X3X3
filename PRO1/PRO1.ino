/**********************************************************************************
**                                                                               **
**                              Cub 3X3X3                                        **
**                                                                               **
**  Sergio Martínez                                             18/03/2019       **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int columna1 = 2;          // donar nom al pin 5 de l’Arduino
const int columna2 = 3;          // donar nom al pin 6 de l’Arduino
const int columna3 = 4;          // donar nom al pin 7 de l’Arduino
const int columna4 = 5;          // donar nom al pin 8 de l’Arduino
const int columna5 = 6;          // donar nom al pin 9 de l’Arduino
const int columna6 = 7;         // donar nom al pin 10 de l’Arduino
const int columna7 = 8;         // donar nom al pin 11 de l’Arduino
const int columna8 = 9;         // donar nom al pin 12 de l’Arduino
const int columna9 = 10;
const int transistor1 = 11;
const int transistor2 = 12;
const int transistor3 = 13;
const int t = 500;
//********** Setup ****************************************************************
void setup()
{
  pinMode(columna1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(columna2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(columna3, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(columna4, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(columna5, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(columna6, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(columna7, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(columna8, OUTPUT);     // definir el pin 12 com una sortida
  pinMode(columna9, OUTPUT); 
  pinMode(transistor1, OUTPUT); 
  pinMode(transistor2, OUTPUT); 
  pinMode(transistor3, OUTPUT); 
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(columna1, HIGH);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, HIGH);
  digitalWrite(transistor2, LOW);
  digitalWrite(transistor3, LOW);
  
  delay(t);                  // es queden leds 500ms encesos
  
  digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, HIGH);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, HIGH);
  digitalWrite(transistor2, LOW);
  digitalWrite(transistor3, LOW);

  delay(t);    

  digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, HIGH);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, HIGH);
  digitalWrite(transistor2, LOW);
  digitalWrite(transistor3, LOW);

  delay(t);   
  
  digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, HIGH);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, HIGH);
  digitalWrite(transistor2, LOW);
  digitalWrite(transistor3, LOW);

  delay(t);   

  digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, HIGH);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, HIGH);
  digitalWrite(transistor2, LOW);
  digitalWrite(transistor3, LOW);

  delay(t);   

  digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, HIGH);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, HIGH);
  digitalWrite(transistor2, LOW);
  digitalWrite(transistor3, LOW);

  delay(t);   

    digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, HIGH);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, HIGH);
  digitalWrite(transistor2, LOW);
  digitalWrite(transistor3, LOW);

  delay(t);   

    digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, HIGH);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, HIGH);
  digitalWrite(transistor2, LOW);
  digitalWrite(transistor3, LOW);

  delay(t);   

  digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, HIGH);
  digitalWrite(transistor1, HIGH);
  digitalWrite(transistor2, LOW);
  digitalWrite(transistor3, LOW);

  delay(t);   

  digitalWrite(columna1, HIGH);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, LOW);
  digitalWrite(transistor2, HIGH);
  digitalWrite(transistor3, LOW);

  delay(t);   

    digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, HIGH);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, LOW);
  digitalWrite(transistor2, HIGH);
  digitalWrite(transistor3, LOW);

  delay(t);   

    digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, HIGH);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, LOW);
  digitalWrite(transistor2, HIGH);
  digitalWrite(transistor3, LOW);

  delay(t);   

    digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, HIGH);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, LOW);
  digitalWrite(transistor2, HIGH);
  digitalWrite(transistor3, LOW);

  delay(t);   

    digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, HIGH);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, LOW);
  digitalWrite(transistor2, HIGH);
  digitalWrite(transistor3, LOW);

  delay(t);   

  digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, HIGH);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, LOW);
  digitalWrite(transistor2, HIGH);
  digitalWrite(transistor3, LOW);

  delay(t);   

 digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, HIGH);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, LOW);
  digitalWrite(transistor2, HIGH);
  digitalWrite(transistor3, LOW);

  delay(t);   

    digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, HIGH);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, LOW);
  digitalWrite(transistor2, HIGH);
  digitalWrite(transistor3, LOW);

  delay(t);   

  digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, HIGH);
  digitalWrite(transistor1, LOW);
  digitalWrite(transistor2, HIGH);
  digitalWrite(transistor3, LOW);

  delay(t);   

  digitalWrite(columna1, HIGH);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, LOW);
  digitalWrite(transistor2, LOW);
  digitalWrite(transistor3, HIGH);

  delay(t);   

  digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, HIGH);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, LOW);
  digitalWrite(transistor2, LOW);
  digitalWrite(transistor3, HIGH);

  delay(t);   

  digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, HIGH);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, LOW);
  digitalWrite(transistor2, LOW);
  digitalWrite(transistor3, HIGH);

  delay(t);   

  digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, HIGH);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, LOW);
  digitalWrite(transistor2, LOW);
  digitalWrite(transistor3, HIGH);

  delay(t);   

  digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, HIGH);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, LOW);
  digitalWrite(transistor2, LOW);
  digitalWrite(transistor3, HIGH);

  delay(t);   

  digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, HIGH);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, LOW);
  digitalWrite(transistor2, LOW);
  digitalWrite(transistor3, HIGH);

  delay(t);   

  digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, HIGH);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, LOW);
  digitalWrite(transistor2, LOW);
  digitalWrite(transistor3, HIGH);

  delay(t);   

  digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, HIGH);    // posar a 5V el pin 12
  digitalWrite(columna9, LOW);
  digitalWrite(transistor1, LOW);
  digitalWrite(transistor2, LOW);
  digitalWrite(transistor3, HIGH);

  delay(t);   

  digitalWrite(columna1, LOW);    // posar a 5V el pin 5
  digitalWrite(columna2, LOW);    // posar a 5V el pin 6
  digitalWrite(columna3, LOW);    // posar a 5V el pin 7
  digitalWrite(columna4, LOW);    // posar a 5V el pin 8
  digitalWrite(columna5, LOW);    // posar a 5V el pin 9
  digitalWrite(columna6, LOW);    // posar a 5V el pin 10
  digitalWrite(columna7, LOW);    // posar a 5V el pin 11
  digitalWrite(columna8, LOW);    // posar a 5V el pin 12
  digitalWrite(columna9, HIGH);
  digitalWrite(transistor1, LOW);
  digitalWrite(transistor2, LOW);
  digitalWrite(transistor3, HIGH);

  delay(t);   
  
}

//********** Funcions *************************************************************
