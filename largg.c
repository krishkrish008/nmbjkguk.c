#include<stdio.h>
 int main()
 {
 int a, b, c, d, e, f, g, h, i, j, p, q, w, x, y, z, largestnum;
 clrscr();
  printf(" Enter any Ten integer numbers :  ") ;
  scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j) ;
   x = (a > b? a : b);
   y = (c > d? c : d);
   z = (e > f? e : f);
   p = (g > h? g : h);
   q = (i > j? i : j);
   w = x > y ? ( x > z ? x : z) : (y > z ? y : z) ;
   largestnum = p > q ? ( p > w ? p : w) : (q > w ? q : w) ;
  printf("\n\n The largest of Ten numbers %d", largestnum) ;
 getch();
  return 0;
   }
