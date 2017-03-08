#include<iostream>
#include<math.h>

using namespace std;
typedef long long int lli;
int main(){
    int t;
    cin >> t;
    while(t--){
        lli n,m;
        cin >> n >> m;
        if(n == m){
            cout << "=";
        }
        if(n > m){
            cout << ">";
        }
        if(n < m){
            cout << "<";
        }
        cout << endl;
    }
    return 0;
}

