# Example

### Clock

Given the amount of seconds since midnight, $n$, show the time of the day in 24-hour format.

#### Input
A single integer $n$ when $0 \leq n \lt 86400$

#### Output
Clock display in 24-hour format

#### Sample Input 1
```
7200
```
#### Sample Output 1
```
02:00:00
```
#### Sample Input 2
```
49542
```
#### Sample Output 2
```
13:45:42
```

### Hint 1

<details>

<summary>Calculating hour, minutes, seconds</summary>

$$Hour = \bigg\lfloor\frac {n} {3600}\bigg\rfloor$$
$$Minute = \bigg\lfloor\frac {n - 3600 \cdot Hour} {60}\bigg\rfloor$$
$$Second = n\mod{60} $$

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
    int hour = n / 3600;
    int minute = (n - 3600 * hour) / 60;
    int second = n % 60;
    printf("%02d:%02d:%02d\n", hour, minute, second);
}
```

</details>

### Solution 2

<details>

<summary>Full code</summary>

After calculating the total hour, we can neglect whatever value the hour part contributes to the total seconds. Modulo by `3600` gives us the same effect. Now the total seconds left is within the range $[0, 3599]$ which is less than 1 hour. You can probably figure the rest out yourself.

```c
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int hour = n / 3600;
    n %= 3600;
    int minute = n / 60;
    int second = n % 60;
    printf("%02d:%02d:%02d\n", hour, minute, second);
}
```

</details>


<hr/>