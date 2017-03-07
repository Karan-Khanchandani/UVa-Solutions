#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int start,first,second,third;
    while(scanf("%d %d %d %d", &start, &first, &second, &third),(start || first || second || third)){
        int ans = 1080 + ((start - first + 40) % 40 + (second - first + 40) % 40 + (second - third + 40) % 40) * 9;
        // % operator is confusing in C++
        // ideally -5%40 should return 35 but in C++ it returns -5
        // the sign is preserved hence we are adding 40 to each term
        cout << ans << endl;
    }
    return 0;
}
