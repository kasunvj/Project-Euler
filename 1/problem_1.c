#include <stdio.h>
#define MAX 1000

int main(){
    int sum = 0;
    for (int i=2; i< MAX ; i++){
        if ((i%3 == 0)||(i%5 == 0)) {
            sum += i;
        }
        
    }
    printf("Sum: %d\n",sum);
    return 0;
}