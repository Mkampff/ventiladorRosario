void menuAction(unsigned int menuCode) {
 //gets called when rotary encoder is clicked,
  //check the current location inside the menu,
  //execute approriate actions
  //returns true if some action is executed
  //returns false if nothing is done
 Serial.print("menuAction called with menuCode = ");
 Serial.println(menuCode);

  
      switch (menuCode) {

        case 11:  //FRECUENCIA RESPIRATORIA

        if (subMenuActive != 3) {  //initialize the subMenu3
          lcd.clear();
          subMenuActive = 3;
          subMenuPos = 0;
          subMenuClick = 0;
          Serial.print("ejecutando subMenu3Update");
          subMenu3Update(0); //calls subMenu3Update with 0 (no action)
          
        } else if (subMenuActive == 3) {  //already initialized
          
          subMenuActive = 0;  //deactivate submenu, activate main menu
          lcd.clear();
          menuPos = 1;
          updateMenuDisplay(menuPos);
          //code to set time variables
        }
        
        break;
        
        case 21: //  TIEMPO DE INSPIRACION
          if (subMenuActive != 2) {  //initialize the subMenu1       subMenuActive  en 2 implica que llama a subMenu2Update que permite parametrizar TIEMPO DE INSPIRACION
          lcd.clear();
          subMenuActive = 2;
          subMenuPos = 0;
          subMenuClick = 0;
          Serial.print("ejecutando subMenu2Update");
          subMenu2Update(0); //calls subMenu3Update with 0 (no action)
          
          } else if (subMenuActive == 2) {  //already initialized
          
          subMenuActive = 0;  //deactivate submenu, activate main menu
          lcd.clear();
          menuPos = 1;
          updateMenuDisplay(menuPos);
          }
          break;


        case 31: //  VOLUMEN A INSUFLAR
          if (subMenuActive != 1) {    //if subMenu2 is not active, activate it
            
            lcd.clear();       
            subMenuActive = 1;  //activate subMenu2
            subMenuPos = 0;     //sub menu initialization, set it to current setting
            subMenuClick = 0;
            subMenu2Update(0);  //calls subMenu2Update with zero (no action)
 

          } else if (subMenuActive == 1) {    //if subMenu2 is already active, execute action from sub menu2
            
            subMenuActive = 0;  //activate main menus
            lcd.clear();
            lcd.setCursor(0,0);    
            menuPos = 1; //next menu position;
            updateMenuDisplay(menuPos);
          }

          break;

/*
        case 41: //master reset
          
          if (subMenuActive != 2) {    //if subMenu2 is not active, activate it
            
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print("RESET ALL ERRORS?");
            
            subMenuActive = 2;  //activate subMenu2
            subMenuPos = 1;     //sub menu initialization, set it to current setting
            subMenuClick = 0;
            subMenu2Update(0);  //calls subMenu2Update with zero (no action)
    

          } else if (subMenuActive == 2) {    //if subMenu2 is already active, execute action from sub menu2
            
            subMenuActive = 0;  //activate main menus
            //set daily target variable to subMenuPos;

            lcd.clear();
            lcd.setCursor(0,0);
            if (subMenuPos == 1) {
              lcd.print("RESET COMPLETED");
              
            } else {
              
            }
            
            menuPos = 7; //next menu position;
            
            delay(1000);
            updateMenuDisplay(menuPos);
            
          }
*/
          break;

        default:
          Serial.print("Main menu case not found: ");
          Serial.println(menuCode);

          break;
      }
}
