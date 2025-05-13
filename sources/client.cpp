#include <headers/client.h>
client::client(string &n, string &d, string &p, string &a):name(n), dni(d), phone(p), address(a){}

string client::getName() const{
    return name;
}
void client::setName(string &n){
    this->name=n;
}
string client::getDni() const{
    return dni;
}
void client::setDni(string &d){
    this->dni=d;
}
string client::getPhone() const{
    return phone;
}
void client::setPhone(string &p){
    this->phone=p;
}
string client::getAddress() const{
    return address;
}
void client::setAddress(string &a){
    this->address=a;
}
string client::infoClient() const{
    return "Nombre del Cliente: "+name+", DNI: "+dni+", Telefono: "+phone+", Direccion: "+address;
}
