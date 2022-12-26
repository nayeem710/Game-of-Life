#include<stdio.h>
int main()
{
    int a[100][100],b[100][100];
    int i,j,k,t,r,c,num,coun;
    for(;;)
    {
        printf("Grid Size: ");
        scanf("%d %d",&r,&c);
        if(r==0 && c==0)
        {
            break;
        }

        printf("Enter no.of iterations: ");
        scanf("%d",&t);
        printf("Enter Generation 0: \n");
        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                scanf("%d",&a[i][j]);
                b[i][j]=a[i][j];
            }
        }

        for(k=1; k<=t; k++)
        {
            for(i=1; i<=r; i++)
            {
                for(j=1; j<=c; j++)
                {
                    num= a[i][j];
                    coun=0;
                    if(num==0)
                    {

                        if(a[i+1][j]==1)
                            coun++;
                        if(a[i-1][j]==1)
                            coun++;
                        if(a[i][j+1]==1)
                            coun++;
                        if(a[i][j-1]==1)
                            coun++;
                        if(a[i+1][j+1]==1)
                            coun++;
                        if(a[i+1][j-1]==1)
                            coun++;
                        if(a[i-1][j+1]==1)
                            coun++;
                        if(a[i-1][j-1]==1)
                            coun++;

                        if(coun==3)

                            b[i][j]=1;

                        else

                            b[i][j]=0;

                    }
                    else
                    {
                        if(a[i+1][j]==1)
                            coun++;
                        if(a[i-1][j]==1)
                            coun++;
                        if(a[i][j+1]==1)
                            coun++;
                        if(a[i][j-1]==1)
                            coun++;
                        if(a[i+1][j+1]==1)
                            coun++;
                        if(a[i+1][j-1]==1)
                            coun++;
                        if(a[i-1][j+1]==1)
                            coun++;
                        if(a[i-1][j-1]==1)
                            coun++;

                        if(coun==2 || coun==3)

                            b[i][j]=1;

                        else if(coun==0 || coun==1 || coun>3 )

                            b[i][j]=0;

                        else

                            b[i][j]=1;



                    }
                }
            }


            printf("Generation %d:\n",k);

            for(i=1; i<=r; i++)
            {
                for(j=1; j<=c; j++)

                {
                    a[i][j]=b[i][j];
                    printf("%d ",a[i][j]);
                }

                printf("\n");
            }

        }

    }

   return 0;
}

