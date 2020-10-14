void autotest()  // FUNCION QUE REALIZA EL AUTOTEST INICIAL DEL EQUIPO
{
  Serial.println("Ejecutando autotest");
  lcd.backlight();
  lcd.setCursor(1,0); 
  lcd.print("EJECUTANDO AUTOTEST");
  lcd.setCursor(2,3);
  lcd.createChar(0, avance);
  //lcd.home();
  lcd.setCursor(3,1); 
  lcd.write(0);
 
  lcd.setCursor(1,3); 
  lcd.print("posicion arranque");
  // rutina de verificacion posicion HOME
  barra_avance(3,1,3); //posicion del primer caracter y cuantos caracteres imprime
 
  lcd.setCursor(1,3);
  lcd.print("                    ");  //Borra la linea que muestra el tipo de teset que se ejecuta para que no queden restos
  lcd.setCursor(1,3);
  lcd.print("Test 2");              //muestra el test que se ejecutna en este momento
  //rutina test 2
  barra_avance(5,1,4);
 
  lcd.setCursor(1,3);
  lcd.print("                    ");
  lcd.setCursor(1,3);
  lcd.print("Test 3");
  //rutina test 3
  barra_avance(8,1,4);

  
  lcd.setCursor(1,3);
  lcd.print("                    ");
  lcd.setCursor(1,3);
  lcd.print("Test 4");
  //rutina test 4
  barra_avance(10,1,7);

  
  delay(17000);
  lcd.clear();

}


void barra_avance(int columna, int fila,  int cantidad)  // FUNCION QUE PERMITE ARMARLA BARRA DE AVANCE DEL AUTOTEST
{
  int espera=1600;
  for (int ciclo=0; ciclo < cantidad; ciclo++)
  {
    lcd.setCursor(columna + ciclo,fila);
    delay(espera);
    lcd.write(0);
  }
}
