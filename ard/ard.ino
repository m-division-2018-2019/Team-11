void hit()
{
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(1800);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  delay(1600);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
}
void fork()
{
  digitalWrite(36,LOW);
  digitalWrite(37,HIGH);
  delay(400);
  digitalWrite(36,HIGH);
  digitalWrite(37,LOW);
  delay(300);
  digitalWrite(36,LOW);
  digitalWrite(37,LOW);
 
}

void forward()
{
    
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
}
void backward()
{
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
}
void right()
{
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);

}
void left()
{
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
}
void stop1()
{
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
}
void setup()
{
    Serial.begin(9600);

  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(36,OUTPUT);
  pinMode(37,OUTPUT);
  stop1();
}
void loop()
{
   
    while(Serial.available())
    {
        char data=Serial.read();
        if(data=='1')
        {
            Serial.println("FORWARD");
            forward();
         }
        else if(data=='2')
        {
            Serial.println("BACKWARD");
            backward();
        }
        else if (data=='4')
        {
            Serial.println("RIGHT");
            right();
        }
        else if (data=='3')
        {
          Serial.println("LEFT");
            left();
            }
         else if (data=='H')
        {
          Serial.println("hit");
            hit();
         }
          else if (data=='F')
        {
          Serial.println("fork");
            fork();
            }
  
        else if(data=='0')
          {
            Serial.println("stop");
            stop1();
            } 
        
        }
}
