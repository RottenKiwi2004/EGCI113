# If-Else

What separate programming from just punching in the formula to the calculators?

The ability to go to different branches based on a condition!

Let's see an example of how adding condition helps

Here comes the classic problem when we first learn if-else: *grading system!*

Starting simple! If the score is below $60$, you get an $F$.

The code would look like this

```c
int score;
scanf("%d", &score);

if(score < 60) {
    printf("Your grade: F\n");
}
```

Alright that's cool, but we can do more!

```c
int score;
scanf("%d", &score);

if(score < 60) {
    printf("Your grade: F\n");
}
else {
    printf("Your grade is not F!\n");
}
```

Notice that when we put `else`, if the condition in `if` is not met then our code will try to find `else` and execute it.

But if the condition in `if` is met, the `else` block is ignored

We can also chain if-else together

```c
int score;
scanf("%d", &score);

if(score < 60) {
    printf("Your grade: F\n");
}
else if (score < 65) {
    printf("Your grade: D\n");
}
else {
    printf("Your grade is more than D!\n");
}
```

When score is below $60$, the condition in the first `if` is met.

When the score is in the range $[60, 65)$, the condition in second `if` is met.

Otherwise, it is guaranteed that the score is at least 65 which means your grade is more than $D$.


Full code for grading rubrics would look something like this.
```c
int score;
scanf("%d", &score);

if(score < 60) {
    printf("Your grade: F\n");
}
else if (score < 65) {
    printf("Your grade: D\n");
}
else if (score < 70) {
    printf("Your grade: D+\n");
}
else if (score < 75) {
    printf("Your grade: C\n");
}
else if (score < 80) {
    printf("Your grade: C+\n");
}
else if (score < 85) {
    printf("Your grade: B\n");
}
else if (score < 90) {
    printf("Your grade: B+\n");
}
else {
    printf("Your grade: A\n");
}
```

Okay, that's the full grading rubric... r.. right? ***RIGHT!???***

Of course, no! We haven't handled scores below $0$ or scores above $100$. 

So, what can we do to prevent that? Add more conditions!
```c
int score;
scanf("%d", &score);

if (score < 0) {
    printf("Invalid score!\n");
}
else if (score > 100) {
    printf("Invalid score!\n");
}
else if(score < 60) {
    printf("Your grade: F\n");
}
else if (score < 65) {
    printf("Your grade: D\n");
}
else if (score < 70) {
    printf("Your grade: D+\n");
}
else if (score < 75) {
    printf("Your grade: C\n");
}
else if (score < 80) {
    printf("Your grade: C+\n");
}
else if (score < 85) {
    printf("Your grade: B\n");
}
else if (score < 90) {
    printf("Your grade: B+\n");
}
else {
    printf("Your grade: A\n");
}
```

But wait, these two conditions execute the exact same code

In the next section we will discuss about the logical operator which helps us with more complicated logics

