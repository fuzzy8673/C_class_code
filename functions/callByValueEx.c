
### 1. Call by Value

A **copy** of the variable is passed to the function. Changes inside the function **do not affect** the original variables.

```c
#include <stdio.h>

void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;

    printf("Before function call: x = %d, y = %d\n", x, y);

    swap(x, y);

    printf("After function call: x = %d, y = %d\n", x, y);

    return 0;
}
```

**Output:**

```text
Before function call: x = 10, y = 20
After function call: x = 10, y = 20
```

**Explain to students:**

```text
main()                  swap()
 x = 10  ─────────────>  a = 10
 y = 20  ─────────────>  b = 20

       Copies are passed
```

So, changing `a` and `b` doesn't change `x` and `y`.

---

### 2. Call by Reference

In C, we achieve **call by reference using pointers**. Instead of passing the values, we pass the **addresses** of the variables.

```c
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;

    printf("Before function call: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After function call: x = %d, y = %d\n", x, y);

    return 0;
}
    
```

**Output:**

```text
Before function call: x = 10, y = 20
After function call: x = 20, y = 10
```

### The important difference

| Call by Value                | Call by Reference            |
| ---------------------------- | ---------------------------- |
| Copy of value is passed      | Address is passed            |
| Uses normal variables        | Uses pointers                |
| `swap(x, y)`                 | `swap(&x, &y)`               |
| Parameters: `int a, int b`   | Parameters: `int *a, int *b` |
| Original values don't change | Original values can change   |

### Easy way 

**Call by Value:**

> "Give the function a photocopy."

**Call by Reference:**

> "Give the function the address of the original."

One important terminology point for your lecture: **C technically uses pass-by-value in both cases**. In the second example, the *addresses* are passed by value, which allows the function to modify the original variables through pointers. Many introductory C textbooks call this **call by reference** for simplicity.
