int redLED = D0;
int yellowLED = D1;
int greenLED = D2;

void setup() {

    Serial.begin(9600);
    
    pinMode(redLED , OUTPUT);
    pinMode(yellowLED, OUTPUT);
    pinMode(greenLED, OUTPUT);
    pinMode(led, OUTPUT);
    
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    

    Particle.function("toggleLED", toggleLED);
}

int toggleLED(String colour){
    
    String col = colour;    
    
    if(colour == "red"){
                        digitalWrite(yellowLED, LOW);
                        digitalWrite(greenLED, LOW);
                        
                        digitalWrite(redLED, HIGH);  
                        return 1;
    }
    else if(colour == "yellow"){
                        digitalWrite(greenLED, LOW);
                        digitalWrite(redLED, LOW);
                        
                        digitalWrite(yellowLED, HIGH);        
                        return 2;
    }
    else if(colour == "green"){
                        digitalWrite(redLED, LOW);
                        digitalWrite(yellowLED, LOW);
                        
                        digitalWrite(greenLED, HIGH);        
                        return 3;
    }
    
}

void loop() {

}

