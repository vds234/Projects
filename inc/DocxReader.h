#ifndef DOCXREADER_H
#define DOCXREADER_H
#include "FileReader.h"

class DocxReader : public FileReader
{
    public:
    private:
        void readFile(const string& filename) override;
        ~DocxReader() override = default;
};
#endif