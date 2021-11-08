#include<iostream>
using namespace std;
int main(){
    int arr[100]; 
    int max_ele = arr[0];
    int min_ele = arr[0];
    int num;
    cout << "Enter the number of elements in the array: ";
    cin >> num;
    
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < num; i++){
        if(arr[i] > max_ele){
            max_ele = arr[i];
        }
    }
    cout << "Largest element is: " << max_ele << endl;

    for(int k = 0; k < num; k++){
        if(arr[k] < min_ele){
            min_ele = arr[k];
        }
    }
    cout << "Smallest element is: " << min_ele << endl;
    return 0;
}