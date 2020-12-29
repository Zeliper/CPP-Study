#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    char mine[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(rand()%100<=30){
            mine[i][j]='#';
            } 
            else{
            mine[i][j]='.';
            }
            cout << mine[i][j] << " " ;  
        }
        cout << endl;
    }

}