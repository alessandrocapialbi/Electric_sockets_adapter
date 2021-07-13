//
// Created by aless on 13/07/2021.
//

#ifndef ELECTRIC_SOCKETS_ADAPTER_ITALIANSOCKET_H
#define ELECTRIC_SOCKETS_ADAPTER_ITALIANSOCKET_H


//
// Created by aless on 13/07/2021.
//

#include <string>

using namespace std;

//TARGET
class ItalianSocket {
public:
    ~ItalianSocket() {};

    int voltage() { return 230; }

};

#endif //ELECTRIC_SOCKETS_ADAPTER_ITALIANSOCKET_H
