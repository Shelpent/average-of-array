#include <stdio.h>
#include <stdlib.h>

int main(){
    double sum = 0;
    int n;

    printf("Enter a number ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d a number in massive: \n", n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Your massive: ");
    for(int i = 0; i < n; i++){
        printf("%d \n", arr[i]);
    }

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    double average = sum / n;

    printf("Average is: %2.f", average);

    printf("\n ");
    


    
    return 0;






}