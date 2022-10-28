/*Autor: Alan Villalobos Aranda
  Actividad: Examen-Parcial 1
  Fecha Final: 29/09/2022
  */
#include <vector>

#include "Habitacion.h"

class Hospital
{
	public:
	Hospital();
	int disponiblecama();
	int Disponible();

	int CD();
	int freeCamas();
	int ingresoPacientes(int ing);
	int egresoPacientes();
	void simulaHospital();
		
	private:
			int num_hab;
		vector<Habitacion*> habitacion;
	
};

int Hospital::CD(){
	 int cama= 0;
		
	for(int i= 0; i < habitacion.size();i++)
	{
		cama += habitacion[i]->CD();
	}
	return cama;
}

int Hospital::Disponible(){
	int disponible = 0;
	
		for(int i= 0; i < habitacion.size();i++)
	{
		disponible += habitacion[i]->Disponible();
	}
	
	return disponible;
}


Hospital::Hospital(){
	cout<<"Simulando un Sistema de Hospital"<<endl;
	cout<<"Cuantas Habitaciones desea en su hospital: ";
	cin>>this->num_hab;
	for(int i = 0; i < num_hab; i++){
		cout<<"Habitaciones ["<<i+1<<"] ";
		this->habitacion.push_back(new Habitacion(1+rand()% 3));
	}
	cout<<"Total de camas disponibles en el hospital: "<<this->CD()<<endl;
	
}


void Hospital::simulaHospital(){
	
	int dias=0;
	while (this->CD() > 0) {
		dias++;
		cout<<"DIAS"<<"\tINGRESO"<< "\tEGRESO"<<"\t"<<"DISPONIBILIDAD"<<endl;
		cout << dias<<"\t" << this->ingresoPacientes((rand() % 6))<<"\t"<<this->egresoPacientes()<<"\t"<<this->Disponible()<<endl<<endl;
		this->disponiblecama();
		system("pause");
		system("cls");
	}
			cout<<"Memoria Dinamica:"<<endl;
			cout<<"Memoria del vector Habitacion y camas Liberadas:"<<habitacion.size()<<endl;
			for(int i = 0; i < habitacion.size(); i++){
			cout<< "Habitacion["<<i+1<<"] "<<habitacion[i]->EspacioCamas()<<" Camas"<<endl;
			}
			cout<<"Se limpio la memoria con clear():"<<endl;
			for(int i = 0; i < habitacion.size(); i++){
				cout<< "Habitacion["<<i+1<<"] "<<habitacion[i]->freeCamas()<<" memoria de camas liberado"<<endl;
				delete habitacion[i];
			}
			habitacion.clear();
			cout<<"Memoria del vector Habitacion liberada:"<<habitacion.size()<<endl;
		
}

int Hospital::disponiblecama(){
	int disponible=0;
	
	for(int i = 0; i < habitacion.size(); i++)
	{	
		cout<<"Habitacion ["<<i+1<<"] ";
		disponible+=habitacion[i]->ocupacion();
	}
	return disponible;
}

int Hospital::ingresoPacientes(int ing)
{
	int pacIn = 0;
	for(int i=0; i < habitacion.size(); i++) {
		pacIn += this->habitacion[i]->ingresoPaciente(&ing);
	}
	
	return pacIn;
}

int Hospital::egresoPacientes(){
	int egreso=0;
	for(int i= 0; i<habitacion.size(); i++)
	{
		egreso+=habitacion[i]->egresoPaciente();
	}
	return egreso;
}

