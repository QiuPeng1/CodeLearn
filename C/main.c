#include<stdio.h>
#include "./hello/inc/helloworld.h"

int main()
{   
    int i;
    char *str = "helloworld";
    for(i=0; i<10; i++)
    {
        test_hello(str);        
    }
}