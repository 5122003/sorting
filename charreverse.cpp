#include<iostream>
#include<string.h>
using namespace std;
 void reverseCharArray(char name[]){
        int i=0;
        int n= getLength(name);
    
        int j=n-1;
        while(i<=j){
            swap(name[i], name[j]);
            i++;
            j--;
        }
    }
int main(){
    char name[100];
    cin>>name;
    cout<<"initially"<<name<<endl;
    reverseCharArray(name);
    cout<<"after reversal process:"<<name<<endl;
    

   
}