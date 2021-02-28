#Mejorando el menu de python 

import wx

class Ventana_Ejemplo (wx.Frame):
    def __init__(self,parent,title):
        super (EjemploMen,self).__init__(parent.title=title)
        self.InitUI()

    def IniUI(self):
        menubar=wx.MenuBar()
      
        archivo= wx.Menu()
        archivo.Append(wx.ID_FILE,'&aRCHIVO')
        archivo.Append(wx.ID_EDIT,'&Editar')
        archivo.Append(wx.ID_SAVE'&Guardar')
        archivo.Append(wx.ID_HELP,'&aYUDA')
        archivo.AppendSeparator()

        edit=wx.Menu()
        edit.Append(wx.ID_ANY,"&aRCHIVO")
        edit.Append(wx.ID_ANY,"&XItem")
        edit.Append(wx.ID_ANY,"&WItem")

        archivo.AppendMenu(wx.ID_ANY.'&editar',edit)

        opcion=wx.MenuItem(archivo,wx.ID_ANY,'&Salir')

        self.Bind(wx.EVIT_MENU,self.OnQuit,opcion)
        menubar.Append(archivo,'&Archivo')

        self.SetMenuBar(menubar)
        self.Show(True)
        
        frame = wx.App()
        self.close()
        OnQuit(self.e):

        EjemploMenu(None,'Word')
        frame.MainLooop()
