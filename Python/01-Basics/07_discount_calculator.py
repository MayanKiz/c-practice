price = float(input("price: "))
if price >= 5000:
    discount = price * 0.10
    print("discount:", discount)
    print("final price:", price - discount)
else:
    print("no discount available")
    print("final price:", price)
