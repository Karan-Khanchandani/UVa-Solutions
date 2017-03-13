#include<iostream>
#include<vector>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0;i<t;i++){
        int ans = 0;
        int n;
        cin >> n;
        for(int j = 0;j<n;j++){
            int k;
            cin >> k;
            if(k > ans)
                ans = k;
        }
        cout << "Case " << i+1<<": " << ans << endl;
    }

    return 0;
}


