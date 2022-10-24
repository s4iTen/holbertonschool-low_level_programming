#include "main.h"
/**
 * free_grid - return pointer of two dimensional
 * @grid: it is a pointer of pointer called 'grid'
 * @height: it is an integer called 'height'
 */
void free_grid(int **grid, int height)
{
    int i = 0;

    while (i < height)
    {
        free(grid[i]);
        i++;
    }
    free(grid);
}