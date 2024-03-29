Useful websites:
- [RegEx Course](https://regexone.com/)
- [RegEx Testing Site](https://regexr.com)
- [RegEx in Python](https://www.youtube.com/watch?v=wnuBwl2ekmo&ab_channel=NeuralNine)

> [!definition]
> RegEx (_**Reg**ular **Ex**pression_) is a way to find patterns in strings.

# RegEx Syntax
| Character  | Definiton                                      |
| ---------- | ---------------------------------------------- |
| \d         | Match any digit                                |
| \D         | Match any non-digit                            |
| .          | Match any character                            |
| \\.        | Match "." character                            |
| [abc]      | only match characters within []                |
| \[^abc]    | match all characters except those within []    |
| [a-z]      | Match all lowercase characters between a and z |
| [0-9]      | Match all digits between 0 and 9               |
| {m}        | m repitions                                    |
| {m, n}     | m to n repitions                               |
| *          | zero or more repitions                         |
| +          | one or more repitions                          |
| ?          | Optional Character                             |
| \s         | Any whitespace                                 |
| \S         | Any non-whitespace                             |
| ^          | Match first character in line                  |
| $          | Match last character in line                   |
| (...)      | Capture group                                  |
| (a(bc))    | Capture Sub-Group                              |
| (.*)       | Capture all                                    |
| (abc\|def) | Match abc or def                               |

# RegEx in Python
Python uses the `re` module to implement regex functions. It offers the following:

| Function  | Description                                                           |
| --------- | --------------------------------------------------------------------- |
| `findall` | Returns a list containing all matches                                 |
| `search`  | Returns a **match** object if there is a match anywhere in the string |
| `split`   | Returns a list where the string has been split at each match          |
| `sub`     | Replaces one or many matches with a string (*substitution*)           |

## `findall`
> Returns a list containing all matches

```python
import re

text = "The rain in Spain"
x = re.findall("ai", text)
print(x)

# OUTPUT:
# ['ai', 'ai']
```

## `search`
> returns a **match** object if there is a match anywhere in the string

```python
import re

text = "The rain in Spain"
x = re.search("ai", text)

print(x.span()) # returns a tuple containing the start and end pos
print(x.string) # returns the string passed to the function
print(x.group()) # returns the part of the string where there was a match

# OUTPUT:
# (5, 7)
# 'The rain in Spain'
# 'ai'
```

## `split`
> returns a list where the string has been split at each match

```python
import re

text = "The rain in Spain"
x = re.split("ai", text)

print(x)

# OUTPUT:
# ['The r', 'n in Sp', 'n']
```

## `sub`
> replaces one or many matches with a string

```python
import re

text = "The rain in Spain"
x = re.sub("\s", "_", text)
print(x)

# OUTPUT:
# 'The_rain_in_Spain'
```

> [!caution]
> If no matches are found `None` will be returned