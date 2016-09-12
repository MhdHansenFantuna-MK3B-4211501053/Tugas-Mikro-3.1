void setup() {
  // put your setup code here, to run once:
DDRB=0b1111; 
DDRC=0b0000; 
PORTC=0b1111; 

}

void loop() {
   if(digitalRead(A0)==LOW)      
   {  
   PORTB = PORTB + 1; 
    delay(1000); 
   } 
    
   if(digitalRead(A1)==LOW) 
     { 
       PORTB = PORTB - 1; 
       delay(1000); 
     } 
    
   if(digitalRead(A2)==LOW) 
     { 
       PORTB=0; 
     } 
}
