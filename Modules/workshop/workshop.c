#include <stdio.h>
#include <unistd.h>


//checks if char is whitespace
int iswhitespace(char *cchar)
{

}


//checks if char is digit
int isdigit(char *c)
{
    
}


//This should make an int out of a String
int	atoi(char *str)
{
	int 	res;
	int	sign;
	
	res = 0;
	sign = 1;
//pass an arbitrary amount of whitspace (iswhitespace(3))
 while (*str == '\t' || *str == ' ' || *str == '\n')
 	str++;
//pass a single + or - and change the sign of the int accordingly
 if (*str == '-' || *str == '+')
 {
 	if(*str == '-')
 		sign *= -1;
 	str++;
 }
//pass an arbitrary amount of digit chars and modify the result accordingly
while (*str >= '0' && *str <= '9')
{
	// if the character we are checking against is '2' -> (50 - 48)
	res = res * 10 + (*str - '0');
 	str++;
}

//return the result
	return (res * sign);
}


//should print a number using iteration
int putnbr_iter(int a)
{
	int n;
	char l;
	//1234	
	n = 0;
	while (a > 10)
	{
	 	printf ("%d \n", (n * 10 + a % 10) );
		n = n * 10 + a % 10; 
		a = a/10;
	}
	n = n * 10 + a % 10;
	 while (n>0)
	 {
	 	l = (n % 10) + '0';
	 	write (1, &l, 1);
	 	n /= 10;
	 }
	 write(1, '\n', 1);
	return n;	
}


//should print a number using recursion
void putnbr_recur(int a)
{
	char l;
	//1234 mod = 4
	//123 mod = 3
	//12 mod = 2
	//1 mod = 1
	if(a >= 10)
		putnbr_recur(a/10);
	l = (a % 10) + '0';
	write(1, &l, 1);
}


int main (int ac, char **av)
{
	int a = 1234;
	putnbr_iter(a);
	write(1, "\n", 1);
	putnbr_recur(a);
	//printf("%d\n", putnbr_iter(a));
	/*printf("%d\n", ac);
	///work those agrs!
	printf("%s\n", av[1]);
	printf("%s\n", *(av+1));
	printf("%c\n", *(*av + 4));
	printf("%c\n", av[0][4]);
	printf("%c\n", *av[4]);
	*/
	//"1234" != 1234 * 2 = 2468 // IN BINARY!
	//"1234" = [49, 50, 51, 52] * 2 = [b, d, f ,h] != 2468 // IN BINARY
    //pass the argument to a afunciton that procceses it
	//printf("%d", atoi(argv[1]));
	

    //etc...       1       2  3  4  5  6  7
    //  *(p +2) -> t,      h, i, r, d, 0
    //  *(p +1) -> s,      e, c, o, n, d, 0
    //  *p      -> f,      i, r, s, t, 0
    //
    //   ^
    //   |
    //  **argv
    
    //argv[0] == *argv;
    //argv[0][0] == **argv;
    return (0);
}
