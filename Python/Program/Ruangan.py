class Ruangan:
    # constructor
    def __init__(self, kodeRuangan="", kapasitas=0):
        self.__kodeRuangan = kodeRuangan
        self.__kapasitas = kapasitas

    # setter and getter for kodeRuangan
    def setKodeRuangan(self, kodeRuangan):
        self.__kodeRuangan = kodeRuangan
    def getKodeRuangan(self):
        return self.__kodeRuangan

    # setter and getter for kapasitas
    def setKapasitas(self, kapasitas):
        self.__kapasitas = kapasitas
    def getKapasitas(self):
        return self.__kapasitas