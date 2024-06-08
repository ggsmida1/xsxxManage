#pragma once
#include<iostream>
#include<vector>
using namespace std;
vector<Student> data;
class Student {
	int st_cnt; //统计学生人数
	string st_name; //姓名
	string st_sex; //性别
	string st_year; //出生年
	string st_month; //出生月
	string st_day; //出生日
	string st_job; //职务
	string st_place; //籍贯
public:
	Student();
	
	void Show_Menu(); // 显示菜单

	void Exit_system(); // 退出系统

	void Add_student(); //添加学生

	~Student();

};