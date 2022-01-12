#include <iostream>

using namespace std;

int main()
{
    
    float  bs, al, res;
    
    bs=0;
    al=0;
    res=0;
    
    cout << "Calcula area triangulo" <<endl;
    cout << "Cual es la base: "<<endl;
    cin>>bs;
    cout << "Cual es la altura: "<<endl;
    cin>>al;
    res = (bs*al)/2;
    cout << "Area: " <<res<<endl;
    
    
    cin.get();
    return 0;
    
}