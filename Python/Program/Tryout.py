from Soal import Soal

class Tryout:
    # constructor
    def __init__(self, namaTryout="", listSoal=None):
        self.__namaTryout = namaTryout
        self.__listSoal = [] if listSoal is None else list(listSoal)

    # setter and getter for namaTryout
    def setNamaTryout(self, namaTryout):
        self.__namaTryout = namaTryout
    def getNamaTryout(self):
        return self.__namaTryout

    # setter and getter for listSoal
    def setSoal(self, kodeSoal, subtest):
        self.__listSoal.append(Soal(kodeSoal, subtest))
    def getListSoal(self):
        return self.__listSoal