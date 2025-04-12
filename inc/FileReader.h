#ifndef FILEREADER_H
#define FILEREADER_H
#include <iostream>
using namespace std;

class FileReader
{
    private:
    public:
        virtual void readFile(const string& filename);
        virtual ~FileReader(); // Declaration only
};

#endif