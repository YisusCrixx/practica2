#include <iostream>

#include <iostream>

using namespace std;

int SumDivisores(int ); // calcula la suma de los dividores del numero ingresado

int main()
{
    int num,count=2,valor,suma=0,aux;
    cout << "Escribe un numero:";
    cin>>num;
    while(count<num){
        valor=SumDivisores(count);
        aux=SumDivisores(valor);
        if(aux==count){
            suma=suma+count;
        }
        count++;
    }
    cout<<"El resultado de la suma es:"<<suma<<endl;
    return 0;
}
int SumDivisores(int num)
{
    int count=1,suma=0;
    while(count<num){
        if(num%count==0)suma=suma+count;
        count++;
    }
    return suma;
}

