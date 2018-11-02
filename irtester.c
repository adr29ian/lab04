#include <stdio.h>
#include <wiringPi.h>

int main(int argc, char *argv[])
{
  wiringPiSetup () ;
  pinMode(0, INPUT);
  while(1) {
    printf("Waiting for reset \n");
    while(digitalRead(0) ==1)
{
wiringPiSetup() ;
pinMode (2,OUTPUT);

digitalWrite (2,HIGH); delay(250);
digitalWrite(2,LOW); delay(250);
	printf("ONE \n");
ifttt(/*fill in */);

}

printf("Waiting for event \n");
while(digitalRead(0) ==0)
{
wiringPiSetup();
pinMode(1, OUTPUT);

digitalWrite(1,HIGH); delay(250);
digitalWrite(1,LOW); delay(250);
printf("ZERO \n");

ifttt(/*fill in*/);
}

printf("Alarm \n");
}
/*NOT REACHED*/
return 0;
}
