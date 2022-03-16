#include<iostream>
#include<ctime>
#include<cstdlib>

//函数声明
void func();

static int count =10;       //静态全局变量

int main()
{
    while(count--)
    {
        func();
    }

    //生成随机数之前必须先调用 srand() 函数。
    int i,j;
    srand((unsigned) time(NULL));
    for(i=0;i<10;i++)
    {
        j=rand();
        std::cout <<"j = " << j <<std::endl;
    }
    return 0;
}

//函数定义
void func(void)
{
    static int i = 5;
    i++;
    std::cout << "the value of i is :" << i;
    std::cout << "\t";
    std::cout << "the value of count is :" << count << std::endl;
}

//存储类型
thread_local int x;
class X{
    static thread_local std::string s;
};

//函数定义
int max(int n1,int n2)
{
    int result;
    if(n1>n2)
    {
        result=n1;
    }
    else
    {
        result=n2;
    }
    return result;
}

//函数声明
int max1(int ,int);