# Program to reverse a string

word = input('Word to reverse: ')

letters = []

for symbol in word:
    letters.append(symbol)

reversedString = []

counter = len(letters)

while(counter != 0):
    reversedString.append(letters[counter-1])
    counter -= 1

backwards = ''.join(reversedString)

print('%s reversed is: %s' % (word, backwards))
