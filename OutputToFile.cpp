// �ɼ���� - �ļ�
#include "Header.h"
ofstream fout;

void OutputToFile()
{
	if (numStudents == 0)
	{
		cout << "û��ѧ����Ϣ��" << endl;
		return;
	}
	fout.open("scores.txt", ios::out);
	if (!fout.is_open())
	{
		cout << "�޷����ļ���" << endl;
		return;
	}
	for (int i = 0; i < numStudents; i++)
		fout << students[i].name << "    " << students[i].age << "    " << students[i].gender << "    " << fixed << setprecision(2) << students[i].score << endl;
	fout.close();
	cout << "�ɼ���д���ļ���" << endl;
}