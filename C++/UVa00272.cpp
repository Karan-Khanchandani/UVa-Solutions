#include<iostream>
#include<string>

using namespace std;

int main(){
    char c;
    bool lsq = true; //left side quote
    while(true){
        c = cin.get();
        if(cin.eof())
            break;
        if(c == '"'){
            lsq?cout<<"``":cout<<"''";
            lsq = !lsq;
        }else{
            cout << c;
        }
    }
    return 0;

}
