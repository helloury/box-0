#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int s,b,a,s1,b1,a1,n;
    float sum1=0.0,sum2=0.0,sum3=0.0,dif1=0.0,dif2=0.0,dif3=0.0;
    string nome;
    
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>nome;
        cin>>s;
        cin>>b;
        cin>>a;
        sum1+=s;
        sum2+=b;
        sum3+=a;
        cin>>s1;
        cin>>b1;
        cin>>a1;
        dif1+=s1;
        dif2+=b1;
        dif3+=a1;
    }
    cout<<"Pontos de Saque: "<<fixed<<setprecision(2)<<(dif1/sum1)*100<<" %.\n";
    cout<<"Pontos de Bloqueio: "<<fixed<<setprecision(2)<<(dif2/sum2)*100<<" %.\n";
    cout<<"Pontos de Ataque: "<<fixed<<setprecision(2)<<(dif3/sum3)*100<<" %.\n";
    
 
    return 0;
}
