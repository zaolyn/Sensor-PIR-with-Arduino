int pinPIR = 2;     //pin Out PIR 
int pinRELAY = 4;   //pin IN relay
int statusPIR = 0;  //variabel untuk menampung status sensor

void setup(){
  
pinMode(pinPIR, INPUT);     //pengaturan pin PIR sebagai input
pinMode(pinRELAY, OUTPUT);  //pengaturan pin relay sebagai output
Serial.begin(9600);         //pengaturan baud rate untuk komunikasi serial sebesar 9600bps
}
void loop(){

statusPIR = digitalRead(pinPIR);
if (statusPIR ==HIGH) {            //jika sensor membaca gerakan maka relay akan aktif

digitalWrite(pinRELAY, HIGH);
Serial.println("ADA GERAKAN DELAY 10 DETIK");
delay(10000); //Diberikan waktu tunda 10 detik
}
else {
digitalWrite(pinRELAY, LOW);       //jika sensor tidak membaca gerakan maka relay akan off
Serial.println("TIDAK ADA GERAKAN");
}
}
