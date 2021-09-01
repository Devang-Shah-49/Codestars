#include <bits/stdc++.h>
using namespace std;
int A[100], B[100];

int main(){
    int n, i, j;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int z=0; z<n; z++){
        cin >> A[z];
        B[z] = B[z-1]+A[z];
    }
    cout << "Prefix Sum array is: ";
    for (int z=0; z<n; z++){
        cout << B[z] << " ";
    }
    cout << "\nEnter i: ";
    cin >> i;
    cout << "Enter j: ";
    cin >> j;
    cout << "Answer: " << B[j]-B[i-1];
    return 0;
} 