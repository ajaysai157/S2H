#include <iostream>
using namespace std;

int main() 
{
    int arr1[3][3];
    int n=3;
    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr1[i][j];
        }
    }
    int res[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            res[j][n-i-1]=arr1[i][j];
        }
    }
    cout<<"Matrix :"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}