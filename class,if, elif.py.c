print ("Apk sederhana\n")


print ("salah satu rokok ")
class Surya():    
    def __init__(self, nama, tar, nikotin):
        self.nama = nama
        self.tar = tar
        self.nikotin = nikotin
    def tar_nikotin (self):
        print ("nama \t:",self.nama)
        print ("tar \t:",self.nama)
        print ("nikotin\t:",self.nikotin)

rokok = Surya("surya","16tar","1mg\n")

rokok.tar_nikotin()

rokok = input ("cari rokok apa..?")

if rokok == "Surya":
    print ("harganya cuma 20.000")
elif rokok == "surya":    
    print ("harganya cuma 20.000")
elif rokok == "evo":
    print ("sudah habis")