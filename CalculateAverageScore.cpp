// �ɼ�ͳ�� - ƽ���ɼ�
#include "Header.h"

void CalculateAverageScore()
{
	float sum = 0.0;
	float average;
	if (numStudents == 0)
	{
		cout << "û��ѧ����Ϣ��" << endl;
		return;
	}
	for (int i = 0; i < numStudents; i++)
		sum += students[i].score;
	average = sum / numStudents;
	cout << "ƽ���ɼ�Ϊ: " << fixed << setprecision(2) << average << endl;
}