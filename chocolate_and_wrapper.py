import math

def countRec(choc, wrap):
	if (choc < wrap):
		return 0
	newChoc = choc / wrap;
	return newChoc + countRec(newChoc + choc % wrap, wrap)
	
def countMaxChoco(money, price, wrap):
	choc = money / price;
	return math.floor(choc + countRec(choc, wrap))

money = 15
price = 1
wrap = 3
	
print(countMaxChoco(money, price, wrap))
