#pragma once
#define MAX_STUDENTS 100
#define WIDTH 500
#define HEIGHT 309
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include <graphics.h>
#include <conio.h>
using namespace std;

class Student
{
public:
	string name;
	int age;
	string gender;
	float score;
};

extern Student students[MAX_STUDENTS];
extern int numStudents;

