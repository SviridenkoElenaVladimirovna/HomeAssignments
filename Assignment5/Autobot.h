/*
Sviridenko Elena st130482@student.spbu.ru
3 virtual methods were implemented and tested
*/
#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
public:
    Autobot();
    Autobot(const std::string name);

    std::string getName();
    void setName(const std::string name);


    void transform() override;
    void openFire() override;
    void ulta() override;

    ~Autobot();
};

#endif 
