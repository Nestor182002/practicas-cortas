#include<iostream>
#include<conio.h>
using namespace std;

void sumas ()
{
           int a, b, aux;
           
           cout<<"cual es el primer numero? "<<endl;
           cin>>a;
           cout<<"cual es elsegundo numero? "<<endl;
           cin>>b;
        
           cout<<"a:"<<a<<endl;
           cout<<"b:"<<b<<endl;
           
           aux = a;
           a = b;
           b = aux;
           
    cout <<   "intercambio de a es: " << a << endl;
    cout <<   "intercambio de b es: " << b << endl;
}

int main(){
    sumas();
                   
    system("pause");
    }
