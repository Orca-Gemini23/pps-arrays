#include <iostream>
using namespace std;

int main(){
    int arr[100], number, i;
    cout << "Enter the decimal number: "; // 9 = 1001
    cin >> number;

    for(i = 0; number > 0; i++){
        arr[i] = number % 2;  // 0 = 1, 1 = 0(4/2);;
        number = number / 2;
    }
    for(i = i - 1 ; i >= 0; i--){ // to reverse the pattern;;
    // i >= 0 is for printing the last digit in the output.
    // i = i - i ;; 3210 the total digits
        cout << arr[i];
    }
    cout << endl;
    return 0;
}