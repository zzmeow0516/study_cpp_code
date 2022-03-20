#include<iostream>
using namespace std;

int func1_jiechen(int n);

int func1_jiechen(int n){
    int ans =1;
    while(n>1)
    ans*=n--;
    return ans;
}