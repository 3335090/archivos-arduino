import wx

class Ventana_Ejemplo (wx.Frame):
    def __init__(self,parent,title):
        super (Ventana_Ejemplo,self).__init__(parent.title="segunda ventana",size = (20,20))
        self.centre() #self.setPosition((10,10))
        self.Show(TRUE)

class EjemploMenu (wx.Frame):
    def __init__(self,parent,title):
        super (EjemploMenu,__init__(parent,title=title)
        self.InitUI()

    def IniUI(self):
        menubar=wx.MenuBar()
        fileMenu=wx.Menu()

       

        fieItem=fileMenu.Append(wx.ID_EXIT,'Salir','salir de la App')
        menubar.Append(fileMenu,'(&Archivo)')
        self.setMenuBar (menubar)
        self.Bind(wx.EVT_MENU, self.OnQuit,fileItem) #ENTRELAZAR
        self.Show(TRUE)
    def OnQuit (self.e)
    self.close()

frame=wx.app()
EjemploMenu(None,'word')
frame.MainLoop()

        
if __name__ == '__name__':
app = wx.App()#comprobar funcionamiento y nombrar
frame=wx.Frame(None,-1, 'Primer Ventana',style= wx.MINIMIZE_BOX|wx.MAXIMIZE_BOX|wx.RESIZE_BORDER|wx.SYSTEM_MENU|wx.CAPTION|wx.CLOSE_BOX,size=(400,400))
frame.show()
app.MainLoop()
ventana=Ventana_Ejemplo (None,"Hola")
Ventana_Ejemplo(None,title='Nueva Ventana')
app.MainLoop()
