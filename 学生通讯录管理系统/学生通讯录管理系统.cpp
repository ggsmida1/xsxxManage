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
			st.Search_student();
			break;
		case 3: //�޸�ѧ����Ϣ
			st.Change_student();
			break;
		case 4: //ɾ��ѧ����Ϣ
			st.Erase_student();
			break;
		case 5: //��ʾͨѶ¼�е�������Ϣ
			st.Show_student();
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