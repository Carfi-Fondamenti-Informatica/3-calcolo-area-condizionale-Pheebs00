#include <iostream>
using namespace std;
int main(){
    float a=0, b=0, risultato=0;
    int opzione=0;
    cin>>a>>b>>opzione;
    switch(opzione){
        case 0:
            risultato=a*b/2;
            cout<<risultato;
            break;
        case 1:
            risultato=a*a;
            cout<<risultato;
            break;
        case 2:
            risultato=a*b;
            cout<<risultato;
            break;
        default:
            cout<<"opzione non valida"<<endl;
    }
    return 0;
}
