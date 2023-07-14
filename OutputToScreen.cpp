// 成绩输出 - 屏幕
#include "Header.h"

void OutputToScreen()
{
	if (numStudents == 0)
	{
		cout << "没有学生信息。" << endl;
		return;
	}
	cout << "学生成绩如下:" << endl;
	for (int i = 0; i < numStudents; i++)
		cout << "姓名: " << students[i].name << "    年龄: " << students[i].age << "    性别: " << students[i].gender << "    成绩 : " << fixed << setprecision(2) << students[i].score << endl;
}