#include<iostream>

using namespace std;

int main(){
    
    float a,b,c,d,e,f,resultado=0;
    
    cout<<"digite el primer numero"<<endl;
    cin>>a;
    
    cout<<"digite el segundo numero"<<endl;
    cin>>b;
    
     cout<<"digite el tercer numero"<<endl;
    cin>>c;
    
     cout<<"digite el cuarto numero"<<endl;
    cin>>d;
    
     cout<<"digite el quinto numero"<<endl;
    cin>>e;
    
     cout<<"digite el sexto numero"<<endl;
    cin>>f;
    
    resultado=a+b/c/d+e/f;
    
    cout<<"el resultado es: "<<resultado<<endl;
    
    system("pause");
    return 0;
}
