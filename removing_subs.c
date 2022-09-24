// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000

//function to delete substring occurance in string
void deletee(char string[],char substring[]){
    int i=0;
    int string_length=strlen(string);
    int substring_length=strlen(substring);

    
    while(i<string_length){
        
        //strstr is a function that compares two string and returns the pointer to the first element of one string where it matches the other string, here after getting the ponter to first element where it matches our substring we check if they are pointing the same element
        
        if(strstr(&string[i],substring)==&string[i]){
            count++;
            string_length-=substring_length; //decrementing lenght of our string by lenght of substring
            for(int j=i;j<string_length;j++){
                string[j]=string[j+substring_length]; //shifting elements of string to the left
            } }
            else{
                i++;
        }
        
    }
    string[i]='\0'; //Null terminator
}
    

int main() {
    char string[MAX_SIZE]=""; //initalizing string
    char sub_string[MAX_SIZE]=""; //initalizing sub_string
    printf("enter the string: ");
    gets(string); //getting string as input
    printf("\n");
    printf("enter subsstring: ");
    gets(sub_string); //getting substring as input
    deletee(string,sub_string); //invoking deletee function
    printf("the string after removal is: %s",string);
    return 0;
}
