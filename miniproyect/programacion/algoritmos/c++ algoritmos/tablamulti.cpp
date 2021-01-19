#include"iostream"

using namespace std;

int main(){
    
    int numero,i,multi,resultado;
    
    cout<<"digite un numero del uno al diez"<<endl;
    cin>>numero;
    
    for(multi=1,i=10;multi<=i;multi++){
    
    resultado=numero*multi;
     
    cout<<numero<<"*"<<multi<<"="<<resultado<<endl;
    
}
    system("pause");
    
    }
