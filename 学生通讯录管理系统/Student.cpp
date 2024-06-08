#include"student.h";
#include<string>
#include<fstream>
#include<sstream>
using namespace std;
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
	//string st_name;
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

}

void Student::Exit_system() {
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0); //退出程序
}

void Student::data_write(vector<Student>& data) {
	ofstream ofs1;
	ofs1.open("data.txt", ios::out);
	for (int i = 0; i < data.size(); i++) {
		ofs1 << data[i].st_cnt << " " << data[i].st_name << " " << data[i].st_sex << " " << data[i].st_year << " " << data[i].st_month << " " << data[i].st_day << " " << data[i].st_job << " " << data[i].st_place << endl;
	}
	ofs1.close();
}
void Student::data_read(vector<Student>& data) {
	ifstream ifs1;
	ifs1.open("data.txt", ios::in);
	string line;
	while (getline(ifs1, line)) {
		istringstream str(line);
		int st_cnt; //统计学生人数
		string st_name; //姓名
		string st_sex; //性别
		string st_year; //出生年
		string st_month; //出生月
		string st_day; //出生日
		string st_job; //职务
		string st_place; //籍贯
		str >> st_cnt >> st_name >> st_sex >> st_year >> st_month >> st_day >> st_job >> st_place;
		data.push_back(Student(st_cnt, st_name, st_sex, st_year, st_month, st_day, st_job, st_place));
		
	}
	ifs1.close();
}
Student::~Student() {

}