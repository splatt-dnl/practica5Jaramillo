#include <headers/logica.h>

logica::logica(dealership &d, registro &r):de(d), re(r){  }

void logica::registerCar(){
    string code, marca, model;
    int anio;
    double km, price;
    cout<<"Codigo del vehiculo: "<<endl;
    cin>>code;
    cout<<"Marca del vehiculo: "<<endl;
    cin.ignore();
    getline(cin>>ws, marca);
    cout<<"Modelo del vehiculo: "<<endl;
    cin.ignore();
    getline(cin>>ws, model);
    cout<<"Anio del vehiculo: "<<endl;
    cin>>anio;
    cout<<"Kilometraje del vehiculo"<<endl;
    cin>>km;
    cout<<"Precio del vehiculo: "<<endl;
    cin>>price;
    car c(code, marca, model, anio, km, price);
    de.addCar(c);

}

void logica::registerClient(){
    string name, dni, phone, address;
    cout<<"Ingrese su nombre: "<<endl;
    cin.ignore();
    getline(cin, name);
    cout<<"Ingrese su DNI: "<<endl;
    cin>>dni;
    cout<<"Ingrese su numero de telefono: "<<endl;
    cin.ignore();
    getline(cin, phone);
    cout<<"Ingrese su direccion: "<<endl;
    cin.ignore();
    getline(cin, address);
    client cli(name, dni, phone, address);
    de.addClient(cli);
}
void logica::listCars(){
    de.listCars();
}
void logica::listClients(){
    de.listClients();
}
string logica::searchCar(string & c){
    for(car c1 : de.listCars()){
        if(c1.getCode()==c){
            return c1.info();
        }
    }
    return "Vehiculo no encontrado tilin";
}
string logica::searchClient(string & d){
    for(client cli : de.listClients()){
        if(cli.getDni()==d){
            return cli.infoClient();
        }
    }
    return "Cliente no encontrado tilin";
}


