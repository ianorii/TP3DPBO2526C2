class Soal:
    # constructor
    def __init__(self, kodeSoal="", subtest=""):
        self.__kodeSoal = kodeSoal
        self.__subtest = subtest

    # setter and getter for kodeSoal
    def setKodeSoal(self, kodeSoal):
        self.__kodeSoal = kodeSoal
    def getKodeSoal(self):
        return self.__kodeSoal

    # setter and getter for subtest
    def setSubtest(self, subtest):
        self.__subtest = subtest
    def getSubtest(self):
        return self.__subtest