///////////////////////////////
//Inclusi�n de librerias
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
//indicaci�n de funci�n
using namespace std;
////////////////////////////////////

////////////////////////////////////
//Creaci�n de clases

////////////////////////////////////

////////////////////////////////////
//constructor de la clase
//sirve para inicializar los atributos de la clase

////////////////////////////////////

////////////////////////////////////
//Implementaci�n de la clase
/*los dos puntos significan que el m�todo pertenece a esa clase especificada
no hay necesidad de pasar paramentros a los m�todos que pertenecen a la misma clase*/

////////////////////////////////////

////////////////////////////////////
//Creaci�n de estructuras

////////////////////////////////////

/////////////////////////////////////
//prototipado de funciones

////////////////////////////////////

/////////////////////////////////////////
//declaraci�n de variables globales

////////////////////////////////////////

//////////////////////////////
//inicio del c�digo principal del programa
int main(){
	/////////////////////////////
	//inicio del programa
	cout<<"Este programa "<<endl;
	cout<<"Creado por: Mej�a Casta�eda Bryan Emmanuel"<<endl;
	cout<<"Recuerda que s� puedes imaginarlo, puedes programarlo."<<endl<<endl;
	/////////////////////////////
	
	/////////////////////////////
	//Creaci�n de  objetos de clases
	
	/////////////////////////////
	
	/////////////////////////////
	//Declaraci�n de variables de estructuras
	
	////////////////////////////

	/////////////////////////////
	//Declaraci�n de variables locales
	
	////////////////////////////
	
	////////////////////////////
	//declaraci�n de arreglos(vectores unidimencionales)
	
	///////////////////////////
	
	////////////////////////////////
	//declaraci�n de matriz o tablas(vectores bidimencionales)
	
	///////////////////////////////

	/////////////////////////////// 
	//declaraci�n de cadenas
	
	///////////////////////////////

	//////////////////////////////
	//delcaraci�n de punteros
	
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
	//parte final del c�digo
	cout<<"Esta es la parte final del programa"<<endl;
	cout<<"Que la fuerza de velocidad te acompa�e"<<endl<<endl;	
	#ifdef _WIN32
	system("pause");
	#else
	getch();
	#endif
	return 0;
	//////////////////////////////
}
//fin del c�digo principal del programa
//////////////////////////////

//////////////////////////////////////////
//definici�n de funciones

/////////////////////////////////////////

////////////////////////////////
/*
Si tienes alguna duda sobre la realizaci�n sobre cosas busca en 
Programaci�n ATS o en cualquier video de internet, o p�ginas de documentaci�n sobre 
programaci�n en C++
*/
///////////////////////////////
