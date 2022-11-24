#include <stdio.h>
#include <math.h>

int main(void)
{
  unsigned int ip = (192 * pow(2, 24)) + (168 * pow(2, 16)) + (1 + pow(2, 8)) + 13; // 192.168.1.13
  unsigned int mask = (255 * pow(2, 24)) + (255 * pow(2, 16)) + (255 * pow(2, 8)); // 255.255.255.0
  unsigned int host = ip & mask;
  printf("ホスト部: %d\n", host);

  return 0;
}
