
#include <iostream>

using namespace std;

int main()
{
    
    int a, b;
    float res;
    
    a=5;
    b=6;
    res=0;
    
    cout << "Suma: " <<a<<" + "<<b<<" = "<<endl;
    res =a+b;
    cout << res <<endl;
    
    cout << "Resta: " <<a<<" - "<<b<<" = "<<endl;
    res =a-b;
    cout << res <<endl;
    
    cout << "Multiplicacion: " <<a<<" * "<<b<<" = "<<endl;
    res =a*b;
    cout << res <<endl;
    
    cout << "division: " <<a<<" / "<<b<<" = "<<endl;
    res =(float)a/b;
    cout << res <<endl;
    
    cin.get();
    return 0;
    
}
