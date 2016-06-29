#include<sort1.h>
#include<stdio.h>

void sort1(int *a, int n){
    int c, d, t;
    for (c = 0 ; c < ( n - 1 ); c++){
	for (d = 0 ; d < n - c - 1; d++){
	    if (a[d] > a[d+1]){
	        t = a[d];
	        a[d] = a[d+1];
	        a[d+1] = t;
	    }
	}
    }
}
