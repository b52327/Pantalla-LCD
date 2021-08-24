#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

//Creación de la carita feliz, el "1" enciende el pixel y el "0" lo apaga
byte caritafeliz[8] ={
  0b00000,
  0b11011,
  0b11011,
  0b00000,
  0b10001,
  0b10001,
  0b10001,
  0b01110
  };

void setup() {
 lcd.begin(16, 2);
 
//Creación de los caractéres
 lcd.createChar(1,caritafeliz);
}

void loop() {

//En este "for" se realiza una repetición del código interno (aunque no es necesario si no se programara más en adelante)
for( int e=0; e<15; e++){
  lcd.setCursor(0,0);
  lcd.autoscroll();
  lcd.print("TCU");
  delay(500);
  }
  
//Se desactiva el autoscroll
lcd.noAutoscroll();

lcd.clear();


lcd.print("1/2/3/4");
delay(2000);
lcd.clear();

//De izquierda a derecha se coloca el cursor 6 espacios a la derecha
lcd.setCursor(6,0);

//Se escribe de derecha a izquierda desde la posición determinada anteriormente
lcd.rightToLeft();
lcd.print("1/2/3/4");
delay(2000);
lcd.clear();

//Se vuelve a colocar el cursor en el origen
lcd.setCursor(0,0);
lcd.print("Carita Feliz");

//Este "for" escribe las caritas felices hasta que el contados "i=0" llegue a un valor de "i=15"
for( int i=0; i<15; i++){
  lcd.setCursor(i,1);
  lcd.write(1);
  delay(500);
  }

lcd.clear();
lcd.setCursor(1,0);
lcd.print("Fin del Ejemplo");
delay(2000);
lcd.setCursor(1,1);
lcd.print("Muchas Gracias");
delay(2000);
lcd.clear();
lcd.noDisplay();


}
