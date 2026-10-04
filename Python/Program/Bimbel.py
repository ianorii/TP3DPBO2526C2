from Tutor import Tutor
from Siswa import Siswa
from Materi import Materi
from Ruangan import Ruangan
from Jadwal import Jadwal

class Bimbel:
    # constructor
    def __init__(self, nama="", alamat=""):
        self.__nama = nama
        self.__alamat = alamat
        self.__listSiswa = []
        self.__listTutor = []
        self.__listMateri = []
        self.__listRuangan = []
        self.__listJadwal = []

    # setter and getter for nama
    def setNama(self, nama):
        self.__nama = nama
    def getNama(self):
        return self.__nama

    # setter and getter for alamat
    def setAlamat(self, alamat):
        self.__alamat = alamat
    def getAlamat(self):
        return self.__alamat

    # setter and getter for listSiswa
    def setSiswa(self, dataSiswa):
        self.__listSiswa.append(dataSiswa)
    def setListSiswa(self, listSiswa):          # add siswa dalam list
        for s in listSiswa:
            self.setSiswa(s)
    def getListSiswa(self):
        return self.__listSiswa

    # setter and getter for listTutor
    def setTutor(self, dataTutor):
        self.__listTutor.append(dataTutor)
    def setListTutor(self, listTutor):          # add tutor dalam list
        for t in listTutor:
            self.setTutor(t)
    def getListTutor(self):
        return self.__listTutor

    # setter and getter for listMateri
    def setMateri(self, kodeMateri, namaMateri):
        self.__listMateri.append(Materi(kodeMateri, namaMateri))
    def getMateri(self, index):
        return self.__listMateri[index]
    def getListMateri(self):
        return self.__listMateri

    # setter and getter for listRuangan
    def setRuangan(self, kodeRuangan, kapasitas):
        self.__listRuangan.append(Ruangan(kodeRuangan, kapasitas))
    def getRuangan(self, index):
        return self.__listRuangan[index]
    def getListRuangan(self):
        return self.__listRuangan

    # setter and getter for listJadwal
    def setJadwal(self, tanggal, jamMulai, jamSelesai, dataTutor, dataMateri, dataRuangan, listSiswa):
        self.__listJadwal.append(Jadwal(tanggal, jamMulai, jamSelesai, dataTutor, dataMateri, dataRuangan, listSiswa))
    def getJadwal(self, index):
        return self.__listJadwal[index]
    def getListJadwal(self):
        return self.__listJadwal