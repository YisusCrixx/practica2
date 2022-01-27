#include <iostream>

using namespace std;
long long int problema4(char *c);
int main()
{
    char a[]={'1','2','3'};
    int entero=problema4(a);
    cout<<"cadena convertida:"<<entero<<endl;
}


long long int problema3(char *c){

    long long int n_entero = 0 , conversion ;

    for( int i = 0 ; *( c + i ) != '\0' ; i++ ){

        conversion = int( *( c + i ) ) - 48 ;           //restamos 48 para obtener el numero de char a int

        n_entero = ( n_entero*10 ) + conversion ;       //Con esta linea obtenemos lo ingresado

    }

    return n_entero ;

}
