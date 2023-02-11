#include<unistd.h>

void rot(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'a' &&str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 13;
		}
	       
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc ==2) rot(argv[1]);
	write(1, "\n", 1);
}
