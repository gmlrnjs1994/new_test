#include "sum.h"
int sum(int n) {
	int result = 0;
	int i = 0;
	for(i = 1; i <= n; i ++){
		result = result + i;
	}
	return result;
}
