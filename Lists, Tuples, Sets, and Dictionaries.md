# List
> [!definition]
> A dynamically sized array that can be changed

```python
mylist = ["hello"]
mylist.append("world")
print(mylist)

# OUTPUT:
# ['hello', 'world']
```

# Tuple
> [!definition]
> A statically sized array that can not be changed after initalisation

```python
mytuple = ("hello", "world")
print(mytuple)

# OUTPUT:
# ('hello', 'world')
```

# Set
> [!definition]
> An array with no duplicates, it is meant to match the mathematical notion of a set

```python
myset = {"hello", "world", "hello"}
print(myset)

# OUTPUT:
# {'hello', 'world'}
```

# Dictionary
> [!definition]
> A key-value store

```python
mydict = {
	"hello": "world"
}
print(mydict)
print(mydict["hello"])

# OUTPUT:
# {'hello': 'world'}
# world
```
