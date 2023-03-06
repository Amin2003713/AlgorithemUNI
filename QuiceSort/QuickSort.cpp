#include <iostream>
using namespace std;

// تابع تعویض دو مقدار 
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// تابع پارتیشن برای جداسازی عناصر بزرگتر و کوچکتر 
int partition(int arr[], int low, int high) {
    int pivot = arr[high];    // تعیین محور
    int i = (low - 1);  // اولین عنصر در قسمت کوچکتر 
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// تابع مرتب سازی سریع 
void quickSort(int arr[], int low, int high , int w ) {
    if (low < high) {
        int pi = partition(arr, low, high); // تعیین محور
        cout << "\nthe pivot is : " << pi << endl;
        quickSort(arr, low, pi - 1 , ++w);  // مرتب سازی بخش کوچکتر از محور
        quickSort(arr, pi + 1, high , ++w); // مرتب سازی بخش بزرگتر از محور
    }
}

// تابع چاپ آرایه 
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// تابع main 
int main() {
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    constexpr int n = std::size(arr);
    quickSort(arr, 0, n - 1 , 1);
    cout << "\n\n\n\nSorted array is: ";
    printArray(arr, n);
    return 0;
}






//////////////////////////////////////////////////////حالت دوم ///////////////////////////////////////////////////////////////////////////
///
///


/*
#include <iostream>
#include <utility>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::swap;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    delete[] arr;
    return 0;
}
*/



///
///مرتب سازی سریع (Quick Sort) یکی از معروف‌ترین الگوریتم‌های مرتب سازی است. سختی زمانی
///الگوریتم Quick Sort به حالت مرتب شده ورودی، نحوه پارتیشن‌بندی، و انتخاب pivot بستگی دارد. در
///صورتی که در هر مرحله pivot به شکل بهینه انتخاب شود و ورودی نیز تقریباً تصادفی باشد، سختی
///زمانی به O(n log n) می‌رسد. اما در صورتی که بدترین حالت اتفاق بیافتد که pivot در هر بار پارتیشن
///بندی در ابتدای یا انتهای آرایه باشد، سختی زمانی به O(n^2) می‌رسد.
///در حالت میانگین، Quick Sort به طور کلی از الگوریتم‌های مرتب سازی بهتری است و در بسیاری از حالات سریع و بهینه عمل می‌کند
///