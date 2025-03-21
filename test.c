#include <stdint.h>
#include <stdatomic.h>


int main(int argc, char const *argv[])
{   


    int  a = 7;

    if ( a < 10 && a>=8)
    {
        printf("a is less than 10\n");
    } else if(a < 8)
    {
        printf("a is also less than 8\n");

    }
    else
    {
        printf("a is not less than 10");
        printf("Nisa is beautiful");

    }
    return 0;
}
