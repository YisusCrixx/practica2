#include <iostream>

using namespace std;

bool Multiplo(int,int); // mira si la lingitud de la cadena numerica y el numero ingresado son multiplos
int LongString(int []); // calcula la longirud de la cadena de caracteres
void DividList(int [],int,int,int); // divide la lista en la cantidad de terminos ingresados por el usuario

int main()
{
    int cadena[12]={7,6,8,7,1,2,9,3,6,5,4,8},num,len,count=1;
    cout<<"Escribe un numero:";
    cin>>num;
    len=LongString(cadena)-1;// longitud de la cadena de caracteres
    if(Multiplo(len,num)==true)DividList(cadena,len,count,num);
    else {
        while(Multiplo(len,num)==false){
            cout<<0;
            len++;
            count++;
        }
        len=LongString(cadena)-1;
        DividList(cadena,len,count,num);
    }
    return 0;
}
int LongString(int palabra[30])
{
    int count=0;
    while(palabra[count]!='\0')count++;  // itera hasta \0(significa salto de linea en el arreglo)
    return count;
}
bool Multiplo(int n,int a)
{
    /*retorna un valor logico de true si la lingitud de la cadena numerica y el numero ingresado son multiplos
     de lo contrario retorna false*/
    if(n%a==0)return true;
    else return false;
}
void DividList(int cadena[],int len,int count,int num){
    int suma=0,total=0;
    for(int i=0;i<len;i++){
        cout<<cadena[i];
        if(count<=num){
            suma=suma+cadena[i];
            suma=suma*10;
        }
        if(count==num){
            if(i<len-1)cout<<'+';
            count=0;
            total=total+(suma/10);
            suma=0;
        }
        count++;
    }
    cout<<':'<<total<<endl;
}

