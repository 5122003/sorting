#include<iostream>
using namespace std;
void merge(int* arr,int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;

   //assume to create array for len1,len2 length
    int* left=new int[len1];
    int* right=new int[len2];

    //copy values
    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k];
        k++;
    }

    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k];
        k++;
    }
    //merge logic


    int leftindex=0;
    int rightindex=0;
    int mainArrayindex=0;
     

     while(leftindex<len1 && rightindex<len2){
        if(left[leftindex]<right[rightindex]){
            arr[mainArrayindex++]=left[leftindex++];
        
        }
        else{
            arr[mainArrayindex++]=right[leftindex++];

        }
     }
     //copy logic for left array
     while(leftindex<len1){
        arr[mainArrayindex++]=left[leftindex++];
     }
     //copy for right index
     while(rightindex<len2){
        arr[mainArrayindex++]=right[rightindex++];
     }

}



void  mergeSort(int arr[],int s, int e){
    //base case
    // s==e-->single element
    //s>=e invalid array
    if(s>= e)
    return;

    int mid=(s+e)/2;
    //left part sort kardo recurion

    mergeSort(arr,s,mid);
    //right part ko solve kardo

    mergeSort(arr,e  ,mid+1);

    //now 2 merges 2 sorted array
    mergeSort(arr,s,e);
}
int main(){
    int arr[]={4,5,13,2,12};
    int n=5;
    int s=0;
    int e=n-1;
    mergeSort(arr,s,e);
    //array print
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}