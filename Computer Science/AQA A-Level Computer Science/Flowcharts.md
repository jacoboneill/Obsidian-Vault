---
tags:
  - AQA-A-Level
  - Computer-Science
  - Note
---
# Flowcharts
A flowchart uses a set of symbols to show the flow of a program.

Some symbols include:

## Start / Stop
```mermaid
flowchart TD
	id1([Start / Stop])
```

## Process
```mermaid
flowchart TD
	id1[Process]
```

## Input / Output
```mermaid
flowchart TD
	id1[/Inout / Output/]
```

## Decision
```mermaid
flowchart TD
	id1{Decision}
```

## Database
```mermaid
flowchart TD
	id1[(Database)]
```

# System Flowchart
A system flowchart is used to give an overview of an entire system, however not all of a system should be shown as it can get very big and cramped

## ATM Example
```mermaid
flowchart TD
	A([Start]) --> B{Is card inserted}
	B -- No --> B
	B -- Yes --> C[Read details from chip]
	C --> D[/Enter Pin/] --> E{Is Pin Correct}
	E -- No --> F[/Display Error Message/] --> G([Stop])
	E -- Yes --> H[/Display Menu/]
	H --> I[...]
```
