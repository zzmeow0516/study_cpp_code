//引用
#include <iostream>
using namespace std;

int main() {
	int n1=1024;
	int &y1=n1;
	y1=2048;
	int n2;
	n2=y1;
	cout << n2 <<endl;
	int n3=9500;
	int *p1;
	int *&y2=p1;
	y2=&n3;
	*y2=10000;
	cout << *p1 << endl;
	return 0;
	//int &n2引用未初始化，error.
	//int &n2=10引用目标为非对象，error.
}
