#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int cs=0;
    int largest=0;
    int cnt=0;
    for(int i=0;i<A.size();i++){
        if(A[i]<0){
            cnt++; 
        }
    }
    if(cnt==A.size()){
        return *max_element(A.begin(),A.end());
    }
    else{
        for(int i=0;i<A.size();i++){
            cs+=A[i];
            if(cs<0){
                cs=0;
            }
            largest=max(cs,largest);
        }
        return largest;
    }
} //kadans algo works if one non negative element is present. 