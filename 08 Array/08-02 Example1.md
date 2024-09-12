# Example 1

Check if user have inputted a number

### Input

There are 3 lines of input

- First line contains a single number $n$, such that $1 \leq n \leq 1000$
- Second line contains $n$ numbers which is the array of numbers
- Third line contains a single number, $k$, to check if it is in that array.

### Ouput

- `YES` if the number exists in the array, `NO` otherwise.

### Input 1

```
5
1 2 3 4 5
4
```

### Output 1

```
YES
```

### Input 2

```
5
1 2 3 4 5
6
```

### Output 2

```
NO
```

### Input 3

```
7
2000 8 4 56 51 27 10
2000
```

### Output 3

```
YES
```

### Input 4

```
7
2000 8 4 56 51 27 10
1999
```

### Output 4

```
NO
```

### Solution

<details>

<summary>Full Code</summary>

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[1000];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    int found = 0;

    for(int i=0; i<n; i++) {
        if (arr[i] == k) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}
```

</details>

<hr/>
