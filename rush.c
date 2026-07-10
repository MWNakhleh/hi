#include <unistd.h>
int main(void)
{
	int y;
	int x;
	y = 5;
	x = 5;
	int r;  // raw
	int c;  // column
	c = 1;

	while (c <= x)
	{
		r  = 1;
		while (r <= y)
		{
			if (r == 1 && (c == 1 || c == y))
				write(1,"A",1);
			else if (r == x && (c == 1 || c == y))
				write(1,"C",1);
			else if (r != 1 &&  c != 1 && r != y && c != x)
				write (1," ",1);
			else
				write (1,"B",1);
			r++;
		}
		c++;
		write(1,"\n",1);
	}
}
