#include <iostream>
#include <fstream>

using namespace std;

void main() {
	ofstream outFile;
	outFile.open("data.txt");
	cout << "�� : ";
	char* cInput = new char[120];
	cin.getline(cInput,120);//�ִ� 119�ڵ��� �Է� �� �޾ƿ���
	outFile << cInput;
	outFile.close();
}