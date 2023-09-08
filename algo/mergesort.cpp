#include <iostream>
using namespace std;

void merge(int *arr, int m, int mid, int n) {
    int *first = new int[mid - m + 1];
    for (int i = m; i <= mid; i++) {
        first[i - m] = arr[i];
    }

    int *second = new int[n - mid];
    for (int i = mid + 1; i <= n; i++) {
        second[i - (mid + 1)] = arr[i];
    }

    int i = 0, j = 0, k = m;

    while (i < (mid - m + 1) && j < (n - mid)) {
        if (first[i] < second[j]) {
            arr[k++] = first[i++];
        } else {
            arr[k++] = second[j++];
        }
    }

    while (i < (mid - m + 1)) {
        arr[k++] = first[i++];
    }

    while (j < (n - mid)) {
        arr[k++] = second[j++];
    }

    delete[] first;
    delete[] second;
}

void mergesort(int *arr, int s, int e) {
    // base case
    if (s < e) {
        int mid = s + (e - s) / 2;

        mergesort(arr, s, mid);
        mergesort(arr, mid + 1, e);
        merge(arr, s, mid, e);
    }
}

int main() {
    int arr[10] = {2, 22, 33, 1, 44, 32, 67, 55, 43, 70};
    mergesort(arr, 0, 9);
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
