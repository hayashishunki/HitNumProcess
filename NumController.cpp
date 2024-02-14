#include "NumController.hpp"

using namespace std;

// constructor
NumController::NumController() : user_(nullptr), correctFlag_(false) {};

// destructor
NumController::~NumController() {};

// Userの設定
void NumController::setUser(User *user) {
	user_ = user;
}

// 入力値の有効、無効値判定
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
		cout << "入力に間違えがあります。最初からやり直してください" << endl;
		exit(EXIT_FAILURE);
	}
};

// 入力値の特定
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