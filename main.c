#include "PCUnit/PCUnit.h"
#include <stdio.h>

PCU_Suite *test_futil_suite(void);

int main(int argc, char *argv[])
{
	const PCU_SuiteMethod suites[] = {
		test_futil_suite,
	};
	PCU_set_putchar(putchar);
	PCU_set_getchar(getchar);
	PCU_enable_color();
	if (argc >= 2) {
		PCU_set_verbose(1);
	}
	return PCU_run(suites, sizeof suites / sizeof suites[0]);
}

