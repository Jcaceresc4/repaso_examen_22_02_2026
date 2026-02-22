#include <iostream>
using namespace std;
//Nombre de la clase
class Persona{
	//atributos
protected :
	string  cui,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	bool genero;
//constructor
	Persona(){
	}
	Persona(string c,string nom,string ape,string dire,string fn, int tel, bool g){
		cui=c;
		nombres=nom;
		apellidos=ape;
		direccion=dire;
		fecha_nacimiento=fn;
		telefono=tel;
		genero=g;
	
	}
	//metodos
	void crear();
	void leer();
	void actualizar();
	void borrar();
}; 
