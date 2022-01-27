#include <iostream>

using namespace std;

void MostrarMatriz(int (*imagen)[8]); // imprime la matriz
int ContarEstrellas(int (*imagen)[8]); // calcula el numero de estrellas en la imagen con la formula dada

int main()
{
    int imagen[6][8]={
                         {0,3,4,0,0,0,6,8},
                         {5,13,6,0,0,0,2,3},
                         {2,6,2,7,3,0,10,0},
                         {0,0,4,15,4,1,6,0},
                         {0,0,7,12,6,9,10,4},
                         {5,0,6,10,6,4,8,0},
                         };

    MostrarMatriz(imagen);
    cout<<endl<<ContarEstrellas(imagen)<<" estrellas encontradas en la imagen"<<endl;
    return 0;
}
void MostrarMatriz(int (*imagen)[8]){
    cout<<"Imagen:"<<endl<<endl;
    for(int i=0;i<6;i++){
        for(int j=0;j<8;j++){
            if(*(*(imagen+i)+j)<=9)cout<<"| "<<*(*(imagen+i)+j)<<'|';
            else cout<<'|'<<*(*(imagen+i)+j)<<'|';
        }
        cout<<endl;
    }
}
int ContarEstrellas(int (*imagen)[8])
{
    int estrella,count=0;
    for(int i=1;i<5;i++){
        for(int j=1;j<7;j++){
            estrella=((*(*(imagen+i))+j)+(*(*(imagen+i))+(j-1))+(*(*(imagen+i))+(j+1))+(*(*(imagen+(i-1)))+j)+(*(*(imagen+(i+1)))+j))/5;
            if(estrella>6)count++;
        }
    }
    return count;
}

