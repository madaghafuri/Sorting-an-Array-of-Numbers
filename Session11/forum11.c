#include <stdio.h>

int main(){
    int temp;
    int n=0;
    int array[50];

    printf("Insert the length of the array: ");
    scanf("%d",&n);
    printf("\nInsert the number of the array: ");
    for(int i =0; i<n; i++){
        scanf("%d",&array[i]);
    }

    for(int i=0; i<n-1; i++){
        for(int i=0; i<n-1; i++){
            if(array[i] > array[i+1]){
            temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
            }
        }
        
    }

    for(int i=0; i<n; i++){
        printf("%d ",array[i]);
    }
    


    return 0;
}