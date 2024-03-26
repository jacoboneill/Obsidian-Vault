Iterators are a built-in object that can iterate through a [[Lists, Tuples, Sets, and Dictionaries|tuple]] (strings count as a tuple).

They work by default like the following:
```python
mytuple = (1,2,3,4)
myit = iter(mytuple)

print(next(myit))
print(next(myit))
print(next(myit))
print(next(myit))

# OUTPUT:
# 1
# 2
# 3
# 4
```

As well as this, when using the `for` loop's `in` keyword, it creates an iterator from the input:
```python
# Syntactic Sugar
myit = iter((1,2,3,4))

for i in myit:
	print(i)

# Under the Hood
myit = iter((1,2,3,4))

while True:
	try:
		print(next(myit))
	except StopIteration:
		break


# OUTPUT:
# 1
# 2
# 3
# 4
```

Finally, you can create a custom iterator, for example to create the fibonacci sequence by modifying the `__iter__` and `__next__` values in a class:
```python
class FibonacciIterator:
	def __init__(self):
		self.a = 0
		self.b = 1

	def __iter__(self):
		return self

	def __next__(self):
		result = self.a
		self.a = self.b
		self.b += result
		return result

myfib = FibonacciIterator()

print(next(myfib))
print(next(myfib))
print(next(myfib))
print(next(myfib))
print(next(myfib))

# OUTPUT:
# 0
# 1
# 1
# 2
# 3
```