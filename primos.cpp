
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, res;
    
    cout<<"Valida numeros"<<endl;
    cout<<"Ingresa A"<<endl;
    cin>> a;
    
    cout<<"Ingresa B"<<endl;
    cin>> b;
    
    if(a>b)
        cout<<"A no puede ser menor a B"<<endl;
    
    if(a<=0)
        cout<<"A no puede ser menor a 0"<<endl;
    
    if(a<=0)
        cout<<"B no puede ser menor a 0"<<endl;
    
    e=0;
    for (int i = a; i<=b; i++)
    {
       if(i>1)
       {
           for (int j = 1; j<=i; j++)
           {
               if(i%j==0)
                e++;
           }
           
           if(e==2)
            { cout << i<<", ";}
       }
       
       e=0;
    }
    
    cin.get();
    return 0;
}