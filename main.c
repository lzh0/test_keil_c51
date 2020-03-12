#include <reg52.h>
void fun(void);
void test(void);
int main(void){
	while(1){
		P2=0;
		fun();
		test();
		P1=0XFF;
	}
	
}

void fun(void){
	P3=0;
}

void test(void){
	P2=1;
}
