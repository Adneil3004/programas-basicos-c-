
#include <iostream>

using namespace std;

bool validaNum (float num)
{
    if (num>0)
        return true;
    else
        return false;
}

float Operacion (float a,float b,float c)
{
    return ((2* a)*(3*c))/(2*b);
}

float AreaRect (float a,float b)
{
    return b*a;
}

float AreaCir (float r)
{
    return 3.141516*(r*r);
}

int main()
{
    int s =0;
    int opc= 0;
    float a,b,c;
    do{
        
       cout << "Menu" << endl;
       cout << "--------------------------------" << endl;
       cout << "1.- Operacion " << endl;
       cout << "2.- Area rectangulo" << endl;
       cout << "3.- Area Cirulo" << endl;
       cout << "4.-Salir " << endl;
       
       cout << "Que desea hacer?" << endl;
       cin >> opc;
       
       switch(opc)
       {
           case(1):
                cout << "Inserte numero A" << endl;
                cin >> a;
                 cout << "Inserte numero B" << endl;
                cin >> b;
                 cout << "Inserte numero C" << endl;
                cin >> c;
               
                if(validaNum(a) && validaNum(b) && validaNum(c))
                  cout<<"2A*3C/2C = "<<Operacion (a, b, c)<<endl;
                else
                  cout << "Solo introducir numeros mayores a 0" << endl;
                    
            
                
           break;
           case(2):
                cout << "Inserte Altura" << endl;
                 cin >> a;
                cout << "Inserte Base" << endl;
                 cin >> b;
                 
                 if(validaNum(a) && validaNum(b) )
                  cout<<"Area rectangulo = "<<AreaRect (a, b )<<endl;
                else
                  cout << "Solo introducir numeros mayores a 0" << endl;
                 
                
           break;
            case(3):
                 cout << "Inserte Radio" << endl;
                 cin >> a;
                 if(validaNum(a))
                  cout<<"Area Cirulo = "<<AreaCir (a )<<endl;
                 else
                  cout << "Solo introducir numeros mayores a 0" << endl;
                 
           break;
            case(4):
             s=1;
           break;
           default:
                cout << "Elija una opcion" << endl;
            break;
       
       }
       
    } while(s==0);
}

