#include <stdint.h>

int main()
{
	/**
	 * 1 грамм = 10 зерен, значит 1_000 грамм (1кг) = 10_000 зерен, 1т = 10_000_000 зерен.
	 * Отсюда следует, что в год в среднем собирается 70_000_000т * 10_000_000 зерен = 700_000_000_000_000 зерен.
	 * Это и будет среднегодовой урожай в зернах.
	 */

	uint64_t total_grains = ~0ULL; /* ULL == unsigned long long 0, 64 '0' bits inversed via ~; same as UINT64_MAX */
	uint64_t per_year_harvest = 700000000000000;
	double total_years = (double)(total_grains / per_year_harvest);

	return 0;
}
