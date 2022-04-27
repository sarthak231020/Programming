#include<stdio.h>
#include<stdarg.h>

void print_ints(int num, ...)
{
    va_list args;
    
    va_start(args,num);

    for(int i=0;i<num;i++)
    {
        int value = va_arg(args,int);
        printf("%d : %d\n",i,value);
    }
    va_end(args);

    return done;
}
int main()
{
    printf("Sonmething we don't want to say\n"); 
    printf("Jacob says \"Hello World\"\n");
    
}