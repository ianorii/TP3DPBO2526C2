from Tryout import Tryout

class HasilTryout:
    # constructor
    def __init__(self, skor=0.00):
        self.__skor = skor

    # setter and getter for skor
    def setSkor(self, skor):
        self.__skor = skor
    def getSkor(self):
        return self.__skor