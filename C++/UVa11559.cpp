#include<iostream>
#include<vector>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    int no_of_participants, budget, no_of_hotels, no_of_weeks;
    while(scanf("%d %d %d %d", &no_of_participants, &budget, &no_of_hotels, &no_of_weeks) != EOF){
            int minAmount = 5000000;
            int hotelCost = 0;
            int availableRooms = 0;
           for(int i = 0;i < no_of_hotels;i++){
            cin >> hotelCost;
            for(int j = 0;j < no_of_weeks;j++){
                cin >> availableRooms;
                if(availableRooms > no_of_participants){
                    minAmount = min(minAmount, no_of_participants*hotelCost);
                }
            }
           }

           if(minAmount < budget)
            cout << minAmount << endl;
           else
            cout << "stay home" << endl;


    }
    return 0;
}


