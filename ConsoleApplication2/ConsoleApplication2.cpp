#include <iostream>
#include "Header228.h"
using namespace std;


int main()
{
    int arr[10] = {5, 6, 17, 23, 2, 4, 18, 65, 51, 1};
    
    for (int b = 0; b < 10; b++)
    {
        cout << arr[b] << " ";
    }
    
    cout << "\n";
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
        
    for (int b = 0; b < 10; b++)
    {
        cout << arr[b] << " ";
    }
}
