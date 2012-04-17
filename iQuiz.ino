

//  This file is part of iQuiz.
//
//  iQuiz is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  iQuiz is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with iQuiz.  If not, see <http://www.gnu.org/licenses/>.


# include "pitches.h"
#include <AikoEvents.h>
using namespace Aiko;

void serial();
void function1();

int bigbutton[] = {A1,A0,};
int LEDteam[2] = {A2,A3};
int LEDtruth[2] = {8,7};
int buzzer = 4;
int Buttontruth[2] = {2,3};
int reset = 3;
int maxPin = 2;

void oneplayer(){
  Serial.println("La fonction 2 a commence!");
  int var3=HIGH;
  int var4=HIGH;
  int x=0;
  do{
    delayMicroseconds(16383);
    x++;
  }
  while(x<25);
  musicalert();
  Serial.println("Choisissez equipe!");
  do{
  var3 = digitalRead(Buttontruth[0]);
  var4 = digitalRead(Buttontruth[1]);
} while (var3 == HIGH && var4 ==HIGH);

if(var3==LOW){
  Serial.println("Equipe A");
      digitalWrite(LEDteam[0],HIGH);
        x=0;
    do{
    delayMicroseconds(16383);
    x++;
  }
  while(x<50);
  for(;;){
    digitalWrite(LEDteam[0],HIGH);
    Serial.println("En attente d'un bouton!");
    do{
  var3 = digitalRead(Buttontruth[0]);
  var4 = digitalRead(Buttontruth[1]);
} while (var3 == HIGH && var4 ==HIGH);
if(var3==LOW){
  Serial.println("Correct!");
    digitalWrite(LEDteam[0],LOW);
  digitalWrite(LEDtruth[0],HIGH);
  musicgood();
    delay(1000);
  digitalWrite(LEDtruth[0],LOW);
  digitalWrite(LEDteam[0],HIGH);
}
 else if(var4==LOW){
   Serial.println("Faux!");
  digitalWrite(LEDteam[0],LOW);
  digitalWrite(LEDtruth[1],HIGH);
  musicbad();
 delay(1000);
  digitalWrite(LEDtruth[1],LOW);
  digitalWrite(LEDteam[0],HIGH);
}
  }
}
else if(var4==LOW){
  Serial.println("Equipe B");
 digitalWrite(LEDteam[1],HIGH);    
  x=0;
    do{
    delayMicroseconds(16383);
    x++;
  }
  while(x<50);
  for(;;){
    digitalWrite(LEDteam[1],HIGH);
    Serial.println("En attente d'un bouton!");
    do{
  var3 = digitalRead(Buttontruth[0]);
  var4 = digitalRead(Buttontruth[1]);
} while (var3 == HIGH && var4 ==HIGH);
if(var3==LOW){
  Serial.println("Correct!");
    digitalWrite(LEDteam[1],LOW);
  digitalWrite(LEDtruth[0],HIGH);
  musicgood();
delay(1000);
  digitalWrite(LEDtruth[0],LOW);
  digitalWrite(LEDteam[1],HIGH);
}
 else if(var4==LOW){
   Serial.println("Faux!");
  digitalWrite(LEDteam[1],LOW);
  digitalWrite(LEDtruth[1],HIGH);
  musicbad();
delay(1000);
  digitalWrite(LEDtruth[1],LOW);
  digitalWrite(LEDteam[1],HIGH);
}
  }
}
}
void wait(){
  Serial.println("La fonction 3 a commence!");
  int var1=HIGH;
  int x=0;
  digitalWrite(LEDteam[0],HIGH);
  digitalWrite(LEDteam[1],HIGH);
  musicalert();
do{
}
while(x==0);
}
  
  void setup() {
  Serial.begin(9600);
  Events.addHandler (serial, 100);

start();
musicstart();
}

void loop() {
  Events.loop();
function1();
}




