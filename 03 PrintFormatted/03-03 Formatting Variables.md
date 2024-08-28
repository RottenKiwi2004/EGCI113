# Formatting Variables

After seeing the example in [02-03 Example](../02%20Variables/02-03%20Example.md), you might wonder

```c
int a = 432;
double b = 3.14159265359;
```

"Can I format my int like this?" `00000432`

"Can I format my double like this?" `3.141`

Of course, you can!

Here is the summary of possible ways you can format your variables.

### Leave spaces, right-aligned
```c
printf("%8d", a);
```
Reserve 8 spaces then print the content aligned to the right

<img src="assets/03-03-01.png">

### Leave spaces, left-aligned

```c
printf("%-8d", a);
```
Reserve 8 spaces then print the content aligned to the right

<img src="assets/03-03-02.png">

### Zero padding

```c
printf("%08d", a);
```
Reserve 8 spaces then print the content aligned to the right, fill the rest with 0

<img src="assets/03-03-03.png">


### Floating point precision

```c
printf("%8.3lf", b);
```
Reserve 8 spaces then print the content aligned to the right, only show 3 digits after the decimal point

<img src="assets/03-03-04.png">


So, by running this code

```c
#include <stdio.h>

int main() {
    int a = 432;
    double b = 3.14159265359;

    printf("Hello%8dHello\n", a);
    printf("Hello%-8dHello\n", a);
    printf("Hello%08dHello\n", a);
    printf("Hello%8.3lfHello\n", b);
}
```

The output would look like this

```
Hello     432Hello
Hello432     Hello
Hello00000432Hello
Hello   3.142Hello
```

I intentionally put "Hello" before and after printing to let you observe the reserved spaces caused by formatting the `printf`