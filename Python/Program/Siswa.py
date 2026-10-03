from Person import Person

class Siswa(Person):
    # constructor
    def __init__(self, nama="", noHp="", email="", kelas=0, targetJurusan="", targetKampus=""):
        super().__init__(nama, noHp, email)
        self.__kelas = kelas
        self.__targetJurusan = targetJurusan
        self.__targetKampus = targetKampus

    # setter and getter for kelas
    def setKelas(self, kelas):
        self.__kelas = kelas
    def getKelas(self):
        return self.__kelas

    # setter and getter for targetJurusan
    def setTargetJurusan(self, targetJurusan):
        self.__targetJurusan = targetJurusan
    def getTargetJurusan(self):
        return self.__targetJurusan

    # setter and getter for targetKampus
    def setTargetKampus(self, targetKampus):
        self.__targetKampus = targetKampus
    def getTargetKampus(self):
        return self.__targetKampus