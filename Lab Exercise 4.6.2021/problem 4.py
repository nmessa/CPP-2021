##Lab Exercise 4/6/2021 Problem 4
##Author: 
##This function returns the numeric value of a name
def nameValue(name):
    value = 0
    for ch in name:
        value += ord(ch)-64   #why 64 and not 65?
    return value

#Open the file names.txt
infile = open('names.txt')

#Read the contents of the file
names = infile.read()

#Create a list of names
names = names.split(',')

#Strip off the quotations
nameList = []
for name in names:
    nameList.append(name[1:-1])

#Sort the list of names
nameList.sort()

index = 1
total = 0
for name in nameList:
    #get value of name
    #Add code here

    
    #multiply list position and value then add to total
    #Add code here

    #increment position marker index
    #Add code here


#print the final total of 5 thousand names
print(total)   

