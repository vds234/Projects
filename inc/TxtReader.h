#ifndef TXTREADER
#define TXTREADER
#include "FileReader.h"
class TxtReader : public FileReader
{
    void readFile(const string& filename) override;
    ~TxtReader() override = default;
};
#endif