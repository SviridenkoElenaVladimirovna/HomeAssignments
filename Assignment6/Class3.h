#ifndef CLASS3_H
#define CLASS3_H

#include <vector>

class Class3 {
public:
    bool bar(int num, std::vector<float>& vec) {
        return num == -1 * static_cast<int>(vec.size());
    }

    int c3_1() {
        return 3;
    }

    float c3_2() {
        return 3.3f;
    }

    void c3_3() {
    }
};

#endif
