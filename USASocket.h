//
// Created by aless on 13/07/2021.
//

#ifndef ELECTRIC_SOCKETS_ADAPTER_USASOCKET_H
#define ELECTRIC_SOCKETS_ADAPTER_USASOCKET_H

//
// Created by aless on 13/07/2021.
//

#include <string>

using namespace std;

//ADAPTEE
class USASocket {
public:
    virtual int voltage() = 0;

};

#endif //ELECTRIC_SOCKETS_ADAPTER_USASOCKET_H