#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>  // For getcwd

// Function to create a directory
void createDirectory(const char *path) {
    char command[100];
    snprintf(command, sizeof(command), "mkdir -p %s", path);
    system(command);
}

// Function to write code to a file
void writeCodeToFile(const char *filename, const char *code) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Failed to open file");
        return;
    }
    fprintf(file, "%s", code);
    fclose(file);
}

// Function to check if the input string matches "I LOVE YOU" (case-insensitive)
int checkLoveYou(const char *input) {
    const char *target = "I LOVE YOU";
    while (*input && *target) {
        if (tolower((unsigned char)*input) != tolower((unsigned char)*target)) {
            return 0;
        }
        input++;
        target++;
    }
    return *input == '\0' && *target == '\0';
}

int main() {
    char id[100];
    printf("Enter the folder ID (EX: CSE123456789): ");
    scanf("%s", id);

    // Create the directory with the given ID
    createDirectory(id);

    // Array of code snippets
    const char *codeSnippets[] = {
        "#include <stdio.h>\n\nint main() {\n    int n;\n\n    scanf(\"%d\", &n);\n\n    for (int i = 1; i <= n; i++) {\n        printf(\"%d \", i);\n    }\n\n    return 0;\n}",
        "#include <stdio.h>\n\nint main() {\n    int n;\n\n    scanf(\"%d\", &n);\n\n    for (int i = 1; i <= n; i++) {\n        printf(\"%d \", 2 * i - 1);\n    }\n\n    return 0;\n}",
        "#include <stdio.h>\n\nint main() {\n    int n;\n\n    scanf(\"%d\", &n);\n\n    for (int i = 1; i <= n; i++) {\n        printf(\"%d \", (i % 2) ? 1 : 0);\n    }\n\n    return 0;\n}",
        "#include <stdio.h>\n\nint main() {\n    int n, i;\n    float num, sum = 0;\n\n    scanf(\"%d\", &n);\n\n    for (i = 1; i <= n; i++) {\n        scanf(\"%f\", &num);\n        sum += num;\n    }\n\n    float AVG = sum / n;\n\n    printf(\"AVG of %d inputs: %f\\n\", n, AVG);\n\n    return 0;\n}",
        "#include <stdio.h>\n\nint main() {\n    int x, y;\n\n    scanf(\"%d %d\", &x, &y);\n\n    while (x != y) {\n        printf(\"%d \", x * x);\n\n        if (x > y) {\n            x--;\n        } else {\n            x++;\n        }\n    }\n\n    printf(\"Reached!\\n\");\n\n    return 0;\n}",
        "#include <stdio.h>\n\nint main() {\n    int x, n, guess;\n\n    printf(\"Enter the number chosen by Player-1 (X): \");\n    scanf(\"%d\", &x);\n\n    printf(\"Enter the number of tries allowed (N): \");\n    scanf(\"%d\", &n);\n\n    for (int i = n; i > 0; i--) {\n        printf(\"Enter your guess (Player-2): \");\n        scanf(\"%d\", &guess);\n\n        if (guess == x) {\n            printf(\"Right, Player-2 wins!\\n\");\n            break;\n        } else {\n            printf(\"Wrong, %d Choice(s) Left!\\n\", i - 1);\n        }\n    }\n\n    if (n == 0) {\n        printf(\"Player-1 wins!\\n\");\n    }\n\n    return 0;\n}",
        "#include <stdio.h>\n\nint main() {\n    char input;\n\n    while (1) {\n        input = getchar();\n        if (input == 'A') {\n            break;\n        }\n        printf(\"Input: %c\\n\", input);\n    }\n\n    return 0;\n}",
        "#include <stdio.h>\n\nint main() {\n    int num, reversed = 0;\n\n    printf(\"Enter an integer: \");\n    scanf(\"%d\", &num);\n\n    while (num != 0) {\n        reversed = reversed * 10 + num % 10;\n        num = num / 10;\n    }\n\n    printf(\"Reversed number: %d\\n\", reversed);\n\n    return 0;\n}",
        "#include <stdio.h>\n\nchar calculateGrade(float totalMarks) {\n    if (totalMarks >= 90) return 'A';\n    else if (totalMarks >= 86) return 'A';\n    else if (totalMarks >= 82) return 'B';\n    else if (totalMarks >= 78) return 'B';\n    else if (totalMarks >= 74) return 'B';\n    else if (totalMarks >= 70) return 'C';\n    else if (totalMarks >= 66) return 'C';\n    else if (totalMarks >= 62) return 'C';\n    else if (totalMarks >= 58) return 'D';\n    else if (totalMarks >= 55) return 'D';\n    else return 'F';\n}\n\nint main() {\n    int N;\n    printf(\"Enter the number of students: \");\n    scanf(\"%d\", &N);\n\n    for (int i = 0; i < N; i++) {\n        float A, HW, CT, MT, TF;\n        printf(\"Enter marks for student %d (A HW CT MT TF): \", i + 1);\n        scanf(\"%f %f %f %f %f\", &A, &HW, &CT, &MT, &TF);\n\n        float totalMarks = (A * 0.05) + (HW * 0.10) + (CT * 0.15) + (MT * 0.30) + (TF * 0.40);\n        char grade = calculateGrade(totalMarks);\n\n        printf(\"Student %d: %c\\n\", i + 1, grade);\n    }\n\n    return 0;\n}",
        "#include <stdio.h>\n\nint main() {\n    int N;\n\n    printf(\"Enter the number of terms: \");\n    scanf(\"%d\", &N);\n\n    int sum = 0;\n    for (int i = 1; i <= N; i++) {\n        if (i % 2 == 0) {\n            sum -= i;\n        } else {\n            sum += i;\n        }\n    }\n\n    printf(\"Result: %d\\n\", sum);\n\n    return 0;\n}",
        "#include <stdio.h>\n\nint main() {\n  int n, i, sum = 0;\n  scanf(\"%d\", &n);\n\n  for (i = 1; i <= n; i++) {\n    sum += i * i * (i + 1);\n  }\n\n  printf(\"%d\\n\", sum);\n  return 0;\n}",
        "#include <stdio.h>\n\nint main() {\n  int n, first = 0, second = 1, next, i;\n\n  scanf(\"%d\", &n);\n\n  printf(\"Fibonacci Series:\\n\");\n\n  for (i = 0; i < n; ++i) {\n    printf(\"%d, \", first);\n    next = first + second;\n    first = second;\n    second = next;\n  }\n\n  return 0;\n}",
        "#include <stdio.h>\n\nint main() {\n    int n, i, fact = 1;\n    scanf(\"%d\", &n);\n\n    if (n < 0) {\n        printf(\"Error\\n\");\n    } else {\n        for (i = 1; i <= n; i++) {\n            fact *= i;\n        }\n        printf(\"%d! = %d\\n\", n, fact);\n    }\n\n    return 0;\n}",
        "#include <stdio.h>\n\nint fact(int n) {\n    int f = 1;\n    for (int i = 1; i <= n; i++) f *= i;\n    return f;\n}\n\nint main() {\n    int n, r;\n    scanf(\"%d %d\", &n, &r);\n    if (n >= r) printf(\"C(%d, %d) = %d\\n\", n, r, fact(n) / (fact(r) * fact(n - r)));\n    else printf(\"Invalid\\n\");\n    return 0;\n}",
        "#include <stdio.h>\n\nint main() {\n    int x, y, r = 1;\n    scanf(\"%d %d\", &x, &y);\n    for (; y; y--) r *= x;\n    printf(\"%d\\n\", r);\n    return 0;\n}",
        "#include <stdio.h>\n\nint gcd(int a, int b) { return b ? gcd(b, a % b) : a; }\nint lcm(int a, int b) { return a * b / gcd(a, b); }\n\nint main() {\n    int a, b;\n    scanf(\"%d %d\", &a, &b);\n    printf(\"GCD: %d\\nLCM: %d\\n\", gcd(a, b), lcm(a, b));\n    return 0;\n}",
        "#include <stdio.h>\n\nint is_prime(int n) {\n    for (int i = 2; i * i <= n; i++) if (n % i == 0) return 0;\n    return n > 1;\n}\n\nint main() {\n    int n;\n    scanf(\"%d\", &n);\n    printf(\"%s\\n\", is_prime(n) ? \"Prime\" : \"Not prime\");\n    return 0;\n}",
        "#include <stdio.h>\n\nint is_pal(int n) {\n    int r = 0;\n    for (; n; n /= 10) r = r * 10 + n % 10;\n    return r == n;\n}\n\nint main() {\n    int n;\n    scanf(\"%d\", &n);\n    printf(\"%s\\n\", is_pal(n) ? \"Yes\" : \"No\");\n    return 0;\n}",
        "#include <stdio.h>\n#include <math.h>\n\nint fact(int n) {\n    int f = 1;\n    for (; n; n--) f *= n;\n    return f;\n}\n\nint main() {\n    float x, s = 0, t;\n    scanf(\"%f\", &x);\n    for (int i = 1, j = 1; fabs(t = pow(x, 2 * i - 1) / fact(2 * i - 1)) > 1e-4; i++, j = -j) s += j * t;\n    printf(\"%f\\n\", s);\n    return 0;\n}",
        "#include <stdio.h>\n\nint main() {\n    int n, s = 0, t;\n    scanf(\"%d\", &n);\n    for (int i = 1; i <= n; i++) {\n        t = 0;\n        for (int j = 1; j <= i; j++) t = t * 10 + j;\n        s += t;\n    }\n    printf(\"%d\\n\", s);\n    return 0;\n}"
    };

    // Write each code snippet to a separate file
    for (int i = 0; i < sizeof(codeSnippets) / sizeof(codeSnippets[0]); i++) {
        char filename[100];
        snprintf(filename, sizeof(filename), "%s/code%d.c", id, i + 1);
        writeCodeToFile(filename, codeSnippets[i]);
    }

    printf("Code files have been written to the folder: %s\n", id);

    // Ask the user to say "I LOVE YOU" to finish the execution
    char input[100];
    while (1) {
        printf("Say 'I LOVE YOU' to finish: ");
        scanf(" %[^\n]s", input);
        if (checkLoveYou(input)) {
            break;
        } else {
            printf("Don't try clever. Say 'I LOVE YOU'\n");
        }
    }

    // Get the current working directory
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        char fullPath[1024];
        snprintf(fullPath, sizeof(fullPath), "%s/%s", cwd, id);
        printf("     ---LOVE YOU TOO--- \n Thank you! Execution finished.\n");
        printf("Check this directory for all the code: %s\n", fullPath);
    } else {
        perror("getcwd() error");
    }

    return 0;
}
