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

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5,3};
//     int n = 6;
//     int ans = 0;
//     for(int i = 0; i<n; i++){
//         for(int j = i + 1; j<n; j++){
//             if(arr[i] == arr[j]){

//                 cout<<"brute force : "<<arr[i]<<endl;
//                 break;
//             }
//         }
//     }
//         for(int i = 0; i<n; i++){
//         ans = ans ^ arr[i];
        
//     };
//     for(int i = 1; i<n; i++){
//         ans = ans ^ i;
//     };
//     cout<<ans;
// };

// INTERSECTION OF ARRAYS 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {1, 2, 2, 2, 3, 4};
//     int arr2[] = {2,2,3};
//     int n = 6;
//     int m = 3;
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<m; j++){
//             if(arr[i] == arr2[j]){
//                 cout<<arr2[j]<<" ";
//                 arr2[j] = -1;
//                 break;
//             }
//         }
//     }
// }



// MORE OPTUMIZED SOLUTION
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {1, 2, 2, 2, 3, 4};
//     int arr2[] = {2,2,3};
//     int n = 6;
//     int m = 3;
//     int i = 0, j = 0;
//     while (i<n && j <m)
//     {
//         if(arr[i] == arr2[j]){
//             cout<<arr[i]<<" ";
//             i++;
//             j++;
//         }else if(arr[i] < arr2[j]){
//             i++;
//         }else{
//             j++;
//         }
//     }
    
// };


// SORT THE 0s , 1s and 2s in an array
#include <iostream>
using namespace std;
void pri(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    };
};

void sortArr(int arr[], int n){
    int zero = 0;
    int one = 0;
    int two = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            zero++;
        }else if(arr[i] == 1){
            one++;
        }else{
            two++;
        }
    };

    for(int i = 0; i<zero; i++){
        arr[i] = 0;
    };
    for(int i = zero; i<zero + one; i++){
        arr[i] = 1;
    };
    for(int i = zero + one; i<zero +one + two; i++){
        arr[i] = 2;
    };
    pri(arr,n);
}
int main() {
    // Write C++ code here
   int arr[] = {1,0,0,0,0,1,1,1,1,1,2,2,2,1,1,2,2,2,0,0,1};
   int n =21;
   sortArr(arr,n);
    return 0;
}