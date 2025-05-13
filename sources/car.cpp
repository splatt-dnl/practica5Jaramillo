#include <headers/car.h>

car::car(string &c, string &m, string &mo, int &a, double &k, double &p):code(c), marca(m), model(mo), anio(a),
    km(k), price(p){}

string car::getCode() const{
    return code;
}
void car::setCode(string &c){
    this->code=c;
}
string car::getMarca() const{
    return marca;
}
void car::setMarca(string &m){
    this->marca=m;
}
string car::getModel() const{
    return model;
}
void car::setModel(string &mo)
{
    this->model=mo;
}
int car::getAnio() const{
    return anio;
}
void car::setAnio(int &a){
    this->anio=a;
}
double car::getKm() const{
    return km;
}
void car::setKm(double &k){
    this->km=k;
}
double car::getPrice() const{
    return price;
}
void car::setPrice(double &p){
    this->price=p;
}

string car::info() const{
    return "Codigo del Vehiculo: "+code+", Marca: "+marca+", Modelo: "+model+", Anio: "+to_string(anio)+" Kilometraje: "
           +to_string(km)+" km, Precio: "+to_string(price)+" $";
}
