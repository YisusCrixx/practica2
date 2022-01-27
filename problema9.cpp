#include <iostream>

using namespace std;

void Cine(char [][20]); // llena la matriz

int main()
{
    bool aux=false;
    int op,asiento;
    char cine[15][20],fila;
    while(aux==false){
        cout<<"1.Para reservar escribe 1."<<endl<<"2.Para cancelar reserva escribe 2."<<endl<<"3.Para salir escribe 3."<<endl;
        cout<<"Escribe la opcion a realizar:";
        cin>>op;
        switch(op){
            case 1:
                Cine(cine);
                cout<<"Escribe el numero del asiento asiento que deseas reservar:";
                cin>>asiento;
                cout<<"Escribe la letra del que deseas reservar:";
                cin>>fila;
                if((asiento<=0)||(asiento>20))cout<<endl<<"Asiento incorrecto, intenta nuevamente"<<endl;
                else if((fila<64)||(fila>79))cout<<endl<<"Asiento incorrecto,intenta nuevamente"<<endl;
                else if(cine[(fila-79)*-1][asiento-1]=='+')cout<<endl<<"Este asiento no esta disponible"<<endl<<endl;
                else{
                    cine[(fila-79)*-1][asiento-1]='+';
                    cout<<endl <<"Su reserva ha sido realizada con exito"<<endl<<endl;
                }
            break;
            case 2:
                cout<<endl;
                cout<<"Escribe el numero del asiento asiento que deseas cancelar:";
                cin>>asiento;
                cout<<"Escribe la letra del que deseas cancelar:";
                cin>>fila;
                if((asiento<=0)||(asiento>20))cout<<endl<<"Asiento incorrecto, intenta nuevamente"<<endl;
                else if((fila<64)||(fila>79))cout<<endl<<"Asiento incorrecto, intenta nuevamente"<<endl;
                else if(cine[(fila-79)*-1][asiento-1]=='-')cout<<endl <<"Este asiento no ha sido reservado"<<endl<<endl;
                else{
                    cine[(fila-79)*-1][asiento-1]='-';
                    cout<<endl<<"Su reserva ha sido cancelada con exito"<<endl<<endl;
                }
            break;
            case 3:
                aux=true;
            break;
        }
    }
    return 0;
}
void Cine(char cine[][20])
{
    cout<<endl<<"Asientos disponibles(+)"<<endl<<endl;
    for(int i=1;i<=20;i++){
        if(i<10)cout<<' '<<i<<' ';
        else cout<<i<<' ';
    }
    cout<<endl;
    for(int i=0;i<15;i++){
        for(int j=0;j<20;j++){
            if(cine[i][j]!='+')cine[i][j]='-';
            cout<<'|'<<cine[i][j]<<'|';
        }
        cout<<char(79-i)<<endl;
    }
    cout<<endl;
}
