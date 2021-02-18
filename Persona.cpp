//Persona = nombre, apellido, direccion, telefono, fecha de nacimiento, dpi, etc...
//Cliente = nit, etc... 
#include <iostream>

using namespace std;

class Persona{

	// atributos

	protected : string nombres,apellidos,direccion,puesto;

				int telefono,salario,codigoempleado;

	// costructor

	protected : 

		Persona(){

		}

		Persona(string nom,string ape,string dir,string pue,int sal,int codem,int tel){

			nombres = nom;

			apellidos = ape;

			direccion = dir;

			puesto=pue;
			
			salario = sal;
			
			codigoempleado = codem;
			
			telefono = tel;
			
			
			
			
			
			
			

		}

	

	// metodos

	void mostrar();

	

};

