#include<iostream>
#include<stdlib.h>
using namespace std;


int main(){

	cout<<"componentes repetidos en un vector de n*n\n"<<endl;
	float matriz_numeros[100][100], vector_auxiliar[100];
	int n_filas, n_columnas, s=0, contador=0;


	cout<<"cantidad de filas que desea adicionar a su matriz: "; cin>>n_filas;
	cout<<"cantidad de columnas que desea agregarle a su matriz: "; cin>>n_columnas;
	cout<<"\n digitar los elementos que desea adicionar a su matriz: "<<endl<<endl;
	

	for(int i=0; i<n_filas; i++){

		for(int j=0; j<n_columnas; j++){

			cout<<"Digitar una cifra"; cin>>matriz_numeros[i][j];
		}

	}
    system("cls");

	cout<<"Esta es su matriz es:  "<<endl<<endl;
	for(int i=0; i<n_filas; i++){

		cout<<endl;

		for(int j=0; j<n_columnas; j++){

			vector_auxiliar[s]=matriz_numeros[i][j];
			cout<<"  "<<matriz_numeros[i][j];
			s++;
		}
	}
	cout<<"\n"<<endl;
	s=0;
	 for(s=0; s<(n_columnas+n_filas); s++){
         
	 	contador=0;
        
	 	for(int i=0; i<n_filas; i++){

			for(int j=0; j<n_columnas; j++){

				if(vector_auxiliar[s]==matriz_numeros[i][j]){
					contador++;
				}
			}
		}
		cout<<"el numero"<<vector_auxiliar[s]<<"se reitera"<<contador<<"veces"<<endl;
	}
		
}
