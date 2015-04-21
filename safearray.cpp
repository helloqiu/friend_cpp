#include"safearray.h"
#include<iostream>

using namespace std;

safearray::safearray(int nu){
	size = nu;
}
void::safearray::append(int nu){
	a.push_back(nu);
}
int::safearray::show(int position){
	return a.at(position);	
}
