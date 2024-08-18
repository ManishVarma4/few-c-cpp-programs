// void Two_bin(int a[][],int lb_i,int lb_j,int ub_i,int ub_j,int x){
//     while(lb_i<ub_i && lb_j<ub_j){
//         int mid_i=(lb_i+ub_i)/2;
//         int mid_j=(lb_j+ub_j)/2;
//         if(a[mid_i][mid_j]== x){
//             printf("%d %d",mid_i,mid_j);
//             break;
//         }
//         if(x<a[mid_i][mid_j]){
//             ub_i=mid_i;
//             ub_j=mid_j;
//         }
//         else{
//             lb_i=mid_i;
//             lb_j=mid_j;
//         }
//     }
// }
 #include<stdio.h>
 void Two_bin(int arr[][],int x){
        int row=0,col=3;
        while(row<4 && col>=0){
        if(arr[row][col]== x){
            printf("%d %d",row,col);
        }
        if(arr[row][col]<x) row++;
        if(arr[row][col]>x) col++;
        }
 }
 void main(){

 }
