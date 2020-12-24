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
	동작:	프로그램 시작시 메뉴가 화면에 출력되고 1을 입력하면 data.txt파일에 사용자가 자료를 입력할 수 있고, 2를 입력하면 data.txt파일의 내용을 읽어 콘솔에 출력한다.
	ps.		화면을 지우려면 clr() 함수를 호출하면 된다.
*/

//화면 지우는 함수
void clr()
{ 
	system("cls");
}

//메뉴를 화면에 출력하는 함수 (입력도 여기서 받는다)
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

//텍스트 파일에 문자열을 쓰는 함수
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

//텍스트 파일의 문자열을 읽는 함수
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

//반복문을 사용하여 프로그램이 하나의 동작이후 꺼지지 않도록 한다.
int main(void) {	
	while (1) {
		printMenu();
	}
}