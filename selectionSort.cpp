#include <iostream>
using namespace std;
void selectionsort(int *arr, int i, int n)
{
    int min = i;
    if (i == n - 1)
    {
        return;
    }
    for (int j = i + 1; j < n; j++)
    {

        if (arr[min] > arr[j])
        {
            min = j;
        }
    }
    swap(arr[min], arr[i]);

    selectionsort(arr, i + 1, n);

  
}
int main()
{

    cout << "Selection sorting with recursion .... " << endl;

    int arr[5] = {3, 4, 5, 1, 2};
    int n = 5;
    selectionsort(arr,0, n);

    for (int  i = 0; i < n; i++)
    {
         cout<<arr[i]<<endl;
    }
    
    return 0;
}