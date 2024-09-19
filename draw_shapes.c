#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

// Prints arrow
void print_arrow(){
    int height = 5;
    int width = 7;
    int i,j;
	
    // Print the arrowhead
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (j >= (width / 2 - i) && j <= (width / 2 + i)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Print the arrow stick
    for (i = 0; i < height; i++) {
        for (j = 0; j < width / 2; j++) {
            printf(" ");
        }
        printf("|\n");
    }
}
