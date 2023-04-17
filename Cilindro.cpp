#ifndef CILINDRO_H_
#define CILINDRO_H_

class Cilindro {
public:
	Cilindro();
	virtual ~Cilindro();
	private:
	double raio; // > 0.0
	public:
	bool setRaio(double);
	bool setAltura(double);
	double getRaio()const;
	double getAltura()const;
	double calculaAreaLateral()const;
	double calculaAreaTotal()const;
	double calculaVolume()const;
};

#endif /* CILINDRO_H_ */


#include "Cilindro.h"

Cilindro::Cilindro() {
	// TODO Auto-generated constructor stub
	Raio = 1.0;
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

double Cilindro::calculaArealateral()const{
return (2*3.14*Raio*Altura);
}

double Cilindro::calculaAreaTotal()const{
return (2*3.14*Raio*(Altura+Raio));
}
double Cilindro::calculaVolume()const{
return (3.14*Raio*Raio*Altura);
}


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


#include "TestaCilindro.h"

TestaCilindro::TestaCilindro() {
	// TODO Auto-generated constructor stub

}

TestaCilindro::~TestaCilindro() {
	// TODO Auto-generated destructor stub
}
double valor;
do{
cout << "Digite:\n";
cout << "1 - Definir o valor do raio da .\n";
cout << "2 - Mostrar o valor do raio da .\n";
cout << "3 - Calcular a área da casca da .\n";
cout << "4 - Calcular o volume da esfera.\n";
cout << "5 - Encerrar.\n";
cin >> op;
switch(op){
case 1: // definir raio
do{
cout << "Raio: ";
cin >> valor;
}while(!obj.setRaio(valor));
case 2: // mostrar raio
cout << "Raio da esfera é " << obj.getRaio() << endl;
break;
case  : //
case 3: // área
cout << "Área da casca da esfera é " << obj.calculaAreaTotal() << endl;
break;
case 4: // volume
cout << "Volume da esfera é " << obj.calculaVolume() << endl;
break;
case 5: // encerrar
cout << "Programa encerrando!!!\n";
break;
default: // opções inválidas
 cout << "Opção inválida!!!" << endl;
}
}while(op != 5);
}
