// �ɼ�����
#include "Header.h"

void InputScores()
{
	cout << "������ѧ���ĳɼ�:" << endl;
	for (int i = 0; i < numStudents; i++)
	{
		cout << students[i].name << ": ";
		cin >> students[i].score;
	}
	cout << "�ɼ�������ɡ�" << endl;
}