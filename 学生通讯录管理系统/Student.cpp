#include"student.h";
#include<string>
using namespace std;
Student::Student() {

}

void Student::Show_Menu() {
	cout << "*********************************************" << endl;
	cout << "              ѧ��ͨѶ¼����ϵͳ              " << endl;
	cout << " ��ѡ��Ҫ���еĲ���                           " << endl;
	cout << " 1. �����ѧ����Ϣ                            " << endl;
	cout << " 2. ��ѯѧ����Ϣ                              " << endl;
	cout << " 3. �޸�ѧ����Ϣ                              " << endl;
	cout << " 4. ɾ��ѧ����Ϣ                              " << endl;
	cout << " 5. ��ʾͨѶ¼�е�������Ϣ                     " << endl;
	cout << " 6. �˳�ϵͳ                                  " << endl;
	cout << "*********************************************" << endl;
	cout << endl;
}

void Student::Add_student() {
	cout << "���������ѧ��������" << endl;
	//string st_name;
	cin >> st_name[1];

	cout << "���������ѧ�����Ա�" << endl;
	string st_sex;
	cin >> st_sex;
	if (st_sex != "��" && st_sex != "Ů") {
		cout << "��������" << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "���������ѧ���ĳ�������" << endl;
	string st_year, st_month, st_day;
	cin >> st_year >> st_month >> st_day;
	
	cout << "���������ѧ���Ĺ�����λ" << endl;
	string st_job;
	cin >> st_job;

	cout << "���������ѧ���ļ���" << endl;
	string st_place;
	cin >> st_place;
}

void Student::Exit_system() {
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0); //�˳�����
}

Student::~Student() {

}