# Example

Wow, that was a lot to take in. This is the consequence of learning a 'typed language', which means the type of a variable cannot be changed after declared. But that's all for the basic, and we can finally write codes to calculate stuffs now.

So, let's start simple

## Square

Given a side length of a square, `x`, output the area and the perimeter of this square. You may assume that `x` is a non-negative **integer** $(0 \leq x \leq 5000)$.

Sample code

```c
int x = 5;
```

Sample output

```c
Area: 25
Perimeter: 20
```

### Hint

<details>

<summary>Formula for area and perimeter</summary>

$$Area = x ^ 2$$
$$Perimeter = 4x$$

</details>


<hr/>

### Solution

<details>

<summary>Full code</summary>

```c
#include <stdio.h>
int main() {
    int x = 5;
    int area = x * x;
    int perimeter = 4 * x; 
    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);
}
```

</details>


<hr/>



## Circle

Given the radius a circle, `r`, output the area and the circumference of this circle. Format your answer to be 3 decimal digits. You may assume that `r` is a non-negative **real number** $(0 \leq r \leq 5000)$


Sample code

```c
double r = 7;
```

Sample output

```c
Area: 153.938
Circumference: 43.982
```


### Hint

<details>

<summary>Formula for area and circumference</summary>

$$Area = \pi r^2$$
$$Circumference = 2\pi r$$

</details>

<hr/>

### Solution

<details>

<summary>Full code</summary>

```c
#include <stdio.h>
int main() {
    double r = 7;
    double pi = 3.14159;
    double area = pi * r * r;
    double circumference = 2 * pi * r; 
    printf("Area: %.3lf\n", area);
    printf("Circumference: %.3lf\n", circumference);
}
```

</details>


<hr/>

## Average

Given integer `a`, `b`, `c`, `d`. Find the average and print it with 2 decimal digits.

### Hint

<details>

<summary>Formula for finding average</summary>

$$Average = \frac{a+b+c+d}{4}$$

</details>

<hr/>

### Solution

<details>

<summary>Full code</summary>

```c
#include <stdio.h>
int main() {
    int a = 2, b = 3, c = 5, d = 7;
    int sum = a + b + c + d;
    double average = (double) sum / 4
    printf("Average: %.2lf\n", average)
}
```

</details>


<hr/>
