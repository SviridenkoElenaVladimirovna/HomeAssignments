#include <iostream>
#include "WorkWithFile.h" 

int main() {
    const char* inputFileName = "input.bin";  
    const char* outputFileName = "output.bin"; 
    std::size_t size = 0;

    char* buffer = readBinaryFile(inputFileName, size);
 
    customReverse(buffer, size);

    writeBinaryFile(outputFileName, buffer, size);

    delete[] buffer;
}
