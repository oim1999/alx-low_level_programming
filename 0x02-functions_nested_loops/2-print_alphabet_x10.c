#include"main.h"



/**

 * print_alphabet_x10 - function that will print the alphabet 10 times

 *

 */



void print_alphabet_x10(void)
  
{
  
  int l, i;
  

  
  for (l = 0; l <= 9; ++l)
    
    {
      
      for (i = 'a'; i <= 'z'; ++i)
	
	_putchar(i);
      
      _putchar('\n');
      
    }
  
}
