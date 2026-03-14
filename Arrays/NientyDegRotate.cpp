#include <iostream>
using namespace std;

int main() 
{
    int arr1[3][3];
    int n = 3;

    cout << "Enter elements of matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr1[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 3; j++){
            swap(arr1[i][j], arr1[j][i]);
        }
    }

    for(int i = 0; i < n; i++){
        int left = 0, right = n-1;
        while(left < right){
            swap(arr1[i][left], arr1[i][right]);
            left++;
            right--;
        }
    }

    cout << "Matrix :" << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}