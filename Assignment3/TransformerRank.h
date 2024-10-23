/*
Sviridenko Elena st130482@student.spbu.ru
build class hierarchy using association and composition using with tests
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
