// ɾ��ѧ����Ϣ
#include "Header.h"

void DeleteStudent()
{
	string name;
	cout << "������Ҫɾ����ѧ������: ";
	cin >> name;
	for (int i = 0; i < numStudents; i++)
		if (name == students[i].name)
		{
			// �����һ��ѧ����Ϣ���ǵ�Ҫɾ����λ��
			students[i] = students[numStudents - 1];
			numStudents--;
			cout << "ɾ��ѧ����Ϣ�ɹ���" << endl;
			return;
		}
	cout << "δ�ҵ�Ҫɾ����ѧ����Ϣ��" << endl;
}