#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;

    // Input 10 elements into the array
    cout << "Enter 10 integers: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i]; 
    }

    
    cout << "Sum of the array elements: " << sum << endl;

    return 0;
}
