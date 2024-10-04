#ifndef WORKWITHFILE_CPP
#define WORKWITHFILE_CPP

#include "WorkWithFile.h"
#include <iostream>
#include <fstream>
#include <filesystem>
#include <algorithm> 

void customReverse(char* buffer, std::size_t size) {
    for (std::size_t i = 0; i < size / 2; ++i) {
        char temp = buffer[i];
        buffer[i] = buffer[size - 1 - i];
        buffer[size - 1 - i] = temp;
    }
}

char* readBinaryFile(const char* fileName, std::size_t& size) {
    std::ifstream inputFile(fileName, std::ios::binary);

    size = std::filesystem::file_size(fileName);
    char* buffer = new char[size];
    inputFile.read(buffer, size);
    inputFile.close(); 
    return buffer; 
}

void writeBinaryFile(const char* fileName, const char* buffer, std::size_t size) {
    std::ofstream outputFile(fileName, std::ios::binary);
    
    if (!outputFile) {
        std::cout << "Error opening output file" << '\n';
        return; 
    }

    outputFile.write(buffer, size);
    outputFile.close(); 
}

#endif
