#include <iostream>
#include <fstream>
#include <string>
#define SIZE 5

using namespace std;

void clr();
int printMenu();
void wfile();
void rfile();

/*
MEMO:
	동작:	프로그램 시작시 메뉴가 화면에 출력되고 1을 입력하면 data.txt파일에 사용자가 자료를 입력할 수 있고, 2를 입력하면 data.txt파일의 내용을 읽어 콘솔에 출력한다.
	ps.		화면을 지우려면 clr() 함수를 호출하면 된다.
*/

//화면 지우는 함수
void clr(){ 
	cout << "\033[2J\033[1;1H"<<endl; 
}

//메뉴를 화면에 출력하는 함수 (입력도 여기서 받는다)
int printMenu() {
	
	cout << "Type 1 or 2. : ";
	int input;
	cin >>input;
	if(input==1) wfile();
	if(input==2) rfile();
	if(input==3) clr();
	else { 
	cout << "!" << endl;
	return 0;
	}
		

}

//텍스트 파일에 문자열을 쓰는 함수
void wfile() {
	ofstream outFile;
	outFile.open("data.txt");
	if(outFile.fail()){
		cout << "Failed to Open file" << endl;
		exit(1);
	}
	cout << "Type any data to save" << endl;
	string input;
	cin >> input;
	outFile<<input;
	//outFile.save(); 집가서 수정 
	outFile.close();
	cout << " Complete ! " << endl;
	printMenu();

}

//텍스트 파일의 문자열을 읽는 함수
void rfile() {
	ofstream outFile;
	outFile.open("data.txt");
	cout << outFile<<endl;
	cout<< " Data Load Success. " << endl;
	printMenu();
	//cout << 
}

//반복문을 사용하여 프로그램이 하나의 동작이후 꺼지지 않도록 한다.
int main(void) {

	if(printMenu()==1)
		wfile();
	else if(printMenu()==2)
		rfile();
	return printMenu();
	
}
