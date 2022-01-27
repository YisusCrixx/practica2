#include <iostream>

using namespace std;
void problema5(char *);
int longitud( char *);
int main(){
    char c[]={'b','a','n','a','n','a','s'};
        problema5( c ) ;
}

void problema5( char *ar ){

    int coincidencia1 = 0, coincidencia2 = 0, n, pos = 0 ;

    n = longitud( ar ) ;

    char sin_repetir[n] ;

    for( int i = 0 ; i < n ; i++ ){     //Rellenamos el arreglo con caracteres espacio

        *( sin_repetir + i ) = ' ' ;

    }

    for( int i = 0 ; *( ar + i ) != '\0' ; i++ ){      //Ciclo que se mueve un caracter a la vez



        for( int e = 0 ; *( ar + e ) != '\0' ; e++ ){   //Ciclo que recorre todo el arreglo

            if( *( ar + i ) == *( ar + e ) ){       //Revisa si hay coincidencia. c1 ==1 si la letra no se repite mas de 1 vez

                coincidencia1++ ;
            }

        }

        if( coincidencia1 == 1 ){               //Si no se repite, lo guarda direcamente

            *( sin_repetir + pos ) = *( ar + i ) ;

            pos = pos + 1 ;     //Actualizamos la posicion


        }
        else if( coincidencia1 > 1 ){       //Si se repite, realiza este nuevo cilo
                                            //Y mira otra vez si el caracter esta en los que no se repiten

            for( int a = 0 ; a < n ; a++ ){

                if( *( ar + i ) == sin_repetir[a] ){

                    coincidencia2++ ;

                }

            }

            if( coincidencia2 == 0 ){       //Si la letra se repite PERO no esta en el arreglo de sin repetecion, lo guarda

                *( sin_repetir + pos ) = *( ar + i ) ;

                pos = pos + 1 ;

            }

        }

        coincidencia1 = 0 ;
        coincidencia2 = 0 ;

    }

    cout << endl << " Arreglo Original: " ;

    for( int i = 0 ; *( ar + i ) != '\0' ; i++ ){

        cout << *( ar + i ) ;
    }

    cout << endl << endl << " Sin repetidos: " ;

    for( int t = 0 ; t < n ; t++ ){


        cout << sin_repetir[t] ;
    }

    cout << endl << endl ;


}

int longitud( char *arreglo ){

    int i = 0 ;

    for(  ; *( arreglo + i ) != '\0' ; i++ ){

        //Ciclo que se repite las veces que se cumple la condicion
    }

    return i+1;

}
