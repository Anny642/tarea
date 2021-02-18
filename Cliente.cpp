#include "Persona.cpp"

#include <iostream>

using namespace std;



class Cliente : Persona{

 // atributos

 private : string nit;

 // constructor

 public :

 Cliente(){

 }

 Cliente(string nom,string ape,string dir,string pue,int codem,int sal,int tel,string n) : Persona(nom,ape,dir,pue,codem,sal,tel){ 

 nit = n;

 }

  

 // METODOS

 //set (modificar)

 void setNit(string n){nit = n;}

 void setNombres(string nom){nombres = nom;}

 void setApellidos(string ape){apellidos = ape;}

 void setDireccion(string dir){direccion = dir;}

 void setPuesto(string pue){puesto = pue;}

 void setCodigoEmpleado(int codem){codigoempleado = codem;}
 
 void setSalario(int sal){salario = sal;}
 
 void setTelefono(int tel){telefono = tel;}

 //get (mostrar)

 string getNit(){	return nit;}

 string getNombres(){	return nombres;}

 string getApellidos(){	return apellidos;}

 string getDireccion(){	return direccion;}
 
 string getPuesto() { return puesto;}
 
 int  getCodigoEmpleado(){ return codigoempleado;}
 
 int getSalario(){ return salario;}
 
 int getTelefono(){	return telefono;}

  

// metodo

void mostrar(){

	cout<<"________"<<endl;

	cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<puesto<<","<<codigoempleado<<","<<salario<<","<<telefono<<endl;

}

};
