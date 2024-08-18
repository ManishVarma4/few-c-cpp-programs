#include<stdio.h>
int binary(int a[], int lb, int ub, int x) {
    while (lb <= ub) {
        int mid = lb + (ub-lb) / 2;
        if (a[mid] == x)
            return mid;
        else if (a[mid] < x)
            lb = mid + 1;
        else
            ub = mid - 1;
    }
    return -1;
}
void main(){
    int a[]={10,20,30,40,50,60,70,80,90,100};
    int b=70;
    int loc= binary(a,0,10,b);
    printf("%d",loc);
}