#Leer JSON

import json  #libreria 

with open("note.json") as file:#with permite manejar como un ciclo
     data=json.load(file)

print (data) #imprime todo el documento 
print (data ["clientesA"]) #solo imprime clientesA

