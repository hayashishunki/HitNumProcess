#include "./../include/User.hpp"

using namespace std;

// setter
void User::setName(string name) {
	name_ = name;
}
void User::setNum(string num) {
	num_ = num;
}
void User::setCorrectNum(int correctNum) {
	correctNum_ = correctNum;
}

// getter
string User::getName() {
	return name_;
}
string User::getNum() {
	return num_;
}
int User::getCorrectNum() {
	return correctNum_;
}

void User::showUserNum() {
	// 桁に合わせて先頭に0を付与
	switch (std::to_string(correctNum_).length()) {
	case 1:
		cout << "ログインしました。" << "あなたの設定したパスワードは 000" << correctNum_ << "ですね。" << endl;
		break;
	case 2:
		cout << "ログインしました。" << "あなたの設定したパスワードは 00" << correctNum_ << "ですね。" << endl;
		break;
	case 3:
		cout << "ログインしました。" << "あなたの設定したパスワードは 0" << correctNum_ << "ですね。" << endl;
		break;
	case 4:
		cout << "ログインしました。" << "あなたの設定したパスワードは " << correctNum_ << "ですね。" << endl;
		break;
	default:
		cout << "エラー最初からやりなおしてください。" << endl;
		break;
	}
}