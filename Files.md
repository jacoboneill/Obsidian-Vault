---
tags:
  - AQA-A-Level
  - Computer-Science
  - Note
page: 61
---
# Files
Some files can only be used for specific programs, however many file formats are *portable*, which means they can be used in a wide range of programs. This includes *text files* and *binary files*.

## Text Files
A text file is one that simply contains lines of text or other human-readable characters, where each line is usually referred as a *record*. There may be different items of data stored and these are referred to as *fields*.

They may contain a header, which tells the computer the content and structure of the file and end of file (EOF) marker so that the programs using the file know when to stop.

Common text file formats include: 
- *.txt* (plain text)
- *.csv* (comma separated values).

### Example of Data in Text Files
#### Tab-Delimited Text (txt) File
```
John  Smith 22  Acacia Avenue  LE11 1AA
Jane  Doe 1 High Street LE12 5BD
```

#### Comma Separated Value (csv) File
```
John,Smith,22,Acacia Avenue,LE11 1AA
Jane,Doe,1,High Street,LE12 5BD
```

The two main actions you would want to do with these files are either **writing*** to the file or ***reading*** from the file. The following Python code will do both:
```python
def printTable(title, data):
    headings = ["First Name", "Surname", "House Number", "Street", "Postcode"]
    data = [headings, *data]

    # Add Padding to data and get max lengths
    max_lengths = [0 for _ in headings]
    for row in data:
        for index, cell in enumerate(row):
            cell = " " + cell + " "
            row[index] = cell
            if len(row[index]) > max_lengths[index]:
                max_lengths[index] = len(row[index])
    
    # Center all text
    for row in data:
        for index, cell in enumerate(row):
            row[index] = '{:^{}}'.format(cell, max_lengths[index])

    # Add heading border
    heading_border = ['-' * len(heading) for heading in data[0]]
    data.insert(1, heading_border)

    # Print table
    print('{:^{}}'.format(title.upper(), len("|".join(data[0]))) + '\n')
    for row in data:
        print("|".join(row))

def getRecords():
    records = []
    with open('./data.csv', 'r') as file:
        for record in file:
            records.append(record.strip().split(','))
    return records

def writeRecords(records):
    with open('./data.csv', 'w') as file:
        stringified_csv = ""
        for record in records:
            stringified_csv += ",".join(record) + "\n"
        file.write(stringified_csv)

def appendRecord(record):
    new_record = [str(property) for property in record]
    stringified_record = ",".join(new_record)
    with open('./data.csv', 'a') as file:
        file.write(stringified_record)

def deleteRecord(index):
    lines = []
    with open('./data.csv', 'r') as file:
        lines = file.readlines()

    if(index > len(lines) - 1 or index < 0):
        print("Error")
    else:
        lines.pop(index)
        with open('./data.csv', 'w') as file:
            for line in lines:
               file.write(line) 


# Write Records
writeRecords([['John', 'Smith', '22', 'Acacia Avenue', 'LE11 1AA'], ['Jane', 'Doe', '1', 'High Street', 'LE12 5BD']])
printTable("Write new records file", getRecords())

print("\n\n\n\n")

# Append CSV File and Print Table
appendRecord(["Joe", "Blogs", 41, "Penny Lane", "L18 1DE"])
printTable("Append .csv File", getRecords()) 

print("\n\n\n\n")

# Delete Record from CSV File
deleteRecord(0)
printTable("Delete Record", getRecords())
```

This works with *.csv* files by using string manipulation and 2D lists in Python.

