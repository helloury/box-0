#ifndef ESFERA_H_

#define ESFERA_H_

class Esfera {
private:
double raio; // > 0.0
public:
Esfera();
bool setRaio(double);
double getRaio()const;
double calculaAreaTotal()const;
double calculaVolume()const;
};
#endif /* ESFERA_H_ 


*/#include "Cilindro.h"

Cilindro::Cilindro(){
raio = 1.0;
}
bool Cilindro::setRaio(double aux){
if(aux <= 0.0) return false;
raio = aux;
return true;
}
double Cilindro::getRaio()const{
return raio;
}
double Cilindro::calculaArealateral()const{
return (2*3.14*raio*altura);
}

double Cilindro::calculaAreaTotal()const{
return (2*3.14*raio*(altura+raio));
}
double Cilindro::calculaVolume()const{
return (3.14*raio*raio*altura);
}



#ifndef TESTACILINDRO_H_
#define TESTACILINDRO_H_
#include "Cilindro.h"
#include <iostream>
using namespace std;
class TestaCilindro {
private:
Esfera obj;
public:
void menu();
};
#endif /* TESTACILInDRO_H_ */


#testaCilindro.h
double valor;
do{
cout << "Digite:\n";
cout << "1 - Definir o valor do raio da esfera.\
n";
cout << "2 - Mostrar o valor do raio da esfera.\
n";
cout << "3 - Calcular a área da casca da esfera.\
n";
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



using namespace std;
#include
"TestaEsfera.h"
int main() {
TestaEsfera obj;
obj.menu();
return 0;
}

