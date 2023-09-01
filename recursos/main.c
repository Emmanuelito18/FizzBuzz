#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <windows.h>

#define color SetConsoleTextAttribute

bool moduloManual(int,int);
void FizzBuzzSimple(void);
void FizzBuzzManual(void);
void menu(void);

int main(int argc, char *argv[]) {
	menu();
	return 0;
	system("pause");
}

bool moduloManual(int dividendo,int divisor) {
	int resultado=0,cociente=0;
	resultado=dividendo/divisor;
	cociente=dividendo-(resultado*divisor);
	return cociente==0? true:false;
}
void FizzBuzzSimple(){
	HANDLE consola=GetStdHandle(STD_OUTPUT_HANDLE);
	int i=1;
	for(i;i<=100;i++){
		if(i%3==0&&i%5==0){
			color(consola,10);
			printf("FizzBuzz\n");
			color(consola,7);
		}else{
			if(i%3==0){
				color(consola,6);
				printf("Fizz\n");
				color(consola,7);
			}else if(i%5==0){
				color(consola,9);
				printf("Buzz\n");
				color(consola,7);
			}else{
				printf("%d\n",i);
			}
		}
	}
}
void FizzBuzzManual(){
	HANDLE consola=GetStdHandle(STD_OUTPUT_HANDLE);
	int i=1;
	for(i;i<=100;i++){
		if(moduloManual(i,3)&&moduloManual(i,5)){
			color(consola,10);
			printf("FizzBuzz\n");
			color(consola,7);
		}else{
			if(moduloManual(i,3)){
				color(consola,6);
				printf("Fizz\n");
				color(consola,7);
			}else if(moduloManual(i,5)){
				color(consola,9);
				printf("Buzz\n");
				color(consola,7);
			}else{
				printf("%d\n",i);
			}
		}
	}
}
void menu(){
	int opc=0;
	do{
		printf("\t\tMenu\n");
		printf("1.FizzBuzz simple\n");
		printf("2.FizzBuzz manual\n");
		printf("3.Salir\n\n");
		scanf("%d",&opc);
		switch(opc){
			case 1:
				system("cls");
				printf("FizzBuzz utilizando operador modulo\n");
				FizzBuzzSimple();
				break;
			case 2:
				system("cls");
				printf("FizzBuzz con modulo manual\n");
				FizzBuzzManual();
				break;
		}
	}while(opc!=3);
}
