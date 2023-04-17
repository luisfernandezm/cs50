# TODO
from cs50 import get_int

def main():

    cardNumber = get_int("Card Number: ")

    digits = digitsCounter(cardNumber)

    # Validation of AMEX card
    if digits == 15 and str(cardNumber)[:2] == "37":
        if luhns(cardNumber):
            print("AMEX")
        else:
            print("INVALID")

    # Validation of VISA card
    elif (digits == 13 or digits == 16) and str(cardNumber)[:1] == "4":
        if luhns(cardNumber):
             print("VISA")
        else:
            print("INVALID")

    # Validation of MASTERCARD card
    elif digits == 16 and (str(cardNumber)[:2] == "51" or str(cardNumber)[:2] == "52" or str(cardNumber)[:2] == "53" or str(cardNumber)[:2] == "54" or str(cardNumber)[:2] == "55"):
        if luhns(cardNumber):
             print("MASTERCARD")
        else:
            print("INVALID")
    else:
        print("INVALID")

def digitsCounter(numbers):
    digits = 1
    while numbers > 10:
        numbers = numbers / 10
        digits += 1
    return digits

def luhns(numbers):
    sum = 0
    for i, digit in enumerate(reversed(str(numbers))):
        if i % 2 == 0:
            sum += int(digit)
        else:
            double = int(digit) * 2
            sum += double // 10 + double % 10
    return sum % 10 == 0

main()