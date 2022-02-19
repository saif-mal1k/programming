references:
syntax:  type &ref-var = var-name; 
ex:	int total;
	int &sum = total;		// address of sum is equal to address of total
	total = 100;
	cout<<sum;		// will produce output 100

note: sum is declared as reference variable for a variable total, then both sum and total will represent the same and can be used interchangeably. 	note, there can be no references to references, no array of references, and no pointer to references.



