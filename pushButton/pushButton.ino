
//set pin numbers
const int ledPin = 2;  //const won't change
const int buttonPin = 4;

//variable will change
int buttonState = 0;    //variables for readin the pushbutton status


void setup() {
    
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  //innitialize the LED pin as an output
  pinMode(buttonPin, INPUT); //initialize the pushbutton pin as an output
  
}

void loop() {
  
  buttonState = digitalRead(buttonPin);  //read the state of the pushbutton value

  if(buttonState == HIGH){      //check if the pushbutton is pressed
    
    //if it is, the buttonState is HIGH
    digitalWrite(ledPin, HIGH);   //turn LED on
    Serial.printIn("LED ON +++++++++");  
    
    }
  
  else{
    
    digitalWrite(ledPin, LOW);      //turn LED off
    Serial.println("LED OFF ------");
    
    }

}
