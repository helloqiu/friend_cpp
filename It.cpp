#include"It.h"

It::It(safearray &s){
	now = -1;
	arr = &s;
}

int It::next(void){
	now += 1;
	return arr -> show(now);
}
