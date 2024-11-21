#ifndef TRANSFORMER_CPP
#define TRANSFORMER_CPP

#include "Transformer.h"

Transformer::Transformer() {
}

Transformer::Transformer(const std::string name): name(name) {
}

std::string Transformer::getName() {
    return this->name;
}

void Transformer::setName(const std::string name) {
    this->name = name;
}

Transformer::~Transformer() {
}

#endif
