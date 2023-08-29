#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=1;
	for(i;i<=100;i++){
		if(i%3==0&&i%5==0){
			printf("FizzBuzz\n");
		}else{
			if(i%3==0){
				printf("Fizz\n");
			}else if(i%5==0){
				printf("Buzz\n");
			}else{
				printf("%d\n",i);
			}
		}
	}
	return 0;
	system("pause");
}
