
int ciclos=0;  //promediamos 50 mediciones ciclos es la variable del for
int sensorValue =0;    //lectura del A/D
int presion=0;    //conversion a presion con funcion map
int offset=47;     // calculo del offset a presión atmosferica ambos picos


void setup() {
// initialize serial communication at 9600 bits per second:
Serial.begin(9600);
}


void loop() {
// read the input on analog pin 0:
for( ciclos=0;ciclos<50;ciclos++)
  {
  sensorValue = sensorValue + analogRead(A0);
  delay(1);
  }
  sensorValue=sensorValue/50 - offset;
  presion=map(sensorValue,0,1023,0,10000);
  
// print out the value you read:
Serial.println(presion);
delay(100);// delay in between reads for stability
}
