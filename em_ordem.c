void emordem (No∗ no) {
	if (no) {
		preordem(no−>esq);
		printf("%d\n", no−>valor);
		preordem(no−>dir);
	}
};
