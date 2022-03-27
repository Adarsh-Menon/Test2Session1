#include<stdio.h>
             int input_number()
         {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	return n;
}


int is_prime(int n)
{
    int flag=0;
	for(int i = 2; i < n; i++)
           {
		if(n % i == 0)
                         {
			flag=1;
			break;
		}
	}
	return flag;
}
void output(int n, int isprime)
{
	if(isprime==0)
                       {
		printf("%d is a prime number\n", n);
	}
          else
            {
		printf("%d is not a prime number\n", n);
	}
}
int main()
{
	int n, isprime;
	n = input_number();
	isprime = is_prime(n);
	output(n, isprime);
	return 0;
}

Main()
{
Int a,b,temp;
Printf(“Enter 2 nos”);
Scanf(“%d%d”,&a,&b);   a=10   b= 20
Temp=a;
A=b;
B=temp;
Printf(“ a nd b values are %d %d”, a,b);
}
