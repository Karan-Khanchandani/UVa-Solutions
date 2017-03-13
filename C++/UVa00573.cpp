#include<iostream>
#include<vector>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    int H, U, D ,F;
    while(1){
        cin >> H >> U >> D >> F;
        if(H == 0)
            break;

        H = H*100;
        U = U*100;
        D = D*100;
        F = U/100*F;
        int day = 0, climbed = 0;
        while(climbed >=0 && climbed <=H ){
            climbed += max(U-day*F,0);
             day++;
            if(climbed > H)
            break;
            climbed -= D;
        }
        if(climbed > H)
	    cout << "success on day " << day;
            else
                cout << "failure on day " << day;
            cout << endl;
    }


    return 0;
}


