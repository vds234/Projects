#include "PDFReader.h"
#include <string>

void PDFReader::readFile(const string& path)
{
    cout << "Reading PDF File..." << endl;
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