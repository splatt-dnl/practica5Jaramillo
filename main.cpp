#include <headers/dealership.h>
#include <headers/logica.h>
#include <headers/register.h>
int main(){
    dealership d;
    registro r;
    logica l(d, r);
    string code, dni;
    int op=1;
    do{
        r.menu(op);
        switch (op) {
        case 1:
            l.registerCar();
            break;
        case 2:
            l.registerClient();
            break;
        case 3:
            cout<<"Ingrese el codigo a buscar: "<<endl;
            cin>>code;
            l.searchCar(code);
            break;
        case 4:
            cout<<"Ingrese el DNI a buscar: "<<endl;
            cin>>dni;
            l.searchClient(dni);
            break;
        case 5:
            l.listCars();
            break;
        case 6:
            l.listClients();
            break;
        case 0:
            cout<<endl<<"******Saliendo del programa, hasta luego ******"<<endl;
            break;
        default:
            cout<<endl<<"Opcion no valida, intentelo de nuevo :D"<<endl;
            break;
        }
    }while(op !=0);


    return 0;
}
