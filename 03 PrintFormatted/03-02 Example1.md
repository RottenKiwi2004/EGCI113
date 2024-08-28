# Example of formatting printf

Try to print this pattern to your console

Extra Challenge: Only one printf call is allowed 

```
*
**
***
****
*****
```
## Please try writing the codes yourself first, before seeing the hints and solutions.

This practice should not take longer than 5 minutes for an absolute beginner and 2 minutes for people with some experience. If it takes longer than that, just look at the hints and solutions. 

### Hint 1

<details>

<summary>Going to the next line</summary>

```c
printf("\n");
```

</details>


<hr/>

### Hint 2

<details>

<summary>First line</summary>

You can directly put `\n` after `*`

```c
printf("*\n");
```

</details>

<hr/>

### Solution

<details>

<summary>Print all 5 lines</summary>

Just copy-paste the code above 5 times and add more `*`

```c
printf("*\n");
printf("**\n");
printf("***\n");
printf("****\n");
printf("*****\n");
```

</details>

<hr/>

### Solution - Extra Challenge

<details>

<summary>Full code</summary>


```c
#include <stdio.h>
int main() {
    printf("*\n**\n***\n****\n*****\n");
}
```

This is just for a challenge to check your understanding. Writing 5 separate printf's would be easier to read in this case.

In the end, each person code style's are all different. But keep in mind, you (in the future) or your coworkers will struggle if your code is hard to understand.

</details>