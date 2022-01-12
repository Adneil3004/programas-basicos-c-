#include <iostream>

using namespace std;

int main()
{
    
    float  rad, pi, res;
    
    rad=23.4;
    pi=3.1416;
    res=0;
    
    cout << "Area cirulo" <<endl;
    cout << "Radio: " <<rad<<endl;
    res = pi *(rad*rad);
    cout << "Area: " <<res<<endl;
    
    
    cin.get();
    return 0;
    
}