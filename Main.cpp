/*Autor: Alan Villalobos Aranda
  Actividad: Examen-Parcial 1
  Fecha Final: 29/09/2022
  */

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <vector>

#include "Hospital.h"

using namespace std;

int main(){
	
	srand(time(NULL));
	Hospital hospital;
	system("pause");
	system("cls");
	hospital.simulaHospital();
	
	return 0;
}
