#include <iostream>
#include <fstream>
#include <string>
using namespace std;
ofstream fout;
fstream fin, fot;;

void clr();
void printMenu();
void wfile();
void rfile();

/*
MEMO:
	����:	���α׷� ���۽� �޴��� ȭ�鿡 ��µǰ� 1�� �Է��ϸ� data.txt���Ͽ� ����ڰ� �ڷḦ �Է��� �� �ְ�, 2�� �Է��ϸ� data.txt������ ������ �о� �ֿܼ� ����Ѵ�.
	ps.		ȭ���� ������� clr() �Լ��� ȣ���ϸ� �ȴ�.
*/

//ȭ�� ����� �Լ�
void clr()
{ 
	system("cls");
}

//�޴��� ȭ�鿡 ����ϴ� �Լ� (�Էµ� ���⼭ �޴´�)
void printMenu() {
	cout << " Type 1 or 2 (1 = Write data / 2 = Load data) " << endl;
	int input;
	cin >> input;
	if (input == 1) {
		wfile();
	}
	else if (input == 2) {
		rfile();		
	}	
}

//�ؽ�Ʈ ���Ͽ� ���ڿ��� ���� �Լ�
void wfile() {
	clr();
	fin.open("data.txt",ios::app);
	cout << " Type any data to save. " << endl;

	string input;
	cin>>input;
	fin << input;	
	fin.close();

	cout << " Data save complete " << endl << endl;
}

//�ؽ�Ʈ ������ ���ڿ��� �д� �Լ�
void rfile() {
	clr();
	string line;
	fot.open("data.txt");
	if (fot.is_open()) {
		while (getline(fot,line))
		{
			cout << line << endl;
		}
	}
	fot.close();
	cout << " Loading Complete ! " << endl << endl;
	
}

//�ݺ����� ����Ͽ� ���α׷��� �ϳ��� �������� ������ �ʵ��� �Ѵ�.
int main(void) {	
	while (1) {
		printMenu();
	}
}