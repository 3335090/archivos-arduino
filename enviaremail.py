#Enviar un correo

import smtplib #nos ayuda a enviar correo

#se necesita contraseña y permiso de un servidor

from email.mime.text import MIMEText #para crear texto
msg=MIMEText("Contenido de correo") #msg lleva el mensaje 
msg["subject"]="Asunto del correo" 
msg["From"]="dedesdonde@gmail.com"
msg["To"]="haciadonde@gmail.com"

mailServer=smtplid.SMTP("smtp.gmail.com",587) #servidor, puerto
mailServer.ehlo() #identificarnos
mailServer.starttls() #para lograr conexion 
mailServer.ehlo()
mailServer.login("johnmaxiaz@hotmail.es","3335090Gary@") #entra al correo para enviar
mailServer.sendmail("johnmaxias@hotmail.es","johntechny92@outlook.es",mag_as_string()) #enviar a otro correo, mensaje

mailServer.close()
