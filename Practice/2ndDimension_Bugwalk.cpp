#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    srand((unsigned)time(NULL));
    int rw[20][20];
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            rw[i][j]=0;
            cout <<rw[i][j] << " ";
        }
    cout << endl;
    }
    rw[10][10]=1;
    int i=10,j=10;
    int current=rw[i][j];
    int index=0;
    int sleep=0;
    while(sleep<=50){
    
        switch(rand()%8){
        case 0:
        
        system("cls");
            i--;
            sleep++;
            rw[i][j]=1;
            for(int x=0;x<20;x++){
                for(int y=0;y<20;y++){
                
                cout <<rw[x][y] << " ";
                }
            cout << endl;
            }
            
            break;
        case 1:
                system("cls");
            i--;
            j++;
            sleep++;
            
            rw[i][j]=1;
            for(int x=0;x<20;x++){
                for(int y=0;y<20;y++){
                
                cout <<rw[x][y] << " ";
                            }
            cout << endl;

            }
            break;
        case 2:
                system("cls");
            j++;
            sleep++;
            
            rw[i][j]=1;
            for(int x=0;x<20;x++){
                for(int y=0;y<20;y++){
                
                cout <<rw[x][y] << " ";          
                  }
            cout << endl;

            }
            break;
        
        case 3:
                system("cls");
            i++;
            j++;
            sleep++;
            
            rw[i][j]=1;
            for(int x=0;x<20;x++){
                for(int y=0;y<20;y++){
                
                cout <<rw[x][y] << " ";
                            }
            cout << endl;

            }
            break;
        
        case 4:
                system("cls");
            i++;
            sleep++;
            
            rw[i][j]=1;
            for(int x=0;x<20;x++){
                for(int y=0;y<20;y++){
                
                cout <<rw[x][y] << " ";
                            }
            cout << endl;

            }
            break;
        
        case 5:
                system("cls");
            i++;
            j--;
            sleep++;
            
            rw[i][j]=1;
            for(int x=0;x<20;x++){
                for(int y=0;y<20;y++){
                
                cout <<rw[x][y] << " ";
                }
            cout << endl;

            }
            break;
        
        case 6:
                system("cls");
            j--;
            sleep++;
            
            rw[i][j]=1;
            for(int x=0;x<20;x++){
                for(int y=0;y<20;y++){
                
                cout <<rw[x][y] << " ";
                            }
            cout << endl;

            }
            break;
        case 7:
                system("cls");
            i--;
            j--;
            sleep++;
            
            rw[i][j]=1;
            for(int x=0;x<20;x++){
                for(int y=0;y<20;y++){
                
                cout <<rw[x][y] << " ";
                            }
            cout << endl;

            }
            break;
        
            
        
            }
            
        }
            
    return 0;
}