#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*1*/
int main()
{
    char s[100] = "Welcome to C programming.";
    printf("Hello, World!\n");
   
    printf("%s",s);
    return 0;
    
}

/*2*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   char ch,s[50],sen[500];

scanf("%c",&ch);

scanf("%s",s);

scanf("\n");

scanf("%[^\n]%*c",sen);

printf("%c\n",ch);

printf("%s\n",s);

printf("%s",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

/*3*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,s1,m1;
    float c,d,s2,m2;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    s1 = a + b;
    m1 = a - b;
    s2 = c + d;
    m2 = c - d;
    printf("%d %d\n",s1,m1);
    printf("%0.1f %0.1f",s2,m2);
    return 0;
}
