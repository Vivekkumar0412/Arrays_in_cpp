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
// #include <iostream>
// using namespace std;
// void pri(int arr[], int n){
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     };
// };

// void sortArr(int arr[], int n){
//     int zero = 0;
//     int one = 0;
//     int two = 0;
//     for(int i = 0; i<n; i++){
//         if(arr[i] == 0){
//             zero++;
//         }else if(arr[i] == 1){
//             one++;
//         }else{
//             two++;
//         }
//     };

//     for(int i = 0; i<zero; i++){
//         arr[i] = 0;
//     };
//     for(int i = zero; i<zero + one; i++){
//         arr[i] = 1;
//     };
//     for(int i = zero + one; i<zero +one + two; i++){
//         arr[i] = 2;
//     };
//     pri(arr,n);
// }
// int main() {
//     // Write C++ code here
//    int arr[] = {1,0,0,0,0,1,1,1,1,1,2,2,2,1,1,2,2,2,0,0,1,0};
//    int n =22;
//    sortArr(arr,n);
//     return 0;
// }

// finding the intersection of two arrays using XOR ^ operator
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,40,90,100};
//     int arr2[] = {4,7,8,9,12,30,90};
//     int n = 11;
//     int m = 7;
//     int i = 0;
//     int j = 0;
//     int ans = -100;
//     cout<<ans;
//     while(i<n && j<m){
//         ans = arr[i] ^ arr2[j];
//         if(ans == 0){
//             cout<<arr[i]<<" ";

//             i++;
//             j++;
//         }else if(arr[i]<arr2[j]){
//             i++;
//         }else{
//             j++;
//         }
//     }
//     return 0;
// };

// BINARY SEARCH
#include <iostream>
using namespace std;
int binarSearch(int arr[], int s, int n){
    int start = 0;
    int end = s -1;
    int mid = (start + end)/2;
    while(start <= end){
        if(arr[mid] == n){
            return mid;
        };
        if(n>arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        };
        mid = (start + end)/2;
    };
    return -1;
};

int search(int arr[],int size, int target) {
  // Write your code here
    int start = 0;
    int end = size-1;
    int mid =  (  start + end) / 2;
    while (start <= end)
     {
      if (arr[mid] == target) {
        return mid;
      };
      if (target > arr[mid]) {
        start = mid + 1;
      } else {
        end = mid - 1;
      };
      mid =  ( start+ end ) / 2;
    };
    return -1;
  
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    int arr2[] = {4,7,8,9};
    int arr3[] = {};
    // int ans = binarSearch(arr,8,7);
    // cout<<"the index is : "<<ans<<endl;
    int ans = search(arr,8,8);
    cout<<"The index is : "<<ans;
    return 0;
}

// IMP QUESTION first and last occurance of the element in a sorted array
#include <iostream>
using namespace std;
int Occurance(int arr[], int s, int n){
    int arr2[2] = {0};
    int start = 0;
    int end = s - 1;
    int mid = start + (end - start)/2;
    while (start <= end)
    {
        if(arr[mid] == n){
            arr2[0] = mid;
            end = mid - 1;
        }
       else if(arr[mid] < n){
            start = mid +1;
        }else{
            end = mid -1;
        };
        mid = start + (end - start)/2;
    };
    // cout<< "The first occurance is : "<<arr2[0]<<endl;
    return arr2[0];
    
};
int rightOccurance(int arr[], int s, int n){
        int arr2[2] = {0};
    int start = 0;
    int end = s - 1;
    int mid = start + (end - start)/2;
    while (start <= end)
    {
        if(arr[mid] == n){
            arr2[0] = mid;
            start = mid + 1;
        }
        else if(arr[mid] < n){
            start = mid +1;
        }else{
            end = mid -1;
        };
        mid = start + (end - start)/2;
    };
    // cout<< "The last occurance is : "<<arr2[0]<<endl;
    return arr2[0];
};
int countOfVal(int arr[],int s, int n){
    int firstOccurance = Occurance(arr,s,n);
    int lastOccurance = rightOccurance(arr, s, n);
    int count = 0;
    for(int i = firstOccurance; i<= lastOccurance; i++){
        // if(arr[i] == n){
            count++;
        // };
    };
    return count;
}
int main(){
    int arr[] = {1,2,5,5,5,5,5,5,5,6,7,8};
    int s = 12;
    // int n = Occurance(arr,12,5)
    // rightOccurance(arr,12,5);
    int c = countOfVal(arr, s, 5);
    cout<<"The count of c is : "<<c<<endl;
    return 0;
    
};


// find the peak element in an array.
#include <iostream>
using namespace std;
int main(){
    int arr[] = {0,10,11,12,45,5,2};
    for(int i = 0; i<7; i++){
        if(arr[i] > arr[i+1] && arr[i] > arr[i-1]){
            cout<<"The index is : "<<i<<endl;
        }
    };
};

// FIND THE PEAK ELEMENT IN AN ARRAY USING BINARY SEARCH
#include <iostream>
using namespace std;
int findPeak(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    
    while(start <= end){
        if(arr[mid] > arr[mid - 1] && arr[mid] < arr[mid +1]){
            // cout<<"FOUND THE MID VALUE : "<<mid;
            // break;
            return mid;
        }else if(arr[mid] < arr[mid + 1]){
            start = mid;
        }else if(arr[mid] < arr[mid - 1]){
            end = mid;
        };
        mid = start + (end - start)/2;
    };
    return mid;
}
// int main(){
    
//     int arr[] = {1,3,20,4,1,0};
//     int ans = findPeak(arr, 6);
//     cout<<"The ans is : "<<ans;
// }