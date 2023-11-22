import random

def get_length(word):
    return len(word)

def logic1(word):
    rev1 = ''.join(reversed(word))
    return rev1


def logic2(word):
    result = []
    rev2 = ''.join(reversed(word))

    for k in range(3, len(rev2) - 3):
        result.append(rev2[k])

    return ''.join(result)



code = input("Enter the statement to convert in the code:")
print("You entered the statement:", code)

words = code.split()
word_list = [str(item) for item in words]

output_list = []

for word in word_list:
    length_word = get_length(word)

    if length_word <= 3:
        output_list.append(logic1(word))
    else:
        output_list.append(logic2(word))

result_string = ' '.join(output_list)
print("The coded language of the statement:", result_string)
