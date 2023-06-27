#include <iostream>

void reverseArray(int arr[],int size){
    int start=0;
    int end=size-1;
    
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    
        start++;
        end--;
    }
}
int main() {
    // Write C++ code here
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];
    std::cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    reverseArray(arr, size);

    std::cout << "\nReversed Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}
