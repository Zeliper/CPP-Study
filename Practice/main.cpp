#include <iostream>
using namespace std;

int main(){
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout << &i << endl << &j << endl << endl; // ������ �Ҵ�� �޸� �ּ� ��ȭ üũ
			
		}
	//	cout << &j << endl; ���� ������ �ҷ����� �Ұ��� 
	}
	
	struct Grade{ // ����ü ���� 
		int A;
		int B;
		int C;
		int D;
		int F;
		
		void appraisal(int a){
			if(a>=90)cout<<"�� �߳� " << endl;
			else if(a>=80)cout<<"�� �߳� " << endl;
			else if(a>=70)cout<<"�ϱ� �߳� " << endl;
			else if(a>=60)cout<<"�� �߳� " << endl;
			else cout<<"�� �ض� " << endl;
			 
		}
	
	};
	
	Grade score; // ����ü  ���� ���� 
	score.A = 90;
	score.B = 80;
	score.C = 70;
	score.D = 60;
	score.F = 0;
	
	int myscr;
	cin >> myscr ;
	score.appraisal(myscr);
}
