# Input

So far, we have worked with variables. But that wouldn't be powerful until we can calculate values based on inputs.

The function used for inputting the values to the variables is `scanf()`

Similar to printf, we need to specify the type of data that we are scanning. The format string is same as `printf`

### Sample code

```c
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    printf("Value: %d", a);
}
```

On the console, try typing a number then hit enter

```
5 ↵
```

The output should be

```
Value: 5
```

Before you ask, ***no***, that ampersand (`&`) in `scanf` is there intentionally and it has meaning. Don't miss it, or else your program will crash! You will learn about this in detailed in Advanced Computer Programming course.

You can also input many values in single scanf

```c
#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("Value: %d, %d, %d", a, b, c);
}
```

