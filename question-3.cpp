#include <iostream>
using namespace std;

int main() {
    int hot_day_counter = 0;
    int cold_day_counter = 0;
    int pleasant_day_counter = 0;
    int daily_temperature[26] = {55, 62, 68, 74, 59, 45, 41, 58, 60, 67, 65, 78, 82, 88, 91, 92, 90, 93, 87, 80, 78, 79, 72, 68, 61, 59};
    
    for(int i = 0; i < 26; i++) {
        if(daily_temperature[i] >= 85) 
            hot_day_counter++;
        else if(daily_temperature[i] > 85 || daily_temperature[i] > 60)
            pleasant_day_counter++;
        else
            cold_day_counter++;
    }
    cout << "The number of hot days: " <<  hot_day_counter << "\n The number of pleasant days: " << pleasant_day_counter << "\n The number of cold days: " << cold_day_counter;
}
