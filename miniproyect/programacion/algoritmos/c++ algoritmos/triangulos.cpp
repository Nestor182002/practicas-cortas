#include<iostream>

using namespace std;

int main(){
    double a,b,c;
    
    cout<<"cual es la medida del triangulo? "<<endl;
    cout<<"primer lado: "<<endl;cin>>a;
    cout<<"segundo lado: "<<endl;cin>>b;
    cout<<"tercer lado: "<<endl;cin>>c;
    
    if((a==b)&&(a==c)){
                  cout<<"es un triangulo equilatero,todos sus lados son iguales"<<endl;                          
                  }
    else if((a!=b)&&(a!=c)&&(b!=c)){
                  
                  cout<<"es un triangulo escaleno,todos sus lados son diferentes"<<endl;            
         }
         else{
              
              cout<<"es un triangulo isosceles,tiene dos lados iguales y uno diferente"<<endl;
                            
              }
        
        system("pause");          
    }
