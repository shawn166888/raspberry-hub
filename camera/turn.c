#include<stdio.h>
#include<wiringPi.h>

void init();
int main()
{
	init();
	int angle=0;
	printf("%s","input angel:\n");
	scanf("%d",&angle);

	int i=0;
	float x=0;

	int k=180;//180次循环的时间够了
	while(k--)
	{
		x=11.11*i;
		digitalWrite(15,HIGH);
		delayMicroseconds(500+x);
		digitalWrite(15,LOW);
		delayMicroseconds(19500-x);
		if(i==angle)
			break;
		i++;
	} 
	printf("exit\n");
	return 0;
}


void init()
{
	wiringPiSetup();
	pinMode(15,OUTPUT);
}