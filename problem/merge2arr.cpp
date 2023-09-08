#include <bits/stdc++.h>
using namespace std;

void ninjaAndSortedArrays(int arr1[], int arr2[], int m, int n) {
    
    int i = m-1;
    int j = n-1;
    int k = m+n-1;

    while (i >=0 && j >=0) {
        if (arr1[i] < arr2[j]) {
            arr1[k--]=arr2[j--];
            
        } else {
            arr1[k--]=arr1[i--];
        }
    }

    while (i >=0) {
       arr1[k--]=arr1[i--];
    }

    while (j >=0) {
        arr1[k--]=arr2[j--];
    }

    
}

int main() {
    int arr1[4] = {1, 3, 9, 11};
    int arr2[5] = {2, 4, 6, 8, 10};
    int m = 4;
    int n = 5;
    ninjaAndSortedArrays(arr1, arr2, 4, 5);

    for (int num = 0; num < 9; num++) {
        cout << arr1[num] << " ";
    }cout<<endl;

    return 0;
}
