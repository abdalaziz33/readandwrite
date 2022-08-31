#include <iostream>
#include <string>
#include <fstream>

namespace Lib {

	//Template print function
	template <typename T>
	void Print(T t)
	{
		std::cout << t << "\n"; 
	
	}

	//Write to 
	void WriteToFile(std::string filePath)
	{
		std::ofstream file(filePath);
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();


	}
	std::string filePath1 = "minfile.txt";

	void ReadFromFile()
	{
		std::string fileContent;
		std::ifstream openFile("minfil.txt");
		while (std::getline(openFile, fileContent))
		{
			std::cout << "Filecontent: " << fileContent << "\n";
		}
		openFile.close();
	}
}


int main()
{
	Lib::Print("hej");
	Lib::WriteToFile("minfil.txt");
	Lib::ReadFromFile();
}