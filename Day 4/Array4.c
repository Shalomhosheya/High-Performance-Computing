#include <stdio.h>

int main()
{
    int a[][3] = {{56,64,91},{32,45,64},{11,24,97},(33,62,77)};
    
    for(int i=0; i<3; i++)
    {
        int sum = 0;
        for(int j=0; j<3; j++)
        {
            sum = sum + a[i][j];
        }
        printf("%d\n",sum);
    }

}