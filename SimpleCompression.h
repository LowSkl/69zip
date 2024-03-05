#pragma once

#include "stdafx.h"
class Method {
public:
	void Compress(fs::path toRead, fs::path toWrite) {
		std::fstream rawFile(toRead);
		std::fstream compressedFile(toWrite);

		char buffer[8096] = {};
		rawFile >> buffer;
		rawFile.close();

		unsigned lastChar = 0;
		int lastCharCount = 0;
		for (int i = 0; i < 8096 || buffer[i] != '\0'; i++) {
			if (i == 0) {
				lastChar = buffer[i];
				lastCharCount++;
			}
			if (buffer[i] != lastChar || i + 1 == 8096) 
			{
				if (lastCharCount == 1) compressedFile << lastChar;
				else compressedFile << lastCharCount << lastChar;
				
				lastChar = buffer[i];
				lastCharCount = 1;
			}
		}
		compressedFile.close();
		std::cout << "Compressed!\n";
		system("pause");
	}



};
