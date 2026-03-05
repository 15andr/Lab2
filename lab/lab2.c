#include <stdio.h>

int function(int x) {
    if (x <= 0)
	 return x;   
    return function(x - 2);
}

int main(void) {
    int a = 30;
	int i = 0;

    while (a > 0) {
        a = function(a);  
        i++;
    }

    printf("%d\n", i);
    return 0;
}