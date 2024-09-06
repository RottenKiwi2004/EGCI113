# Example 1

Ask user for a number repeatedly until the input is zero.

### Solution

<details>

<summary>Full code</summary>

```c
#include <stdio.h>
int main() {
    int n = 1;
    while(n != 0) { 
        scanf("%d", &n); 
    }
}
```

Always remember to initialise your variables declared in `main()` before reading its value! We cannot guarantee that it will be zero or will it not be zero.

</details>

<hr/>

### Solution (Compact version)

<details>

<summary>Full code</summary>

```c
#include <stdio.h>
int main() {
    int n = 1;
    while(n) scanf("%d", &n); 
}
```

I think it would be good to bring this up.

- Only one statement will be executed if there is no curly braces after an `if`-statement or `while`-statement (also applies to `for`-statement which is another type of loop)

- `n` is logically equivalent to `n != 0`. This is called 'falsey-value'. Basically, every non-zero integer including negative numbers, is considered `true` and 0 is considered `false`.

</details>

<hr/>
