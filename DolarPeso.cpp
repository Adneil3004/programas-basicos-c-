#include <iostream>

using namespace std;

int main()
{
    
    float  pes, dol, res;
    
    pes=100;
    dol=20.11;
    res=0;
    
    cout << "Convierte peso a dolar" <<endl;
    cout << "Pesos: " <<pes<<endl;
    res = pes/dol;
    cout << "Dolares: " <<res<<endl;
    
    
    cin.get();
    return 0;
    
}