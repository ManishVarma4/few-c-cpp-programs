#include "array.h"
int main() {
    int size;
    printf("Enter the size of Array: ");
    scanf("%d",&size);
    struct Array* A1 = create(3*size);
    for(int j=0;j<size;j++){
        insert(A1,10-j, j);
    }
    int choice,ch=1,i=size;
    int elem,inx;
  while(1){
    choice=option();  
    switch (choice) {
            case 0:
                printf("Thank you for using ADT!!\n");
                return 0;
            case 1:
                printf("Enter an Element: ");
                scanf("%d", &elem);
                insert(A1, elem, i);
                i++;
                break;
            case 2:
                printf("Initiating Traversing.......\n");
                traverse(A1);
                break;
            case 3:
                printf("Enter Index: ");
                scanf("%d", &inx);
                del(A1, inx);
                i--;
                break;
            case 4:
                printf("Sorting....\n");
                sort(A1);
                printf("The Array has been Sorted\n");
                break;
            case 5:
                printf("Enter the element to be Searched: ");
                scanf("%d", &elem);
                int index = search(A1, elem);
                if (index == -1) printf("Element Not Found!!!\n");
                else printf("Element present at index %d\n", index);
                break;
            case 6:
                printf("Enter the New Element and Index: ");
                scanf("%d %d", &elem, &inx);
                if (modify(A1, elem, inx)) printf("Array Modified....\n");
                else printf("Unable to Modify...\n");
                break;
            default:
                printf("Error (Invalid Selection)\n");
                break;
        }
  }
    return 0;
}