text = input("Enter text: ")
count = 0
for ch in text:
    if ch in "aeiouAEIOU":
        count += 1
print("Vowels", count)