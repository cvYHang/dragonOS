#include<iostream>
using namespace std;
void bubbleSort(int arr[],int length);
int main()
{
    int arr[] = {5, 2, 8, 1, 3};
    int length = sizeof(arr) / sizeof(arr[0]); //计算数组长度
    bubbleSort(arr, length);
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}
void bubbleSort(int arr[],int length)
{
    for(int i = 0;i < length - 1;i++)
    {
        for(int j = length - 1;j > i;j--)
        {
            if(arr[j]<arr[j-1])
            {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}