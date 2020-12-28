#include <iostream>
#include <fstream>

using namespace std;

void main() {
	ofstream outFile;
	outFile.open("data.txt");
	cout << "얍 : ";
	char* cInput = new char[120];
	cin.getline(cInput,120);//최대 119자따리 입력 줄 받아오기
	outFile << cInput;
	outFile.close();
}