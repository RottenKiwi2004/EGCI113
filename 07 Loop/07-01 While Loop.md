# While Loop

Our program can run conditionally and we can program it however we want. But running it multiple times makes calculation in bulk much faster.

The simplest loop is the `while` loop

It executes infinitely until the condition becomes `false`

Let's see an example


```c
int counter = 0;
while (counter < 5) {
    printf("%d ", counter);
    counter++;
}
```

By doing this, it prints out the number from 0 to 4 because the condition will be false whene `counter` becomes `5`