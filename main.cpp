#include "DocxReader.h"
#include "FileReader.h"
#include "PDFReader.h"
#include "TxtReader.h"

int main()
{
    FileReader* reader;

    // Example: Reading a DOCX file
    reader = new DocxReader();
    string path = "files/sample.doc";
    reader->readFile(path);
    delete reader;

    // Example: Reading a PDF file
    reader = new PDFReader();
    string path1 = "files/sample.pdf";
    reader->readFile(path1);
    delete reader;

    // Example: Reading a TXT file
    reader = new TxtReader();
    string path2 = "files/sample.txt";
    reader->readFile(path2);
    delete reader;

    return 0;
}