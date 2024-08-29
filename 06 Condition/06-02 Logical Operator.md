# Logical Operator

In the previous section, we got this awful repetitive code.

```c
if (score < 0) {
    printf("Invalid score!\n");
}
else if (score > 100) {
    printf("Invalid score!\n");
}
```

Would be nice if we can combine these two...

```c
if (score < 0 || score > 100) {
    printf("Invalid score!\n");
}
```

Introducing logical operator!

Let's start with this example

- `||` is the $\text{or}$ operator: If one of the condition is `true`, the whole expression is `true` and the code in `if` block is executed.

This means that if score is below $0$ $\text{or}$ if score is above $100$, it would print `Invalid score!` and ignore all the `else if` after that `if` statement

There are two more logical operators: `&&` and `!`

- `&&` is the $\text{and}$ operator: If both of the condition is `true`, the whole expression is `true`
- `!` is the $\text{not}$ operator. It negates the logic

### Comparison

As you might have noticed, we can use `<` and `>` as the operators for comparison. So, here is the full list

<table>
    <tr>
        <th>Operator</th>
        <th>Name</th>
        <th>Explanation</th>
    </tr>
    <tr>
        <td><code><</code></td>
        <td>Less than</td>
        <td><code>true</code> if left is less than right</td>
    </tr>
    <tr>
        <td><code>></code></td>
        <td>More than</td>
        <td><code>true</code> if left is more than right</td>
    </tr>
    <tr>
        <td><code><=</code></td>
        <td>Less than or equal to</td>
        <td><code>true</code> if left is less than or equal to right</td>
    </tr>
    <tr>
        <td><code>>=</code></td>
        <td>More than or equal to</td>
        <td><code>true</code> if left is more than or equal to right</td>
    </tr>
    <tr>
        <td><code>==</code></td>
        <td>Equal to</td>
        <td><code>true</code> if left is equal to right</td>
    </tr>
    <tr>
        <td><code>!=</code></td>
        <td>Not equal to</td>
        <td><code>true</code> if left is not equal to right</td>
    </tr>
</table>