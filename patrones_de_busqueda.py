#busqueda

import re

print(re.search(r"\d\d\d","kilo912metro"))#busca 3 numeros consecutivos 
print(re.search(r"k","kilo912metro"))#busca la k

patron=re.compile("\d\d\d")
print(patron.search("kilo912metro").group()) #nos muestra solo lo que buscamos


if (re.search("\Aa[0-9].*(end|fin)$,","a4 es una marca de fin")):
    print("se encontro el patron")

#sustitucion

print (re.sub(r"\d","*","mpang8uera990",2)) #busca los primeros 2

#modificadores
#IGNORECASE es un modificador, no tenga en cuenta mayusculas ni minusculas

regex=re.compile(r"ab",re.IGNORECASE)
print (regex.search("jutmillaAbuImntr"))
