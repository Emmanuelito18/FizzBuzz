///////////////////////////////
//Inclusión de librerias
#ifdef _WIN32
#include <Windows.h>
#include <conio.h>
#else
#include <conio.h>
#endif

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define color SetConsoleTextAttribute
///////////////////////////////

//////////////////////////////////
//indicación de función
using namespace std;
////////////////////////////////////

////////////////////////////////////
//Creación de clases

////////////////////////////////////

////////////////////////////////////
//constructor de la clase
//sirve para inicializar los atributos de la clase

////////////////////////////////////

////////////////////////////////////
//Implementación de la clase
/*los dos puntos significan que el método pertenece a esa clase especificada
no hay necesidad de pasar paramentros a los métodos que pertenecen a la misma clase*/

////////////////////////////////////

////////////////////////////////////
//Creación de estructuras

////////////////////////////////////

/////////////////////////////////////
//prototipado de funciones
bool moduloManual(int,int);
void FizzBuzzSimple(void);
void FizzBuzzManual(void);
void menu(void);
////////////////////////////////////

/////////////////////////////////////////
//declaración de variables globales

////////////////////////////////////////

//////////////////////////////
//inicio del código principal del programa
int main(){
	/////////////////////////////
	//inicio del programa
	setlocale(LC_ALL,"spanish");
	cout<<"Este programa muestra una lista de números del 1 al 100, y si son multiplos de 3 muestra"<<endl;
	cout<<"la palabra fizz, pero si es multiplo de 5 muestra la palabra buzz, pero si es multiplo de 3 y 5"<<endl;
	cout<<"muestra la palabra fizzbuzz, y si no es multiplo de nada solamente muestra el número"<<endl;
	cout<<"Creado por: Mej¡a Casta¤eda Bryan Emmanuel"<<endl;
	cout<<"Recuerda que s¡ puedes imaginarlo, puedes programarlo."<<endl<<endl;
	/////////////////////////////
	
	/////////////////////////////
	//Creación de  objetos de clases
	
	/////////////////////////////
	
	/////////////////////////////
	//Declaración de variables de estructuras
	
	////////////////////////////

	/////////////////////////////
	//Declaración de variables locales
	
	////////////////////////////
	
	////////////////////////////
	//declaración de arreglos(vectores unidimencionales)
	
	///////////////////////////
	
	////////////////////////////////
	//declaración de matriz o tablas(vectores bidimencionales)
	
	///////////////////////////////

	/////////////////////////////// 
	//declaración de cadenas
	
	///////////////////////////////

	//////////////////////////////
	//delcaración de punteros
	
	//////////////////////////////
	
	//////////////////////////////
	//Cuerpo del programa
	menu();
	//////////////////////////////
	
	//////////////////////////////
	//parte final del código
	cout<<"Esta es la parte final del programa"<<endl;
	cout<<"Que la fuerza de velocidad te acompa¤e"<<endl<<endl;	
	#ifdef _WIN32
	system("pause");
	#else
	getch();
	#endif
	return 0;
	//////////////////////////////
}
//fin del código principal del programa
//////////////////////////////

//////////////////////////////////////////
//definición de funciones
bool moduloManual(int dividendo,int divisor) {
	int resultado=0,cociente=0;
	resultado=dividendo/divisor;
	cociente=dividendo-(resultado*divisor);
	return cociente==0? true:false;
}
void FizzBuzzSimple(){
	HANDLE consola=GetStdHandle(STD_OUTPUT_HANDLE);
	for(int i=1;i<=100;i++){
		if(i%3==0&&i%5==0){
			color(consola,10);
			cout<<"FizzBuzz"<<endl;
			color(consola,7);
		}else{
			if(i%3==0){
				color(consola,6);
				cout<<"Fizz"<<endl;
				color(consola,7);
			}else if(i%5==0){
				color(consola,9);
				cout<<"Buzz"<<endl;
				color(consola,7);
			}else{
				cout<<i<<endl;
			}
		}
	}
}
void FizzBuzzManual(){
	HANDLE consola=GetStdHandle(STD_OUTPUT_HANDLE);
	for(int i=1;i<=100;i++){
		if(moduloManual(i,3)&&moduloManual(i,5)){
			color(consola,10);
			cout<<"FizzBuzz"<<endl;
			color(consola,7);
		}else{
			if(moduloManual(i,3)){
				color(consola,6);
				cout<<"Fizz"<<endl;
				color(consola,7);
			}else if(moduloManual(i,5)){
				color(consola,9);
				cout<<"Buzz"<<endl;
				color(consola,7);
			}else{
				cout<<i<<endl;
			}
		}
	}
}
void menu(){
	int opc=0;
	do{
		cout<<"\t\tMenu"<<endl;
		cout<<"1.FizzBuzz simple"<<endl;
		cout<<"2.FizzBuzz manual"<<endl;
		cout<<"3.Salir"<<endl<<endl;
		cin>>opc;
		switch(opc){
			case 1:
				system("cls");
				cout<<"FizzBuzz utilizando operador modulo"<<endl;
				FizzBuzzSimple();
				break;
			case 2:
				system("cls");
				cout<<"FizzBuzz con modulo manual"<<endl;
				FizzBuzzManual();
				break;
		}
	}while(opc!=3);
}
/////////////////////////////////////////

////////////////////////////////
/*
Si tienes alguna duda sobre la realización sobre cosas busca en 
Programación ATS o en cualquier video de internet, o páginas de documentación sobre 
programación en C++
*/
///////////////////////////////
