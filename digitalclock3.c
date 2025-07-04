#include<reg51.h>
int x;
void delay_1s()
{
for (x=0; x<14; x++)
{
TH0=0;
TL0=0;
TR0=1;
while (TF0==0);
	TF0=0;
TR0=0;
	}
}

void display_time(unsigned char h, unsigned char m, unsigned char s){
	unsigned char s1=s%10;
	unsigned char s2=s/10;
	
	unsigned char m1=m%10;
	unsigned char m2=m/10;
	
	unsigned char h1=h%10;
	unsigned char h2=h/10;
	
	  P1 = (s2 << 4) | (s1 & 0x0F);  
    P2 = (m2 << 4) | (m1 & 0x0F); 
    P3 = (h2 << 4) | (h1 & 0x0F);
}

void main(){
unsigned char s=0;
unsigned char m=0;
unsigned char h=6;
	TMOD=0X01;

while(1){
display_time(h,m,s);
delay_1s();
	s++;
	
	if (s==60){
		s=0;
		m++;
		if (m==60){
			m=0;
			h++;
			if (h==24){
				h=0;
			}
		}
	}
}
}
