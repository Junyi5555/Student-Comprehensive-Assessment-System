// 添加学生信息
#include "Header.h"

void AddStudent()
{
	if (numStudents >= MAX_STUDENTS)
	{
		cout << "已达到学生数量上限，无法添加更多学生。" << endl;
		return;
	}
	cout << "请输入学生姓名: ";
	cin >> students[numStudents].name;
	cout << "请输入学生年龄: ";
	cin >> students[numStudents].age;
	cout << "请输入学生性别: ";
	cin >> students[numStudents].gender;
	cout << "请输入学生成绩: ";
	cin >> students[numStudents].score;
	numStudents++;
	cout << "添加学生信息成功。" << endl;
}