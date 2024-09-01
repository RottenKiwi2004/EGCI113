# Example

### Grading rubric

Same as [before](./06-01%20If-Else.md), but use switch-case 

#### Input

A single integer, $n$.

#### Output

Grades in letters or `Invalid` if the input is out of range

### Hint 1

<details>

<summary>You don't need to write 100 cases</summary>

Each grade is 5 points apart from the previous one. Try using math to reduce the number of cases

</details>

<hr/>

### Hint 2

<details>

<summary>How should invalid cases be handled?</summary>

There are countable finite number of valid cases, but too many number of invalid cases. Handling valid cases only should be a better option.

Remember the keyword `default`

</details>

<hr/>

### Solution

<details>

<summary>Full code</summary>

Take your time to critically think through all the possible cases in this code.

```c
#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);

    printf("Your grade: ");
    switch (score / 5) {
        case 0: case 1: case 2: case 3: case 4:
        case 5: case 6: case 7: case 8: case 9:
        case 10: case 11:
            printf("F"); break;
        case 12: printf("D");   break;
        case 13: printf("D+");  break;
        case 14: printf("C");   break;
        case 15: printf("C+");  break;
        case 16: printf("B");   break;
        case 17: printf("B+");  break;
        case 18: case 19: case 20: 
            printf("A");   break;
        default:
            printf("Invalid");
    }
}
```

</details>

<hr/>

### There are some flaws in the solution code!

<details>

<summary>Explanation</summary>

And I did it on purpose. If you found it before reading through this, great!

So, what's wrong? Try putting in number `101`. You would still get an `A`, when it should be `Invalid`

Why? Because of how integer division works! `101 / 5` is equal to `20` so it enters the `case 20:`

What if we remove `case 20:` from the case of grade `A`?

Then people with full score (pretty rare, but still possible) will get `Invalid` grade.

How to fix this? Simply add another `if` like so:

```c
#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);

    printf("Your grade: ");
    switch (score / 5) {
        case 0: case 1: case 2: case 3: case 4:
        case 5: case 6: case 7: case 8: case 9:
        case 10: case 11:
            printf("F"); break;
        case 12: printf("D");   break;
        case 13: printf("D+");  break;
        case 14: printf("C");   break;
        case 15: printf("C+");  break;
        case 16: printf("B");   break;
        case 17: printf("B+");  break;
        case 18: case 19: case 20:
            if (score <= 100) {
                printf("A");
                break;
            }
        default:
            printf("Invalid");
    }
}
```

Now when the score is `101`, `if` will not be executed and `break` which is in that if-block will not be reached. Thus it falls through to the default case which will not output `Invalid`. 


</details>