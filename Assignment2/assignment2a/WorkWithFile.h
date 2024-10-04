#ifndef WORKWITHFILE_H 
#define WORKWITHFILE_H 
#include <cstddef> 

void customReverse(char* buffer, std::size_t size);

char* readBinaryFile(const char* fileName, std::size_t& size);
void writeBinaryFile(const char* fileName, const char* buffer, std::size_t size); 

#endif 
