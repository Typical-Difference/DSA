// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void selectionsort(int A[], int size){
    for(int i = 0; i < size; i++){
        int min = i;
        for(int j = i+1 ; j < size; j++){
            if(A[j] < A[min]){
                min = j;
            }
        }
        swap(A[i], A[min]);
    }
}

void insertionsort(int A[], int size){
    for(int i = 0; i < size; i++){
        int j = i;
        while(j > 0 && A[j-1] > A[j]){
            swap(A[j], A[j-1]);
            j--;
        }
    }
}

void bubblesort(int A[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 1; j < size - i; j++){
            if(A[j-1] > A[j]){
                swap(A[j], A[j-1]);
            }
        }
    }
}

void print(int A[], int size){
    for(int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
}

int main() {
    // Write C++ code here
    int arr[6] = {13, 52, 6, 9, 10, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr, size);
    cout << endl;
    insertionsort(arr,size);
    //bubblesort(arr,size);
    //selectionsort(arr, size);
    print(arr, size);
    

    return 0;
}
