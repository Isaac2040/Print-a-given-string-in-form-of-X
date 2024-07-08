#include <stdio.h>


int main()
{
    //create a program that print hello word in x format


    const int length =10;
    for(int i =0; i<length;i++)
    {
        for(int j=0;j<length;j++)
        {

            if(i==j||i+j==length-1)
            {
                const char *word="1234567890";
                printf("%c",word[i]);
            }
            else
            {
                printf(" ");
            }

        }
            printf("\n");
    }


}