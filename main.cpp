// �p�X���[�h�Z�o�v���O����
#include<iostream>
#include<string>

using namespace std;

// �����񐔎��̒��ɕ����������Ă��Ȃ�������
bool searchString(string tmp) {
	bool result = true;
	for (int i = 0; i < tmp.length(); i++) {
		switch (tmp[i]) {
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
			result = false;
			break;
		}
	}
	return result;
}

int main() {
	string id, pass;
	int i = 0;
	bool firstflag = false, unlockkey = false;
	cout << "�D����ID��ݒ肵�Ă�������" << endl;
	cin >> id;
	while (false == firstflag) {
		cout << "4�������̃p�X���[�h��ݒ肵�Ă�������" << endl;
		cin >> pass;
		if (true == searchString(pass) && 4 == pass.length()) {
			break;
		}
		else {
			cout << "�G���[�A������x4����������͂��Ă�������" << endl;
		}
	}

	// ��ʃN���A
	system("cls");

	string result;
	while ("yes" != result) {
		cout << "�p�X���[�h�Z�o���n�߂܂����H �uyes�v, �uno�v�œ��͂��Ă�������" << endl;
		cin >> result;
	}
	
	// �Y���̐������Z�o
	cout << "���O�C�����܂�" << endl;
	while (false == unlockkey) {
		if (stoi(pass) == i) {
			unlockkey = true;
			break;
		}
		i++;
	}

	// ���ɍ��킹�Đ擪��0��t�^
	switch (std::to_string(i).length()) {
	case 1:
		cout << "���O�C�����܂����B" << "���Ȃ��̐ݒ肵���p�X���[�h�� 000" << i << "�ł��ˁB" << endl;
		break;
	case 2:
		cout << "���O�C�����܂����B" << "���Ȃ��̐ݒ肵���p�X���[�h�� 00" << i << "�ł��ˁB" << endl;
		break;
	case 3:
		cout << "���O�C�����܂����B" << "���Ȃ��̐ݒ肵���p�X���[�h�� 0" << i << "�ł��ˁB" << endl;
		break;
	case 4:
		cout << "���O�C�����܂����B" << "���Ȃ��̐ݒ肵���p�X���[�h�� " << i << "�ł��ˁB" << endl;
		break;
	default:
		cout << "�G���[�ŏ�������Ȃ����Ă��������B" << endl;
		break;
	}

	return 0;
}