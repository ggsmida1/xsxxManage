#pragma once
#include<iostream>
#include<vector>
using namespace std;
vector<Student> data;
class Student {
	int st_cnt; //ͳ��ѧ������
	string st_name; //����
	string st_sex; //�Ա�
	string st_year; //������
	string st_month; //������
	string st_day; //������
	string st_job; //ְ��
	string st_place; //����
public:
	Student();
	
	void Show_Menu(); // ��ʾ�˵�

	void Exit_system(); // �˳�ϵͳ

	void Add_student(); //���ѧ��

	~Student();

};