#include <iostream>
#include <string>
#include <fstream>

namespace Lib {

	template <typename T>
	void Print(T t)
	{
		std::cout << t << "\n"; 
	
	}
	void WriteToFile(std::string filePath)
	{
		std::ofstream file(filePath);
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();


	}
	std::string filePath1 = "minfile.txt";
}


int main()
{
	Lib::Print("hej");
	Lib::WriteToFile("minfil.txt");
}