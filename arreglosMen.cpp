
#include <iostream>

using namespace std;

void multiplicaciones()
{
    int mult[10][10];
    
    cout <<" Multiplicaciones "<<endl;
    cout <<"---------------------------------------"<<endl;
    
    for (int i = 9;i>=0;i--) 
    {
       for (int j = 9; j>=0;j--)
       {
         mult[i][j] = (i+1)*(j+1);
         cout << (i+1) <<" por " << (j+1) <<" es igual " << mult[i][j]  <<endl;
       }
       
       cout <<"---------------------------------------"<<endl;
    }
    
}

void temperatura()
{
    float mult[373][3];
    
    cout <<" Equivalencias de grados"<<endl;
    cout <<"---------------------------------------"<<endl;
    
    for (int i = 0;i<373;i++) 
    {
        mult[i][0] =i ;
        mult[i][1] =(float)i - 273.15;
        mult[i][2] =((float)i - 273.15)*9/5+32 ;
        
        cout<< mult[i][0]<<"° Kelvin "<< mult[i][1] <<"° Centigrados "<< mult[i][2] <<"° fahrenheit "<<endl;
     
    }
    
}


int numMenor(int arr[20])
{
    int min=0;
    min =arr[0];
    
     for(int i =0; i<20; i++)
     {
         if (arr[i] < min) 
            min = arr[i];
     }
     
    return min;
}


int numMayor(int arr[20])
{
    int max=0;
    max =arr[0];
    
     for(int i =0; i<20; i++)
     {
         if (arr[i] > max) 
            max = arr[i];
     }
     
    return max;
}

void ArrMayorMenor ()
{
   int arr [20];
   
   cout<<"Inserte 20 numeros"<<endl;
   for(int i =0; i<20; i++)
        cin >> arr[i];
    
    
    cout<<"El numero mas chico es "<<numMenor(arr)<<endl;
    cout<<"El numero mas grande es "<<numMayor(arr)<<endl;
}

int main()
{
   int cls =0;
   int opc =0;
   do
   {
      cout<<"-------------------------------"<<endl;
      cout<<"Menu"<<endl;
      cout<<"1) Multiplicaciones"<<endl;
      cout<<"2) temperatura"<<endl;
      cout<<"3) Numero Mayor"<<endl;
      cout<<"4) Salir"<<endl;
      
      cout<<"Que desea hacer??"<<endl;
      cin >> opc;
      
      cout<<"-------------------------------"<<endl;
      switch (opc)
      {
          case 1:
            multiplicaciones();
          break;
          
          case 2:
            temperatura();
          break;
          
          case 3:
            ArrMayorMenor();
          break;
          
          case 4:
           cls=1;
          break;
          
      }
       
   }while(cls==0);
   
    return 0;
}
