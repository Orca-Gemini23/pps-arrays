// Write a C++ program to copy one array into another array. 
// The copying must be in such a way that second array consists even elements followed by odd elements.
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int arr[100], num;
    int arr_2[100];
    cout << "Enter the number of elements in the array: ";
    cin >> num;
    for(int i = 0; i < num; i++){ // input block
        cin >> arr[i];
    }
    for(int j = 0; j < num; j++){
        for(int i = 0; i < num; i++){
            if(arr[i] % 2 == 0){
                cout << arr[i] << " ";
            }
        } 
        for(int i = 0; i < num; i++){
            if(arr[i] % 2 == 1){
                cout << arr[i] << " ";
            }
        }
        break;
        cout << endl;
    }
    cout << endl;
    return 0;
}