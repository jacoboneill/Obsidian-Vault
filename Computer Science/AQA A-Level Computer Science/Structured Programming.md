# Specification Coverage
- 3.1.2.1 Structured Programming
- 3.3.1.2 Design

# Learning Objectives
- Use hierarchy / structure charts to plan the design of a program
- Use flowcharts to describe a system
- Write pseudo-code and test it by dry running
- Use sensible naming conventions for programming components
- Write well-structured commented code

# Sections
- [[Hierarchy or Structure Charts]]
- [[Flowcharts]]
- [[Pseudo-Code]]
- [[Naming Conventions]]
- [[Code Layout and Comments]]
- [[Dry Runs and Trace Tables]]

# Tasks
- Draw a systems flowchart that shows how the computer system at a supermarket handles the sale of goods at the POS.
	- [[Supermarket Systems Flowchart#POS|Supermarket POS]]
- The customers at a supermarket have the option of paying for their goods by credit or debit card. Draw a systems flowchart to show how this process works
	- [[Supermarket Systems Flowchart#Credit or Debit|Supermarket Credit or Debit]]
- A programmer might choose to use both a flowchart and pseudo-code when developing a program. Describe the benefits and drawbacks of using each of these systems.
	- Flowchart gives a visual representation of the Logic Flow, Pseudo-Code gives a representation that is easier to implement as it looks like a program.
- High-level languages support ‘user-defined variable names’. Explain what is meant by this term.
	- This means that a high-level language like *JavaScript* will allow the developer to make names for variables i.e. `let greeting = "Hello"`, unlike low level languages like *Assembly* that will only allow you to access data via register names.
- What steps can a programmer take to make the code they write easier for another programmer to follow?
	- Follow [[Clean Code Principles]] such as DRY, KISS, and YAGNI. As well as using [[Naming Conventions|good variable and function names]] and [[Pseudo-Code|pre planning your code]] to make sure you don't confuse developers with weird code in the middle of your main file.
# Study / Research Tasks
- Why is it considered bad practice to use the GoTo statement when programming?
	- It can create a non-linear logic flow and introduce unmaintainable spaghetti code
- An alternative programming paradigm to procedural languages is logic programming, for example Prolog. In what way does this paradigm differ and what are the implications for the way in which programs might be designed?
	- The main difference between Logic and Procedural programming is that Logic concentrates on the *"What"* while procedural concentrates on the *"How"*. These different ways of thinking will implicate how the program is designed. For example, finding the max number in an array using procedural would require you to use loops and conditional statements to find it. In logical, you query the relationships. see: [[Logical v.s. Procedural]]. Procedural therefore introduces a lot more boilerplate.
- *"All programs can be structured using only decisions, sequences and loops."* Explain whether you think this is true.
	- I believe this is true, however programs can be designed better with the use of functions, objects, and classes.
- In what way do Pascal, Algol and some other programming languages enforce structured design?
	- With the use of control flow tokens like `if-then-else`, `while`, and `for`.