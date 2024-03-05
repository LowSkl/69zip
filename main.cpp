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

const enum EXIT_STATUS {
    UNKNOWN_ERROR = -1,
    SUCCESSFUL = 0,
};

int main(int argc, char *argv[]) {
    std::cout << "Hello World!\n";

    return EXIT_STATUS::SUCCESSFUL();
}
