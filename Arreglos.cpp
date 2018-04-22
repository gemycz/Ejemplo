//arreglos calcular sumatoria y promedio 
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

    int a[100]; //declaro arreglo de 4 elementos
    int x, i, n;
    float suma = 0, prom;
    cout<<"CALCULAR EL PROMEDIO DE (N) NUMEROS:\n";
    cout<<"Ingrese en numero de valores a calcular:\n";
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cout<<"Ingrese un valor:\n"<<"a["<<i<<"]:";
        cin>>x;
        a[i]= x;
    }
    for (i=0; i<n; i++)
	{
    	suma = suma + a[i]; // Sumar todas los valores
		prom = suma / n; // Calcular promedio
	}
    for (int i=0; i<n; i++)
    {
        cout<<setw(4)<<a[i]<<"\n";
    }
    cout<<"La suma de los valores es:\n"<<setw(4)<<suma<<endl;
   	cout<< "El promedio de los valores ingresados es:\n"<<setw(4)<<prom<<endl;
}



