import requests
from bs4 import BeautifulSoup

url_table = 'https://desporto.sapo.pt/futebol/competicao/primeira-liga-2/classificacao'
response = requests.get(url_table)
soup = BeautifulSoup(response.text, 'html.parser')
target_class = "[ ink-table medium bottom-space ] rankings-table"
tables = soup.find_all('table', class_=target_class)
f_table = open('league_table', 'w')
for table in tables:
	rows = table.find_all('tr')
	for row in rows:
		cells = row.find_all('td')
		for cell in cells:
			f_table.write(cell.text.strip() + " ")
		if (len(cells) > 0):
			f_table.write("\n")
f_table.close()
response.close() 
