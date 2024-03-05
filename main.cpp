#include "stdafx.h"
#include "SimpleCompression.h"


class Program {
public:
    fs::path workingDirectory;
    fs::path inputFile;
    fs::path compressedFile;

    


public:
    void GetWorkingDirectory()
    {
        workingDirectory = fs::current_path();
    }
    void GetInputFile(const std::string file) 
    {
        if (!fs::exists(workingDirectory / file))
        {
            std::cout << "|NOFILE|\n";
            exit(-1);
        }
        inputFile = workingDirectory / file;
    }
    void GetResultFile() 
    {
        compressedFile = workingDirectory / "COMPRESSED.txt";
        std::ofstream file(compressedFile, std::ofstream::out | std::ofstream::trunc);
        file.close();
    }




};

int main() 
{
    std::string inputFileName;
    std::cout << "Make sure your .txt file in same directory as compressor!\n";
    std::cout << "Write your file name: ";
    std::cin >> inputFileName;
    Program idkName;
    idkName.GetInputFile(inputFileName);
    idkName.GetWorkingDirectory();
    idkName.GetResultFile();
    Method sc;
    sc.Compress(idkName.inputFile, idkName.compressedFile);
}
