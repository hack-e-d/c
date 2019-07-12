#include<stdio.h>
int
main ()
{
  int flag = 1, flag2 = 0, k = 0;
  char c[20], c1[20], q[20][20];
  scanf ("%s", c);
  while (1)
    {
      scanf ("%s", c1);

      int i = 0;
      while (c[i] != '\0')
	{
	  q[k][i] = c[i];
	  i++;
	}
      q[k++][i] = '\0';
      i = i - 1;
      char a = c[i];
      if (a != c1[0])
	{
	  flag = 0;
	  break;
	}
      int j = 0;
      while (c1[j] != '\0')
	{
	  c[j] = c1[j];
	  j++;
	}
      c[j] = '\0';
    }
  for (int m = 0; m < k; m++)
    {
      printf ("%s\n", q[m]);
    }
  return 0;

}
