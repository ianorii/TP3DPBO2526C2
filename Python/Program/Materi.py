class Materi:
    # constructor
    def __init__(self, kodeMateri="", namaMateri=""):
        self.__kodeMateri = kodeMateri
        self.__namaMateri = namaMateri

    # setter and getter for kodeMateri
    def setKodeMateri(self, kodeMateri):
        self.__kodeMateri = kodeMateri
    def getKodeMateri(self):
        return self.__kodeMateri

    # setter and getter for namaMateri
    def setNamaMateri(self, namaMateri):
        self.__namaMateri = namaMateri
    def getNamaMateri(self):
        return self.__namaMateri