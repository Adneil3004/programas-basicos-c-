
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
    int i=a;
    int j=0;
    while ( i<=b)
    {
       if(i>1)
       {
           j=1;
           while( j<=i )
           {
               if(i%j==0)
               { e++;}
            
                j++;
           }
           
           if(e==2)
            { cout << i<<", ";}
       }
       
       e=0;
       i++;
    }
    
    cin.get();
    return 0;
}