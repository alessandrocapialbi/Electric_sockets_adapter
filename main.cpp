#include <iostream>
#include "ItalianSocket.h"
#include "Oven.h"
#include "Adapter.h"

int main() {

    ItalianSocket* itaSocket = new ItalianSocket;
    Adapter* adapter = new Adapter;
    Oven* oven = new Oven;

    adapter->plugIn(itaSocket);
    oven->plugIn(adapter);
    oven->cook();

}
