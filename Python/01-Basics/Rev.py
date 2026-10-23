text = input("Enter the text: ")
rev = ""
for ch in text:
    rev = ch + rev
print("Reversed:", rev)