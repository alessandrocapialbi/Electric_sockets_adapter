//
// Created by aless on 13/07/2021.
//

#ifndef ELECTRIC_SOCKETS_ADAPTER_ADAPTER_H
#define ELECTRIC_SOCKETS_ADAPTER_ADAPTER_H

//
// Created by aless on 13/07/2021.
//

#include "USASocket.h"
#include "ItalianSocket.h"

using namespace std;

//ADAPTER
class Adapter : public USASocket, private ItalianSocket {
public:
    void plugIn(ItalianSocket *outlet) {
        socket = outlet;
    }

    virtual int voltage() override {
        return 110;
    }

private:
    ItalianSocket *socket;

};

#endif //ELECTRIC_SOCKETS_ADAPTER_ADAPTER_H