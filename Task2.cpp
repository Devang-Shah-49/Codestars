#include <bits/stdc++.h>
using namespace std;

int secondsmallest(int arr[], int n){
    int firstSmall = -1;
    int secondSmall = -1;

    for (int i = 0; i<n; i++){
        if (firstSmall == -1 || arr[firstSmall]>arr[i])
            firstSmall = i;
    }
    for (int i = 0; i<n; i++) {
        if (i != firstSmall && (secondSmall == -1 || arr[secondSmall] > arr[i]))
            secondSmall = i;
    }
    if(n==2){
        if (arr[0]<arr[1]){
            arr[secondSmall] = arr[1];
        }
        else{
            arr[secondSmall] = arr[0];
        }
    }
    return arr[secondSmall];
}

int main(){
    int array[100], t;
    cout << "Enter number of elements:\n";
    cin >> t;
    if (t<2){
        cout << "Invalid Number of elements";
    }
    if (t>=2){
        for (int z=0; z<t; z++){
            cout << "Enter element "<<z+1 <<": ";
            cin >> array[z];
        }
        cout << "Second smallest element is: " << secondsmallest(array, t);
    }
    return 0;
}