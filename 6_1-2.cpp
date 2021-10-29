#include<iostream>
using namespace std;
int main(){
    int arr[10] = {45, 70, 80, 30, 67, 85, 98, 34, 25, 56};


    cout << arr[80] << endl;
    return 0;

    // No mr moron here if the base address is 1000
    // then at 1 it is 1004 and 1008, 1012, 1016, 1020;;

}
