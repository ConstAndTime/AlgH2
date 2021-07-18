#include <stdio.h>

int main (const int argc, const char** argv) {
int arr[100] = {2, 3};
int capacity = 2;
for (int i = 4; i < 100; ++i) {
    int p = 1;
    for (int j = 0; j < capacity; ++j) {
        if (i % arr[j] == 0) {
            p = 0;
            break;
        }
    }
    if (p) {
        arr[capacity++] = i;
    }
}
for (int k = 0; k < capacity; ++k) {
    printf("%d ", arr[k]);
}
return 0;
}



  
