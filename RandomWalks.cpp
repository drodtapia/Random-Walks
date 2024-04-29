#include<iostream>
#include<string.h>
#include<cmath>
#include <Windows.h> 
using namespace std;

double factorial(double p); //Se definen la funciones que se utilizaran
double combinatoria(double n, double k);

int main()
{   
    SetConsoleOutputCP(65001);
    cout<<"\nKorone y Calli\n "<<endl;
    double mas_c=0,mas_k=0,menos_c=0,menos_k=0,interrogacion_k=0; // Se crean las variables utilizadas
    char listac[11]= {'0','1','2','3','4','5','6','7','8','9','\0'}; //Se crean 2 listas a la que se le
    char listak[11]= {'0','1','2','3','4','5','6','7','8','9','\0'}; // pueden ingresar maximo 10 caracteres
    cout<<"Notas: ·Los comandos permitidos son (+,-), por favor ingrese como maximo 10\n"
          "       ·Los comandos deben ir sin espacios entre sì\n"
          "       ·Cualquier otro tipo de caracter puede ocasionar errores\n"<<endl;
    cout<<"Ingrese la lista de comandos que envia Calli:   ";
    cin>>listac;

    while(strlen(listac)>10) // Mientras se excedan del màximo permitido se arrojara un mensaje de error
    {
        cout<<"Error! El maximo es de 10 comandos, por favor intente nuevamente"<<endl;
        cout<<"Ingrese  la  lista  de  comandos  que  envia  Calli:  ";
        cin>>listac;
        cout<<endl;
    }

    cout<<"\nNotas: ·Los comandos permitidos son (+,-,?)\n"
          "       ·La cantidad de comandos debe ser igual que la anterior\n"
          "       ·Asegurese de que los comandos de la siguiente lista difieran de la anterior\n"
          "        solo en los signos ? con los que remplazarà algunos de los caràcteres + y - indicados anteriormente,\n"
          "        si ingresa un orden diferente o comandos distintos entre sì puede ocasionar errores\n"<<endl;
    cout<<"Ingrese las lista de comandos que recibe Korone: ";
    cin>>listak;

   while(strlen(listak)!=strlen(listac)) //Si ingresan una cantidad de comandos diferente a la anterior se arroja un error
        {
        cout<<"Error! La cantidad de comandos no coincide, por favor intente nuevamente"<<endl;
        cout<<"Ingrese las lista de comandos que recibe Korone: ";
        cin>>listak;
        cout<<endl;
        cout<<"Nùmero de comandos que ingreso Calli :"<<strlen(listac)<<endl; //Se entrega el numero de comandos de la lista anterior para saber  cuantos comandos debe ingresar
        }

    int lenc = strlen(listac); //se guarda el largo de las listas
    int lenk = strlen(listak);
    for(int i=0;i<lenc;i++)
    {
        switch(listac[i])
        {
            case '+': mas_c++; //Se almacenan la cantidad de simbolos respectivamente
            break;
            case '-': menos_c++;
            break;
        }
    }

    for(int j=0;j<lenk;j++)
    {
        switch(listak[j])
        {
            case '+': mas_k++;
            break;
            case '-': menos_k++;
            break;
            case '?': interrogacion_k++;
            break;

        }
    }

    double posicion1 = mas_c-menos_c;  //Se obtiene la posision a la que tendira que llegar Korone con la primera lista
    double posicion2 = mas_k-menos_k;   //Se obtiene la posision a la que llega Korone descartando los signos (?)
    double posicion = fabs(posicion1-posicion2); //Se calcula el valor absoluto de la diferencia de las posiciones anteriores
    double prob = 1/(pow(2,interrogacion_k)); //Se define la probabilidad con la que se mueve Korone dependiendo del numero de signos (?)
    cout<<"La probabilidad de que llegue a la posicion que le mando Calli es: ";
    cout<<combinatoria(interrogacion_k,posicion)*prob<<endl; //Se imprime la propabilidad multiplicada por la cantidad de combinaciones posibles
    cout<<"La probabilidad anterior representada en porcentaje es: ";
    cout<<combinatoria(interrogacion_k,posicion)*prob*100<<"%"<<endl;
    return 0;
}

double factorial(double p) //Se calcula un factorial de forma recursiva
{
    if(p ==0)
    {
        p = 1;
    }
    else
    {
        p = p*factorial(p-1);
    }
    return p;
}
double combinatoria(double n, double k)
{
    double error = n-k; //Se calcula la combinatoria
    if ( error < 0)
    {
        return 0;
    }
    else
    {
        return (factorial(n)/(factorial(k)*factorial(n-k)));
    }

}