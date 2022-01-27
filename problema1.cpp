#include <iostream>

using namespace std;
#define hour NULL
#include <time.h>
void problema1();
int main()
{
    problema1();
}
void problema1(){
    srand(time(NULL)) ;
    int contador = 0 ;
    char arreglo_random[200], letra_mayus[]="QWERTYUIOPASDFGHJKLZXCVBNM" ;   //Tamaño del arreglo:26



    for( int i = 0 ; i < 200 ; i++ ){               //Ciclo que recorre y llena el arreglo de caracteres random

        char l_mayus = letra_mayus[ rand() % 26 ] ;     //Letra mayuscula aleatoria

        arreglo_random[i] = l_mayus ;

    }


    cout << endl << " Arreglo Aleatorio:" << endl ;

    for( int c = 0 ; c < 200 ; c++ ){           //Ciclo que imprime el arreglo aleatorio creado

        cout << arreglo_random[c] ;

    }

    cout << endl << endl ;

    for( int i = 0 ; i < 26 ; i++ ){          //Ciclo que recorrera el arreglo aleatorio y busca los caracteres repetidos

        char letra = letra_mayus[i] ;

        for( int a = 0 ; a < 200 ; a++ ){       //El primero obtiene el caracter y el segundo lo compara en el A.random

            char letra2 = arreglo_random[a] ;

            if( letra == letra2 ){

                contador++ ;

            }

        }

        cout << " La letra " << letra << " se repite: " << contador << " veces." << endl ;

        contador = 0 ;

    }

    cout << endl ;

}
