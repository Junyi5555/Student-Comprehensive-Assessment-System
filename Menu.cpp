// 显示主菜单
#include <iostream>
using namespace std;

void Menu()
{
	cout << "========== 学生综合测评系统 ==========" << endl;
	cout << "1. 添加学生信息" << endl;
	cout << "2. 删除学生信息" << endl;
	cout << "3. 修改学生信息" << endl;
	cout << "4. 成绩输入" << endl;
	cout << "5. 成绩统计" << endl;
	cout << "6. 成绩输出到屏幕" << endl;
	cout << "7. 成绩输出到文件" << endl;
	cout << "8. 从文件读取数据" << endl;
	cout << "0. 退出系统" << endl;
	cout << "======================================" << endl;
	cout << "请输入操作编号: ";
}