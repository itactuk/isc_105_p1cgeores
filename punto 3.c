#include <stdio.h>
#include <stdlib.h>
#define fil 3
#define col 3



int main()
{
    int i,j,a=0,b=0,silla;
    int matriz[fil][col];
    matriz[0][0]= 5;
    matriz[0][1]= 25;
    matriz[0][2]= 16;
    matriz[1][0]= 2;
    matriz[1][1]= 30;
    matriz[1][2]= 13;
    matriz[2][0]= 9;
    matriz[2][1]= 19;
    matriz[2][2]= 27;


    for (i=0;i<fil;i++)
    {
        for (j=0;j<col;j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }



    for (i=0;i<fil;i++)
    {
        for (j=0;j<col;j++)
        {
            silla=matriz[i][j];

            if(silla<matriz[a][j] && silla>matriz[i][b])
            {
                printf("el punto de silla es %d\n",silla);
            }

        }

    }
    // no tengo manera eficiencia para cambiar a y b

    return 0;
}

