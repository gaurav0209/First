#include<stdio.h>

    int moves=0;	
	void toh(int n,char s,char temp,char dest)
	{
		if(n==1)
		{
			printf("1 from %c to %c\n",s,dest);
			moves++;
			return;
		}
         toh(n-1,s,dest,temp);
         printf("%d from %c to %c\n",n,s,dest);
         moves++;
         toh(n-1,temp,s,dest);

	}
	void main()
	{
		int n;
		//char s,t,d;
     printf("Enter the number of discs:");
     scanf("%d",&n);
     toh(n,'A','B','C');
     printf("\nNumber of moves: %d \n",moves);      
	}
