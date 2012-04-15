
# include "pitches.h"

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

start();
musicstart();
}

void loop() {
  Serial.println("Debut de la manche!");
  int var1=HIGH;
  int var2=HIGH;
  int var3=HIGH;
  int var4=HIGH;
  int repeat=0;
  int x=NULL;
  Serial.println("En attente d'un bouton!");
do{
  var1 = digitalRead(bigbutton[0]);
  var2 = digitalRead(bigbutton[1]);
  var3 = digitalRead(Buttontruth[0]);
  var4 = digitalRead(Buttontruth[1]);
} while (var1 == HIGH && var2 ==HIGH && var4==HIGH && var3==HIGH);

if(var3==LOW){
  Serial.println("Bouton vert detecte!");
  wait();
}
else if(var4==LOW){
  Serial.println("Bouton rouge detecte!");
  oneplayer();
}


else if(var1==LOW){
  Serial.println("Bouton de l'equipe A detecte!");
  x=0;
  digitalWrite(LEDteam[0],HIGH);
musicpress();
}
else if(var2==LOW){
  Serial.println("Bouton de l'equipe B detecte!");
  x=1;
  digitalWrite(LEDteam[1],HIGH);
  musicpress();
}
test:;
Serial.println("En attente d'un bouton!");
do{
  var3 = digitalRead(Buttontruth[0]);
  var4 = digitalRead(Buttontruth[1]);
} while (var3 == HIGH && var4 ==HIGH);

if(var3==LOW){
  Serial.println("Correct!");
    digitalWrite(LEDteam[x],LOW);
  digitalWrite(LEDtruth[0],HIGH);
  musicgood();
delay(3000);

  digitalWrite(LEDtruth[0],LOW);
}
 else if(var4==LOW){
Serial.println("Faux!");
  digitalWrite(LEDteam[x],LOW);
  digitalWrite(LEDtruth[1],HIGH);
  musicbad();
delay(3000);
  digitalWrite(LEDtruth[1],LOW);
  if (repeat==0){
  if(x==0){
    x=1;
    Serial.println("Au tour de l'equipe B!");
  }
  else if(x==1){
    x=0;
    Serial.println("Au tour de l'equipe A!");
  }
  digitalWrite(LEDteam[x],HIGH);
  repeat=1;
  goto test;
 
}
  }
}




