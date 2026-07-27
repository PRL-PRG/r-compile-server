#include "stencils_internals.h"

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
