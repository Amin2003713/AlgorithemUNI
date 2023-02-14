#include <iostream>
#include <string>
void Decreamenting(int array[], int arraySize);
void Increamenting(int array[], int arraySize);
using namespace std;
int main()
{
    int arraySise;
    cout << "inter the size of the array :";
    cin >> arraySise;
    int array[arraySise];
    for (int i = 0; i < arraySise; i++)
    {
        cout << "filling the array : ";
        cin >> array[i];
    }
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

void Increamenting(int array[], int arraySize)
{
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
