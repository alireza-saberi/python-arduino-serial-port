int led = 13;
char val[255]={0};
int len;
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);  
 
}

void loop(){
  if(Serial.available() > 0)
  {
    len = Serial.read();
    Serial.println((char)len);
  }
  Serial.flush();
  // Read from Input
  for (int i = 0; i <= len - 1; i++)
    {
      if(Serial.available() > 0)
      {
        val[i] = Serial.read();
        Serial.println(val[i]);
        Serial.flush();
      }
    }

}    


