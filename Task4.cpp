#include <bits/stdc++.h>
using namespace std;

bool result(int number){    
        int temp, rev, i, count=0, sum=0;  
        temp = number;  
        for(i = 1; i <= temp; i++){  
            if(temp%i == 0){  
                count++;  
            }  
        }  

        while(number > 0){    
            rev = number%10;
            sum = sum*10+rev; 
            number = number/10;   
        }  
        
        if(temp == sum && count == 2)  
            return true;  
        else  
            return false;  
}  

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Answer: ";
    for(int i = 2; i <= n; i++){  
        if(result(i))  
                cout << i << " ";  
    }  
}  