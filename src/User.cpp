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
	// ���ɍ��킹�Đ擪��0��t�^
	switch (std::to_string(correctNum_).length()) {
	case 1:
		cout << "���O�C�����܂����B" << "���Ȃ��̐ݒ肵���p�X���[�h�� 000" << correctNum_ << "�ł��ˁB" << endl;
		break;
	case 2:
		cout << "���O�C�����܂����B" << "���Ȃ��̐ݒ肵���p�X���[�h�� 00" << correctNum_ << "�ł��ˁB" << endl;
		break;
	case 3:
		cout << "���O�C�����܂����B" << "���Ȃ��̐ݒ肵���p�X���[�h�� 0" << correctNum_ << "�ł��ˁB" << endl;
		break;
	case 4:
		cout << "���O�C�����܂����B" << "���Ȃ��̐ݒ肵���p�X���[�h�� " << correctNum_ << "�ł��ˁB" << endl;
		break;
	default:
		cout << "�G���[�ŏ�������Ȃ����Ă��������B" << endl;
		break;
	}
}