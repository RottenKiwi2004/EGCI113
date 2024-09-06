# Do-While

It would be a small crime to finish up the loop chapter without mentioning the do-while loop.

From my past experience though, it is rarely used when you actually trying to code something.

Basically, it is the same as `while` loop, but the condition is ignored at the first time that part of code is reached and executes it unconditionally.

After the execution, the condition is checked whether the loop should continue.

Enough yapping from me, see the example

```c
do {
    printf("This part was executed\n");
}
while (false);
```

Don't forget the `;` after while ***only for do while***. I know, weird syntax! But it is what it is.

So, using the same example from [07-02 Example1](./07-02%20Example1.md), ask for the input until we get `0`.

We can implement it using `do while` like this

```c
#include <stdio.h>
int main() {
    int n;
    do {
        scanf("%d", &n);
    }
    while(n);
}
```

In the end, there are multiple ways to program the same logic depending on your code style. Experiment with it, read a lot of example codes, and find what style you are comfortable with.