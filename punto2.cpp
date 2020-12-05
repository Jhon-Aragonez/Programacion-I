#include<iostream>
#include<stdlib.h>
using namespace std;


struct estudiante{

	char nombre[50];
	int edad;
	int documento_identidad;
    int semestre_academico;
} 
Alumnos[2];

int main(){

	cout<<"el programa acumula la informacion de dos estudiantes: \n\n"
	for(int i=1; i<=2; i++){

		fflush(stdin);                        
		cout<<"\n\n   ESTUDIANTE ["<<i<<"]:"<<endl;
		cout<<"digitar su nombre: "; cin.getline(Alumnos[i].nombre,20,'\n');
		cout<<"digitar su edad: "; cin>>Alumnos[i].edad;
		cout<<"digitar su documento de identidad: "; cin>>Alumnos[i].documento_identidad;
		cout<<"semestre academico: "; cin>>Alumnos[i].semestre_academico;

	}
	system("cls");
	cout<<"\n la informacion de los estudiantes son: "<<endl;
	
	for(int i=1; i<=2; i++){

		cout<<"\n   ESTUDIANTE ["<<i<<"]"<<endl;
		cout<<"nombre: "<<Alumnos[i].nombre<<endl;
		cout<<"edad: "<<Alumnos[i].edad<<endl;
		cout<<"documento de identidad: "<<Alumnos[i].documento_identidad<<endl;
		cout<<"semstre academico: "<<Alumnos[i].semestre_academico<<endl;	
        
	}
	cout<<"\n\n";
	system("pause");
	return 0;
	
	
}
