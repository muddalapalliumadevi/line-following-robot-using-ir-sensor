int ir1=5;
int ir2=6;
int a;
int b;
int m11=1;
int m12=0;
int m21=4;
int m22=7;

void setup()
{
  Serial.begin(9600);
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(m11,OUTPUT);
  pinMode(m12,OUTPUT);
  pinMode(m21,OUTPUT);
  pinMode(m22,OUTPUT);
}

void loop()
{
  a=digitalRead(ir1);
  b=digitalRead(ir2);
  
  Serial.print("value of ir1 is =");
  Serial.println(a);
  Serial.print("value of ir2 is =");
  Serial.println(b);
  
  if(a==1 && b==1)
  {
    digitalWrite(m11,HIGH);
    digitalWrite(m12,LOW);
    digitalWrite(m21,HIGH);
    digitalWrite(m22,LOW);
  }
  
  if(a==0 && b==1)
  {
    digitalWrite(m11,LOW);
    digitalWrite(m12,HIGH);
    digitalWrite(m21,HIGH);
    digitalWrite(m22,LOW);
  }
  
  if(a==1 && b==0)
  {
    digitalWrite(m11,HIGH);
    digitalWrite(m12,LOW);
    digitalWrite(m21,LOW);
    digitalWrite(m22,HIGH);
  }
  
  if(a==1 && b==0)
  {
    digitalWrite(m11,LOW);
    digitalWrite(m12,LOW);
    digitalWrite(m21,LOW);
    digitalWrite(m22,LOW);
    
    delay(500);
    
    digitalWrite(m11,HIGH);
    digitalWrite(m12,LOW);
    digitalWrite(m21,HIGH);
    digitalWrite(m22,LOW);
    
    delay(500);
  }
}

    
  
  
    
  
  
  
  
  
  
  
  
  
  
  
  
    
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  