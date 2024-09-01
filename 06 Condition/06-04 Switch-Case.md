# Switch Case

A lot of times, you want to check multiple conditions against a single variable or expression.

```c

int choice;
printf("Choose from 1-5: ");
scanf("%d", &choice);

if      (choice == 1) { printf("first");  }
else if (choice == 2) { printf("second"); }
else if (choice == 3) { printf("third");  }
else if (choice == 4) { printf("fourth"); }
else if (choice == 5) { printf("fifth");  }
else                  { printf("others"); }

```

Even though the logic is correct and the code works, the code is bulky and hard to read even I formatted it the best I can.

Here is the cleaner version using switch case

```c
int choice;
printf("Choose from 1-5: ");
scanf("%d", &choice);

switch(choice) {
    case 1:  printf("first");  break; 
    case 2:  printf("second"); break; 
    case 3:  printf("third");  break; 
    case 4:  printf("fourth"); break; 
    case 5:  printf("fifth");  break;
    default: printf("other");
}
```

If the `choice` is equal to the value of that case, then ***all the codes after that point will be executed***

That's why we need `break;` after every case!

I want you to try removing the `break` in some of the cases and observe the behaviour between adding and removing `break`


By removing the `break`, the code will continue to execute other parts in `switch` until the end **or** until there is another `break` at some other points.

***This is one of the most common mistakes for beginners and it often appears on the exam. So be careful!***

In [06-05 Example2.md](./06-05%20Example2.md), you will see how using switch-case with proper fall-through can improve our code.