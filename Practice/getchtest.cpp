#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	char ch;
	char field[15][15];
	char player, monster, moster2;
	
	cout << "w a s d �� P�� ������ G�� �����ϼ���. M�� �����Դϴ�." << endl << endl;

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			field[i][j] = '.';
			if (i == 0 && j == 0)
				field[i][j] = 'P';
			else if (i == 14 && j == 14)
				field[i][j] = 'G';
			else if (i == 10 && j == 13)
				field[i][j] = 'M';
			cout << field[i][j] << " ";
		}
		cout << endl;
	}
	int x = 0, y = 0;
	int index = field[x][y];
	
	while (field[x][y]!= field[14][14]) {
		ch = _getch();
		if (field[x][y] == field[10][13]) {
			cout << "���Ϳ��� ����Ͽ����ϴ�." << endl;
			return 0;
		}
		switch (ch) {
		case 'd':
			system("cls");
			field[x][y]= 'o';
			y++;
			field[x][y] = 'P';
				for (int i = 0; i < 15; i++)
				{
					for (int j = 0; j < 15; j++)
					{
						cout << field[i][j] << " ";
					}
					cout << endl;
				}
				break;
			
		case 'a':
			system("cls");
			field[x][y] = 'o';
			y--;
			field[x][y] = 'P';
				for (int i = 0; i < 15; i++)
				{
					for (int j = 0; j < 15; j++)
					{
						cout << field[i][j] << " ";
					}
					cout << endl;
				}
				break;
			
		case 'w':
			system("cls");
			field[x][y] = 'o';
			x--;
			field[x][y] = 'P';
				for (int i = 0; i < 15; i++)
				{
					for (int j = 0; j < 15; j++)
					{
						cout << field[i][j] << " ";
					}
					cout << endl;
				}
				break;
		case 's':
			system("cls"); 
			field[x][y] = 'o';
			x++;
			field[x][y] = 'P';
				for (int i = 0; i < 15; i++)
				{
					for (int j = 0; j < 15; j++)
					{
						cout << field[i][j] << " ";
					}
					cout << endl;
				}
				break;
		}


	}
	cout << "��ǥ ������ �����߽��ϴ�." << endl;
}
