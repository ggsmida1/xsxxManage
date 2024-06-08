#pragma once
#include<iostream>
#include<vector>
using namespace std;
vector<Student> data;
class Student {
private:
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
	Student(int cnt,string name,string sex,string year,string month,string day,string job,string place):st_cnt(cnt), st_name(name), st_sex(sex), st_year(year), st_month(month), st_day(day), st_job(job), st_place(place){}
	void Show_Menu(); // 显示菜单

	void Exit_system(); // 退出系统

	void Add_student(); //添加学生
	
	void data_write(vector<Student>& data);
	
	void data_read(vector<Student>& data);

	~Student();

};