int sensor = 0;       //Pino analógico em que o sensor está conectado.
int valorSensor = 0;  //variável usada para ler o valor do sensor em tempo real.

#define RED0 3        //Definindo o pino do led vermelho
#define GREEN0 5      //Definindo o pino do led verde
#define BLUE0 6       //Definindo o pino do led azul

//Função setup, executado uma vez ao ligar o Arduino.
void setup(){
  //Ativando o serial monitor que exibirá os valores lidos no sensor.
  Serial.begin(9600);
  
  pinMode(RED0, OUTPUT);
  pinMode(GREEN0, OUTPUT);
  pinMode(BLUE0, OUTPUT);
  
}

//Função loop, executado enquanto o Arduino estiver ligado.
void loop(){
  
  //Lendo o valor do sensor.
  int valorSensor = analogRead(sensor);
 

if (valorSensor >= 1022 && valorSensor <= 1023) {

    analogWrite(RED0, 255);        
    analogWrite(GREEN0, 255);    
    analogWrite(BLUE0, 255);
  }

else if (valorSensor >= 950 && valorSensor <= 1021) {

    analogWrite(RED0, 229);        
    analogWrite(GREEN0, 57);    
    analogWrite(BLUE0, 253);
  }

else if (valorSensor >= 800 && valorSensor <= 949) {

    analogWrite(RED0, 216);        
    analogWrite(GREEN0, 27);    
    analogWrite(BLUE0, 96);
  }

else if (valorSensor >= 700 && valorSensor <= 799) {

    analogWrite(RED0, 94);        
    analogWrite(GREEN0, 53);    
    analogWrite(BLUE0, 177);
  }

else if (valorSensor >= 500 && valorSensor <= 699) {

    analogWrite(RED0, 30);        
    analogWrite(GREEN0, 136);    
    analogWrite(BLUE0, 229);
  }

else if (valorSensor >= 300 && valorSensor <= 499) {

    analogWrite(RED0, 67);        
    analogWrite(GREEN0, 160);    
    analogWrite(BLUE0, 71);
  }

else if (valorSensor >= 100 && valorSensor <= 299) {

    analogWrite(RED0, 192);        
    analogWrite(GREEN0, 202);    
    analogWrite(BLUE0, 51);
  }

else if (valorSensor >= 80 && valorSensor <= 99) {

    analogWrite(RED0, 253);        
    analogWrite(GREEN0, 216);    
    analogWrite(BLUE0, 53);
  }

else if (valorSensor >= 60 && valorSensor <= 79) {

    analogWrite(RED0, 251);        
    analogWrite(GREEN0, 140);    
    analogWrite(BLUE0, 0);
  }

else if (valorSensor >= 50 && valorSensor <= 59) {

    analogWrite(RED0, 244);        
    analogWrite(GREEN0, 81);    
    analogWrite(BLUE0, 30);
  }

else if (valorSensor >= 30 && valorSensor <= 49) {

    analogWrite(RED0, 255);        
    analogWrite(GREEN0, 0);    
    analogWrite(BLUE0, 255);
  }

else if (valorSensor >= 20 && valorSensor <= 29) {

    analogWrite(RED0, 198);        
    analogWrite(GREEN0, 255);    
    analogWrite(BLUE0, 255);
  }

else if (valorSensor >= 10 && valorSensor <= 19) {

    analogWrite(RED0, 198);        
    analogWrite(GREEN0, 255);    
    analogWrite(BLUE0, 255);
  }

else if (valorSensor >= 6 && valorSensor <= 9) {

    analogWrite(RED0, 48);        
    analogWrite(GREEN0, 79);    
    analogWrite(BLUE0, 254);
  }

else if (valorSensor >= 0 && valorSensor <= 5) {

    analogWrite(RED0, 255);        
    analogWrite(GREEN0, 23);    
    analogWrite(BLUE0, 68);
  }


else {

    analogWrite(RED0, 0);
    analogWrite(GREEN0, 0);
    analogWrite(BLUE0, 0);   
  }
  
  
  //Exibindo o valor do sensor no serial monitor.
  Serial.println(valorSensor);
  delay(50); 

}
