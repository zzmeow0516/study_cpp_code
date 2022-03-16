//sth about pointer
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    cout << "wow" <<endl;
    double *p1,*p2;
    int n1=100;
    p1=(double*)&n1;
    p2=p1;
    int *p3=nullptr; //int *p3=0;
    int *p4=NULL;
    if(p3)
    {
        cout << "flase" <<endl;
    }
    if(p2)
    {
        cout << "true" <<endl;
    }
    int n2=1024;
    int *p5=&n2;
    int **p6=&p5;
    //**p5存放的是指针p1的地址，所以需要&p1而不是直接写p1.
    cout << **p6 <<endl;
    return 0;
}