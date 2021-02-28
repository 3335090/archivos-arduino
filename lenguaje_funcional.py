def lower(elementos): return elementos.lower()#devuelve las letras en minusculas


lista=["GARY","TE aMO","mUCHo"]
print(list(map(lower,lista)))

print([cad.lower() for cad in lista])

#funcion de orden superior

def saludo(idioma):
    
    def saludo_es():
        print("Hola")
        
    def saludo_en():
        print ("Hi")
        
    idioma_func={"es":saludo_es,
                 "en":saludo_en}

    return idioma_func[idioma]

saludar=saludo("es")
saludar()

from functools import reduce  #de donde se importa 

numeros=(1,2,3,4)
def suma(x,y): #definir funcion 
    return x+y #suma consecutiva 1+2=3+3=6+4=10 una funcion al usar reduce

samar=reduce(suma,numeros) #funcion y a que se aplica

