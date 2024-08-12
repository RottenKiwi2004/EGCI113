# Example of using variables and printf

### Given this code below

```c
#include <stdio.h>
int main() {
    int d = 18;
    int m;
    int y = 2024
    m = 9;
}
```

Print the date in the format of dd/mm/yyyy

*As you might have noticed, you can immediately assign values to the variables or you can just declare the variables and assign them later.*

## Please try writing the codes yourself first, before seeing the hints and solutions.

This practice should not take longer than 10 minutes for an absolute beginner and 3 minutes for people with some experience. If it takes longer than that, just look at the hints and solutions. 

### Hint

<details>

<summary>Printing the variables</summary>

```c
printf("%d/%d/%d", d, m, y);
```

</details>


<hr/>

### Hint 2

<details>

<summary>Formatting the string to dd/mm/yyyy</summary>

Add these numbers and observe what happens to the output

```c
printf("%2d/%2d/%d", d, m, y);
```

</details>

<hr/>

### Hint 3

<details>

<summary>Adding 0 in front</summary>

To add 0 instead of spaces, just format the string like this

```c
printf("%02d/%02d/%d", d, m, y);
```

</details>

<hr/>

### Solution

<details>

<summary>Full code</summary>


```c
#include <stdio.h>
int main() {
    int d = 18;
    int m;
    int y = 2024
    m = 9;

    printf("%02d/%02d/%d", d, m, y);
}
```

Don't worry if you couldn't come up with this yourself. For beginners, it takes a lot of trials and errors with some Googling before getting a promising solution.

</details>