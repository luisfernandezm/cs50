# TODO

def main():

    text = input("Text: ")
    index = counting(text)

    if index < 1:
        print("Before Grade 1")
    elif index > 16:
        print("Grade 16+")
    else:
        print (f"Grade {index}")

def counting(input):
    letters = 0
    words = 1
    sentence = 0

    for i in range(len(input)):
        if input[i].isalnum():
            letters += 1
        elif input[i] == " ":
            words += 1
        elif input[i] == "." or input[i] == "!" or input[i] == "?":
            sentence += 1

    L = letters / words * 100
    S = sentence / words * 100
    index = round(0.0588 * L - 0.296 * S - 15.8)
    return index

main()