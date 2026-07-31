# Character Analyzer and Case Converter in C++

## Overview

This project analyzes a single character entered by the user. It determines whether the character is uppercase, lowercase, a digit, or a special character. If the character is alphabetic, the program converts it to the opposite letter case.

## Features

- Detect uppercase letters.
- Detect lowercase letters.
- Detect digits.
- Detect special characters.
- Convert lowercase letters to uppercase.
- Convert uppercase letters to lowercase.

## Technologies

- C++
- Standard Library (`iostream`, `cctype`)

## Concepts Covered

- Conditional statements (`if-else`)
- Character classification
- Character conversion
- User input and output

## How to Run

Compile:

```bash
g++ main.cpp -o character-analyzer
```

Run:

```bash
./character-analyzer
```

## Sample Output

```
Enter a character: a

Your character 'a' is lowercase.
Its uppercase is A
```

## Future Improvements

- Allow users to analyze an entire string.
- Count uppercase, lowercase, digits, and special characters.
- Add support for repeated analysis without restarting the program.
