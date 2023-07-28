#include <stdio.h>

int main(void) {
	int i, t,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	   scanf("%d %d",&n,&t);
	   if(n<=6)printf("%d\n",t);
	   else if( n>6 && n%6==0)printf("%d\n",n*t/6);
	   else {printf("%d\n",((n/6)+1)*t);}
       
	}
	
	return 0;
}

