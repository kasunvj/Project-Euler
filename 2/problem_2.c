#include <stdio.h>
#define MAX 4000000

int getFibNum(int num1, int num2,int sum){
    int fibNum = num1 + num2;
    if( fibNum % 2 == 0){ //check even values
        sum += fibNum; 
    }

    if( fibNum < MAX ){
        getFibNum(num2,fibNum,sum);
    }
    else{
        return sum;
    }
}

int main(){
    int sum = 2;
    sum = getFibNum(1,2,sum);
    printf("SUM: %d\n",sum);
    return 0;
}