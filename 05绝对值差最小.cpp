#include <stdio.h>
#include <math.h>
int main()
{
  float a[20], pjz = 0, s, t;
  int i, k;
  for (i = 0; i < 20; i++)
    scanf("%f", &a[i]);
  for (i = 0; i < 20; i++)
    pjz += a[i];
  pjz /= 20;
  s = fabs(a[0] - pjz);
  for (i = 1; i < 20; i++)
    if (fabs(a[i] - pjz) < s)
    {
      s = fabs(a[i] - pjz);
      t = a[i];
    }
  printf("%f,%f", pjz, t);
}
