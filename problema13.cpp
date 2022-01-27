#include <iostream>

using namespace std;

void inter(int*,int*,int*);

int main()
{
    int r2[4],r1[4],r3[4];

    for(int i=0;i<4;i++){  //Ciclo que llena el primer vector
        cout <<"Ingrese valor ["<<i+1<<"] del arreglo 1: ";
        cin >>r1[i];
    }
    cout<<endl;
    for(int i=0;i<4;i++){  //Ciclo que llena el segundo vector
        cout <<"Ingrese valor ["<<i+1<<"] del arreglo 2: ";
        cin >>r2[i];
    }

    inter(r1,r2,r3);  //Llamado de la funcion


    cout << endl <<endl << "Los valores del rectangulo interseccion son:" << endl;
    for(int i=0;i<4;i++) cout << "valor ["<<i+1<<"]: " <<r3[i]<<endl;  //Ciclo que imprime el vector retornado

    return 0;
}

void inter(int*a,int*b,int*c){

    //Comparamos cual rectangulo esta mas hacia la izq (en el eje x), o en su defecto si en el eje x estan en el mismo punto

    if(a[0]<b[0]){
        if(a[0]+a[2]<b[0]) return;  //Verificamos que si se toquen en el eje x

        else{
            c[0]=b[0];  //Declaramos la coordenada x del rectangulo interseccion

            if(a[0]+a[2]<=b[0]+b[2]) c[2]=(a[0]+a[2])-c[0];  //Condicion que evalua cual debe ser el ancho de la interseccion
            else c[2]=b[2]; //Quiere decir que el ancho esta totalmente adentro
        }
    }
    else if(b[0]<a[0]){
        if(b[0]+b[2]<a[0]) return;  //Verificamos que si se toquen en el eje x

        else{
            c[0]=a[0];  //Declaramos la coordenada x del rectangulo interseccion

            if(b[0]+b[2]<=a[0]+a[2]) c[2]=(b[0]+b[2])-c[0];  //Condicion que evalua cual debe ser el ancho de la interseccion
            else c[2]=a[2];
        }
    }
    else{
        c[0]=a[0];  //Declaramos la coordenada x del rectangulo interseccion(en este caso las x son iguales)
        c[2]=min(a[2],b[2]);  //Se evalua cual debe ser el ancho de la interseccion
    }

    //Comparamos cual rectangulo esta mas arriba (en y), o en su defecto si en el eje y estan en el mismo punto

    if(a[1]<b[1]){
        if(a[1]<b[1]-b[3]) return;  //Verificamos que si se toquen en el eje y

        else{
            c[1]=a[1];  //Declaramos la coordenada y del rectangulo interseccion
            if(abs(b[1]-b[3])<=abs(a[1]-a[3])) c[3]=abs((b[1]-b[3])-c[1]);
            //Condicion que evalua cual debe ser el largo de la interseccion
            else c[3]=a[3];
        }
    }
    else if(b[1]<a[1]){
        if(b[1]<a[1]-a[3]) return;  //Verificamos que si se toquen en el eje y

        else{
            c[1]=b[1];  //Declaramos la coordenada y del rectangulo interseccion
            if(abs(a[1]-a[3])<=abs(b[1]-b[3])) c[3]=abs((a[1]-a[3])-c[1]);
            //Condicion que evalua cual debe ser el largo de la interseccion
            else c[3]=b[3];
        }
    }
    else{
        c[1]=a[1];  //Declaramos la coordenada y del rectangulo interseccion(en este caso las y son iguales)
        c[3]=min(a[3],b[3]);  //Se evalua cual debe ser el largo de la interseccion
    }
}
