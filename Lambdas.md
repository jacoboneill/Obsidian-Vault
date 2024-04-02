>[!definition]
>A Lambda is a shorthand for writing a one line function

```python
# Normal function
def example_one:
	return "Hello World"

# Normal function with one line
def example_two: return "Hello World"

# Lambda function
example_three = lambda: "Hello World"
```

You can also have parameters
```python
# Function
def doubler_a(n):
	return n * 2

# Lambda
doubler_b = lambda n : n * 2
```

[w3schools](https://www.w3schools.com/python/python_lambda.asp) suggests a good example of using a lambda inside a function as a template for multiple functions, similar to having a super class.
```python
def multiplier(n):
	return lamda a : a * n

doubler = multiplier(2)
tripler = multiplier(3)


print(doubler(4))
print(tripler(4))

# OUTPUT
# 8
# 12
```