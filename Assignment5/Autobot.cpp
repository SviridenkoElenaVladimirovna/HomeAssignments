/*
Sviridenko Elena st130482@student.spbu.ru
3 virtual methods were implemented and tested
*/
#include "Autobot.h"
#include "Transformer.h"
#include <iostream>
#include <string>

Autobot::Autobot(): Transformer() {
}

Autobot::Autobot(const std::string name): Transformer(name) {
}

void Autobot::transform() {
    std::cout << "Autobot " << name << " transformed" << std::endl;
}

void Autobot::openFire() {
    std::cout << "Autobot " << name << " opened fire" << std::endl;
}

void Autobot::ulta() {
    std::cout << "Autobot " << name << " used ulta" << std::endl;
}


Autobot::~Autobot() {
}
