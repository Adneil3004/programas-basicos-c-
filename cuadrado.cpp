#include <iostream>

using namespace std;

int main()
{
    
    float  lado, res;
    
    lado=0;
    res=0;
    
    
    cout << "Insarta medida de un lado de tu cuadrado"<<endl;
    cin>>lado;
    cout << "Area cuadrado" <<endl;
    res = lado*lado;
    cout << "Area: " <<res<<endl;
    cout << "Perimetro cuadrado" <<endl;
    res = lado*4;
    cout << "Perimetro: " <<res<<endl;
    
    
    cin.get();
    return 0;
    
}