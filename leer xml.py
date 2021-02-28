#Leer XML

from xml.dom.minidom import parse,Node #aqui encontramos funciones que no tenemos

xmltree=parse("note.xml") #parse lee archivo 

for nodo in xmltree.getElementsByTagName("pro"): #recorer nodos 
#xml va en nodos #getElementsByTagName no hay que definirla
    for nodo_hijo in nodo.childNodes:#xml cuentan con nodo y estos pueden tener hijos
        if nodo_hijo.nodeType==Node.TEXT_NODE: #verificar tipo de nodo
            print (nodo_hijo.data)

#otra forma de acceder a los nodos

import xml.sax  #libreria           

from xml.etree.ElementTree import parse 

xml_doc=parse("note.xml")
for ele in xml_doc.findall("pro"): #de el elemento encuentra todos los que contengan pro
    print (ele.text) #texto de el elemento

    
