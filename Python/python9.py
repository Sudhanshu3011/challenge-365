#strings are immutable

word="MYself_Sudhanshu-shekhar"
word2="intro is Here"
word1="!!Sudhanshu-shekhar  Sudhanshu!!"
print(word.upper())
print(word.lower())
print(word1.rstrip("!"))
print(word1.replace("Sudhanshu","siddhu"))
print(word2.capitalize())
print(word.center(50))
print(word1.count("Sudhanshu"))
print(word1.endswith("!!"))
print(word2.find("is"))
print(word2.index("is"))

str1="hey ist new stringline"
print(str1.isalpha())
str2="hello"
print(str2.islower())
str3="It is not printable\n"
print(str3.isprintable())
print(str3.swapcase())
print(str3.title())