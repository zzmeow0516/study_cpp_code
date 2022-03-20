//const
#include<iostream>
using namespace std;

int func1()
    {
        cout << "wow" <<endl;
        return 1;
    }
int main(){
 
    const int n1=func1();
    const int n2=1024;
    const int &y1=n2;
    //  int &y2=n2;报错，原因是将常量n2赋给非常量引用y2.

    const int *p1=&n2;
    //int *p2=&n2;错误，原因类似.
    //tips:const int* 和 const int&都表示不能通过他们自己去改变 指向/引用 的对象的值，但其他途径是允许的。
    return 0;
}

