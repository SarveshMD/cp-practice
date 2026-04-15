# 208A - Dubstep

dubbed = input()
words = dubbed.split("WUB")
correct_words = []

for word in words:
    if word: correct_words.append(word)

print(" ".join(correct_words))