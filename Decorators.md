[Tutorial](https://www.youtube.com/watch?v=JgxCY-tbWHA&)

>[!definition]
> A way to take a function and pass it to another function

# Example Timer
```python
import time

# decorator
def timer(func):
	def wrapper(*args, **kwargs):
		start_time = time.time() # start time
		result = func(*args, **kwargs) # call the decorated function
		end_time = time.time() # end time
		print(f"Function {func.__name__} took: "\
			  f"{end_time - start_time:.4f} seconds")
		return result
	return wrapper

# function with decorator
@timer
def example_function(n):
	return f"The sum is {sum(range(n))})

print(example_function(100000000))

# OUTPUT:
# Function example_function took: 3.3649 seconds
# The sum is 4999999950000000
```

Doing this:
```python
@timer
def example_function(n):
	return f"The sum is {sum(range(n))})
```

Is the equivalent of doing:
```python
def example_function(n):
	return f"The sum is {sum(range(n))})

example_function = timer(example_function)
```

The decorator looks neater however.

> [!definition]
> `*args` means any number of positional arguments
> `**kwargs` means any number of keyword arguments

# Built-In Decorators
## `@property`
> [!definition]
> Allows control of access to a value in a class

```python
class Circle:
	def __init__(self, radius):
		self._radius = radius # typically _ means that the user should not 
								# access this attribute.

	@property # This is a getter for radius
	def radius(self):
		return self._radius

	@radius.setter # A setter for radius
	def radius(self, value):
		if value >= 0:
			self._radius = value
		else:
			raise ValueError("Radius must be positive")

	@radius.deleter # Used for the `del` keyword
	def radius(self):
		print("deleted radius")
		del self._radius

	@property # Allows a function to be a property rather than a method
	def diameter(self):
		return self._radius * 2


c = Circle(5)
print(c.radius) # 5
print(c.diameter) # 10
c.radius = 10
print(c.radius) # 10
print(c.diameter) # 20

del c.radius # deleted radius
```

## `@staticmethod`
> [!definition]
> Allows for a method of a class to be accessed without an instance

```python
class Math:
	@staticmethod
	def add(x, y):
		return x + y

	@staticmethod
	def multiply(x, y):
		return x * y

print(Math.add(5, 7)) # 12
print(Math.multiply(3, 4)) # 12
```
## `@classmethod`
>[!definition]
> Allows for the access of class attributes and static methods, rather than the instance of the class

```python
class Animal:
	species = "dog"

	@staticmethod
	def speak():
		return "Woof!"

	@classmethod # This will allow access to `@staticmethod` and 
				  # the `species` attribute
	def introduction(cls): # has `cls` instead of `self`
		return f"{cls.speak()}, I am a {cls.species}."

print(Animal.introduction())

# OUTPUT:
# Woof! I am a dog.
```