#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, e, res;
    
    cout<<"Piramide"<<endl;
    cout<<"Ingresa Lado"<<endl;
    cin>> a;
    
    cout<<"Ingresa Altura"<<endl;
    cin>> b;
    
    if(a<=0)
        cout<<"A no puede ser menor a 0"<<endl;
    
    if(a<=0)
        cout<<"B no puede ser menor a 0"<<endl;
    
    res = ((a*a)*b)/3;
    
    cout<<"Resultado: "<<res;
    
    cin.get();
    return 0;
}