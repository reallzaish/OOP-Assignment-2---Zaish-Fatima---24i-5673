#include <iostream>
using namespace std;

void ChangetheLocation(char *Array, int b1, int b2) {
    if (b1 >= b2)
        return;
        
    char temp = Array[b1];
    Array[b1] = Array[b2];
    Array[b2] = temp;

    ChangetheLocation(Array, b1 + 1, b2 - 1);
}
int main() {
    char Array[8] = {'C', 'O', 'M', 'P', 'U', 'T', 'E', 'R'};

    cout << "Original Array: "<<endl;
    for (int i = 0; i < 8; i++)
        cout << Array[i] << " ";

    ChangetheLocation(Array, 2, 6); 

    cout << "After Changing the Location: "<<endl;
    for (int i = 0; i < 8; i++)
        cout << Array[i] << " ";

    return 0;
}