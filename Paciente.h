/*Autor: Alan Villalobos Aranda
  Actividad: Examen-Parcial 1
  Fecha Final: 29/09/2022
  */
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>

using namespace std;

class Paciente{
	public:
		Paciente();
		string getSexo(){return sexo;}
		int getEdad(){return edad;}
		int getDias(){return dias;}
		void setDias(){this->dias +=1;}
		private:
			int edad;
			int dias;
			string sexo;
};

Paciente::Paciente(){
	if(1+rand()%2 == 1)
		this->sexo = "Hombre";
	else
		this->sexo = "Mujer";
	
	this->edad = 1+rand()%100;		
	this->dias=0;
}


