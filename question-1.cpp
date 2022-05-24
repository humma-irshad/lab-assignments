#include<iostream>
using namespace std;

int main() {
    int size;
    int array[100];
    
    cout << "Enter the size of your collection: ";
    cin >> size;
    
    cout << "Enter the values of your collection:\n";
    for(int i = 0; i <= size - 1; i++)
        cin >> array[i];
    
    // largest value
    int max = array[0];
    for(int i = 0; i <= size - 1; i++) {
        if(max < array[i]) {
            max = array[i];
        }
    }
    
    // smallest value
    int min = array[0];
    for(int i = 0; i <= size - 1; i++) {
        if(min > array[i]) {
            min = array[i];
        }
    }
    
    // average value
    int avg, sum = 0;
    for(int i = 0; i <= size - 1; i++) {
        sum += array[i];
    }
    avg = sum / size;
    
    // displaying the values
    cout << "Largest value: " << max << "\nSmallest value: " << min << "\nAverage value: " << avg;
}
