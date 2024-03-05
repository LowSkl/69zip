#include "stdafx.h"
#include "draw.h"


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
            std::cout << "NOFILE\n";
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

int main(int argc, char* argv[])
{
    Drawing dr;
    cv::Mat image = cv::Mat::zeros(512, 512, CV_8UC3); // Create a black 512x512 image
    dr.Draw(image);

}
