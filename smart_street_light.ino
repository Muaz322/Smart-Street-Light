
int ir1=2;

int led1=4;


int proxy1=0;



void setup() {
  // put your setup code here, to run once:
pinMode(ir1,INPUT);

pinMode(led1,OUTPUT);




}

void loop() {
  // put your main code here, to run repeatedly:

proxy1=digitalRead(ir1);

if(proxy1==LOW)
{
  digitalWrite(led1,HIGH);
  
 

}

else 
{
  digitalWrite(led1,LOW)
}


}
