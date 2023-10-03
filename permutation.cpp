#include<iostream>
using namespace std;
void printpermutaion(string &str, int i){
    //base case
    if(i>=str.length()){
        cout<<str<<" ";
        return;
    }
    //swapping
    for(int j=i;j<str.length(); j++){
        //swap
        swap(str[i],str[j]);
        // rec call
        printpermutaion(str,i+1);
        //backtracking- to recreate the orginal input string
        swap(str[i],str[j]);
    }
}
int main(){
    string str ="abc";
    int i=0;
    printpermutaion(str,i);
    return 0;
}