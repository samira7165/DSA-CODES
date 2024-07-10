#include<iostream>
using namespace std;

int binarySearch(int arr[],int size, int key){
    int start=0;
    int end=size-1;

    int mid= (start+end)/2;

    while(start<=end){
        if (arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}



int main(){


int arr[7]={3,4,6,12,24,43,56};

int index= binarySearch(arr,7,12);

cout<<"Index of 12 is"<<index;





}
