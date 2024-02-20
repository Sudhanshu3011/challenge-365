from typing import Any


class Bus:
    def __init__(self,number,type,route):
        self.number=number
        self.type=type
        self.route=route

    def __str__(self):
        return f"The Bus no is {self.number}, type {self.type} and route {self.route}."
    
    def __repr__(self):
        return F"BUS NO ('{self.number}') TYPE ('{self.type}') ROUTE('{self.route}')"
    
    def __call__(self):
        return "This is a call"
    
    def __len__(self):
        leng=0
        for i in self.type:
            leng+=1

  