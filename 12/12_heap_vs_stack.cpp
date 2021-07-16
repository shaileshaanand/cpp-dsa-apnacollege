#include <bits/stdc++.h>
using namespace std;
typedef int64_t i64;
int main()
{
    int a = 10;         // In stack
    int *p = new int(); // In Heap
    *p = 10;
    delete (p);     // Deallocate Memory
    p = new int[4]; // Allocate Array on Heap
    delete[] p;     // Deallocate Array allocated Memory
    p = NULL;       // Prevent Dangling Pointer
}
