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
void Student::Show_Menu() {
	cout << "*********************************************" << endl;
	cout << "              学生通讯录管理系统              " << endl;
	cout << " 请选择要进行的操作                           " << endl;
	cout << " 1. 添加新学生信息                            " << endl;
	cout << " 2. 查询学生信息                              " << endl;
	cout << " 3. 修改学生信息                              " << endl;
	cout << " 4. 删除学生信息                              " << endl;
	cout << " 5. 显示通讯录中的所有信息                     " << endl;
	cout << " 6. 退出系统(并保存)                          " << endl;
	cout << "*********************************************" << endl;
	cout << endl;
}

void Student::Add_student() {
	cout << "请输入添加学生的学号" << endl;
	string st_ID;
	cin >> st_ID;

	cout << "请输入添加学生的姓名" << endl;
	string st_name;
	cin >> st_name;

	cout << "请输入添加学生的性别(男/女)" << endl;
	string st_sex;
	cin >> st_sex;
	if (st_sex != "男" && st_sex != "女") {
		cout << "输入有误" << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "请输入添加学生的出生日期(年 月 日)" << endl;
	string st_year, st_month, st_day;
	cin >> st_year >> st_month >> st_day;

	cout << "请输入添加学生的工作单位" << endl;
	string st_job;
	cin >> st_job;

	cout << "请输入添加学生的籍贯" << endl;
	string st_place;
	cin >> st_place;
	info.push_back(Student(st_ID,st_name,st_sex,st_year,st_month,st_day,st_job,st_place));
	cout << "添加成功！" << endl;
}

void Student::Search_student() {
	cout << "请选择您需要查询的方式:" << endl;
	cout << "1.按学号查询" << endl;
	cout << "2.按姓名查询" << endl;
	int x;
	cin >> x;
	switch (x) {
	case 1: {
		system("cls");
		cout << "请输入您要查询的学生的学号:" << endl;
		string ID;
		cin >> ID;
		cout << endl;
		bool flag = 0;
		for (int i = 0; i < info.size(); i++) {
			if (info[i].st_ID == ID) {
				cout << "学号：" << info[i].st_ID << endl;
				cout << "姓名: " << info[i].st_name << endl;
				cout << "性别: " << info[i].st_sex << endl;
				cout << "出生日期: " << info[i].st_year << ' ' << info[i].st_month << ' ' << info[i].st_day << endl;
				cout << "职位: " << info[i].st_job << endl;
				cout << "籍贯: " << info[i].st_place << endl;
				flag = 1;
			}
		}
		if (!flag) {
			cout << "没有这号人,请重新操作" << endl;
			system("pause");
			system("cls");
		}
		cout << endl;
		break;
	}
	case 2:
	{
		system("cls");
		cout << "请输入您要查询的学生的姓名" << endl;
		string name;
		bool flag = 0;
		cin >> name;
		cout << endl;
		for (auto& x : info) {
			if (x.st_name == name) {
				cout << "学号: " << x.st_ID << endl;
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
		cout << endl;
		break;
	}
	default:
		cout << "输入选项有误" << endl;
		system("pause");
		system("cls");
		break;
	}
}

void Student::Change_student() {
	cout << "请输入需要更改信息的学生学号:" << endl;
	string ID;
	cin >> ID;
	bool flag = 0;
	for (int i = 0; i < info.size(); i++) {
		if (info[i].st_ID == ID) {
			flag = 1;
			system("cls");
			cout << "该学生当前的信息为：" << endl;
			cout << "学号: " << info[i].st_ID << endl;
			cout << "姓名: " << info[i].st_name << endl;
			cout << "性别: " << info[i].st_sex << endl;
			cout << "出生日期: " << info[i].st_year << ' ' << info[i].st_month << ' ' << info[i].st_day << endl;
			cout << "职位: " << info[i].st_job << endl;
			cout << "籍贯: " << info[i].st_place << endl;
			cout << endl;

			cout << "请输入您想要更改的数据" << endl;
			cout << "1. 学号" << endl;
			cout << "2. 姓名" << endl;
			cout << "3. 性别" << endl;
			cout << "4. 出生日期" << endl;
			cout << "5. 职位" << endl;
			cout << "6. 籍贯" << endl;
			cout << endl;

			int choice;
			cin >> choice;
			switch (choice) {
			case 1:
				cout << "请输入更改后的学号" << endl;
				cin >> info[i].st_ID;
			case 2:
				cout << "请输入更改后的姓名:" << endl;
				cin >> info[i].st_name;
				break;
			case 3:
				cout << "请输入更改后的性别：" << endl;
				cin >> info[i].st_sex;
				break;
			case 4:
				cout << "请输入更改后的出生日期：" << endl;
				cout << "年: ";
				cin >> info[i].st_year;
				cout << endl;
				cout << "月: ";
				cin >> info[i].st_month;
				cout << endl;
				cout << "日: ";
				cin >> info[i].st_day;
				cout << endl;
				break;
			case 5:
				cout << "请输入更改后的职务:" << endl;
				cin >> info[i].st_job;
				break;
			case 6:
				cout << "请输入更改后的籍贯" << endl;
				cin >> info[i].st_place;
				break;
			default:
				cout << "输入数据错误" << endl;
				break;
			}
			cout << "更改成功" << endl;
		}
	}
	if (!flag) {
		cout << "没有这号人，请重新输入." << endl;
		system("pause");
		system("cls");
	}
		
}

void Student::Erase_student() {
	cout << "请输入需要删除信息的学生学号:" << endl;
	string ID;
	cin >> ID;
	bool flag = 0;
	for (int i = 0; i < info.size(); i++) {
		if (info[i].st_ID == ID) {
			info.erase(info.begin() + i);
			flag = 1;
			cout << "删除成功!" << endl;
			break;
		}
	}
	if (!flag) {
		cout << "没有这号人，请重新输入." << endl;
		system("pause");
		system("cls");
	}
}

void Student::Show_student() {
	system("cls");
	int i = 1;
	for (auto& x : info) {
		cout << "第" << i++ << "位联系人 : " << endl;
		cout << "学号: " << x.st_ID << endl;
		cout << "姓名: " << x.st_name << endl;
		cout << "性别: " << x.st_sex << endl;
		cout << "出生日期: " << x.st_year << ' ' << x.st_month << ' ' << x.st_day << endl;
		cout << "职位: " << x.st_job << endl;
		cout << "籍贯: " << x.st_place << endl;
		cout << endl;
	}
	system("pause");
	system("cls");
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
		ofs1  << " " << info[i].st_ID << " " << info[i].st_name << " " << info[i].st_sex << " " << info[i].st_year << " " << info[i].st_month << " " << info[i].st_day << " " << info[i].st_job << " " << info[i].st_place << endl;
	}
	ofs1.close();
}
void Student::info_read() {
	ifstream ifs1;
	ifs1.open("info.txt", ios::in);
	string line;
	while (getline(ifs1, line)) {
		istringstream str(line);
		string st_ID; // 学号
		string st_name; //姓名
		string st_sex; //性别
		string st_year; //出生年
		string st_month; //出生月
		string st_day; //出生日
		string st_job; //职务
		string st_place; //籍贯
		str >> st_ID >> st_name >> st_sex >> st_year >> st_month >> st_day >> st_job >> st_place;
		info.push_back(Student( st_ID, st_name, st_sex, st_year, st_month, st_day, st_job, st_place));

	}
	ifs1.close();
}
Student::~Student() {

}