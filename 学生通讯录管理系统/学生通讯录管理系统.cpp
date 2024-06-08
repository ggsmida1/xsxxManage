#include<iostream>
#include"student.h"
using namespace std;


int main() {
	Student st;
	int choice = 0; // 用来储存选项

	while (1) {
		st.Show_Menu();
		cout << "清输入您的选择" << endl;
		cin >> choice;
		switch (choice) {
		case 1: //添加新同学信息
			st.Add_student();
			break;
		case 2: //查询学生信息

			break;
		case 3: //修改学生信息
			break;
		case 4: //删除学生信息
			break;
		case 5: //显示通讯录中的所有信息
			break;
		case 6: //退出系统
			st.Exit_system();
			break;
		default:
			system("cls");
			break;
		}

	}

	system("pause");

	return 0;
}