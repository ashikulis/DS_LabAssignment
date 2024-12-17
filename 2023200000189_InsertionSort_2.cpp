#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[], int n)
{
    int i, key, j;
    long long int compare = 0, swap = 0;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            compare++;
            a[j + 1] = a[j];
            j--;
            swap++;
        }
        a[j + 1] = key;
        swap++; 
    }
    cout << endl << "Swap Number= " << swap << endl << "Comparison number= " << compare << endl;
}

int main()
{
    int len=1000; //Length of the Array is fixed to 1000
    int rang;
    cin >> rang;
    clock_t start_time, end_time;
    double insertion_time;

    cout<<"Enter elements range: "<<rang;
    int arr[len];
    srand(time(0));
    for (int i = 0; i < len; i++)
    {
        arr[i] = rand() % 100 + 1; //range of the elements taken for assignment, 1 to 100,500,1000,5000,10000,50000

    }

    start_time = clock();
    insertion_sort(arr, len);
    end_time = clock();

    insertion_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    cout << "Time for insertion sort: " << insertion_time;

}