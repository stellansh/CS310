#include <string.h>
size_tstrspn(const *s1,const char *s2){
	size_t count=0;
	while(*s1 && strchr(s2, *s1++))
		count++;
	return count;
}
