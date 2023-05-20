#include <iostream>
using namespace std;

void genapkecil(int arr[], int n);
string ganjil(int arr[], int n);
void quicksort(int Arr[], int left, int right);
void BubbleSort(int myarr[], int n);
int *SortA(int myarr[], int n);
int main()
{
    int arr[] = {6, 7, 4, 3, 2};
    int Arr[] = {4, 2, 1, 7, 0};
    int myarr[] = {3, 2, 1, 7, 6};
    int n = sizeof(arr) / sizeof(*arr);
    //tugas 1
    cout << "Array :";
    for(int i=0; i < n; i++){
        cout <<arr[i] << " ";
    }cout << endl;
    genapkecil(arr, n);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            cout << arr[i] << " " << ganjil(arr, n) << endl;
        }
    }
    //tugas 2 mengurutkan angka secara descending
    cout << "Menggunakan QuickSort :" << endl;
    cout << "Sebelum di sort : ";
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
    cout << "Setelah di sort : ";
    quicksort(Arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;

    cout << "Menggunakan Bubble : " << endl;
    cout << "Sebelum diurutkan : ";
    BubbleSort(myarr, n);
    cout << "\n Setelah diurutkan : ";
    *SortA(myarr, n);
    BubbleSort(myarr, n);
}

void genapkecil(int arr[], int n)
{
    int minimal = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (arr[i] < minimal)
            {
                minimal = arr[i];
            }
        }
    }
    cout << "Angka genap terkecil adalah " << minimal << endl;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == minimal)
        {
            cout << "ketemu di index : " << i;
        }
    }
}
string ganjil(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        return "Bilangan termasuk ganjil";
    }
}

void quicksort(int Arr[], int left, int right)
{
    int i = left;
    int j = right;
    int tmp;
    int pivot = Arr[left];

    // partition
    while (i <= j)
    {
        while (Arr[i] > pivot)
        {
            i++;
        }
        while (Arr[j] < pivot)
        {
            j--;
        }
        if (i <= j)
        {
            tmp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = tmp;
            i++;
            j--;
        }
    }
    // rekursif
    if (left < j)
        quicksort(Arr, left, j);
    if (i < right)
        quicksort(Arr, i, right);
}

void BubbleSort(int myarr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << myarr[i]<< " ";
    }
}
int *SortA(int myarr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (myarr[i] > myarr[j])
            {
                int temp = myarr[i];
                myarr[i] = myarr[j];
                myarr[j] = temp;
            }
        }
    }
    return myarr;
}
