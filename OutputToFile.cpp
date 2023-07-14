// 成绩输出 - 文件
#include "Header.h"
ofstream fout;

void OutputToFile()
{
	if (numStudents == 0)
	{
		cout << "没有学生信息。" << endl;
		return;
	}
	fout.open("scores.txt", ios::out);
	if (!fout.is_open())
	{
		cout << "无法打开文件。" << endl;
		return;
	}
	for (int i = 0; i < numStudents; i++)
		fout << students[i].name << "    " << students[i].age << "    " << students[i].gender << "    " << fixed << setprecision(2) << students[i].score << endl;
	fout.close();
	cout << "成绩已写入文件。" << endl;
}