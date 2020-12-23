#include <iostream>
using namespace std;

typedef struct student {
	int score;
};

//student �迭�� �ּҰ�
int GetMinScore(student* students, int n) {
	int Index = 0;
	for (int i = 0; i < n; i++)
	{
		if (students[i].score < students[Index].score) {
			Index = i;
		}
	}
	return students[Index].score;
}

//student �迭�� �ִ밪
int GetMaxScore(student* students, int n) {
	int Index = 0;
	for (int i = 0; i < n; i++)
	{
		if (students[i].score > students[Index].score) {
			Index = i;
		}
	}
	return students[Index].score;
}

//students �迭�� ��� ���ϱ�
int GetAverage(student* students, int n) {
	int sum=0;
	for (int i=0;i<n;i++)
		sum+=students[i].score;
	
	int average=sum/n;
	return average;
}

int main(void) {
	//�� �л� �� �Է� �ޱ�
	int nStudentsCount = 0;
	cout << "�� �л� ���� �Է��� �ּ��� : ";
	cin >> nStudentsCount;

	//�� �л� ����ŭ �迭 ���� �Ҵ�
	student* Students = new student[nStudentsCount]; 

	//�л� �� ��ŭ �ڷ� �Է� �ޱ�.
	for (int i = 0; i < nStudentsCount; i++)
	{
		
		cout << i + 1 << "��° �л��� ���� : ";
		cin >> Students[i].score;
	}
	cout << "------------------------------------------------------------"<<endl;
	cout << "���� ���� : " << GetMinScore(Students, nStudentsCount) << endl << "�ִ� ���� : " << GetMaxScore(Students, nStudentsCount) << endl << "��� ���� : " << GetAverage(Students, nStudentsCount) << endl;
}
