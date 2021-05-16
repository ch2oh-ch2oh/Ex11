// Copyright 2021 ch2oh-ch2oh


#include <iostream>
#include "train.h"

int main() {
    Train train(2);
    Cage*cage=train.getFirst();
    for (int i = 0; i < 50; ++i) {
        std::cout<<(cage->get()?"o":"_");
        cage=cage->next;
    }
    return 0;
}

