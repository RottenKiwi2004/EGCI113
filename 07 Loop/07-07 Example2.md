# Example 2

Print a diamond shape as shown with their size based on the input.

### Input 1

```
2
```

### Output 1

```
 *
***
 *
```

### Input 2

```
3
```

### Output 2

```
  *
 ***
*****
 ***
  *
```

### Input 3

```
4
```

### Output 3

```
   *
  ***
 *****
*******
 *****
  ***
   *
```



### Hint 1

<details>

<summary>Dissect the diamon shape into different parts</summary>

How would you split this shape into easier for loops?

<img src='./assets/diamond1.png'>

</details>

<hr/>

### Hint 2

<details>

<summary>Use math!</summary>

Find the relations between the number of stars and the row number

What would be the function that gives us the following relationship?

- For the amount of stars

    | $x$   |$f(x)$|
    |-------|------|
    | $0$   |$1$   |
    | $1$   |$3$   |
    | $2$   |$5$   |
    | $3$   |$7$   |

- For the amount of spaces

    | $x$      |$f(x)$   |
    |----------|---------|
    | $0$      |$n-1$    |
    | $1$      |$n-2$    |
    | $2$      |$n-3$    |
    | $3$      |$n-4$    |
    | $\vdots$ |$\vdots$ |
    | $n-1$    |$0$      |

</details>

<hr/>

### Solution

<details>

<summary>Full code</summary>

```c

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            printf(" ");
        }
        for(int j=0; j<i*2+1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<i+1; j++) {
            printf(" ");
        }
        for(int j=0; j<(n-i)*2-3; j++) {
            printf("*");
        }
        printf("\n");
    }
}

```

</details>

<hr/>
