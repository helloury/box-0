#include <iostream>

using namespace std;

int main()
{
    //se sao numeros negativos
    bool triangulo::setA(double aux)
    {
        if(aux<=0)
        {
            return false;
        }
        return true;
    }
    setB(double aux)
    {
        
    }
    setC(double aux)
    {
        
    }
    getA()const{
        
    }
    //se formam triangulo
    triangulo::formaTriangulo(double a, double b, double c)
    {
        if (a + b <= c||a + c <= b||b + c <= a)
        {
            cout<<"Nao forma um triangulo"<<endl;
            return false; 
        }
        return true 
          
    }
    ladoA = a;
    ladoB = b;
    ladoC = c;
    
   string triangulo::tipoLado()const
   {
       if(ladoA==ladoB and ladoB==ladoC)
       {
           return "equilatero";
       }
       else if(ladoA!=ladoB and ladoB!=ladoC)
       {
           return "escaleno";
       }
       else
       {
           return "isosceles";
       }
   }
   string triangulo::tipoAngulo()const
   {
       if(ladoa*ladoa<ladob*ladob+ladoc*ladoc)
       {
           return "acutangulo";
       }
       else if(ladoa*ladoa>ladob*ladob+ladoc*ladoc)
       {
           return "abtusangulo";
       }
       else
       {
           return "retangulo";
       }
       //principal cpp
       triangulo obj
       double valor
       do{
    cout << "Lado 1 :";
     cin >> valor;
    }while(obj.setLado1(valor) == false);
    do{
     cout << "Lado 2 :";
    cin >> valor;
     }while(obj.setlado2(valor) == false);
     do{
     cout << "Lado 3 :";
    cin >> valor;
     }while(obj.setlado3(valor) == false);
     do{
        cout << "Forma um triangulo " << obj.formaTriangulo() << endl;
        
     cout << "O tipo de triangulo quanto aos lados : " << obj.tipoLado() << endl;
     cout << "O tipo de Triangulo quanto aos angulos : " << obj.tipoAngulo() << endl;
     cout << "A area do triangulo: " << obj.calculaArea() << endl;
     cout << "Digite 0 para encerrar." << endl;
     cout << "Outro inteiro para continuar." << endl
     
       
   }
