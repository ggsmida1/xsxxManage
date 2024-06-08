#pragma once
#include<iostream>
using namespace std;

class Student {
	int st_cnt; //统计学生人数
	string st_name[100]; //姓名
	string st_sex[100]; //性别
	string st_year[100]; //出生年
	string st_month[100]; //出生月
	string st_day[100]; //出生日
	string st_job[100]; //职务
	string st_place[100]; //籍贯
public:
	Student();
	
	void Show_Menu(); // 显示菜单

	void Exit_system(); // 退出系统

	void Add_student(); //添加学生

	~Student();

};