// �޸�ѧ����Ϣ
#include "Header.h"

void ModifyStudent()
{
	string name;
	cout << "������Ҫ�޸ĵ�ѧ������: ";
	cin >> name;
	for (int i = 0; i < numStudents; i++)
		if (name == students[i].name)
		{
			cout << "�������µ�ѧ������: ";
			cin >> students[i].name;
			cout << "�������µ�ѧ������: ";
			cin >> students[i].age;
			cout << "�������µ�ѧ���Ա�: ";
			cin >> students[i].gender;
			cout << "�������µ�ѧ���ɼ�: ";
			cin >> students[i].score;
			cout << "�޸�ѧ����Ϣ�ɹ���" << endl;
			return;
		}
	cout << "δ�ҵ�Ҫ�޸ĵ�ѧ����Ϣ��" << endl;
}