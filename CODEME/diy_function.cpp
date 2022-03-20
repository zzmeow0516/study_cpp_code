#include"diy_function.h"

int func1_jiechen(int n){
    int ans =1;
    while(n>1)
    ans*=n--;
    return ans;
}