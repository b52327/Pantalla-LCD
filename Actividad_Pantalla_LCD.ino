#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  
//Coloca cursor en la parte superior
lcd.setCursor(4,0);

//Escribe el texto deseado
lcd.print("TCU UCR");

//Retraso de 2 segundos antes de efecutar el lcd.clear();
delay(2000);

//Limpia lo que se muestra en la pantalla
lcd.clear();

//Coloca cursor en la parte inferior
lcd.setCursor(4,1);

lcd.print("TCU UCR");
delay(1000);

//No muestra nada en la pantalla pero retiene texto
lcd.noDisplay();
delay(1000);

//Muestra el texto retenido
lcd.display();
delay(1000);

lcd.noDisplay();
delay(1000);

lcd.display();
delay(1000);

//Limpia el texto en la pantalla
lcd.clear();
delay(1000);

//Muestra el cursor "_" estático
lcd.cursor();
delay(2000);

//Muestra en cursor de 5x8 pixeles parpadeando
lcd.blink();
delay(3000);

//Oculta el cursor de 5x8 pixeles 
lcd.noBlink();
delay(3000);

//Oculta el cursor "_"
lcd.noCursor();
lcd.clear();

}
