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

	// User�̐ݒ�
	void setUser(User *user);

	// �L���A�����l����
	void isAvailable();

	// ���͒l�̓���
	void identifyInputValue();
};