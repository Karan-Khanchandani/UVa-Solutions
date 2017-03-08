#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin  >> t;
    for(int i= 0;i<t;i++){
        int salary[3];
        cin >> salary[0] >> salary[1] >> salary[2];
        sort(salary,salary+3);
        cout << "Case " << i+1 << ": " << salary[1] << endl;
    }
    return 0;
}
