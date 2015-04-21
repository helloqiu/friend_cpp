#include<iostream>
#include"safearray.h"

using namespace std;

int main(void){
	safearray a(10);
	a.append(0);
	a.append(1);
	cout << a[0] << ' ' << a[1] << endl;
	return 0;
}
