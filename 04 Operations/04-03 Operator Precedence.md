# Operator Precedence

The order of operation is like PEMDAS

*(yes, using parenthesis is still also a valid expression)*

There is an exception! See [Operator Precedence](https://en.cppreference.com/w/c/language/operator_precedence) for full reference.


Look at this example

```c
int a = 5 / 2 * 5;
int b = 5 * 5 / 2;
printf("%d %d\n", a, b);
```

Output
```
10 12
```
This means that `a` is `10` and `b` is `12`

If you guessed it is because of `int` division, you're partially right.

### Full explanation

According to the reference, `*` and `/` are in the same precedence (3). That means it will perform operations in the *associativity order* specified. In this case: *left-to-right*


- For `a`, we divide `5` by `2` first which gives us `2` of type `int`, then we multiply `2` by `5` which gives us `10` of type `int`


- For `b`, we multiply `5` by `5` first which gives us `25` of type `int`, then we divide `25` by `2` which gives us `12` of type `int`

Then we assign the value to the variables after we are done with the calculations because assignment precedence comes later (14).

### One more example

From previous section
```c
int a = 3;
int b = 2;
float c = a / (float) b;
printf("%f\n", c);
```

Let's focus on the division line.

The highest precedence here is typecasting (2). So we typecast first.

Next, `/` (3). The implicit typecast happens internally in this step, so no precedence for implicit typecast.

Finally, we assign the result to `c` (14).
