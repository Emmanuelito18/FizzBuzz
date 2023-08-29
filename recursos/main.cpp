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

////////////////////////////////////

/////////////////////////////////////////
//declaración de variables globales

////////////////////////////////////////

//////////////////////////////
//inicio del código principal del programa
int main(){
	/////////////////////////////
	//inicio del programa
	cout<<"Este programa "<<endl;
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

/////////////////////////////////////////

////////////////////////////////
/*
Si tienes alguna duda sobre la realización sobre cosas busca en 
Programación ATS o en cualquier video de internet, o páginas de documentación sobre 
programación en C++
*/
///////////////////////////////
