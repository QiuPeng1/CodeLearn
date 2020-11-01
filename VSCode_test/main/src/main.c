#include "global_includes.h"
#include <time.h>

const int MAX = 3;
const char *filenames[] = {
            "RGB_FILE",
            "IR_FILE",
            "LEN_FILE",
};
void getSecond(unsigned long *ptime);
void test(int var)
{
    printf("test func var= %d\n", var);
}
int main()
{
    int var1 = 20;
    unsigned char var2[] = {10,100,200};
    unsigned char *ip;
    int *ip1;
    int **ipp2;
    char *str = "hello";
    char **p = NULL;
    unsigned long sec;
    char *str1 = "helloworld";
    char *str2 = "welcome back";
    int i;
    void (*f)(int i);
    hello_test1(str1);
    hello_test2(str2);

    f = test;
    f(3);
    (*f)(4);
    printf("test %p\n", test);
    printf("&test %p\n", &test);
    printf("*test %p\n", *test);
    getSecond(&sec);
    printf("second = %d\n", sec);
    
    return 0;
    printf("var1 变量的地址： %p\n", &var1);
    printf("var2 变量的地址： %p\n", &var2);
    
    ip1 = &var1;
    ipp2 = &ip1;

    printf("var1 = %d\n", var1);
    printf("var1 *ip1 = %d\n", *ip1);
    printf("var1 **ipp2 = %d\n", **ipp2);

    ip = &var2;
    for (i = 0; i < MAX; i++)
    {
        /* code */
        printf("ip存储的地址： %p\n", ip);
        printf("value of *ip variable: %d\n", *ip);
        ip++;
    }
    ip = &var2[MAX-1];
    for (i = 0; i < MAX; i++)
    {
        /* code */
        printf("ip存储的地址： %p\n", ip);
        printf("value of *ip variable: %d\n", *ip);
        ip--;
    }

    for (i = 0; i < MAX; i++)
    {
        /* code */
        printf("str of names[%d] = %s\n", i, filenames[i]);
    }
    
    return 0;

}

void getSecond(unsigned long *ptime)
{
    *ptime = time(NULL);
    return;
}