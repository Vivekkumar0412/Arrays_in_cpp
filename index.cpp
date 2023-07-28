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
#include <iostream>
using namespace std;
int main() {
int arr[] ={1, 2, 3, 1, 2, 3};
int n = 6;
int K = 4; 
for(int i = 0; i<n; i++)
{
		for(int j = i +1; j<n; j++)
        {
			for(int m = j+1; m<n; m++)
            {
				if(arr[i] + arr[j] + arr[m] == K)
                {
					cout<<arr[i]<<" "<<arr[j]<<" "<<arr[m]<<endl;
				}
			}
		}
	};
};
// 4
// 5
// 10 5 5 5 2
// 12
// 6
// 1 2 3 1 2 3
// 6
// 4
// 1 2 3 4 
// 11
// 6
// 1 1 2 2 1 1
// 4
