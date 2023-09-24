#include <bits/stdc++.h>
using namespace std;
int reverse(int n){
    int number=n;
    stack <int> nums;
    while(number>0){
        nums.push(number%10);
        number=number/10;
    }
    int rev=0;
    int i=1;
    while(!nums.empty()){
        rev=rev+(nums.top()*i);
        nums.pop();
        i=i*10;
    }
    return rev;
}