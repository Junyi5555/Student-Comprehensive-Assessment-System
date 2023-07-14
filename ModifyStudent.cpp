// 修改学生信息
#include "Header.h"

void ModifyStudent()
{
	string name;
	cout << "请输入要修改的学生姓名: ";
	cin >> name;
	for (int i = 0; i < numStudents; i++)
		if (name == students[i].name)
		{
			cout << "请输入新的学生姓名: ";
			cin >> students[i].name;
			cout << "请输入新的学生年龄: ";
			cin >> students[i].age;
			cout << "请输入新的学生性别: ";
			cin >> students[i].gender;
			cout << "请输入新的学生成绩: ";
			cin >> students[i].score;
			cout << "修改学生信息成功。" << endl;
			return;
		}
	cout << "未找到要修改的学生信息。" << endl;
}