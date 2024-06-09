#include<iostream>
#include"student.h"
#include<vector>
using namespace std;
vector<Student> data;

int main() {
	Student st;
	
	int choice = 0; // 用来储存选项
	st.info_read();
	while (1) {
		st.Show_Menu();
		cout << "请输入您的选择:" << endl;
		cin >> choice;
		switch (choice) {
		case 1: //添加新同学信息
			st.Add_student();
			break;
		case 2: //查找学生信息
			st.Search_student();
			break;
		case 3: //更改学生信息
			st.Change_student();
			break;
		case 4: //删除学生信息
			st.Erase_student();
			break;
		case 5: //展示所有学生信息
			st.Show_student();
			break;
		case 6: //退出系统
			st.Exit_system();
			break;
		default:
			cout << "输出选项错误，请重新输入" << endl;
			system("pause");
			system("cls");
			break;
		}

	}

	system("pause");

	return 0;
}