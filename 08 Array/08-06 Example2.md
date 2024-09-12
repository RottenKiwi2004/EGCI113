# Example 2

Count how many words are in the sentence.

To make it easier, there will not be any double spaces or weird typo / punctuations or trailing spaces in the input

### Sample Input
```
A quick brown fox jumps over a lazy dog
```

### Sample Output
```
9
```

### Hint 1

<details>

<summary>Choosing the input function</summary>

Since we are dealing with string containing spaces, use `fgets`

</details>

<hr/>

### Hint 2

<details>

<summary>How to count words?</summary>

One nice thing about English is that words are separated by space.

</details>

<hr/>

### Solution

<details>

<summary>Full code</summary>

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, 1000, stdin);
    
    int wordCount = 1;

    int n = strlen(str);
    for(int i=0; i<n; i++) {
        if (str[i] == ' ') {
            wordCount++;
        }
    }

    if (n == 0) printf("0\n");
    else printf("%d\n", wordCount);
}
```

</details>

<hr/>