/*
Sviridenko Elena st130482@student.spbu.ru
3 virtual methods were implemented and tested
*/
#ifndef DECEPTICON_H
#define DECEPTICON_H
#include "Transformer.h"

class Decepticon : public Transformer {
public:
    Decepticon();
    Decepticon(const std::string name);

    std::string getName();
    void setName(const std::string name);

    void transform() override;
    void openFire() override;
    void ulta() override;

    ~Decepticon();
};

#endif 
