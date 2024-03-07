# include<unistd.h>
/*void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

void ft_ft(int *nbr)
{
    *nbr = 42;
}

void	ft_swap(int *a, int *b)
{
	int	vala;

	vala = *a;
	*a = *b;
	*b = vala;
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
	{
		return ;
	}
	*div = a / b;
	*mod = a % b;
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	val_a;
	int	val_b;

	if (*b == 0)
	{
		return ;
	}
	val_a = *a;
	val_b = *b;
	*a = val_a / val_b;
	*b = val_a % val_b;
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	*b_point;
	int	a;

	b_point = tab + size - 1;
	while (tab < b_point)
	{
		a = *tab;
		*tab = *b_point;
		*b_point = a;
		tab++;
		b_point--;
	}
}
*/
int main(void){
write(1, "EX00:\n", 6);

    int nbr = 0;
    ft_ft(&nbr);
    if (nbr == 42)
        write(1, "EX00 OK!\n", 9);
    else
        write(1, "EX00 ERROR!\n", 12);

write(1, "EX01:\n", 6);

    nbr = 0;
    int *p1_nbr = &nbr;
    int **p2_nbr = &p1_nbr;
    int ***p3_nbr = &p2_nbr;
    int ****p4_nbr = &p3_nbr;
    int *****p5_nbr = &p4_nbr;
    int ******p6_nbr = &p5_nbr;
    int *******p7_nbr = &p6_nbr;
    int ********p8_nbr = &p7_nbr;
    int *********p9_nbr = &p8_nbr;
    ft_ultimate_ft(p9_nbr);
    if (nbr == 42)
        write(1, "EX01 OK!\n", 9);
    else
        write(1, "EX01 ERROR!\n", 12);

write(1, "EX02:\n", 6);
int a = 2, b=4;

ft_swap(&a,&b);
if (a==4 && b==2)
        write(1, "EX02 OK!\n", 9);
    else
        write(1, "EX02 ERROR!\n", 12);

write(1, "EX03:\n", 6);
int div = 0, mod=9;

ft_div_mod(a, b, &div, &mod);
if (div==2 && mod==0)
        write(1, "EX03 OK!\n", 9);
    else
        write(1, "EX03 ERROR!\n", 12);
 
write(1, "EX04:\n", 6);

 ft_ultimate_div_mod(&a, &b);
if (a==2 && b==0)
        write(1, "EX04 OK!\n", 9);
    else
        write(1, "EX04 ERROR!\n", 12);
        
write(1, "EX05:\n", 6);
char string[]= "WELCOME!";

 ft_putstr(&string[0]);
 write(1, "\n", 2);

write(1, "EX06:\n", 6);
if (ft_strlen(&string[0])==8)
        write(1, "EX06 OK!\n", 9);
    else
        write(1, "EX06 ERROR!\n", 12);
        
write(1, "EX07:\n", 6);
int array[] = {1,2,3,4,5};
int size = sizeof(array)/sizeof(array[0]);

for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
printf("\n");
ft_rev_int_tab(&array, size);

for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
        
 return 0;

}
