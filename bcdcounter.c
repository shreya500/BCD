#include<avr/io.h>
#include<util/delay.h>
int main()
{
DDRD=0XFF;
DDRC=0XFF;
int a[10]={0X00,0X01,0X02,0X03,0X04,0X05,0X06,0X07,0X08,0X09};
while(1)
{
 for(int i=0;i<=9;i++)
 {
   for(int j=0;j<=9;j++)
   {
   PORTC=a[i];
   PORTD=a[j];
   _delay_ms(1000);
   }

   }
   }
   }
