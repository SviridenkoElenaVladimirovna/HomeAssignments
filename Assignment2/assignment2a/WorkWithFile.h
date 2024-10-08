/*
Sviridenko Elena st130482@student.spbu.ru
Write logic for read binary file. After reading binary file program reverse readed data from binary file and writes it to output.bin binary file
*/
#ifndef WORKWITHFILE_H 
#define WORKWITHFILE_H 
#include <cstddef> 

void customReverse(char* buffer, std::size_t size);

char* readBinaryFile(const char* fileName, std::size_t& size);
void writeBinaryFile(const char* fileName, const char* buffer, std::size_t size); 

#endif 
