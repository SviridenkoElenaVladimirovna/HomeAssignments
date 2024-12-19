/*
Sviridenko Elena st130482@student.spbu.ru
Created a template class, created partial specialization of this template class for int and double, added tests
*/
#ifndef TEMPLATECLASS_H
#define TEMPLATECLASS_H

#include <vector>

template<typename T>
class TemplateClass {
public:
    int number_ = 0;
    std::vector<float> vector_;
    TemplateClass(T obj) : obj_(obj) {}

    bool foo() {
        return obj_.bar(number_, vector_);
    }

private:
    T obj_;
};

template<>
class TemplateClass<int> {
public:
    TemplateClass(int obj) : obj_(obj) {}

    bool foo() {
        return true;
    }

private:
    int obj_;
};

template<>
class TemplateClass<double> {
public:
    TemplateClass(double obj) : obj_(obj) {}

    bool foo() {
        return false;
    }

private:
    double obj_;
};

#endif
