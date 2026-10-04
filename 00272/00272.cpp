#include<iostream>
using namespace std;
int main(){
    char text;
    bool c=false;
    while(cin.get(text)){
        if(text=='"'){
            if(c==false){
            cout<<"``";
            c=true;
            continue;
        }
            else{
            cout<<"''";
            c=false;
            continue;
        }
    }
    else{
        cout<<text;
    }
    }
}
