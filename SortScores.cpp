// 成绩统计 - 成绩排序
#include "Header.h"

void SortScores()
{
	Student temp;
	if (numStudents == 0)
	{
		cout << "没有学生信息。" << endl;
		return;
	}
	// 使用冒泡排序对成绩进行排序
	for (int i = 0; i < numStudents - 1; i++)
		for (int j = 0; j < numStudents - i - 1; j++)
			if (students[j].score > students[j + 1].score)
			{
				temp = students[j];
				students[j] = students[j + 1];
				students[j + 1] = temp;
			}
	cout << "成绩排序完成。" << endl;
}