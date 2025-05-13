#ifndef REGISTER_H
#define REGISTER_H
#include <iostream>
#include "logica.h"
using namespace std;
class registro{
    logica l;
    int op;
public:
    void menu(int&);
    void ejecutar(int&);

};
#endif // REGISTER_H
