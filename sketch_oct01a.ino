
//--------------
const int led = 2;
const int sw = 3;
//int etatsw;
//--------------
void setup() {
  // put your setup code here, to run once:
  pinMode (led , OUTPUT);
  pinMode (sw , INPUT);
 // digitalWrite(led,LOW);
//  etatsw = HIGH;
}
//--------------
void loop() {
  // put your main code here, to run repeatedly:
  //etatsw = digitalRead(sw);
   if( digitalRead(sw) == 1){
    digitalWrite (led , HIGH);
   // delay(1000);
   }
    else {
    digitalWrite (led , LOW);
   // delay(1000);
   }

   
}
//---------------
