>[!definition]
>Modules are python files that are called by the main file.
>For example, `example.py` might contain a function we import into `main.py`. `example.py` would be the module


# Example
## circle.py
```python
# All variables and functions will be exported
pi = 3.141

diameter = lambda radius : 2 * radius
circumference = lambda radius : diameter(radius) * pi
area = lambda radius : pi * radius ** 2

# if `python3 circle.py is run, pi will be written`
if __name__ == "__main__":
	print(f" Pi is equal to: {pi}")

# OUTPUT:
# Pi is equal to 3.141
```

## main.py
```python
# Import the circle module to use its functionality.
import circle

radius = 2.4

print(f"The area of the circle with radius {radius} is {circle.area(radius)}.")

# OUTPUT:
# The area of the circle with radius 2.4 is 18.09216
```

# Builtins
*[Documentation](https://docs.python.org/3/py-modindex.html)*

Examples of builtin modules include:
- **os**, Miscellaneous operating system interface.
- **sys**, Access system-specific parameters and functions.
- **math**, Mathematical functions (sin() etc.).
- **datetime**, Basic date and time types.
- **random**, Generate psuedo-random numbers with various common distributions.
- **json**, Encode and decode the JSON format.
- **re**, Regular expressions operations