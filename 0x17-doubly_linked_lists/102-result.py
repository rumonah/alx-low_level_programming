#!/usr/bin/python3
largest_palindrome = 0;
for t in range(100, 1000):
    for k in range(100, 1000):
        numbers = t * k
        if str(numbers) == str(numbers)[::-1] and numbers > largest_palindrome:
            largest_palindrome = numbers

# save the result in the file
with open("102-result", "w") as file:
    file.write(str(largest_palindrome))
