#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <iterator>
#include <string>
#include <algorithm>

class CSVWriter
{
	std::string fileName;
	std::string delimeter;
	int linesCount;
public:
	CSVWriter(std::string filename, std::string delm = ",") :
			fileName (filename), delimeter(delm), linesCount(0)
	{}
	template <typename T>
	void addDatainRow(T first, T last);
};

template<typename T>
void CSVWriter::addDatainRow(T first, T last)
{
	std::fstream file;
	file.open(fileName, std::ios::out | (linesCount ? std::ios::app : std::ios::trunc));
	for (; first != last;)
	{
		file << *first;
		if(++first != last)
			file << delimeter;
	}
	file << "\n";
	linesCount++;
	file.close();
}
int main()
{
	CSVWriter witer("./src/baitapchepcode/example.csv");
	std::vector<std::string> dataList_1 = {"20", "hi", "99"};
	writer.addDatainRow(dataList_1.begin(), dataList_1.end());
	std::set<int> dataList_2 = {3,4,5};
	writer.addDatainRow(dataList_2.begin(), dataList_2.end());
	std::string str = "abc";
	writer.addDatainRow(str.begin(), str.end());
	int arr[] = {5,5,5};
	writer.addDatainRow(arr, arr + sizeof(arr) / sizeof(int));
	return 0;
}
