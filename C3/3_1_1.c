#include <stdio.h>
#include <stdlib.h>

int f()
{
    printf("pong!");
	return 0;
}

struct obj
{
	int (*fun) (void);
};

int main()
{
	struct obj test_obj;
	test_obj.fun = f;
	test_obj.fun();
}
