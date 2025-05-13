#ifndef DEALERSHIP_H
#define DEALERSHIP_H
#include <vector>
#include <headers/car.h>
#include <headers/client.h>
using namespace std;
class dealership{
    vector <car> cars;
    vector <client> clients;
public:
    void addCar(car& c);
    void addClient(client &cli);
    vector <car> listCars();
    vector <client> listClients();

};
#endif // DEALERSHIP_H
