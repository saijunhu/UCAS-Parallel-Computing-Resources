#include <stdio.h>
#include <omp.h>

//use arctan funtion's Taylor expansion to compute pi numerically.

int main(){
    int exp = -1;
    int k = 100000;
    double sum=0;
    double start_time,end_time;
    start_time = omp_get_wtime();
    for(int i=1;i<k;i++){
        exp *= -1;
        sum += exp/(double)(2*i-1);
    }
    end_time = omp_get_wtime();
    printf("%lf,use time %lf seconds",4*sum,end_time-start_time);
    return 0;
}