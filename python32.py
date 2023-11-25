f=open('myfile.txt','r')

text=f.read()
print(text)
f.close() 

#making a file 
# f=open('myfile.txt','a')
# # f.write('Hello this is appended code of the file\n')
# # f.close()

# with open('myfile.txt','a'):
#             "The sun dipped below the horizon, painting the sky in hues of orange and pink."
#     f.write("It is with statement\n",
#             "A curious cat perched on the windowsill, watching the world outside with wide eyes.",
#             "The aroma of freshly baked cookies wafted through the kitchen, tempting everyone in the house.",
#             "In a quiet corner of the library, a bookworm lost in a novel found solace.",
#             "An old, weathered map unfolded on the table, revealing the secrets of a hidden treasure.",
#             "Laughter echoed in the park as children played games, their joy infectious to anyone nearby.",
#             "The telescope revealed a distant galaxy, sparking wonder about the vastness of the universe.",
#             "A handwritten letter, sealed with wax, held the sentimental words of a long-distance love.")

# f.close()
# Reading from the file
with open('myfile.txt', 'r') as f:
    text = f.read()
    print(text)

# Appending to the file using 'with' statement
with open('myfile.txt', 'a') as f:
    sentences = [
        "The sun dipped below the horizon, painting the sky in hues of orange and pink.",
        "A curious cat perched on the windowsill, watching the world outside with wide eyes.",
        "The aroma of freshly baked cookies wafted through the kitchen, tempting everyone in the house.",
        "In a quiet corner of the library, a bookworm lost in a novel found solace.",
        "An old, weathered map unfolded on the table, revealing the secrets of a hidden treasure.",
        "Laughter echoed in the park as children played games, their joy infectious to anyone nearby.",
        "The telescope revealed a distant galaxy, sparking wonder about the vastness of the universe.",
        "A handwritten letter, sealed with wax, held the sentimental words of a long-distance love."
    ]

    for sentence in sentences:
        f.write(sentence + "\n")  # Add a newline character to separate sentences

# Reading and printing the updated file
with open('myfile.txt', 'r') as f:
    text = f.read()
    print(text)
