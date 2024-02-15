#include <iostream>
#include <string>
#include "User.hpp"

using namespace std;

class NumController {
private:
	bool correctFlag_;
	User *user_;
public:
	// constructor
	NumController();

	// destructor
	~NumController();

	// Userの設定
	void setUser(User *user);

	// 有効、無効値判定
	void isAvailable();

	// 入力値の特定
	void identifyInputValue();
};