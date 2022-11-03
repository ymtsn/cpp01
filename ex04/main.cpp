#include <iostream>
#include <fstream>
#define FILENAME_INDEX 1
#define FIND_STR_INDEX 2
#define WITH_STR_INDEX 3


int main(int argc, char* argv[])
{
	if (argc < 2 || argc > 4)
		return (0);
	std::ifstream InFile;
	InFile.open(argv[FILENAME_INDEX], std::ios::in);
	if (InFile.is_open())
	{
	}
	else
	{
	}
	std::string NewFilename;
	NewFilename = argv[FILENAME_INDEX];
	NewFilename += ".replace";
	std::ofstream OutFile;
	OutFile.open(NewFilename, std::ios::out);
	if (OutFile.is_open())
	{
	}
	else
	{
	}
	std::string StrLine;
	std::string StrFind;
	std::string StrWith;
	StrFind = argv[FIND_STR_INDEX];
	StrWith = argv[WITH_STR_INDEX];
	while (getline(InFile, StrLine))
	{
		std::string::size_type findPos;
		findPos = StrLine.find(StrFind);
		while (findPos != std::string::npos)
		{
			StrLine.erase(findPos, StrFind.length());
			StrLine.insert(findPos, StrWith);
			findPos =StrLine.find(StrFind);
		}
		OutFile << StrLine << std::endl;
	}
	OutFile.close();
	InFile.close();
}
