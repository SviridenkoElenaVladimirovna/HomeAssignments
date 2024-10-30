/*
Sviridenko Elena st130482@student.spbu.ru
Implementation of operator overloading << for outputting a string to any input/output stream. Implementation of operators >, < for comparing objects. Implementation of constructor overloading. Reworking tests to check the implemented functionality.
*/

#ifndef TRANSFORMER_RANK_H
#define TRANSFORMER_RANK_H

#include <string>

class TransformerRank {
private:
    std::string name;
    int experience;

public:
    TransformerRank(std::string name, int experience);

    std::string getName();
    void setName(std::string name);
    int getExperience();
    void setExperience(int experience);
    std::string toString();

    ~TransformerRank();
};

#endif 
