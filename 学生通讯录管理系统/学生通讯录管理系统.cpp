#include<iostream>
#include"student.h"
using namespace std;


int main() {
	Student st;
	int choice = 0; // ��������ѡ��

	while (1) {
		st.Show_Menu();
		cout << "����������ѡ��" << endl;
		cin >> choice;
		switch (choice) {
		case 1: //�����ͬѧ��Ϣ
			st.Add_student();
			break;
		case 2: //��ѯѧ����Ϣ
			break;
		case 3: //�޸�ѧ����Ϣ
			break;
		case 4: //ɾ��ѧ����Ϣ
			break;
		case 5: //��ʾͨѶ¼�е�������Ϣ
			break;
		case 6: //�˳�ϵͳ
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