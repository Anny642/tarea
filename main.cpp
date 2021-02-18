#include "Cliente.cpp"

#include <iostream>

using namespace std;

main(){

	string nit,nombres,apellidos,direccion,puesto;

	int telefono,salario,codigoempleado;

	cout<<"Ingrese Nit: ";

	cin>>nit;

	cout<<"Ingrese Nombres: ";

	cin>>nombres;

	cout<<"Ingrese Apellidos: ";

	cin>>apellidos;

	cout<<"Ingrese Direccion: ";

	cin>>direccion;

	cout<<"Ingrese Codigo del Empleado:";
	
	cin>>codigoempleado;
	
	cout<<"Ingrese Puesto:";
	
	cin>>puesto;
	
	cout<<"Ingrese salario Q:";
	
	cin>>salario; 

	cout<<"Ingrese Telefono: ";

	cin>>telefono;

	// instanciar un objeto

	Cliente obj = Cliente(nombres,apellidos,direccion,puesto,codigoempleado,salario,telefono,nit);

	obj.mostrar();

	cout<<"Ingrese Nit: ";

	cin>>nit;

	obj.setNit(nit);

	obj.mostrar();

	// instanciar un objeto y utilizar get and set

	

/*	Cliente obj = Cliente();

	obj.setNit(nit);

	obj.setNombres(nombres);

	obj.setApellidos(apellidos);

	obj.setDireccion(direccion);

	obj.setTelefono(telefono);

	//obj.mostrar();

	cout<<"Nit: "<<obj.getNit()<<endl;

	cout<<"Nombres: "<<obj.getNombres()<<endl;

	cout<<"Apellidos: "<<obj.getApellidos()<<endl;

	cout<<"Direccion: "<<obj.getDireccion()<<endl;

	cout<<"Telefono: "<<obj.getTelefono()<<endl;

*/	

}
