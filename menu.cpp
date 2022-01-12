
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int  c, d, e;
    float a, b,res;
    e=0;
    do
    {
        cout<<"======================================================================="<<endl;
        cout<<"1) suma"<<endl;
        cout<<"2) resta"<<endl;
        cout<<"3) multiplicar"<<endl;
        cout<<"4) dividir"<<endl;
        cout<<"5) modulo"<<endl;
        cout<<"6) potencia"<<endl;
        cout<<"7) salir"<<endl;
        
        cout<<"Ingrese numero de operacion de desea hacer"<<endl;
        cin>>d;
        
        cout<<"Ingrese numero a"<<endl;
        cin>>a;
        
        cout<<"Ingrese numero a"<<endl;
        cin>>b;
        
        if(d==1)
            cout<<"suma resultado:"<<a+b<<endl;
        else if (d==2)
            cout<<"resta resultado:"<<a-b<<endl;
        else if (d==3)
            cout<<"multiplicar resultado:"<<a*b<<endl;
        else if (d==4)
        {
            if(b==0)
                cout<<"No se puede dividir entre 0"<<endl;
             else
                cout<<"dividir resultado:"<<a/b<<endl;
                
        }
        else if (d==5)
            cout<<"modulo resultado:" << (int)a % (int)b <<endl;
        else if (d==6)
            cout<<"potencia resultado:"<<pow(a,b)<<endl;
        else if (d==7)
            e=1;
        else
            e=0;
        
    }while (e==0);
    
    cin.get();
    return 0;
}
