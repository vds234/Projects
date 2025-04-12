#include "TxtReader.h"
#include <fstream>
#include <iostream>
#include <string>
void TxtReader::readFile(const string& path)
{
    cout << "Reading Txt file..";
   ifstream file(path);
   if (!file) {
        std::cout << "Error: Could not open " << path << std::endl;
    return;
   }
    string line;
    while (getline(file, line)) {
        std::cout << line << std::endl;
    }
    file.close();
}
   
