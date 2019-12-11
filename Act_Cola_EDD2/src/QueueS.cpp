#include "QueueS.h"
#include <iostream>
using namespace std;

QueueS::QueueS()
{
    cont=0;
    //ctor
}

QueueS::~QueueS()
{
    //dtor
}


void QueueS::insertar()
{
    int n;
    if (cont==10){
        cout<<"La cola esta llena"<<endl;
        return;

    }
    cout<<"Insertar numero: ";
    cin>>n;
    arr[cont]=n;
    cont++;
}

void QueueS::eliminar()
{

    if (cont==0)
        return;

    for(int i=0; i<cont;i++){
            arr[i]=arr[i+1];
    }
    cont--;

}


void QueueS::imprimir(){
    for(int i=0; i<cont;i++){
        cout<<"Numero: "<<arr[i]<<endl;
    }

}
