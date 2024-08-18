#include <stdio.h>

int main()
{
    int a[]={5,7,55,11,90};
    int sum_e=0,sum_o=0;
    for(int i=0;i<5;i++){
        // if(a[i]==11){
        //     printf("%d\n",i);
        //     break;
        // }
        if(i%2==0) sum_e+=a[i];
        else sum_o+=a[i];
        
    }
    int max= sum_e>sum_o?sum_e:sum_o;
    printf("max=%d\neven=%d\nOdd=%d\n",max,sum_e,sum_o);

    return 0;
}