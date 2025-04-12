#ifndef PDFREADER_H
#define PDFREADER_H
#include <iostream>
#include "FileReader.h"
#include <fstream>
using namespace std;

class PDFReader : public FileReader
{
    public:
    private:
        void readFile(const string& filename) override;
        ~PDFReader() override = default;
        

};

#endif