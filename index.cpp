// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5,6};
    int i = 0;
    int j = 5;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    };
    int k = 0;
    while( k<=5){
        cout<<arr[k]<<" ";
        k++;
    }
    return 0;
}