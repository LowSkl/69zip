#pragma once

#include "stdafx.h"
class Method {
public:
	void Compress(fs::path toRead, fs::path toWrite) {
		std::fstream rawFile(toRead);
		std::fstream compressedFile(toWrite);

		char buffer[32768] = {};
		rawFile >> buffer;
		rawFile.close();

		unsigned lastChar = 0;
		int lastCharCount = 0;
		for (int i = 0; i < 32768; i++) {
			if (i == 0) {
				lastChar = buffer[i];
				lastCharCount++;
			}
			if (buffer[i] != lastChar) 
			{
				compressedFile << std::string(lastChar, lastCharCount);
				lastChar = buffer[i];
				lastCharCount = 1;
			}
		}
		compressedFile.close();
		std::cout << "Compressed!\n";
		system("pause");
	}



};
