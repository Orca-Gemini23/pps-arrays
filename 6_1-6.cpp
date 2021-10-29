// Roll no : E224;
#include<iostream>
using namespace std;
int main(){
    int arr[10], num, number;
    cout << "Enter the number of elements in the array: ";
    cin >> num;
    
    for(int i = 1; i <= num; i++){
        cin >> arr[i] ;
    }

    cout << "Enter the number to be found: ";
    cin >> number;
    for(int i = 1; i <= num; i++){
        if(arr[i] == number){
            cout << "Element found at: " << i << endl;
            break;
        }
    }
    return 0;
}