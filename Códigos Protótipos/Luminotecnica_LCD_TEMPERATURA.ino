//LCD
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

//TEMPERATURA
const int LM35 = 0;  // Entrada A0 analógica
float temperatura = 0; // Variável para temperatura
int ADClido = 0; //conversor analógico-digital

//LED RGB
#define RED0 6 //Definindo o pino do led vermelho
#define GREEN0 9 //Definindo o pino do led verde
#define BLUE0 10 //Definindo o pino do led azul


void setup() {
  
  Serial.begin( 9600 ); // Porta serial
  analogReference(INTERNAL); //Função para diminuir a tensão de referência das portas analógicas
  
  lcd.begin(16, 2); //Tamanho do LCD
  lcd.setCursor(0,0); //Cursor do LCD
  lcd.print("Temperatura:"); //Mensagem em tela

  pinMode(RED0, OUTPUT); //Inicializando o LED Vermelho
  pinMode(GREEN0, OUTPUT); //Inicializando o LED Verde
  pinMode(BLUE0, OUTPUT); //Inicializando o LED Azul
  
}


void loop() {
  ADClido = analogRead(LM35);
  temperatura = ADClido * 0.1075268817204301;
  lcd.setCursor(0,1);
  lcd.print(temperatura);
  delay(1000); 


 if (temperatura > 32.01) {
    Serial.println(temperatura);
    lcd.print("FODEUUU");
    analogWrite(RED0, 255);   
    analogWrite(GREEN0, 0);
    analogWrite(BLUE0, 0);

  }


  else if (temperatura > 27.01 and temperatura  < 32.00) {
    Serial.println(temperatura);
    
    analogWrite(RED0, 255);        
    analogWrite(GREEN0, 51);    
    analogWrite(BLUE0, 51);

  }

  else if (temperatura > 26.01 and temperatura  < 27.00) {
    Serial.println(temperatura);
    
    analogWrite(RED0, 153);        
    analogWrite(GREEN0, 0);    
    analogWrite(BLUE0, 255);

  }

  else if (temperatura > 25.00 and temperatura  < 26.00) {
    Serial.println(temperatura);
    
    analogWrite(RED0, 153);        
    analogWrite(GREEN0, 0);    
    analogWrite(BLUE0, 255);

  }

  else if (temperatura > 24.51 and temperatura  < 24.99) {
    Serial.println(temperatura);
    
    analogWrite(RED0, 255);        
    analogWrite(GREEN0, 0);    
    analogWrite(BLUE0, 102);

  }

  else if (temperatura > 24.02 and temperatura  < 24.50) {
    Serial.println(temperatura);
    
    analogWrite(RED0, 255);        
    analogWrite(GREEN0, 0);    
    analogWrite(BLUE0, 102);

  }

  else if (temperatura > 23.51 and temperatura  < 24.00) {
    Serial.println(temperatura);
    
    analogWrite(RED0, 204);        
    analogWrite(GREEN0, 153);    
    analogWrite(BLUE0, 51);

  }

  else if (temperatura > 23.11 and temperatura  < 23.50) {
    Serial.println(temperatura);
    
    analogWrite(RED0, 204);        
    analogWrite(GREEN0, 153);    
    analogWrite(BLUE0, 0);

  }

  else if (temperatura > 23.00 and temperatura  < 23.10) {
    Serial.println(temperatura);
    
    analogWrite(RED0, 51);        
    analogWrite(GREEN0, 255);    
    analogWrite(BLUE0, 102);

  }

  else if (temperatura > 22.00 and temperatura  < 22.99) {
    Serial.println(temperatura);
    
    analogWrite(RED0, 0);        
    analogWrite(GREEN0, 0);    
    analogWrite(BLUE0, 255);

  }

  else if (temperatura > 16.50 and temperatura  < 21.99) {
    Serial.println(temperatura);
    
    analogWrite(RED0, 0);        
    analogWrite(GREEN0, 255);    
    analogWrite(BLUE0, 255);

  }

  else if (temperatura > 10.00 and temperatura  < 16.49) {
    Serial.println(temperatura);
    
    analogWrite(RED0, 255);        
    analogWrite(GREEN0, 255);    
    analogWrite(BLUE0, 255);

  }

  else {
    Serial.println(temperatura);
    analogWrite(BLUE0, 0);
    analogWrite(GREEN0, 0);
    analogWrite(RED0, 0);

  }







  
}
