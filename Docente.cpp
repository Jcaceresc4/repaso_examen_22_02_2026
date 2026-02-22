#include "Persona.cpp"
#include <iostream>


using namespace std;
class Docente : Persona{
	//atributos 
	private :
		string codigo, nit, profesion;
		float salario;
	//constructor
	public :
		Docente(){
		}
		Docente(string c,string nom,string ape,string dire,string fn, int tel, bool g, string cod, string n, string p, float s) : Persona(c,nom,ape,dire,fn,tel,g){
			codigo=cod;
			nit=n;
			profesion=p;
			salario=s;			
		}
	//set
	//metodos
	void setCui(string c){cui = c;	}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dire){direccion = dire;}
	void setTelefono(int tel){telefono = tel;}
	void setGenero(bool g){genero=g;}
	void setCodigo(string cod){codigo=cod;}
	void setNit(string n){nit=n;}
	void setProfesion(string p){profesion=p;}
	void setSalario(float s){salario=s;}
	//get
	void getCui(string c){cui = c;	}
	void getNombres(string nom){nombres = nom;}
	void getApellidos(string ape){apellidos = ape;}
	void getDireccion(string dire){direccion = dire;}
	void getTelefono(int tel){telefono = tel;}
	void getGenero(bool g){genero=g;}
	void getCodigo(string cod){codigo=cod;}
	void getNit(string n){nit=n;}
	void getProfesion(string p){profesion=p;}
	void getSalario(float s){salario=s;}
	//mostrar 
	void mostrar(){
		cout<<"_________________________"<<endl;
		cout<<cui<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<genero<<","<<codigo<<","<<nit<<","<<profesion<<","<<salario<<endl;
	}
		void leer();
};

