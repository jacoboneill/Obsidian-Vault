Useful websites:
- [RegEx Course](https://regexone.com/)
- [RegEx Testing Site](https://regexr.com)

> [!definition]
> RegEx (_**Reg**ular **Ex**pression_) is a way to find patterns in strings.

# RegEx Syntax
| Character | Definiton |
| ---- | ---- |
| \d | Match any digit |
| \D | Match any non-digit |
| . | Match any character |
| \\. | Match "." character |
| [abc] | only match characters within [] |
| \[^abc] | match all characters except those within [] |
| [a-z] | Match all lowercase characters between a and z |
| [0-9] | Match all digits between 0 and 9 |
| {m} | m repitions |
| {m, n} | m to n repitions |
| * | zero or more repitions |
| + | one or more repitions |
| ? | Optional Character |
| \s | Any whitespace |
| \S | Any non-whitespace |
| ^ | Match first character in line |
| $ | Match last character in line |
| (...) | Capture group |
| (a(bc)) | Capture Sub-Group |
| (.*) | Capture all |
| (abc\|def) | Match abc or def |

# RegEx in Python
Python can check for a RegEx pattern by doing the following:
```python
import re

text = "The rain in Spain"

search = re.search("^The.*Spain$", text)

print(search.group())

# OUTPUT:
# The rain in Spain
```