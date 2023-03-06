#include <iostream>
#include <string>
// اعلان توابع  
void Decreamenting(int array[], int arraySize);
void Increamenting(int array[], int arraySize);
using namespace std;
int main()
{
    // تعریف متغیر برای سایز ارایه 
    int arraySise;
    // نمایش و دریافت سایز ارایه 
    cout << "inter the size of the array :";
    cin >> arraySise;
    // تعریف ارایه 
    int array[arraySise];
    // گرفتن ورودی ها با حلقه 
    for (int i = 0; i < arraySise; i++)
    {
        cout << "filling the array : ";
        cin >> array[i];
    }
    // تعریف متقیر به نوع رشته برای انتخاب بین صعودی یا نذولی 
    string method;
    cout << "Decreamenting or Increamenting ? ";
    cin >> method;
    if (method == "Decreamenting")
    {
        cout << "doing Decreamenting" << endl;
        Decreamenting(array, arraySise);
        cout << endl << "Done" << endl;

    }
    else if (method == "Increamenting")
    {
        cout << "doing Increamenting" << endl;
        Increamenting(array, arraySise);
        cout << endl << "Done" << endl;
    }
    return 0;
}

// بخش توابع تعریفی 
void Increamenting(int array[], int arraySize)
{
    // مرتب سازی ارایه صعودی
    for (int i = 0; i < arraySize - 1; i++)
    {
        for (int j = i + 1; j <= arraySize - 1; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    // نمایش ارایه مرتب شده 
    for (int i = 0; i < arraySize; i++)
        cout << array[i] << " ";
}
void Decreamenting(int array[], int arraySize)
{
    for (int i = 0; i < arraySize - 1; i++)
    {
        for (int j = i + 1; j <= arraySize - 1; j++)
        {
            if (array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (int i = 0; i < arraySize; i++)
        cout << array[i] << " ";
}
