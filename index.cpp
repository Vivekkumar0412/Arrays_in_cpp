// Online C++ compiler to run C++ program online
// REVERSE AN ARRAY
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,5,6};
//     int i = 0;
//     int j = 5;
//     while(i<j){
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//         i++;
//         j--;
//     };
//     int k = 0;
//     while( k<=5){
//         cout<<arr[k]<<" ";
//         k++;
//     }
//     return 0;
// };

// Find triplets in the array
// #include <iostream>
// using namespace std;
// int main() {
// int arr[] ={1, 2, 3, 1, 2, 3};
// int n = 6;
// int K = 4;
// for(int i = 0; i<n; i++)
// {
// 		for(int j = i +1; j<n; j++)
//         {
// 			for(int m = j+1; m<n; m++)
//             {
// 				if(arr[i] + arr[j] + arr[m] == K)
//                 {
// 					cout<<arr[i]<<" "<<arr[j]<<" "<<arr[m]<<endl;
// 				}
// 			}
// 		}
// 	};
// };

// SWAP ALTERNATES
// #include <iostream>
// using namespace std;
// void printArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     };
// }
// void swapArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int temp = arr[i];
//         arr[i] = arr[i+1];
//         arr[i+1] = temp;
//         i++;
//     };
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 9,11};
//     int n = 9;
//     swapArr(arr,n);
//     printArr(arr, n);
//     return 0;
// }


// UNIQUE NUMBER IN AN ARRAY
// #include<bits/stdc++.h>
// using namespace std;
// void printArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     };
// };
// void uniqueVal (int arr[],int n){
//     for(int i = 0; i<n; i++){
//         int count = 0;
//         for(int j = 0; j<n; j++){
//             if(i == j){
//                 continue;
//             };
//             if(arr[i] == arr[j]){
//                 count++;
//             };
            
//         };
//         if(count == 0){
//                 cout<<arr[i]<<" ";
//                 break;
//             }
//     }
// };
// int uniqueElem(int arr[], int n){
//     int ans = 0;
//     for(int i =0; i<n; i++){
//         ans = ans ^ arr[i];
//     };
//     return ans;
// }
// int main(){
//     int arr[] = {1,1,2,3,4,5,2,3,5};
//     int n = 9;
//     uniqueVal(arr,n);
//     cout<<"This is using xor : "<<uniqueElem(arr,n);

// };


// REPEATED ELEMENT IN AN ARRAY

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,3};
    int n = 6;
    int ans = 0;
    for(int i = 0; i<n; i++){
        for(int j = i + 1; j<n; j++){
            if(arr[i] == arr[j]){

                cout<<"brute force : "<<arr[i]<<endl;
                break;
            }
        }
    }

}