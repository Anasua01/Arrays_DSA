#include <iostream>

void find(int arr[],int size, int& min, int& max)
{
    min=arr[0];
    max=arr[0];
    
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
}

int main(){
    int size;
    std::cout<<"Enter the size of the array: ";
    std::cin>>size;
    
    int arr[size];
    std::cout<<"Enter "<<size<<" elements of the array: ";
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
    
    int min, max;
    find(arr,size,min,max);
    
    std::cout<<"Minimum element is: "<<min<<std::endl;
    std::cout<<"Maximum element is: "<<max<<std::endl;
    
    return 0;
}
