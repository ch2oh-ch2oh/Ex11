// Copyright 2021 ch2oh-ch2oh



#ifndef EX11_TRAIN_H
#define EX11_TRAIN_H

#include <random>

class Cage {
    bool light; // Свет (вкл/выкл)
public:
    Cage *next; // следующий вагон
    Cage *prev; // предыдущий вагон
    Cage() : light(false), next(nullptr), prev(nullptr) {}

    Cage(bool light, Cage *next, Cage *prev) :
            light(light), next(next), prev(prev) {}

    void on() { light = true; }

    void off() { light = false; }

    bool get() const { return light; }
};

class Train {
private:
    std::minstd_rand rand;
    Cage *first; // указатель на первый вагон
    Cage *last;  // указатель на последний вагон
    void add(Cage *);

public:
    explicit Train(int);

    int solve();

    Cage* getFirst();
};

#endif //EX11_TRAIN_H
