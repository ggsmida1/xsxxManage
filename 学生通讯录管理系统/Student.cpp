#include"student.h";
#include<string>
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

Student::~Student() {

}