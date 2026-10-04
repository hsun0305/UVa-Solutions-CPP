#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

int n;

while(cin>>n){

    vector<int> a(n+1);

    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    sort(a.begin(),a.begin()+n);

    int mid_left=a[(n-1)/2];
    int mid_right=a[n/2];

    int cnt=0;

    for(int i=0;i<n;i++){
        if(a[i]>=mid_left && a[i]<=mid_right){
            cnt++;
        }
    }

    int possible_values=mid_right-mid_left+1;

    cout<<mid_left<<" "<<cnt<<" "<<possible_values<<endl;



}



}
