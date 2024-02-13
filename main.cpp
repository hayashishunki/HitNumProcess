// パスワード算出プログラム
#include<iostream>
#include<string>

using namespace std;

// 文字列数字の中に文字が入っていないか判定
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
	cout << "好きなIDを設定してください" << endl;
	cin >> id;
	while (false == firstflag) {
		cout << "4桁数字のパスワードを設定してください" << endl;
		cin >> pass;
		if (true == searchString(pass) && 4 == pass.length()) {
			break;
		}
		else {
			cout << "エラー、もう一度4桁数字を入力してください" << endl;
		}
	}

	// 画面クリア
	system("cls");

	string result;
	while ("yes" != result) {
		cout << "パスワード算出を始めますか？ 「yes」, 「no」で入力してください" << endl;
		cin >> result;
	}
	
	// 該当の数字を算出
	cout << "ログインします" << endl;
	while (false == unlockkey) {
		if (stoi(pass) == i) {
			unlockkey = true;
			break;
		}
		i++;
	}

	// 桁に合わせて先頭に0を付与
	switch (std::to_string(i).length()) {
	case 1:
		cout << "ログインしました。" << "あなたの設定したパスワードは 000" << i << "ですね。" << endl;
		break;
	case 2:
		cout << "ログインしました。" << "あなたの設定したパスワードは 00" << i << "ですね。" << endl;
		break;
	case 3:
		cout << "ログインしました。" << "あなたの設定したパスワードは 0" << i << "ですね。" << endl;
		break;
	case 4:
		cout << "ログインしました。" << "あなたの設定したパスワードは " << i << "ですね。" << endl;
		break;
	default:
		cout << "エラー最初からやりなおしてください。" << endl;
		break;
	}

	return 0;
}