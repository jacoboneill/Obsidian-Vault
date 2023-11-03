---
tags:
  - AQA-A-Level
  - Computer-Science
  - Note
page: 28
---
# Examples of Common Operations in Python and C++
| Operation or Function |  C++ Example  | Python Example |
|-----------------------|---------------|----------------|
| Add                   | `int c = a + b`  | `c = a + b`      |
| Subtract              | `int c = a - b`  | `c = a - b`      |
| Multiply | `int c = a * b` | `c = a * b` |
| Divide Real Number | `float c = a / b` | `c = a / b` |
| Divide Integer | `int c = a / b` | `c = a // b` |
| Modulo | `int c = a % b` | `c = a % b` |
| Exponentiation | `float c = pow(B,n)` | `c = a ** b` |
| Round | `float c = round(pi)` for closest integer <br> `float c = round(pi * pow(10, dp)) / pow(10, dp)` for *`dp`* decimal places | `c = round(x[,n]` |
| Truncate | `float c = truc(pi)` for closest integer <br> `float c = truc(pi * pow(10, dp)) / pow(10, dp)` for *`dp`* decimal places. | `c = round(x[, n])`<br> Truncates according to the size input |
| Random Number Generator | `int random = rand()` | ` random = random()` |
| Substring | `std::string substring = string.substr(start, length)` | `substring = string[start, end]` |
| Concatenation | `std::string concat = string1 + string2` | `concat = string1 + string 2` |
| Convert Character to Character Code | `int ascii = static_cast<int>(character)` <br> `char character = static_cast<char>(ascii)` | `ascii = ord(char)` <br> `char = chr(ascii)` |
| Convert String to Integer | `std::string string = std::to_string(n)`<br> `int n = std::stoi(string)` | `string = str(n)` <br> `n = int(string)` |
| Convert String to Float | `std::string string = std::to_string(f)` <br>`float f = std::stof(string)` | `string = str(f)`<br>`f = float(string)` |
