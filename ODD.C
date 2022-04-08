#include <stdio.h> 
#define EVEN 2 
#define LIMIT 20 
 
int main()  
{ 
	int Odd_Num[20]; 
	int Even_Num[20]; 
 
	int i , j , k ; 
 
	memset(Odd_Num, 0, sizeof(Odd_Num)); 
	memset(Even_Num, 0, sizeof(Even_Num)); 
 
	for(i = j = k = 0; i != LIMIT; i++)  
	{  
		if( i % EVEN )  
		{	 
			Odd_Num[j++] = i ; 
		}  
 
		else 
		{ 
			Even_Num[k++] = i ; 
		}  
	}  
 
	printf( "Even numbers from 0 to 20 are\n" ) ; 
	for (k = 0; k != LIMIT; k++)  
	{ 
		printf("%d\t", Even_Num[k]) ; 
	}  
 
	printf("\n"); 
	 
	printf( "Odd numbers from 0 to 20 are\n" ) ; 
	for (j = 0; j != LIMIT; j++)  
	{ 
		printf("%d\t", Odd_Num[j]) ; 
	}  
}  