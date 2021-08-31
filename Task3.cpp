#include <bits/stdc++.h>
using namespace std;

int Missing(int array[], int t){
    int total_sum = t * (t + 1) / 2 ;
    int sum = 0;
    for(int i = 0; i < t - 1; i++){
        sum += array[i];
    }
    return ( (total_sum) - (sum) );
}

int main(){
    int n, arr[1000];
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter n-1 elements:\n";
    for (int a=0; a<n-1; a++){
        cin >> arr[a];
    }
    cout << "The missing number is: "<< Missing(arr, n);
    return 0;
}
