#include<iostream>
#include<conio.h>
using namespace std;

int sumas (int a,int b, int c)
{
return a + b + c;    
}

int main(){
    
    int x,y,z,resultado;
        
        cout<<"cual es el primer numero? "<<endl;
        cin>>x;
         cout<<"cual es elsegundo numero? "<<endl;
        cin>>y;
         cout<<"cual es eltercero numero? "<<endl;
        cin>>z;
        
       resultado =   sumas(x,y,z);
        
        cout<<"la suma es : "<<resultado<<endl;
                   
    system("pause");
    }
