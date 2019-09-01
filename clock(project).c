#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    int h=0,m=0,s=00;
    printf("Enter time in format of HH(Hour) MM(Minute) SS(Second): ");
    scanf("%d%d%d",&h,&m,&s);
    start:;
    for(h;h<24;h++)
    {
        for(m;m<60;m++)
        {
            for(s;s<60;s++)
            {
                system("cls");
                printf("\n\n\n\n\n\n\t\t\t\t\t==========================================\n");
                printf("\t\t\t\t\t||\t\t\t\t\t||\n");
                printf("\t\t\t\t\t||\t\t\t\t\t||\n");
                printf("\t\t\t\t\t||\tTODAY'S TIME: %d:%d:%d ",h,m,s);

                if(h<12)
                {
                    printf("A.M.\t||\n");
                }
                else
                {
                    printf("P.M.\t||\n");
                }
                printf("\t\t\t\t\t||\t\t\t\t\t||\n");
                printf("\t\t\t\t\t||\tTODAY'S DATE: %d / %d / %d\t||\n",stime.wDay,stime.wMonth,stime.wYear);
                printf("\t\t\t\t\t||\t\t\t\t\t||\n");
                printf("\t\t\t\t\t==========================================");
                    for(double i=0;i<89999900;i++)
                    {
                        i++;
                        i--;
                    }
            }
            s=0;
        }
        m=0;
    }
    goto start;
    //file handiling, restructure code,array,file structure
}
