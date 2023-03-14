#include "main.h"

/**
 *alloc_grid - allocates memory for a 2d array
 *@width: the width of the array
 *@height: the hight of the array
 *Return: returns a pointer to a 2d array
 */

int	**alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **tab;

	if (width <= 0 || height <= 0)
		return (NULL);
	tab = (int **) malloc(sizeof(int *) * height);
	if (!tab)
		return (NULL);
	while (i < height)
	{
		tab[i] = malloc(sizeof(int) * width);
		if (!tab[i])
		{
			while (*tab)
			{
				free(*tab);
				tab++;
			}
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}
