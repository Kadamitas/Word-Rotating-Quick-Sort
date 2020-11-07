#include <stdio.h>

int main(void) {
    char arr[] = "TEST";
    int arrSize = sizeof(arr)/sizeof(char);
    int temp;
    for(int i = 0; i<arrSize;i++){
            printf("%c ", arr[i]);
        }  
        printf("\n");
    for(int i = 0; i<arrSize-2;i++){
        printf("L: ");
        for(int j = 0; j < arrSize-2; j++){
            if(arr[j] > arr[j+1]){

                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
       } 
        for(int i = 0; i<arrSize;i++){
            printf("%c ", arr[i]);
        }
        printf("\n");
        printf("R: ");  
        for(int j = arrSize-2; j > 0; j--){
            if(arr[j] < arr[j-1]){
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
        for(int i = 0; i<arrSize;i++){
            printf("%c ", arr[i]);
        }
         
        printf("\n");
    }
    printf("\n Final: ");
    for(int i = 0; i<arrSize;i++){
        printf("%c ", arr[i]);
    }
    return 0;
}