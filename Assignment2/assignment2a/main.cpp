/*
Sviridenko Elena st130482@student.spbu.ru
Write logic for read binary file. After reading binary file program reverse readed data from binary file and writes it to output.bin binary file
*/
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
