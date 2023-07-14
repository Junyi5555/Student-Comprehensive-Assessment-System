// 成绩输入
#include "Header.h"

void InputScores()
{
	cout << "请输入学生的成绩:" << endl;
	for (int i = 0; i < numStudents; i++)
	{
		cout << students[i].name << ": ";
		cin >> students[i].score;
	}
	cout << "成绩输入完成。" << endl;
}