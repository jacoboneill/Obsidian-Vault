# Sections
- [[Programming Basics]]
- [[Programming Concepts]]
- [[Basic Operations in Programming Languages]]
- [[Subroutines, Local, and Global Variables]]
- [[Structured Programming]]

# Practice Questions
## Question 1
The following code is part of a stock control system.
```
Dim Name As String
Dim Price As Real
Const VAT = 0.2

Type RecordDetails
	RecordType As String * 14
	RecordCurrent As Integer
	RecordRestock As Integer
End Type
```

1. Identify where each of the following have been used, and explain why the type of variable chosen is appropriate
	- a variable that is used to store a whole number
		- The variable `RecordCurrent` is of type `Integer` because you will only have a whole number of products in a record.
	- a variable that is used to store a decimal number
		- The variable `price` is stored as a `Real` number, which a decimal part. This is because the price has to conform to two decimal places.

2. Why has a constant been used to store `VAT`?
	- This is because the `VAT` should never be needed to change during the programs lifetime as VAT is always 20%.

3. Some computer languages support *'"user-defined types"*. Explain this term and give an example of a user-defined variable in this code.
	- A user-defined type is a variable that stores custom data that isn't built into the programming language. For example, in the code, you have a type called `RecordDetails` that has custom data of `RecordType`, `RecordCurrent`, and `RecordRestock` which can be accessed when a variable is instantiated with it using dot syntax For example `RecordDetails record; cout << record.RecordCurrent << endl;`
