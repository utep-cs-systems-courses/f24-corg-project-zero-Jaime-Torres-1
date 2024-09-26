#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_5x7(char c)
{
  c -= 0x20;
  for (char col = 0; col < 5; col++) {
     unsigned short rowBits = font_5x7[c][col];
    for (char row = 0; row < 7; row++) {
      unsigned short colMask = 1 << (6-row); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
}

void print_char_8x12(char c)
{
  c -= 0x20;  // Adjust for ASCII offset (space character)
  for (char row = 0; row < 12; row++) {  // Loop through the 12 rows
    for (char col = 0; col < 8; col++) {  // Loop through the 8 columns
      unsigned short rowBits = font_8x12[c][row];  // Get the row bits for the character
      unsigned short colMask = 1 << (7 - col);  // Create a mask to select the bit
      putchar((rowBits & colMask) ? '*' : ' ');  // Print '*' or ' ' based on the bit
    }
    putchar('\n');  // Newline after each row
  }
  putchar('\n');  // Additional newline after printing the character
}

