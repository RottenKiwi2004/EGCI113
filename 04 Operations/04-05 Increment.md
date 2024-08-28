# Increment / Decrement

This is one of the most confusing operators of all, but it is used a lot in the real world of programming

They only has one function: add / remove 1 from the variable

Inrement Syntax:
```c
++x;
x++;
```
Decrement Syntax:
```c
--x;
x--;
```

Increment Example:

```c
int x = 5;
x++;
printf("%d\n", x);
++x;
printf("%d\n", x);
```

Result
```
6
7
```
 

Decrement Example:

```c
int x = 9;
x--;
printf("%d\n", x);
--x;
printf("%d\n", x);
```

Result
```
8
7
```


If both of them increase/decrease the value of the variable by 1, then what is the difference between putting it in front and behind?


Consider these 2 examples

Increment in front
```c
int a = 5;
int b = ++a;
printf("%d %d\n", a, b);
```

```
6 6
```

Increment behind
```c
int a = 5;
int b = a++;
printf("%d %d\n", a, b);
```

```
6 5
```

***What happened here?***

When you put increment operator in front of a variable *(prefix increment)*, the variable is incremented before the value is used in the calculation.

But if you put increment operator behind a variable *(postfix increment)*, the value of the variable is used first before incrementing the variable.

Same applies to the decrement.


### What will be the output of this program?

**DO NOT** run this program until you have your answer finalised

```c
#include <stdio.h>
int main() {

    int x = 7, y = 4;

    x = x - y++;
    y = --y + 5;
    x = --x + ++y;

    printf("%d %d\n", x, y);

}
```

### Solution

<details>

<summary>Detailed explanation</summary>

At start, `x = 7`, `y = 4`
```c
x = x - y++;
```
`y++` here is postfix increment, so use the value before incrementing the variable `y`

So, `x = 7 - 4`

Then we increment `y`

`x = 3`, `y = 5`

```c
y = --y + 5;
```

`--y` here is prefix decrement, so decrement `y` before using the value in `y`

Now, `y = 4`

Then `y = 4 + 5` and `x` remains unchanged

`x = 3`, `y = 9`

```c
x = --x + ++y;
```

Here, both `--x` and `++y` are prefix increment. So we will update the value of both `x` and `y` before using their values

Now, `x = 2`, `y = 10`

Then `x = 2 + 10`

`x = 12`, `y = 10`

So, the console should show

```c
12 10
```

</details>


<hr/>

