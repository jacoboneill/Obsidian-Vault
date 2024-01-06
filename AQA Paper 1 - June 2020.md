---
tags:
  - AQA-A-Level
  - Computer-Science
  - Paper
page:
---
# AQA Paper 1 - June 2022
[Paper](https://drive.google.com/file/d/1VL_dLodmHM3OSDMp3eDnL2wNZXHBEqbC/view)
[Mark Scheme](https://drive.google.com/file/d/1sYPz9-fa2KdGg_DtA20SRXPk7r-1Phku/view)
# Answers
## Section A
### 01
1. 4 ✅
2. -
3. *c* will stay the same, the magnitude of a will double, making it 10 $$\sqrt{8^2 + 6^2} = \sqrt{64 + 36} = \sqrt{100} = 10$$ ✅✅
4. *c* will become 180 - *c*, a will keep it's magnitude $$\sqrt{-4^2 + -3^2} = \sqrt{16 + 9} = \sqrt{25} = 5$$ ✅✅
### 02
1. True, False, - ✅✅❌
2. -
3. -
4. -
5. -
6. -

### 03
1. $4! = 4 * 3 * 2 * 1 = 24$ ✅
2. $n!$ ✅
3. Because the string itself counts as a permutation. The answer would be $n! + 1$ ❌
4. -
5. -
6. $O(n)$ because, at most, it has to search everything at once, no matter the size of the input. ✅✅
7. $O(\log{n})$, because the algorithms halves the possible answers each permutation.✅✅

### 04
1. -
2. The *"last"* pointer will go up by one✅, and then the data will be appended in the next data block✅
3. The *"last"* pointer will go up by one, the algorithm will then find the position of the priority, shift all of the data after the position to the right, and then add the data to the new space.❌

## Section B
### 05
```python
digits = {}

# Input
number_of_digits = int(input("How many digits?\n"))
entered_digits = input("Enter digits:\n").strip().split(",")

# Guard Clause for if input doesn't match
if(number_of_digits != len(entered_digits)):
  print("Error, number of digits does not match input")
  exit()

# Parse Input to Dict
for digit in entered_digits:
  if(digit in digits):
    digits[digit] += 1
  else:
    digits[digit] = 1

# Find max digit/s
max_digits = []
max_frequency = 0

for digit in digits:
  f = int(digits[digit])
  d = int(digit)
  
  if(f > max_frequency):
    max_frequency = f
    max_digits.clear()
    
  if(f >= max_frequency):
    max_digits.append(d)

# Output
if(len(max_digits) > 1):
  print("Data was multimodal")
elif(len(max_digits) == 1):
  print(f"{max_digits[0]}: {max_frequency}")
else:
  print("Error")

# OUTPUT
# How many digits?
# 6
# Enter digits: 
# 0, 1, 2, 1, 2, 1
# 1: 3
#
# How many digits?
# 5
# Enter digits:
# 0, 1, 2, 2, 1
# Data was multimodal
```
✅✅✅✅✅✅✅✅✅✅✅✅
## Section C
Can not complete without Skeleton Program

## Section D
Can not be completed without Skeleton Program


