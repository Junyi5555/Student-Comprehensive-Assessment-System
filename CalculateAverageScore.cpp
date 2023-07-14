// 成绩统计 - 平均成绩
#include "Header.h"

void CalculateAverageScore()
{
	float sum = 0.0;
	float average;
	if (numStudents == 0)
	{
		cout << "没有学生信息。" << endl;
		return;
	}
	for (int i = 0; i < numStudents; i++)
		sum += students[i].score;
	average = sum / numStudents;
	cout << "平均成绩为: " << fixed << setprecision(2) << average << endl;
}