#ifndef CLASS1_H
#define CLASS1_H

#include <vector>

class Class1 {
public:
   bool bar(int num, std::vector<float>& vec) {
        return num > 0;
    }

    int c1_1() {
        return 1;
    }

    float c1_2() {
        return 1.1f;
    }

    void c1_3() {
    }
};

#endif
