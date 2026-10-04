from Siswa import Siswa
from Tutor import Tutor
from Materi import Materi
from Ruangan import Ruangan

class Jadwal:
    # constructor
    def __init__(self, tanggal="",jamMulai="", jamSelesai="", dataTutor=None, dataMateri=None, dataRuangan=None, listSiswa=None):
        self.__tanggal = tanggal
        self.__jamMulai = jamMulai
        self.__jamSelesai = jamSelesai
        self.__dataTutor = dataTutor
        self.__dataMateri = dataMateri
        self.__dataRuangan = dataRuangan
        self.__listSiswa = [] if listSiswa is None else list(listSiswa)

    # setter and getter for tanggal
    def setTanggal(self, tanggal):
        self.__tanggal = tanggal
    def getTanggal(self):
        return self.__tanggal

    # setter and getter for jamMulai
    def setJamMulai(self, jamMulai):
        self.__jamMulai = jamMulai
    def getJamMulai(self):
        return self.__jamMulai
    
    # setter and getter for jamSelesai
    def setJamSelesai(self, jamSelesai):
        self.__jamSelesai = jamSelesai
    def getJamSelesai(self):
        return self.__jamSelesai

    # setter and getter for dataTutor
    def setTutor(self, dataTutor):
        self.__dataTutor = dataTutor
    def getTutor(self):
        return self.__dataTutor
    
    # setter and getter for dataMateri
    def setMateri(self, dataMateri):
        self.__dataMateri = dataMateri
    def getMateri(self):
        return self.__dataMateri

    # setter and getter for dataRuangan
    def setRuangan(self, dataRuangan):
        self.__dataRuangan = dataRuangan
    def getRuangan(self):
        return self.__dataRuangan

    # setter and getter for listSiswa
    def setSiswa(self, dataSiswa):
        self.__listSiswa.append(dataSiswa)
    def setListSiswa(self, listSiswa):
        self.__listSiswa = listSiswa
    def getListSiswa(self):
        return self.__listSiswa