from Tryout import Tryout

class HasilTryout:
    # constructor
    def __init__(self, skor=0.00, dataTryout=None):
        self.__skor = skor
        self.__dataTryout = dataTryout

    # setter and getter for skor
    def setSkor(self, skor):
        self.__skor = skor
    def getSkor(self):
        return self.__skor

    # setter and getter for dataTryout
    def setTryout(self, dataTryout):
        self.__dataTryout = dataTryout
    def getTryout(self):
        return self.__dataTryout