#include "Persona.cpp"
#include <iostream>

using namespace std;
class Estudiante : Persona{
	private :
		//atributos
		string carnet;
	//contructor 
	public : 
		Estudiante(){
		}
		Estudiante(string c,string nom,string ape,string dire,string fn, int tel, bool g, string car) : Persona(c,nom,ape,dire,fn,tel,g){
			carnet=car;		
		}
//metodos 
//set (modificar)
	void setCui(string c){cui = c;	}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;	}
	void setTelefono(int tel){telefono = tel;	}
	void setGenero(bool g){genero=g; }
	void setCarnet(string car){carnet=car;}
//get
	void getCui(string c){cui = c;	}
	void getNombres(string nom){nombres = nom;}
	void getApellidos(string ape){apellidos = ape;}
	void getDireccion(string dir){direccion = dir;	}
	void getTelefono(int tel){telefono = tel;	}
	void getGenero(bool g){genero=g; }
	void getCarnet(string car){carnet=car;}
	//mostrar 
	void leer(){
		cout<<"_________________________"<<endl;
		cout<<cui<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<genero<<","<<carnet<<endl;
	}
};
