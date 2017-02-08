void posordem (No∗ no) {
	if (no) {
		preordem(no−>esq);
		preordem(no−>dir);
    printf("%d\n", no−>valor);
	}
};
