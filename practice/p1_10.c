#include <stdio.h>

/*
 * 怎么输入EOF? (Ctrl + D)
 * 怎么输入退格符? (Ctrl + H)
 */

main() {
  int c;
  long sc;

  sc = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar('\\');
      putchar('t');
    } else if (c == '\b') {
      putchar('\\');
      putchar('b');
    } else if (c == '\\') {
      putchar('\\');
      putchar('\\');
    } else {
      putchar(c);
    }
  }
}
