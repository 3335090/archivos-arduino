import gzip

with open("Python.docx","rb") as original: 
#comprimir
     with gzip.open("archivo.txt.gz","wb") as archivo1:
         archivo1.writelines(original)


#formato bz2

import bz2
cadena=b"cadena camara cadera canson" #b=cadena binaria
cadena_c=bz2.compress(cadena)# comprimimos cadena

print (cadena)
print (cadena_c) #compresion
print (bz2.decompress(cadena_c))

#formato tarball

import tarfile
archivo_tar=tarfile.open("primer.tar.gz","w:gz")#crear archivo y comprimer con metodo y es de escritura
archivo_tar.add("Python.docx")
archibo_tar.add("Archivo.docx")
archivo_tar.close()



