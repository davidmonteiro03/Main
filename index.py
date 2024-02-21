import requests
from bs4 import BeautifulSoup

url_table = 'https://desporto.sapo.pt/futebol/competicao/primeira-liga-2/classificacao'
response_table = requests.get(url_table)
soup_table = BeautifulSoup(response_table.text, 'html.parser')
target_table = "[ ink-table medium bottom-space ] rankings-table"
tables = soup_table.find_all('table', class_=target_table)
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
response_table.close() 
url_calendar = 'https://desporto.sapo.pt/futebol/competicao/primeira-liga-2/calendario'
response_calendar = requests.get(url_calendar)
soup_calendar = BeautifulSoup(response_calendar.text, 'html.parser')
print(soup_calendar.text)
response_calendar.close()
