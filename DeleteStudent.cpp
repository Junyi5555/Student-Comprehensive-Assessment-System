// 删除学生信息
#include "Header.h"

void DeleteStudent()
{
	string name;
	cout << "请输入要删除的学生姓名: ";
	cin >> name;
	for (int i = 0; i < numStudents; i++)
		if (name == students[i].name)
		{
			// 将最后一个学生信息覆盖到要删除的位置
			students[i] = students[numStudents - 1];
			numStudents--;
			cout << "删除学生信息成功。" << endl;
			return;
		}
	cout << "未找到要删除的学生信息。" << endl;
}