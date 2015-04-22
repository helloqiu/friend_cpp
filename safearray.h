#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include<vector>
using namespace std;
class safearray{
	public :
		safearray(int nu);
		void append(int nu);
		int & operator [](int i){
			return a.at(i);
		}
	private :
		int num;
		int size;
		vector<int> a;
};
#endif
