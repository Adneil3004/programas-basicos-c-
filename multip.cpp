
#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, e, res;
    cout<<"Ingresa A"<<endl;
    cin>> a;
    
    cout<<"Ingresa B"<<endl;
    cin>> b;
    
    cout<<"Ingresa C"<<endl;
    cin>> c;
    
    cout<<"Ingresa D"<<endl;
    cin>> d;
    
    cout<<"Ingresa E"<<endl;
    cin>> e;
    
    if(a<=0)
        cout<<"A no puede ser menor a 0"<<endl;
    
    if(a<=0)
        cout<<"B no puede ser menor a 0"<<endl;
        
    if(b<=0)
        cout<<"C no puede ser menor a 0"<<endl;
        
    if(c<=0)
        cout<<"D no puede ser menor a 0"<<endl;
        
    if(d<=0)
        cout<<"E no puede ser menor a 0"<<endl;

    res = ((2*a)*(3*c)/(2*b))-(4*d)*e;
    
    cout<<"Resultado: "<<res;
    
    cin.get();
    return 0;
}
