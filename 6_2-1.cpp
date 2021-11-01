#include<iostream>
using namespace std;
int main(){
    int arr[100]; 
    int num;
    cout << "Enter the number of elements in the array: ";
    cin >> num;
    
    for(int i = 1; i <= num; i++){
        cin >> arr[i];
    }

    for(int i = 1; i <= num; i++){
        if(arr[i] < arr[i+1]){
            arr[i] = arr[i + 1];
            cout << "Largest element is: " << arr[i] << endl;
            break;
        }
    }
    return 0;
}