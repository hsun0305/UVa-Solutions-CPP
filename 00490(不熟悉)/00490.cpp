#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
vector<string> lines;
string temp;
size_t max_length=0;

while(getline(cin,temp)){
    lines.push_back(temp);
    max_length=max(max_length,temp.size());
}

for(int col=0;col<max_length;col++){//用最長那行為基準
    for(int row=lines.size()-1;row>=0;row--){//讀取每一行

    if(col<lines[row].size()){//判斷每一行是否有足夠長度
        cout<<lines[row][col];

    }
    else{
        cout<<" ";
    }

}
cout<<endl;
}
}
