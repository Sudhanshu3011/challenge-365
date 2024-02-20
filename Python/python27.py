import random

def get_length(word):
    return len(word)

def logic1(word):
    rev1 = ''.join(reversed(word))
    return rev1

def logic2(word):
    result = []
    for k in range(1, 4):
        spy = random.randint(33, 126)
        result.append(chr(spy))
    rev2 = ''.join(reversed(word))
    result.append(rev2)
    for k in range(1, 4):
        spy = random.randint(33, 126)
        result.append(chr(spy))
    return ''.join(result)

code = input("Enter the statement to convert in the code:")
print("You entered the statement:",code)

words = code.split()
word_list = [str(item) for item in words]

output_list = []

for word in word_list:
    # print(word)
    length_word = get_length(word)

    if length_word <= 3:
        output_list.append(logic1(word))
    else:
        output_list.append(logic2(word))

# print(word_list)

result_string = ' '.join(output_list)
print("The coded language of the statement:",result_string)
