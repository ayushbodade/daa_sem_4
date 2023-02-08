#include <iostream>
#include <fstream>
#include <time.h>
#include <cstdlib>
#include <fstream>
#include <string.h>
#include <chrono>
#include <numeric>
#include <iomanip>
using namespace std;

void getInput()
{
    ofstream fp;
    fp.open("input.text");
    for (int i = 0; i < 100000; i++)

        fp << rand() % 100000 << endl;
    fp.close();
}
void readfile(int arr[])
{
    int i = 0;
    ifstream fp;
    fp.open("input.text");
    while (fp.good())
    {
        fp >> arr[i];
        i++;
    }
    fp.close();
}
void insertionsort(int arr[], int i, int stop)
{
   int temp = i;
    if (i == stop)
        return;
    int curr = arr[i];
    temp--;
    while (temp >= 0 && arr[temp] > curr)
    {
       arr[temp + 1] = arr[temp];
        temp--;
    }
    arr[temp + 1] = curr;
    insertionsort(arr, i + 1, stop);
}
void selectionsort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
       int min_idx = i;
        for (int j = min_idx + 1; j < size; j++)
            if (arr[min_idx] > arr[j])
                min_idx = j;
        if (min_idx != i)
        {
           int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int i;
    int stop, limit;
    int arr[100000];
    clock_t start, end;
    double time_taken = 0;
    getInput();
    readfile(arr);
    printf("The data:\n");
    printArray(arr, 100000);
    printf("\nFunction:\n1.Insertion Sort\n2.Selection Sort\n");
    printf("\nEnter your choice:");
    int ch;
    scanf("%d", &ch);
    if (ch == 1)
    {
        time_taken = 0;
        i = 1;
        stop = 100;
        while (i <= 1000)
        {
            start = clock();
            insertionsort(arr, 0, stop);
            end = clock();
            time_taken =time_taken + (double(end - start) / double(CLOCKS_PER_SEC));
            cout << "Time taken by program is:" << fixed << time_taken << setprecision(5);
            cout << "sec" << endl;
            stop = stop + 100;
            i++;
        }
        return 0;
    }
    else if (ch == 2)
    {
        i = 1;
        limit = 100;
        while (i <= 1000)
        {
            start = clock();
            selectionsort(arr, limit);
            end = clock();
            time_taken = (double(end - start) / double(CLOCKS_PER_SEC));
            cout << fixed << time_taken << setprecision(5);
            cout << "" << endl;
            limit = limit + 100;
            i++;
        }
        return 0;
    }
    else
    {
        cout << "Entered wrong choice" << endl;
    }
    return 0;
}
