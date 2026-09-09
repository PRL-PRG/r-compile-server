#include "stencils_internals.h"
#include <stdint.h>

RCP_STENCIL_FUNCTION(_RCP_CUSTOM_COUNTER_REL32)
{
	PROLOGUE;
	int *counter = (int *)GETCUSTOM_REL(0);
	*counter += 1;
	NEXT;
}

RCP_STENCIL_FUNCTION(_RCP_CUSTOM_COUNTER_ABS64)
{
	PROLOGUE;
	int *counter = (int *)GETCUSTOM(0);
	*counter += 1;
	NEXT;
}

RCP_STENCIL_FUNCTION(_RCP_CUSTOM_COUNTER64_REL32)
{
	PROLOGUE;
	uint64_t *counter = (uint64_t *)GETCUSTOM_REL(0);
	*counter += 1;
	NEXT;
}

RCP_STENCIL_FUNCTION(_RCP_CUSTOM_COUNTER64_ABS64)
{
	PROLOGUE;
	uint64_t *counter = (uint64_t *)GETCUSTOM(0);
	*counter += 1;
	NEXT;
}
