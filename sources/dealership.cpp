#include <headers/dealership.h>
void dealership::addCar(car& c){
    cars.push_back(c);
}

void dealership::addClient(client& cli){
    clients.push_back(cli);
}

vector <car> dealership::listCars(){
    return cars;
}

vector <client> dealership::listClients(){
    return clients;
}



