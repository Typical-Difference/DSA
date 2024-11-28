#include <iostream>

using namespace std;

void print(int *base_addr, int max_iter)
{
    for( int i = 0; i < max_iter; i++)
    {
        cout << *(base_addr + i) << " ";
    }
}

int main()
{
    int arr[5] = {5,3,6,1,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    print(arr, size);
    //mergesort(arr, size);

    return 0;
}