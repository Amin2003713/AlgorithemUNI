#include <iostream>
#include <cstdlib>

using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // تعریف دو آرایه جدید برای نیمه‌های چپ و راست
    int* leftArr = new int[n1];
    int* rightArr = new int[n2];

    // کپی کردن مقادیر به آرایه‌های جدید
    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }

    // ادغام دو آرایه به یکدیگر
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        }
        else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // کپی کردن عناصر باقی‌مانده به آرایه اصلی
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }

    // آزادسازی حافظه‌ی آرایه‌های جدید
    delete[] leftArr;
    delete[] rightArr;
}

void mergesort(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }
    int mid = (left + right) / 2;
    mergesort(arr, left, mid);
    mergesort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element #" << i + 1 << ": ";
        cin >> arr[i];
    }
    mergesort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr; // آزادسازی حافظه
    return 0;
}

////در مورد سختی زمانی این الگوریتم:
///
/// حالت بهینه: O(n log n)
/// بدترین حالت : O(n log n)