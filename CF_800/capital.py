# 281A - Word Capitalization
word = input()

for i, char in enumerate(word):
    if (i==0):
        print(char.upper(), end="")
    else:
        print(char, end="")