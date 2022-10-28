/*Autor: Alan Villalobos Aranda
  Actividad: Examen-Parcial 1
  Fecha Final: 29/09/2022
  */
#include <vector>

#include "Paciente.h"

class Habitacion
{
	public:
	Habitacion(int);
	int ocupacion();
	
	int EspacioCamas();
	int freeCamas();
	int Disponible();
	
	
	int getHabitaciones();
	int ingresoPaciente(int *ing);
	int egresoPaciente();
	int CD();
	
	private:
		int numero;
		int capacidad;
		vector<Paciente*> cama;
};

int Habitacion::CD()
{
	int camas = 0;
	
	for (int i = 0; i < cama.size(); i++)
	{
		if (cama[i] == NULL) camas++;
	}
	
	return camas;
}

int Habitacion::Disponible(){
	int disponible = 0;
	
	for (int i = 0; i < cama.size(); i++)
	{
		if (cama[i] == NULL){
			disponible++;
		}else if(cama[i]!=NULL){
			disponible-2;
		}
	}
	
	return disponible;
}

Habitacion::Habitacion(int numero){
	
	this->numero = numero;
	//this->num_camas = num_camas;
	cout<<numero<<" camas:";
	for(int i = 0; i < numero; i++){
		cama.push_back(NULL);
		cout<<" DISPONIBLE";
	}
	cout<<endl;
}

int Habitacion::ocupacion(){
	cout<<numero<<" Camas: ";
	for(int i = 0; i < cama.size(); i++){
		if((cama[i]==NULL)||cama[i]== 0){
			cout<<" DISPONIBLE";
		}else if(cama[i] != NULL){
		cout<<cama[i]->getSexo()<<"-"<<cama[i]->getEdad()<<"-"<<cama[i]->getDias()<<" ";
		}
	}
	cout<<endl;
}

int Habitacion::ingresoPaciente(int *ing)
{	
	int dias=0;
	int ingresos = 0;
	for(int i =0; i < cama.size(); i++) {
		if(cama[i]== NULL && (*ing > 0)) {	
			this->cama[i] = new Paciente();
			*ing = *ing - 1;
			ingresos++;
		//	cama[i]->setDias();
		}
	}
	return ingresos;
}

int Habitacion::egresoPaciente()
{
	int egreso=0;
	for(int i=0; i < cama.size(); i++){
		if(cama[i] != NULL){
			if(1+rand()%4 == 1){
				delete cama[i];
				cama[i]=NULL;
				egreso++;
			}else{
				cama[i]->setDias();
			}
	    }
	}
	return egreso;
}

int Habitacion::EspacioCamas(){
	cama.size();
	
	return cama.size();
}

int Habitacion::freeCamas(){
	for(int i = 0; i < cama.size(); i++) delete cama[i];
	cama.clear();
	return cama.size();
}


/*int Habitacion::getHabitaciones(){
	int hab=0;
	for(int i = 0; i < num_camas; i++){
		cout<<"Habitaciones ["<<i+1<<"] ";
	}
} si en el constructor tiene un int guardando al numero de camas*/ 
