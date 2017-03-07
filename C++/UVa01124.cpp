#include<iostream>

using namespace std;

int main(){
    while(true){
        if(cin.eof()){
            break;
        }
        char c = cin.get();
        cout << c;
    }
    return 0;
}
