#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include<vector>
#include"It.h"
using namespace std;
class safearray{
	public :
		friend class It;
		safearray(int nu);
		void append(int nu);
		int show(int i){
			return a.at(i);
		}
		int & operator [](int i){
			return a.at(i);
		}
	private :
		int num;
		int size;
		vector<int> a;
};
#endif
