void preordem (No∗ no) {
	if (no) {
		printf("%d\n", no−>valor);
		preordem(no−>esq);
		preordem(no−>dir);
	}
};
