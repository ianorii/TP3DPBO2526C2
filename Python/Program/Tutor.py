from Person import Person

class Tutor(Person):
    # constructor
    def __init__(self, nama="", noHp="", email="", bidang="", status=""):
        super().__init__(nama, noHp, email)
        self.__bidang = bidang
        self.__status = status

    # setter and getter bidang
    def setBidang(self, bidang):
        self.__bidang = bidang
    def getBidang(self):
        return self.__bidang

    # setter and getter for status
    def setStatus(self, status):
        self.__status = status
    def getStatus(self):
        return self.__status