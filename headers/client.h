#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
using namespace std;
class client{
    string name, dni, phone, address;
public:
    client();
    client(string&, string&, string&, string&);
    string getName()const;
    void setName(string&);
    string getDni()const;
    void setDni(string&);
    string getPhone()const;
    void setPhone(string&);
    string getAddress()const;
    void setAddress(string&);
    string infoClient()const;


};
#endif // CLIENT_H
