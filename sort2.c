#include<sort2.h>
#include<stdio.h>

void sort2 (int *a, int n) {
    int i, j, m, t;
    for (i = 0; i < n; i++) {
	for (j = i, m = i; j < n; j++) {
	    if (a[j] < a[m]) {
		m = j;
	    }
	}
	t = a[i];
        a[i] = a[m];
        a[m] = t;
    }
}

