# 14.4 - Object Inheritance

class Abdulkarim:
    x = 0
    blabla = " "

    def __init__(ASELF, bla):
        ASELF.blabla = bla
        print(ASELF.blabla, "constructed yeah")

    def abdulk1(ASELF):
        ASELF.x = ASELF.x + 1
        print(ASELF.blabla, "abdulk counter", ASELF.x)

    def __del__(ASELF):
        print(ASELF.blabla, "destroyed in abulk1 while it was: ", ASELF.x)


class Abdulkarim2(Abdulkarim):
    rakam = 0
    def abdulk2(ASELF):
        ASELF.rakam = ASELF.rakam + 100
        ASELF.abdulk1()
        print(ASELF.blabla, "rakams", ASELF.rakam)
    '''
    def __del__(ASELF):   # if this activated, then ABDulkarim2 variables destruction will be here instead
        print(ASELF.blabla, "destroyed in abulk2 while it was: ", ASELF.rakam)
    '''

a1 = Abdulkarim("Macit")
a1.abdulk1()
print("-------------------")

a2 = Abdulkarim2("Yahya")
a2.abdulk1()
print("-------------------")
a2.abdulk2()
print("-------------------")
a2.abdulk1()
print("-------------------")
a2.abdulk2()
print("-------------------")
a2.abdulk1()
print("-------------------")
a2.abdulk2()
print("-------------------")
a2.abdulk2()
print("-------------------")
a2.abdulk2()
print("-------------------")
a2.abdulk2()
