#include "stdafx.h"


class Program {
public:
    fs::path workingDirectory;
    fs::path compressedFile;

    


public:
    void GetWorkingDirectory()
    {
        workingDirectory = fs::current_path();
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
    idkName.GetResultFile();
}
