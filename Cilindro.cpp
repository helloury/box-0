//Cilindro.h
#ifndef CILINDRO_H_
#define CILINDRO_H_

class Cilindro {
	private:
	double Raio,Altura;
	public:
	Cilindro();
	virtual ~Cilindro();
	bool setRaio(double);
	bool setAltura(double);
	double getRaio()const;
	double getAltura()const;
	double calculaAreaLateral()const;
	double calculaAreaTotal()const;
	double calculaVolume()const;
};

#endif /* CILINDRO_H_ */
 
//Cilindro.cpp
#include "Cilindro.h"

Cilindro::Cilindro() {
	// TODO Auto-generated constructor stub
	Raio= 1.0;
	Altura = 1.0;
}

Cilindro::~Cilindro() {
	// TODO Auto-generated destructor stub
}
bool Cilindro::setRaio(double aux){
if(aux <= 0.0) return false;
Raio = aux;
return true;
}
bool Cilindro::setAltura(double aux){
	if(aux<=0.0) return false;
	Altura=aux;
	return true;
}
double Cilindro::getRaio()const{
return Raio;
}
double Cilindro::getAltura()const{
	return Altura;
}

double Cilindro::calculaAreaLateral()const{
return (2*3.14*Raio*Altura);
}

double Cilindro::calculaAreaTotal()const{
return (2*3.14*Raio*(Altura+Raio));
}
double Cilindro::calculaVolume()const{
return (3.14*Raio*Raio*Altura);
}

//TestaCilindro.h
#ifndef TESTACILINDRO_H_
#define TESTACILINDRO_H_
#include "Cilindro.h"
#include <iostream>

class TestaCilindro {
public:
	TestaCilindro();
	virtual ~TestaCilindro();
	void menu();
private:
Cilindro obj;
};

#endif /* TESTACILINDRO_H_ */

//TestaCilindro.cpp
#include "TestaCilindro.h"
void TestaCilindro::menu(){
	int op;
TestaCilindro::TestaCilindro() {
	// TODO Auto-generated constructor stub

}

TestaCilindro::~TestaCilindro() {
	// TODO Auto-generated destructor stub
}
double valor;
do{
cout << "Digite:\n";
cout << "1 - Definir o valor do raio do Cilindro .\n";
cout << "2 - Definir o valor da altura do Cilindro . \n";
cout << "3 - Mostrar o valor do raio do Cilindro .\n";
cout << "4 - Mostrar a altura do Cilindro . \n";
cout << "5 - Calcular a área lateral do Cilindro .\n";
cout<<  "6 - Calcular a area total do Cilindro .\n";
cout << "7 - Calcular o volume do Cilindro.\n";
cout << "8 - Encerrar.\n";
cin >> op;
switch(op){
case 1: // definir raio
do{
cout << "Raio: ";
cin >> valor;
}while(!obj.setRaio(valor));
case 2: //definir altura
	do{
		cout<<"Altura: ";
		cin>>valor;
	}while(obj.setAltura(valor)==false)
case 3: // mostrar raio
cout << "Raio do Cilindro é " << obj.getRaio() << endl;
break;
case  4: //mostrar altura
	cout<< "Altura do cilindro é "<<obj.getAltura()<<endl;
case  5: //area lateral
	cout<<"Area lateral do cilindro é "<<obj.calculaAreaLateral()<<endl;
case 6: // áreatotal
cout << "Área total do Cilindro é " << obj.calculaAreaTotal() << endl;
break;
case 7: // volume
cout << "Volume do Cilindro é " << obj.calculaVolume() << endl;
break;
case 8: // encerrar
cout << "Programa encerrando!!!\n";
break;
default: // opções inválidas
 cout << "Opção inválida!!!" << endl;
}
}while(op != 8);
}

//Int man cpp
#include <iostream>
#include "TestaCilindro.h"
using namespace std;

int main() {
	TestaCilindro obj;
	obj.menu();
	return 0;
}

