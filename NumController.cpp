#include "NumController.hpp"

using namespace std;

// constructor
NumController::NumController() : user_(nullptr), correctFlag_(false) {};

// destructor
NumController::~NumController() {};

// User�̐ݒ�
void NumController::setUser(User *user) {
	user_ = user;
}

// ���͒l�̗L���A�����l����
void NumController::isAvailable() {
	correctFlag_ = true;
	for (int i = 0; i < user_->getNum().length(); i++) {
		switch (user_->getNum()[i]) {
		case '0':
			continue;
		case '1':
			continue;
		case '2':
			continue;
		case '3':
			continue;
		case '4':
			continue;
		case '5':
			continue;
		case '6':
			continue;
		case '7':
			continue;
		case '8':
			continue;
		case '9':
			continue;
		default:
			correctFlag_ = false;
			break;
		}
	}
	if (true == correctFlag_) {
		user_->setNum(user_->getNum());
	} else {
		cout << "���͂ɊԈႦ������܂��B�ŏ������蒼���Ă�������" << endl;
		exit(EXIT_FAILURE);
	}
};

// ���͒l�̓���
void NumController::identifyInputValue() {
	correctFlag_ = false;
	int tryValue = 0;

	while (false == correctFlag_) {
		if (stoi(user_->getNum()) == tryValue) {
			correctFlag_ = true;
			break;
		}
		tryValue++;
	}
	user_->setCorrectNum(tryValue);
	user_->showUserNum();
};