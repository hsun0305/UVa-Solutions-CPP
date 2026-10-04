#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int get_value(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'A' && c <= 'Z') return c - 'A' + 10;
    if (c >= 'a' && c <= 'z') return c - 'a' + 36;
    return -1; // 代表無效字元（如符號或空白）
}

int main(){

    string str;

    while(getline(cin,str)){

    int sum=0;
    int max_digit=1;


//數學邏輯:N進位制中，一個數字是否能被 N-1 整除，取決於「該數字的所有位數值總和」是否能被 N-1 整除。

    for(int i=0;i<str.length();i++){

        int val=get_value(str[i]);
        if (val == -1) continue;
        sum+=val;

        if(val>max_digit){
            max_digit=val;
        }




    }

    bool found=false;

    for(int i=max_digit+1;i<=62;i++){
        if(sum%(i-1)==0){

            cout<<i<<endl;
            found=true;
            break;
        }

    }

    if(!found){
        cout << "such number is impossible!\n";
    }



    }






}
