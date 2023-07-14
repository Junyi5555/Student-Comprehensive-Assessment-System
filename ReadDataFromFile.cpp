// 从文件读取学生数据到内存
#include "Header.h"
ifstream fin;

void ReadDataFromFile()
{
	fin.open("scores.txt", ios::in);
	if (!fin.is_open())
	{
		cout << "无法打开文件。" << endl;
		return;
	}
	numStudents = 0;
	while (!fin.eof())
	{
		fin >> students[numStudents].name >> students[numStudents].age >> students[numStudents].gender >> students[numStudents].score;
		if (!fin.eof())
			numStudents++;
	}
	fin.close();
	cout << "学生数据已从文件中读取到内存。" << endl;
}