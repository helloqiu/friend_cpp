#ifndef IT_H
#define IT_H
#include"safearray.h"
class safearray;
class It{
	public:
		It(safearray &s);
		int next();
	private:
		int now;
		safearray * arr;
};
#endif
