# Break-Continue

Sometimes we want the loop to immediately end at that point.

We can use `break` statement to exit the loop!

From [07-02 Example1](./07-02%20Example1.md), we repeatedly asked user for integer input until it is zero. Notice that it is a bit weird that `n=1`. I mean, the code works, but it is hard for others to understand "Why is this assigned to be `1`?"

The other approach would look like this

```c
#include <stdio.h>
int main() {
    while(true) {
        int n;
        scanf("%d", &n);
        if (n == 0) break;
    }
}
```

This is cleaner in several reasons

- The variable `n` is only in the scope of `while` loop, and not the `main` function. In simple terms, you can only use the variable `n` in `while` loop, which means you don't have to worry about variable `n` after this loop.
- As mentioned earlier, variable `n` is no longer confusing for being assigned `1` with no reason other than just getting the logic correct
- In case we want to perform any operation after `scanf` but not after getting a `0`, then using `break` will immediately exit the loop with no further execution after the `break` statement is reached.


For the last reason, what if we want to skip the entier operation after a statement, but do not want to exit the loop yet?

That's where `continue` should be used.

Let's say we want to print out the number if the input is not `0`, but stop the program when we get `-1`

The code implemented using `continue` and `break` would look like this

```c
#include <stdio.h>
int main() {
    while(true) {
        int n;
        scanf("%d", &n);
        if (n == 0) continue;
        if (n == -1) break;
        printf("The number: %d\n", n);
    }
}
```
