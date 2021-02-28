#Scraping

import urllib2
import urllib


f = urllib2.urlopen('http://www.python.org')
print (f.read(100)) #lee los 100 primeros datos de la pagina web


response = urllib.urlopen('http://google.com')
for line in response:
    print (line.rstrip())
