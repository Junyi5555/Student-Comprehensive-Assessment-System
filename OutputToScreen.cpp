// �ɼ���� - ��Ļ
#include "Header.h"

void OutputToScreen()
{
	if (numStudents == 0)
	{
		cout << "û��ѧ����Ϣ��" << endl;
		return;
	}
	cout << "ѧ���ɼ�����:" << endl;
	for (int i = 0; i < numStudents; i++)
		cout << "����: " << students[i].name << "    ����: " << students[i].age << "    �Ա�: " << students[i].gender << "    �ɼ� : " << fixed << setprecision(2) << students[i].score << endl;
}