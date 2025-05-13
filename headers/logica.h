#ifndef LOGICA_H
#define LOGICA_H
#include <headers/dealership.h>
#include <headers/register.h>
class logica{
    dealership& de;
    registro& re;
public:
    logica();
    logica(dealership& d, registro&r);
    void registerCar();
    void registerClient();
    void listCars();
    void listClients();
    string searchCar(string&);
    string searchClient(string&);
};
#endif // LOGICA_H
