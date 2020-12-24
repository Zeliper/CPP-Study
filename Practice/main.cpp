#include <iostream>
using namespace std;



int main(void) {
	struct Employee {
		char firstInitial;
		char lastInitial;
		int employeeNumber;
		int salary;
		void print()
		{
				cout << "Employee : " << firstInitial << lastInitial << endl << "Number : " << employeeNumber << endl << "Salary : " << salary << endl << endl;
		}
	};
	
	//구조체 예시 / 사업장에서 고용인에 대한 정보를 구조체 방식으로 표현
	Employee anEmployee;
	anEmployee.firstInitial = 'M';
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;

	Employee anotEmployee;
	anotEmployee.firstInitial = 'E';
	anotEmployee.lastInitial = 'H';
	anotEmployee.employeeNumber = 97;
	anotEmployee.salary = 100000;

	
	anEmployee.print();
	anotEmployee.print();
	
}

