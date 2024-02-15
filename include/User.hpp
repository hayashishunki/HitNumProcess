#include <iostream>
#include <string>
#pragma once

using namespace std;

class User {
private:
	string name_, num_;
	int correctNum_;
public:
	// constructor
	User() = default;

	// destructor
	~User() = default;

	// setter
	void setName(string name);
	void setNum(string num);
	void setCorrectNum(int num);

	// getter
	string getName();
	string getNum();
	int getCorrectNum();

	// 情報出力
	void showUserNum();
};