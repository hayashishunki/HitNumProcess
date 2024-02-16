// 数当てゲームプログラム
#include "./../include/User.hpp"
#include "./../include/NumController.hpp"


int main() {
	User* user = new User();
	NumController* numController = new NumController();
	string name, num;
	cout << "あなたの名前を入力してください" << endl;
	cin >> name;
	cout << "あなたの好きな数字を4桁入力してください" << endl;
	cin >> num;
	user->setName(name);
	user->setNum(num);
	numController->setUser(user);
	// 入力値チェック
	numController->isAvailable();
	// 入力値判定
	numController->identifyInputValue();
	delete numController;
	return 0;
}
