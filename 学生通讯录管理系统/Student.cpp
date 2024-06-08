#include"student.h";
#include<string>
#include<fstream>
#include<sstream>
#include<vector>
#include <iostream>
using namespace std;
vector<Student> info;
Student::Student() {

}
//
void Student::Show_Menu() {
	cout << "*********************************************" << endl;
	cout << "              学生通讯录管理系统              " << endl;
	cout << " 请选择要进行的操作                           " << endl;
	cout << " 1. 添加新学生信息                            " << endl;
	cout << " 2. 查询学生信息                              " << endl;
	cout << " 3. 修改学生信息                              " << endl;
	cout << " 4. 删除学生信息                              " << endl;
	cout << " 5. 显示通讯录中的所有信息                     " << endl;
	cout << " 6. 退出系统                                  " << endl;
	cout << "*********************************************" << endl;
	cout << endl;
}

void Student::Add_student() {
	cout << "请输入添加学生的姓名" << endl;
	string st_name;
	cin >> st_name;

	cout << "请输入添加学生的性别" << endl;
	string st_sex;
	cin >> st_sex;
	if (st_sex != "男" && st_sex != "女") {
		cout << "输入有误" << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "请输入添加学生的出生日期" << endl;
	string st_year, st_month, st_day;
	cin >> st_year >> st_month >> st_day;

	cout << "请输入添加学生的工作单位" << endl;
	string st_job;
	cin >> st_job;

	cout << "请输入添加学生的籍贯" << endl;
	string st_place;
	cin >> st_place;
	info.push_back(Student(st_name,st_sex,st_year,st_month,st_day,st_job,st_place));
}

void Student::Search_student() {
	cout << "请选择您需要查询的方式" << endl;
	cout << "1.按学号查询" << endl;
	cout << "2.按姓名查询" << endl;
	int x;
	cin >> x;
	switch (x) {
	case 1:
		cout << "请输入您要查询的学生的学号" << endl;
		int ID;
		cin >> ID;
		ID--;
		if (info.size() <= ID) {
			cout << "没有这号人,请重新操作" << endl;
			system("pause");
			system("cls");
		}
		else {
			cout << "姓名: " << info[ID].st_name << endl;
			cout << "性别: " << info[ID].st_sex << endl;
			cout << "出生日期: " << info[ID].st_year << ' ' << info[ID].st_month << ' ' << info[ID].st_day << endl;
			cout << "职位: " << info[ID].st_job << endl;
			cout << "籍贯: " << info[ID].st_place << endl;
		}
		break;
	case 2:
		cout << "请输入您要查询的学生的姓名" << endl;
		string name;
		bool flag = 0;
		cin >> name;
		for (auto& x : info) {
			if (x.st_name == name) {
				cout << "姓名: " << x.st_name << endl;
				cout << "性别: " << x.st_sex << endl;
				cout << "出生日期: " << x.st_year << ' ' << x.st_month << ' ' << x.st_day << endl;
				cout << "职位: " << x.st_job << endl;
				cout << "籍贯: " << x.st_place << endl;
				flag = 1;
				break;
			}
		}
		if (!flag)
			cout << "没有这号人" << endl;
		break;
		/*default:*/
			/*cout << "错误选择" << endl;
			system("pause");
			system("cls");
			break;*/
	}
}

void Student::Change_student() {

}

void Student::Erase_student() {

}

void Student::Show_student() {

}

void Student::Exit_system() {
	info_write();
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0); //退出程序
}

void Student::info_write() {
	ofstream ofs1;
	ofs1.open("info.txt", ios::out);
	for (int i = 0; i < info.size(); i++) {
		ofs1  << " " << info[i].st_name << " " << info[i].st_sex << " " << info[i].st_year << " " << info[i].st_month << " " << info[i].st_day << " " << info[i].st_job << " " << info[i].st_place << endl;
	}
	ofs1.close();
}
void Student::info_read() {
	ifstream ifs1;
	ifs1.open("info.txt", ios::in);
	string line;
	while (getline(ifs1, line)) {
		istringstream str(line);
		string st_name; //姓名
		string st_sex; //性别
		string st_year; //出生年
		string st_month; //出生月
		string st_day; //出生日
		string st_job; //职务
		string st_place; //籍贯
		str >>  st_name >> st_sex >> st_year >> st_month >> st_day >> st_job >> st_place;
		info.push_back(Student( st_name, st_sex, st_year, st_month, st_day, st_job, st_place));

	}
	ifs1.close();
}
Student::~Student() {

}