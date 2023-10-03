#include<iostream>
using namespace std;
int findsquart(int n){
    int target=n;
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(mid*mid==target){
            return mid;
        }
        if(mid*mid>target){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans =findsquart(n);
    cout<<"Ans is "<<ans<<endl;
    int precision;
    cout<<"Enter the number of floating digits in precison"<<endl;
    cin>>precision;
    double step=0.1;
    double finalAns=ans;
    for(int i=0; i<precision; i++){
        for(double j=finalAns; j*j<=n; j=j+step){
            finalAns=j;
        }
        step=step/10;
    }
    cout<<"final ans is."<<finalAns<<endl;
    return 0;

}