#include <reg52.h>
void fun(void);
int main(void){
	while(1){
		P2=0;
		fun();
		P1=0XFF;
	}
	
}

void fun(void){
	P3=0;
}