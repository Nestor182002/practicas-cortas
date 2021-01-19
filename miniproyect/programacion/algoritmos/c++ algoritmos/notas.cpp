#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    
    float not1,not2,not3,fin1,fin2,fin3,total,notas2,notas2com;
    char nombre[30];
    
    cout<<"cual es su nombre"<<endl;cin>>nombre;
    
    cout<<"nota 1-del 1 al 5"<<endl;cin>>not1;
     cout<<"nota 2"<<endl;cin>>not2;
      cout<<"nota 3"<<endl;cin>>not3;
      
      fin1=not1*0.30;
      fin2=not2*0.40;
      fin3=not3*0.30;
      
      total=fin1+fin2+fin3;
      
      notas2=not1+not2/2;
      
      
      cout<<"estudiante "<<nombre<<" su nota es: "<<endl;
      cout<<"su resultado es:  ";
       
                if (total>=3){
                    cout<<"tiene nota es aprobatoria"<<endl;
                    }
                    else if(total<3) {
                    cout<<"no aprobado"<<endl;
                    }
      if(notas2>=3){
                    cout<<"con las dos primeras notas aprobo"<<endl;
                    cout<<"que era: "<<notas2<<endl;
                    }
      else if(notas2<3){
           cout<<"no aprueba con las dos primeras notas"<<endl;
           cout<<"que era: "<<notas2<<endl;
           
           notas2com=3-notas2;
           
           cout<<"lo minimo que le faltaba es: "<<notas2com<<endl;
           
           }
           
           
      
    
    
    system("pause");
    
    }
