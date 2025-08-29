# input: "three hundred million"
# output: 300,000,000
#
# input: "five hundred thousand"
# output: 500,000

# function to add commas to the generated no.
def addCommas(n):
    s = str(n)
    # print(type(s), len(s))
    # If three digit no, no need to add commas
    if len(s) <= 3:
        return
    
    # converting string to list to add commas using list's insert method
    out_list = list(s)
    comma_n = -3
    while abs(comma_n) < len(out_list):
        out_list.insert(comma_n, ",")
        comma_n -= 4
    
    # converting list back to new string and returning it
    out = ""
    for i in out_list:
        out += i
    return out

# Taking main input
s = input("Enter your string (Case-Insensitive is okay, but don't make mistake in spelling) : ")

# Dictionary to convert words to their respective numbers
number_words = {
    "zero": 0,
    "one": 1,
    "two": 2,
    "three": 3,
    "four": 4,
    "five": 5,
    "six": 6,
    "seven": 7,
    "eight": 8,
    "nine": 9,
    "ten": 10,
    "eleven": 11,
    "twelve": 12,
    "thirteen": 13,
    "fourteen": 14,
    "fifteen": 15,
    "sixteen": 16,
    "seventeen": 17,
    "eighteen": 18,
    "nineteen": 19,
    "twenty": 20,
    "thirty": 30,
    "forty": 40,
    "fifty": 50,
    "sixty": 60,
    "seventy": 70,
    "eighty": 80,
    "ninety": 90,
    "hundred": 100,
    "thousand": 1000,
    "million": 1000000,
    "billion": 1000000000,
    "trillion": 1000000000000
}

# taking lower case of the input and taking every word out of it and comparing it with the dictionary's key field to find a match

# if no match found, then there is spelling miistake in one of the words in the given input
try:
    s = s.lower()
    words = s.split(" ")
    num = 1
    
    for n in words:
        num *= number_words[n]
        
    # Add Commas using the pre defined addCommas function to make the no looks aesthetic
    final_num = addCommas(num)
    print(final_num)

# populating our empty no (technically, 1) with the value fetched from dictionary's value field of the corresponding match
except KeyError:
    print("There is some spelling mistake in your input. Please re-check your input and Try Again!")
