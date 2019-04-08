#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
    int n = 0;
    int d = 0;
    
    pid_t pid;
    
        do
        {
            printf("n\t\t\t Enter an integer greater than 0 : \t\t\t\n");
            scanf("%d", &d);
        }
    while ( d <= 0 );
    
    pid = fork();
    
    if ( pid == 0 )
    {
        printf("The Child is Working Well.\n");
        printf("%d\n",d);
        while (d!=1)
        {
            if (d%2 ==0)
            {
                d = d/2;
            }
            else if (d%2 ==1)
            {
                d = 3 * (d) + 1;
            }
            printf("%d\n".d);
        }
        printf("Child process is done. \n");
    }
    else
    {
        printf(" The Parent is working on child Process. \n");
        wait();
        printf("Parent process is done. \n");
    }  
    return 0;
 }
