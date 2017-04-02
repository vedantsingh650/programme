#include<stdio.h>
#include<conio.h>
void main()
{
 int x[5],c,i;
 clrscr();
 printf("enter elements \n");
       for(i=0;i<5;i++)
      {
	scanf("%d",&x[i]);
      }
       for(i=0;i<5;i++)
     {
	printf("  %d",x[i]);
     }
     printf("\n enter element for delete \n");
     scanf(" %d",&c);
      for(i=0;i<5;i++)
      {
	if(x[i]==c)
	{
	  while(i<4)   /*if does not work why? */
	  {
	     x[i]=x[i+1];
	     i++;
	  }
	}

      }
     for(i=0;i<4;i++)
     printf("   %d",x[i]);
   getch();
}