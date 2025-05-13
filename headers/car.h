#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;
class car{
    string code, marca, model;
    int anio;
    double km, price;
public:
    car();
    car(string&, string&, string&, int&, double&, double&);
    string getCode()const;
    void setCode(string&);
    string getMarca()const;
    void setMarca(string&);
    string getModel()const;
    void setModel(string&);
    int getAnio()const;
    void setAnio(int&);
    double getKm()const;
    void setKm(double&);
    double getPrice()const;
    void setPrice(double&);
    string info() const;
};
#endif // CAR_H
