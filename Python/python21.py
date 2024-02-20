#KBC
#Question bank
question=["Who is the current Prime Minister of India?", 
          "Which country hosted the 2021 Summer Olympics?",
          "In which year did the COVID-19 pandemic officially begin?",
          "Who won the Nobel Peace Prize in 2021?",
          "Which cryptocurrency reached an all-time high in value in 2021?",
          "What is the capital city of Afghanistan?",
          "Which space agency successfully landed the Perseverance rover on Mars in 2021?",
          "Who won the Australian Open Women's Singles title in 2021?",
          "In 2021, which social media platform faced controversies and discussions related to user privacy?",
          "Which country launched the Tianhe module, the core module of its space station, in 2021?",
          "Who won the Nobel Prize in Physics in 2021 for their work on climate change?",
          "Which country became the first in the world to approve a COVID-19 vaccine for emergency use?",
          "Who won the 2021 Nobel Prize in Literature?",
          "What is the name of the first woman of color to be Vice President of the United States?",
          "In 2021, which country withdrew from the European Union?",
          "Who won the FIFA Women's World Cup in 2019?",
          "What major agreement did the United States rejoin in 2021 to combat climate change?",
          "Which technology company became the first to reach a market capitalization of $2 trillion in 2021?",
          "Who won the 2021 French Open Men's Singles title?",
          "Which African country faced political unrest in 2021, leading to the resignation of its president?",
          ]
#options of the question
options=["a) Narendra Modi \nb) Rahul Gandhi \nc) Arvind Kejriwal \nd) Amit Shah",
         "a) China \nb) Brazil \nc) Japan \nd) South Korea",
         "a) 2018 \nb) 2019 \nc) 2020 \nd) 2021",
         "a) Malala Yousafzai \nb) Greta Thunberg \nc) World Food Programme \nd) Joe Biden",
         "a) Bitcoin \nb) Ethereum \nc) Ripple (XRP) \nd) Dogecoin",
         "a) Kabul \nb) Tehran \nc) Islamabad \nd) Baghdad",
         "a) NASA \nb) ESA (European Space Agency) \nc) ISRO (Indian Space Research Organisation) \nd) Roscosmos",
         "a) Naomi Osaka \nb) Serena Williams \nc) Ashleigh Barty \nd) Simona Halep",
         "a) Facebook \nb) Twitter \nc) Instagram \nd) Snapchat",
         "a) Russia \nb) China \nc) USA \nd) India",
         "a) Roger Penrose \nb) Andrea Ghez \nc) Reinhard Genzel \nd) Syukuro Manabe and Klaus Hasselmann",
         "a) China \nb) USA \nc) Russia \nd) UK",
         "a) Haruki Murakami \nb) Kazuo Ishiguro \nc) Louise Glück \nd) Olga Tokarczuk",
         "a) Kamala Harris \nb) Michelle Obama \nc) Susan Rice \nd) Condoleezza Rice",
         "a) Germany \nb) United Kingdom \nc) France \nd) Italy",
         "a) United States \nb) Germany \nc) Brazil \nd) France",
         "a) Kyoto Protocol \nb) Paris Agreement \nc) Copenhagen Accord \nd) Montreal Protocol",
         "a) Apple \nb) Amazon \nc) Microsoft \nd) Google (Alphabet)",
         "a) Novak Djokovic \nb) Rafael Nadal \nc) Dominic Thiem \nd) Stefanos Tsitsipas",
         "a) South Africa \nb) Nigeria \nc) Zimbabwe \nd) Mali",

        ]

#answer of the question
ans=["a","c","b","c","a","a","a","c","a","b","d","c","c","a","b","a","b","a","a","d"]

#The algorithm for the given game of kbc
print("Welcome Guys, In the game of KBC.\nThere is a set of 20 questions and if you gave the correct answer of each question you will get $10000000.")
print("Press the correct option of the answer in small case of alphabet.")
i=0
sum=0
for i in range(20):
    print("The question [",i+1,"] is on your screen:")
    print(question[i])
    print(options[i])
    a=input("Enter the correct option:")
    if a==ans[i]:
        print("Congratulation You select the correct option.")
        if i==9:
            print("You are entering the new stage and the price money for each correct answer is 700000")
        if i==19:
            print("Hey ,Genius you played it amazingly")
        if i<10:
            sum=sum+300000
            print("You won Amount $",sum)
        else:
            sum=sum+700000
            print("You won Amount $",sum)
    else:
        print("Wrong answer.\nBetter luck next time")
        print("You won the amount of $",sum)
        break
