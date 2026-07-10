#include <unistd.h>
int main()
{
	int x;
	x = 5;
	int y;
	y = 3;

	int r; // row related to y
	int c; // column related to x
	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if (r == 1 && (c == 1 || c == x))
				write (1,"A",1);
			else if (r == y && (c == 1 || c == x))
				write (1,"C",1);
			else if (r == 1 || r == y || c == 1 ||c == x)
				write(1,"B",1);
			else 
				write (1," ",1);
			c++;
		}
		r++;
		write (1,"\n",1);
	}

}
