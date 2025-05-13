#include <headers/register.h>

void registro::menu(int &op)
{
    cout<<"-------Menu de Opciones--------"<<endl;
    cout<<"------Registrar Vehiculos---[1]-"<<endl;
    cout<<"------Registrar Clientes----[2]-"<<endl;
    cout<<"------Consultar Vehiculo----[3]-"<<endl;
    cout<<"------Consultar Cliente-----[4]-"<<endl;
    cout<<"-------Listar Vehiculo------[5]-"<<endl;
    cout<<"--------Listar Cliente------[6]-"<<endl;
    cout<<"-------------SALIR----------[0]-"<<endl;
    cout<<"----- Seleccione una opcion ----"<<endl;
    cin>>op;
}
