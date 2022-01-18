#include <iostream>
using namespace std;

int main() {
    int total_temp = 0;
    float avg_temp = 0;
    int daily_temperature[30] = {55, 62, 68, 74, 59, 45, 41, 58, 60, 67, 65, 78, 82, 88, 91, 92, 90, 93, 87, 80, 78, 79, 72, 68, 61, 59};
    
    for(int i = 0; i < 26; i++) {
        total_temp += daily_temperature[i];
    }
    
    avg_temp = total_temp/26;
    cout << "The average temperature is: " << avg_temp;
}
