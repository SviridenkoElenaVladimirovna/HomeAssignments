/*
Sviridenko Elena st130482@student.spbu.ru
3 virtual methods were implemented and tested
*/
#include "Decepticon.h"
#include <iostream>

Decepticon::Decepticon(): Transformer() {
}

Decepticon::Decepticon(const std::string name): Transformer(name) {
}

std::string Decepticon::getName() {
    return this->name;
}

void Decepticon::transform() {
    std::cout << "Decepticon " << name << " transformed" << std::endl;
}

void Decepticon::openFire() {
    std::cout << "Decepticon " << name << " opened fire" << std::endl;
}

void Decepticon::ulta() {
    std::cout << "Decepticon " << name << " used ulta" << std::endl;
}

Decepticon::~Decepticon() {
}
