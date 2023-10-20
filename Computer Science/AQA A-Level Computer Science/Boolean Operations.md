# Boolean Logic
Boolean logic is logic in which the results are either `TRUE` or `FALSE`.
Boolean Logic and by extensions Boolean Algebra is the underlying principle to how digital electronics and computers are made.

## AND
Otherwise known as a *conjunction*. If two values are either both true or both false, the output will be true.

| A | B | A AND B |
|---|---|---------|
| 0 | 0 |    1    |
| 0 | 1 |    0    |
| 1 | 0 |    0    |
| 1 | 1 |    1    |

## OR
Otherwise known as a *disjunction*. If either of the values are true, then the output will be true.

| A | B | A OR B |
|---|---|--------|
| 0 | 0 |   0    |
| 0 | 1 |   1    |
| 1 | 0 |   1    |
| 1 | 1 |   1    |

## NOT
Otherwise known as a *negation* as it reverses the output

| A | NOT A |
|---|-------|
| 0 |   1   |
| 1 |   0   |

## XOR
Otherwise known as an *exclusive [[#OR|or]]*. It will only output true if either only one of the values are true, but not both.

| A | B | A XOR B |
|---|---|---------|
| 0 | 0 |    0    |
| 0 | 1 |    1    |
| 1 | 0 |    1    |
| 1 | 1 |    0    |

## NAND
Otherwise known as *not [[#AND|and]]*. It will output true unless both values are true.

| A | B | A NAND B |
|---|---|----------|
| 0 | 0 |    1     |
| 0 | 1 |    1     |
| 1 | 0 |    1     |
| 1 | 1 |    0     |

## NOR
Otherwise known as *not [[#OR|or]]*. It will only output true if both values are false. It has the opposite truth table to an [[Boolean Operations#OR|OR]].

| A | B | A NOR B |
|---|---|---------|
| 0 | 0 |    1    |
| 0 | 1 |    0    |
| 1 | 0 |    0    |
| 1 | 1 |    0    |

# Boolean Operations
In many programming languages, the boolean operators look like the following

| Operator | Description  |
|----------|--------------|
| &&       | AND          |
| \|\|       | OR           |
| !        | NOT          |

These basic operators can be used to make the more complex ones:
```cpp
int main(int argc, char* argv[]){
	bool A = true;
	bool B = false;
	
	bool AND = A && B; // FALSE
	bool OR = A || B; // TRUE
	bool NOT = !A; // FALSE
	
	bool NAND = !(A && B); // TRUE
	bool NOR = !(A || B); // FALSE
	
	bool XOR = (A || B) && !(A && B); // TRUE
	
	return 0;
}
```