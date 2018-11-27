#define RED0 3 //Definindo o pino do led vermelho
#define GREEN0 5 //Definindo o pino do led verde
#define BLUE0 6 //Definindo o pino do led azul

#define RED1 11  //Definindo o pino do led vermelho
#define GREEN1 10 //Definindo o pino do led verde
#define BLUE1 9 //Definindo o pino do led azul

int sensorPin = A0; // Conectar o sensor som na porta analógica 2
int val = 0; // variable to store the value coming from the sensor

void setup() {

  pinMode(sensorPin, INPUT);
  pinMode(RED0, OUTPUT);
  pinMode(GREEN0, OUTPUT);
  pinMode(BLUE0, OUTPUT);
  pinMode(RED1, OUTPUT);
  pinMode(GREEN1, OUTPUT);
  pinMode(BLUE1, OUTPUT);
  Serial.begin(9600); //  inicializa a comunicação serial com computador
}
void loop() {

  val = analogRead(sensorPin); //  ler o valordo sensor
  Serial.println(val); //  enviá-lo para o computador   (como dígitos ASCII)


  if (analogRead(sensorPin) > 1023) {
    Serial.println(val);
   
    analogWrite(RED1, 0);
    analogWrite(GREEN1, 0);
    analogWrite(BLUE1, 0);
   
    analogWrite(RED1, 153);
    analogWrite(GREEN1, 51);
    analogWrite(BLUE1, 255);

    analogWrite(RED1, 0);
    analogWrite(GREEN1, 0);
    analogWrite(BLUE1, 0);


  }
  
  else if (analogRead(sensorPin) > 701 and analogRead(sensorPin)  < 800) {
    Serial.println(val);
    
    analogWrite(RED1, 204);
    analogWrite(GREEN1, 0);
    analogWrite(BLUE1, 255);   

  }
  
  else if (analogRead(sensorPin) > 601 and analogRead(sensorPin)  < 700) {
    Serial.println(val);
    
    analogWrite(RED1, 0);
    analogWrite(GREEN1, 255);
    analogWrite(BLUE1, 255);   

  }
     
  else if (analogRead(sensorPin) > 501 and analogRead(sensorPin)  < 600) {
    Serial.println(val);
    
    analogWrite(RED1, 102);
    analogWrite(GREEN1, 153);
    analogWrite(BLUE1, 255);   

  }
       
  else if (analogRead(sensorPin) > 401 and analogRead(sensorPin)  < 500) {
    Serial.println(val);

    analogWrite(RED1, 83);
    analogWrite(GREEN1, 4);
    analogWrite(BLUE1, 0);    

  }
     
   else if (analogRead(sensorPin) > 301 and analogRead(sensorPin)  < 400) {
    Serial.println(val);
    
    analogWrite(RED0, 204);   
    analogWrite(GREEN0, 255);
    analogWrite(BLUE0, 102);

  }
    
  else if (analogRead(sensorPin) > 201 and analogRead(sensorPin)  < 300) {
    Serial.println(val);
    
    analogWrite(RED0, 0);   
    analogWrite(GREEN0, 255);
    analogWrite(BLUE0, 0);

  }
  
  else if (analogRead(sensorPin) > 106 and analogRead(sensorPin)  < 200) {
    Serial.println(val);
    
    analogWrite(RED0, 153);   
    analogWrite(GREEN0, 0);
    analogWrite(BLUE0, 255);

  }

  else if (analogRead(sensorPin) > 91 and analogRead(sensorPin)  < 105) {
    Serial.println(val);
    
    analogWrite(RED0, 102);   
    analogWrite(GREEN0, 51);
    analogWrite(BLUE0, 0);

  }

  else if (analogRead(sensorPin) > 81 and analogRead(sensorPin)  < 90) {
    Serial.println(val);
    
    analogWrite(RED0, 0);
    
    analogWrite(RED0, 100);

    analogWrite(RED0, 0);

  }

  else if (analogRead(sensorPin) > 71 and analogRead(sensorPin)  < 80) {
    Serial.println(val);
    
    analogWrite(RED0, 51);   
    analogWrite(GREEN0, 102);
    analogWrite(BLUE0, 255);

  }

  else if (analogRead(sensorPin) > 60 and analogRead(sensorPin)  < 70) {
    Serial.println(val);
    
    analogWrite(RED0, 255);   
    analogWrite(GREEN0, 153);
    analogWrite(BLUE0, 0);

  }

  else if (analogRead(sensorPin) > 41 and analogRead(sensorPin)  < 59) {
    Serial.println(val);
    
    analogWrite(RED0, 192);   
    analogWrite(GREEN0, 192);
    analogWrite(BLUE0, 192);

  }

  else if (analogRead(sensorPin) > 28 and analogRead(sensorPin)  < 40) {
    Serial.println(val);
    
    analogWrite(RED0, 255);        
    analogWrite(GREEN0, 255);    
    analogWrite(BLUE0, 255);

  }


  else {
    
    analogWrite(BLUE0, 0);
    analogWrite(GREEN0, 0);
    analogWrite(RED0, 0);

    analogWrite(BLUE1, 0);
    analogWrite(GREEN1, 0);
    analogWrite(RED1, 0);

  }


}
