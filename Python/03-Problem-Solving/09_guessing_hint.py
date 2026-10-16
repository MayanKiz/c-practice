# Practice exercise: complete the loop and condition yourself.
# Goal: ask for guesses until the user enters the target number.
target = 7
guess = int(input("guess the number: "))

if guess == target:
    print("correct!")
elif guess < target:
    print("too low")
else:
    print("too high")
