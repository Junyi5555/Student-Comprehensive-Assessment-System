// �ɼ�ͳ�� - �ɼ�����
#include "Header.h"

void SortScores()
{
	Student temp;
	if (numStudents == 0)
	{
		cout << "û��ѧ����Ϣ��" << endl;
		return;
	}
	// ʹ��ð������Գɼ���������
	for (int i = 0; i < numStudents - 1; i++)
		for (int j = 0; j < numStudents - i - 1; j++)
			if (students[j].score > students[j + 1].score)
			{
				temp = students[j];
				students[j] = students[j + 1];
				students[j + 1] = temp;
			}
	cout << "�ɼ�������ɡ�" << endl;
}