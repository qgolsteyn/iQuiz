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
void start() {
  Serial.println("Demarage!");
  for(int p=0; p < maxPin ; p++){
    pinMode(bigbutton[p],INPUT);
    digitalWrite(bigbutton[p],HIGH);
    pinMode(LEDteam[p],OUTPUT);
    pinMode(LEDtruth[p],OUTPUT);
    digitalWrite(LEDtruth[p],LOW);
    pinMode(Buttontruth[p],INPUT);
    digitalWrite(Buttontruth[p],HIGH);
    
  }
  pinMode(reset,OUTPUT);
  pinMode(buzzer,OUTPUT);
}
void musicgood(){
  int melody[] = {
  NOTE_C4, NOTE_G4,};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  8, 8 };

  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 2; thisNote++) {

    // to calculate the note duration, take one second 
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(buzzer, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(buzzer);
  }
}
void musicbad(){
  int melody[] = {
  NOTE_C3};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  2 };

  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 1; thisNote++) {

    // to calculate the note duration, take one second 
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(buzzer, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(buzzer);
  }
}
void musicpress(){

// notes in the melody:
int melody[] = {
  NOTE_C5};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  8 };


  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 1; thisNote++) {

    // to calculate the note duration, take one second 
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(4, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(4);
  }
}
void music(){
  // notes in the melody:
int melody[] = {
  NOTE_C4, NOTE_F4,NOTE_C4, NOTE_F3, NOTE_C4, NOTE_F4, NOTE_C4,NOTE_F3,NOTE_C4,NOTE_F4,NOTE_C4,NOTE_A4,NOTE_G4,NOTE_F4,NOTE_E4,NOTE_D4,NOTE_CS4,NOTE_C4,NOTE_F4,NOTE_C4,NOTE_A3,NOTE_AS3,NOTE_C4,NOTE_F4,NOTE_C4,NOTE_F4,0,NOTE_D4,NOTE_C4,0,NOTE_AS3,NOTE_A3,NOTE_G3,NOTE_F3};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 4, 4, 4,4,4,4,4,4,4,4,2,8,8,8,8,8,4,4,4,8,8,4,4,2,4,8,8,8,8,4,4,4,2 };
  for (int thisNote = 0; thisNote < 11; thisNote++) {

    // to calculate the note duration, take one second 
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(buzzer, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(buzzer);
  }
      for (int thisNote = 11; thisNote < 12; thisNote++) {

    // to calculate the note duration, take one second 
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(buzzer, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration + 0.0012;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(buzzer);
    
  }
    for (int thisNote = 12; thisNote < 34; thisNote++) {

    // to calculate the note duration, take one second 
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(buzzer, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(buzzer);
  }
}
void musicalert(){
  int melody[] = {
  NOTE_C4,NOTE_C4,NOTE_C4,NOTE_C4};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  8, 8,8,8 };

  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 4; thisNote++) {

    // to calculate the note duration, take one second 
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(buzzer, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(buzzer);
  }
}


void musicstart(){
  int melody[] = {
  NOTE_G4};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  8 };

  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 1; thisNote++) {

    // to calculate the note duration, take one second 
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(buzzer, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(buzzer);
  }
}
void function1(){
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
void serial(){
  int inByte=0;
  if(Serial.available() > 0)
	{
		//read a single byte.
		inByte = Serial.read();

		//Calling Serial.read() remove the byte from the Serial
		//buffer. In this case, if there are multiple bytes that
		//were sent, the next one will be handled on the next loop.
		//You could also grab it by calling Serial.read() again

		//check if the incoming byte was a command to toggle
		//the state of the LED blinking
		if(inByte == 'a')
		{
                  function1();
}
else if(inByte == 'b'){
  oneplayer();
}
else if(inByte == 'c'){
  wait();
}
}}
  




        	
