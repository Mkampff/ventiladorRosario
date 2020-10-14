void menuInit() {
  //menu text display

  unsigned int i = 0;

 menu[i].code = 0;
 menu[i++].text = "      ";  //salir
 
  
  menu[i].code = 1;
  menu[i++].text = "Resp. por minuto";
    menu[i].code = 11;
    menu[i++].text = "Ciclos:";

  
  menu[i].code = 2;
  menu[i++].text = "T. de Inspiracion";
  
   // menu[i].code = 20;
    //menu[i++].text = "Menu Principal";
    menu[i].code = 21;
    menu[i++].text = "Inspiracion en seg.";
    
  
  menu[i].code = 3;
  menu[i++].text = "Vol a insuflar";
     // menu[i].code = 30;
      //menu[i++].text = "REGRESAR";
      menu[i].code = 31;
      menu[i++].text = "Volumen en ml";

  /*
  menu[i].code = 4;
  menu[i++].text = "LOW PRESSURE SWITCH";
      menu[i].code = 40;
      menu[i++].text = "PREVIOUS MENU";
      menu[i].code = 41;
      menu[i++].text = "ENABLE/DISABLE LOW PRESSURE SWITCH";
     */
 maxMenuItems = i + 1;

}
