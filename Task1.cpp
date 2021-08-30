#include <bits/stdc++.h>
using namespace std;

string reverse(string str, int n){
    char temp;
    int j = n - 1;
    for (int i = 0; i < j; i++,j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
}

int main(){
    string str1;
    cout << "Enter a string:\n";
    cin >> str1;
    int a = str1.length();
    cout << "Reverse of the given string is:\n" << reverse(str1, a);
    return 0;
}