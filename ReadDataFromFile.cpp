// ���ļ���ȡѧ�����ݵ��ڴ�
#include "Header.h"
ifstream fin;

void ReadDataFromFile()
{
	fin.open("scores.txt", ios::in);
	if (!fin.is_open())
	{
		cout << "�޷����ļ���" << endl;
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
	cout << "ѧ�������Ѵ��ļ��ж�ȡ���ڴ档" << endl;
}