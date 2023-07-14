#include "Header.h"

Student students[MAX_STUDENTS];
int numStudents = 0;

//��ʾ���˵�
void Menu();
// ���ѧ����Ϣ
void AddStudent();
// ɾ��ѧ����Ϣ
void DeleteStudent();
// �޸�ѧ����Ϣ
void ModifyStudent();
// �ɼ�����
void InputScores();
// �ɼ�ͳ�� - ƽ���ɼ�
void CalculateAverageScore();
// �ɼ�ͳ�� - �ɼ�����
void SortScores();
// �ɼ���� - ��Ļ
void OutputToScreen();
// �ɼ���� - �ļ�
void OutputToFile();
// ���ļ���ȡѧ�����ݵ��ڴ�
void ReadDataFromFile();

int main()
{
	cout << "========== ѧ���ۺϲ���ϵͳ ==========" << endl << endl;
	initgraph(WIDTH, HEIGHT, EX_SHOWCONSOLE);
	int x = 0, y = 0;
	BeginBatchDraw();
	while (1)
	{
		setbkcolor(WHITE);
		cleardevice();
		IMAGE img;
		loadimage(&img, "./naixu2.jpg", WIDTH, HEIGHT);
		putimage(0, 0, &img);
		setfillcolor(YELLOW);
		settextstyle(25, 0, "����");
		settextcolor(RGB(200, 100, 50));
		char arr[] = "ѧ���ɼ�����ϵͳ";
		int width = 150 - textwidth(arr) / 2;
		int height = 25 - textheight(arr) / 2;
		outtextxy(100 + width, 25 + height, "ѧ���ɼ�����ϵͳ");
		settextstyle(15, 0, "����");
		settextcolor(RGB(0, 0, 255));
		outtextxy(75, 100, "���ѧ����Ϣ");
		outtextxy(325, 100, "ɾ��ѧ����Ϣ");
		outtextxy(75, 150, "�޸�ѧ����Ϣ");
		outtextxy(325, 150, "�ɼ�����");
		outtextxy(75, 200, "�ɼ�ͳ��");
		outtextxy(325, 200, "�ɼ��������Ļ");
		outtextxy(75, 250, "�ɼ�������ļ�");
		outtextxy(325, 250, "���ļ���ȡ����");
		outtextxy(75, 275, "--------------------�˳�ϵͳ-------------------");
		FlushBatchDraw();
		if (MouseHit())
		{
			MOUSEMSG msg = GetMouseMsg();
			if (msg.uMsg == WM_LBUTTONDOWN)
			{
				if (msg.x > 75 && msg.x < 425 && msg.y>275 && msg.y < 290)
				{
					cout << "��лʹ��";
					return 0;
				}
				if (msg.x > 75 && msg.x < 165 && msg.y>100 && msg.y < 115)
					AddStudent();
				if (msg.x > 325 && msg.x < 415 && msg.y>100 && msg.y < 115)
					DeleteStudent();
				if (msg.x > 75 && msg.x < 165 && msg.y>150 && msg.y < 165)
					ModifyStudent();
				if (msg.x > 325 && msg.x < 385 && msg.y>150 && msg.y < 165)
					InputScores();
				if (msg.x > 75 && msg.x < 135 && msg.y>200 && msg.y < 215)
				{
					CalculateAverageScore();
					SortScores();
				}
				if (msg.x > 325 && msg.x < 430 && msg.y>200 && msg.y < 215)
					OutputToScreen();
				if (msg.x > 75 && msg.x < 180 && msg.y>250 && msg.y < 265)
					OutputToFile();
				if (msg.x > 325 && msg.x < 430 && msg.y>250 && msg.y < 265)
					ReadDataFromFile();

				cout << endl;
				Sleep(1000);
			}
		}
	}
	EndBatchDraw();
	getchar();
	closegraph();
	return 0;
}