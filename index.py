import requests
from bs4 import BeautifulSoup

url = 'https://desporto.sapo.pt/futebol/competicao/primeira-liga-2/classificacao'
response = requests.get(url)
soup = BeautifulSoup(response.text, 'html.parser')
target_class = "[ ink-table medium bottom-space ] rankings-table"
tables = soup.find_all('table', class_=target_class)
for table in tables:
	rows = table.find_all('tr')
	for row in rows:
		cells = row.find_all('td')
		for cell in cells:
			print(cell.text.strip(), end=" ")
		if (len(cells) > 0):
			print()
