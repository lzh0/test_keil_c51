#include <reg52.h>
void fun(void);
void test(void);
void the_third(void);
int main(void){
	while(1){
		P2=0;
		fun();
		test();
		P1=0XFF;
		the_third();
	}
	
}

void fun(void){
	P3=0;
}

void test(void){
	P2=1;
}

void the_third(void){
	fun();
	test();
}