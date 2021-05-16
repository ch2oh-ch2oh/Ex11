// Copyright 2021 ch2oh-ch2oh


#include "train.h"

void Train::add(Cage *cage) {
    last->next = cage;
    last = cage;
}

Train::Train(int amount) {
    if (amount < 2) throw "wtf";
    rand.seed(1489);
    Cage *cage = new Cage(rand() % 2, first, last);
    first = cage;
    last = cage;
    for (int i = 1; i < amount; ++i) {
        add(new Cage(rand() % 2, first, last));
    }
    last->next = first;
    first->prev = last;
}

int Train::solve() {
    int counter;
    for (first->on(); first->get();) {
        counter = 1;
        Cage *c = first->next;
        for (; !c->get(); c = c->next) {
            counter++;
        }
        c->off();
    }

    return counter;
}

Cage *Train::getFirst() {
    return first;
}
