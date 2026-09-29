#include<stdio.h>

int main(){
    float load,empty,rate;
    printf("Enter the input : ");
    scanf("%f %f %f",&load,&empty,&rate);
    printf("Net weight (kg) : %.2f\n",load-empty);
    printf("Net weight (quintal) : %.2f\n",(load/100)-(empty/100));
    printf("Amount payable (Rs) : %.2f\n",((load/100)-(empty/100))*rate);
    return 0;
}



/*                                  thank you                                   */
/*                        𝑫𝒆𝒗𝒆𝒍𝒐𝒑𝒆𝒅 𝒃𝒚 😎𝔸𝕟𝕚𝕜𝕖𝕥 𝕂𝕦𝕞𝕒𝕣😎                      */



// Extra knowledge ☻☻

/* ## 🔑 Precise Summary

The **only difference** between the two programs is the `scanf()` statement:

```c
// 1st code
scanf("%f %f %f ", &load, &empty, &rate);
               ↑ extra space
```

```c
// 2nd code
scanf("%f %f %f", &load, &empty, &rate);
```

### What does it change?

* **Space between `%f`** → allows whitespace/newlines between inputs. ✅
* **Space after the final `%f`** → tells `scanf()` to keep consuming whitespace until it finds a non-whitespace character. This can make the program **appear to hang/wait for more input**. ⚠️

### Output

The **calculated output is the same** in both programs **once input processing finishes**.

For input:

```text
500 100 50
```

Output:

```text
Net weight (kg) : 400.00
Net weight (quintal) : 4.00
Amount payable (Rs) : 200.00
```

### ✅ Best practice

Use:

```c
scanf("%f %f %f", &load, &empty, &rate);
```

**In short:**

> **The extra space at the end of `scanf()` does not change your calculations; it changes how `scanf()` waits for input.**
 */