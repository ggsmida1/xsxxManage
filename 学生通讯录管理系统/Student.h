#pragma once
#include<iostream>
using namespace std;

class Student {
	int st_cnt; //ͳ��ѧ������
	string st_name[100]; //����
	string st_sex[100]; //�Ա�
	string st_year[100]; //������
	string st_month[100]; //������
	string st_day[100]; //������
	string st_job[100]; //ְ��
	string st_place[100]; //����
public:
	Student();
	
	void Show_Menu(); // ��ʾ�˵�

	void Exit_system(); // �˳�ϵͳ

	void Add_student(); //���ѧ��

	~Student();

};