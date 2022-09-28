
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOWER 1
#define UPPER 42
#define DRAWS 100

static int printRandoms(int lower, int upper);
static void PrintNumbers(int n,int lottery[]);
static int* Draw_lottery(int* lottery,int lower,int upper,int draws);

// Generates and prints 'count' random
// numbers in range [lower, upper].
int printRandoms(int lower, int upper)
{   
        int num = (rand() %
        (upper - lower + 1)) + lower;
        //printf("%d ", num);
        return num;
}

/*printing all the numbers in lottery */
void PrintNumbers(int n,int lottery[]){
    for(int i=0;i<n;i++){
        printf("the percentage of %d is %d%% \n",i+1,lottery[i]);
    }    
}
/* Drawing Lottery function , we generate random no */
int* Draw_lottery(int* lottery,int lower,int upper,int draws){
    int i=0; /* this keeps track of total no of raffles */
    /* each lottery draws a total of 6 number , j will keep
    track of those numers */
    int j=0; 
    int randomno=0; /*initializing randomno */
    for(i=0;i<100;i++){
        for(int j=0;j<=6;j++){
            randomno=printRandoms(LOWER,UPPER); /*generating random numver */
            /* this will increment the value of a number in lottery array at the 
            index generated by random function by 1 */
            lottery[randomno-1]+=1;         
        } 
    }
    return lottery; /* returning lottery array */
}
 
/* main function */
int main(void)
{
    int lottery[UPPER]={0}; /* initializing array to store first 42 natural numbers 
    (lucky lottery numbers)*/
    int* ptr; /*this ptr will point to the returned lottery array */
    srand(time(0)); /*seed for random generators */
    /* invoking Draw_lottery function */
    ptr=Draw_lottery(lottery, LOWER,UPPER,DRAWS);
    /*invoking PrintNumbers function */
    PrintNumbers(UPPER,ptr) ; 
    return 0;   
}
