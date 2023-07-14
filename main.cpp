#include "Header.h"

Student students[MAX_STUDENTS];
int numStudents = 0;

//显示主菜单
void Menu();
// 添加学生信息
void AddStudent();
// 删除学生信息
void DeleteStudent();
// 修改学生信息
void ModifyStudent();
// 成绩输入
void InputScores();
// 成绩统计 - 平均成绩
void CalculateAverageScore();
// 成绩统计 - 成绩排序
void SortScores();
// 成绩输出 - 屏幕
void OutputToScreen();
// 成绩输出 - 文件
void OutputToFile();
// 从文件读取学生数据到内存
void ReadDataFromFile();

int main()
{
	cout << "========== 学生综合测评系统 ==========" << endl << endl;
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
		settextstyle(25, 0, "宋体");
		settextcolor(RGB(200, 100, 50));
		char arr[] = "学生成绩管理系统";
		int width = 150 - textwidth(arr) / 2;
		int height = 25 - textheight(arr) / 2;
		outtextxy(100 + width, 25 + height, "学生成绩管理系统");
		settextstyle(15, 0, "宋体");
		settextcolor(RGB(0, 0, 255));
		outtextxy(75, 100, "添加学生信息");
		outtextxy(325, 100, "删除学生信息");
		outtextxy(75, 150, "修改学生信息");
		outtextxy(325, 150, "成绩输入");
		outtextxy(75, 200, "成绩统计");
		outtextxy(325, 200, "成绩输出到屏幕");
		outtextxy(75, 250, "成绩输出到文件");
		outtextxy(325, 250, "从文件读取数据");
		outtextxy(75, 275, "--------------------退出系统-------------------");
		FlushBatchDraw();
		if (MouseHit())
		{
			MOUSEMSG msg = GetMouseMsg();
			if (msg.uMsg == WM_LBUTTONDOWN)
			{
				if (msg.x > 75 && msg.x < 425 && msg.y>275 && msg.y < 290)
				{
					cout << "感谢使用";
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