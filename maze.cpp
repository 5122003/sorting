#include<iostream>
using namespace std;
int main(){
    int maze[4][4]={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    if(maze[0][0]==0){
        cout<<"no path exits"<<endl;

    }
    int row =4;
    int col =4;
    vector<vector<bool>visited(row,vector<bool>(col,false));
    visited[0][0]=true;
    vector<string>path;
    string output="";
}