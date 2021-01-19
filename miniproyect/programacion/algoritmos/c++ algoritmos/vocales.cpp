#include<iostream>

using namespace std;

int main(){
    
    char vocal;
    
    cout<<"ingrese un caracter"<<endl;
    cin>>vocal;
    
    switch(vocal){
                  case 'a':
                       case 'e':
                            case 'i':
                                 case 'o':
                                      case 'u': cout<<"es una vocal minuscula"<<endl;
                                      break;
                  case 'A':
                       case 'E':
                            case 'I':
                                 case 'O':
                                      case 'U': cout<<"es una vocal mayuscula"<<endl;
                                         break;
                                         
                                         default: cout<<"que digitaste"<<endl;
                                         break;
                                         }                                    
     
     system("pause");
     
     }                 
                              
