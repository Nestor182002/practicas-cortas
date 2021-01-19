#include<iostream>
#include<conio.h>
using namespace std;

int main(){
           float valora;
           
           cout<<"digite el numero para saber su valor absoluto "<<endl;cin>>valora;
           
           if(valora>0){
           cout<<"su valor absoluto es "<<valora<<endl;
           }
           else if(valora<0){
                
                valora-=(valora*2);
                cout<<"su valor absoluto es "<<valora<<endl;
                
                }
                   
    system("pause");
    }
