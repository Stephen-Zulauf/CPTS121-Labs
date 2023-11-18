
/*
1. All-Star Game appearance = $25,000
2. Regular season MVP = $75,000
3. World Series MVP = $100,000
4. Gold Glove award = $50,000
5. Silver Slugger award = $35,000
6. Home run champ = $25,000
7. Batting average champ = $25,000
*/

int calculateBonus(char *answers) {
	int total = 0;
	int i;
	
	for (i = 0; i < 7; i++) {
		if (answers[i] == 'y') {

			switch (i) {
			case 0:
				total += 25000;
				break;
			case 1:
				total += 75000;
				break;
			case 2:
				total += 100000;
				break;
			case 3:
				total += 50000;
				break;
			case 4:
				total += 35000;
				break;
			case 5:
				total += 25000;
				break;
			case 6:
				total += 25000;
				break;
			default:
				break;
			}
			
		}
		
	}
	return total;
}