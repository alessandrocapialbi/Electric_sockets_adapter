//
// Created by aless on 13/07/2021.
//

#ifndef ELECTRIC_SOCKETS_ADAPTER_OVEN_H
#define ELECTRIC_SOCKETS_ADAPTER_OVEN_H

#include "USASocket.h"

class Oven {

    USASocket *power;

public:
    void plugIn(USASocket *supply) {
        power = supply;
    }

    void cook() {
        if (power->voltage() > 110) {
            cout << "It's exploding" << endl << endl;
        } else {
            cout << "Time to bake some cakes!" << endl << endl;
        }

    }
};


#endif //ELECTRIC_SOCKETS_ADAPTER_OVEN_H
