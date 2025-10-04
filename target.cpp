#include <iostream>
#include <cstdlib>
using namespace std;

void sum(int array[], int size, int target){
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (array[i] + array[j] == target) {
                if (array[i] < array[j]) {
                    cout << "[" << array[i] << ";" << array[j] << "]";
                }
            }
        }
    }
}
 
int main() {
    int num[] = {1, 2, 3, 5};
    int size = sizeof(num) / sizeof(num[0]);
    int target = 8; 
    sum(num, size, target);
}