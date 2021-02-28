#comprimir

import zipfile #en minuscula

from zipfile import ZipFile #en mayusculas
with zipfile.Zipfile("archivo.zip","w") as fzip:
    #ahora trabamos con fzip
    fzip.write("Python.docx")
    fzip.write("Archivo.docx")
    fzip.write("pythonl.jpg")
    fzip.printdir() #consultar 
    fzip.extractall() #parecida a otras
    #formatos de descompresion
    
