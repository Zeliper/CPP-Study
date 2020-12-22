#include <iostream>
using namespace std;

/*
MEMO:
	1.�ֿܼ��� �׷����� �׸���� ���� ����� ���� ��ܿ������� ���� -> �ϴ� ������ ����ȴ�.(�׷����� ���� ����)
	2.��ǥ�� ����ϱ� ���ؼ� �� ������ -15 �� ������ 15�� �����ϰ� �ڵ带 �ۼ��Ͽ���.(�� ���̴� 15) (31x15)
	3.x�� y���� �ᱹ �ֿܼ����� ��ǥ�̹Ƿ�, if���� y == ax + b �� ����� ������ �װ� �ش�.
	4.�߾Ӽ��� .���� ǥ���Ͽ���.
*/

//2�� �Լ� �׷��� �׸���
//y = ax^2 + bx + c
void Draw_Quadratic_Function_Graph(int a, int b, int c) {

}

//1�� �Լ� �׷��� �׸���
//y = ax + b
void Draw_Linear_Function_Graph(int a, int b) {
	for (int y = 7; y >= -7; y--) {								//MEMO 1�� ���� ���Ϲ����̹Ƿ� +7���� -7�� ����
		for (int x = -15; x <= 15; x++) {
			if (y == a * x + b) printf("#");					//MEMO 3�� ���� y == a * x + b�� ����� �����ϸ� #��� �ƴѰ�� ����
			else if (y == 0 || x == 0) printf(".");				//MEMO 4�� ���� �߾Ӽ��� .�̹Ƿ� y�Ǵ� x�� 0�ϰ�� .�� ����Ͽ���.
			else printf(" ");
		}
		cout << endl;
	}
}

//��輱 ���
void Draw_Border() { cout << "----------------------------" << endl; }

void main() {
	int a, b, c;

	//1�� �Լ� �׷��� ���
	cout << "1�� �Լ� �׷��� ��� [y = ax + b]" << endl;
	cout << "a���� �Է� �� �ּ��� : ";
	cin >> a;
	cout << "b���� �Է� �� �ּ��� : ";
	cin >> b;
	Draw_Border();
	Draw_Linear_Function_Graph(a, b);
	Draw_Border();

	//2�� �Լ� �׷��� ���
	cout << "2�� �Լ� �׷��� ��� [y = ax^2 + bx + c]" << endl;
	cout << "a���� �Է� �� �ּ��� : ";
	cin >> a;
	cout << "b���� �Է� �� �ּ��� : ";
	cin >> b;
	cout << "c���� �Է� �� �ּ��� : ";
	cin >> c;
	Draw_Border();
	Draw_Quadratic_Function_Graph(a, b, c);
	Draw_Border();
}