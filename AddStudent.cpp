// ���ѧ����Ϣ
#include "Header.h"

void AddStudent()
{
	if (numStudents >= MAX_STUDENTS)
	{
		cout << "�Ѵﵽѧ���������ޣ��޷���Ӹ���ѧ����" << endl;
		return;
	}
	cout << "������ѧ������: ";
	cin >> students[numStudents].name;
	cout << "������ѧ������: ";
	cin >> students[numStudents].age;
	cout << "������ѧ���Ա�: ";
	cin >> students[numStudents].gender;
	cout << "������ѧ���ɼ�: ";
	cin >> students[numStudents].score;
	numStudents++;
	cout << "���ѧ����Ϣ�ɹ���" << endl;
}