#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int binarySearch(int arr[],int size, int target){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        int element=arr[mid];
        if(element==target){
            return mid;
        }
        if(target<element){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    vector<int>v{1,2,3,4,5,6};
    int arr[]={1,2,3,4,5,6,7};
    int size=7;
    if(binary_search(arr,arr+size,7)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found "<<endl;
    }
    return 0;

}