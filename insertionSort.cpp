#include <iostream>
using namespace std;

void insertionSort(int *arr, int n)
{

    int key;

    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > key)
            {

                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }

        arr[j + 1] = key;
    }

}
int main()
{

    cout << "insertion sort using recursion ..." << endl;

    int arr[5] = {23, 1, 10, 5, 2};
    insertionSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
