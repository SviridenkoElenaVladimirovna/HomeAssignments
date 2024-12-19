#ifndef CLASS2_H
#define CLASS2_H

#include <vector>

class Class2 {
public:
    bool bar(int num, std::vector<float>& vec) {
        return !vec.empty();
    }

    int c2_1() {
        return 2;
    }

    float c2_2() {
        return 2.2f;
    }

    void c2_3() {}
};

#endif
