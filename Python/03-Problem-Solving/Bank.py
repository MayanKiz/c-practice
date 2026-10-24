balance = 1000.0
choice = 0
while choice != 4:
    print("\n---- ATM MENU ----")
    print("1. Check Balance")
    print("2. Deposit Money")
    print("3. Withdraw Money")
    print("4. Exit")
    choice = int(input("Enter your choice: "))
    if choice == 1:
        print("Current Balance:", balance)
    elif choice == 2:
        amount = float(input("Enter deposit amount: "))
        balance += amount
        print("Deposit successful.")
    elif choice == 3:
        amount = float(input("Enter withdrawal amount: "))
        if amount <= balance:
            balance -= amount
            print("Withdrawal successful.")
        else:
            print("Insufficient balance.")
    elif choice == 4:
        print("Thank you for using the ATM.")
    else:
        print("Invalid choice. Please choose a number between 1 and 4.")