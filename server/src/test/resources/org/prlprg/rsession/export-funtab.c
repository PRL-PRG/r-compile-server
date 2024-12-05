#include <Rinternals.h>
#include <stdio.h>

extern FUNTAB R_FunTab[];

SEXP export_funtab(SEXP filename_sxp) {
  if (TYPEOF(filename_sxp) != STRSXP || LENGTH(filename_sxp) != 1) {
    Rf_error("filename must be a single string");
  }

  const char *filename = CHAR(STRING_ELT(filename_sxp, 0));
  FILE *f = fopen(filename, "w");
  if (f == NULL) {
    Rf_error("Error opening file %s", filename);
  }

  for (int i = 0; R_FunTab[i].name != NULL; i++) {
    fprintf(f, "%s\n", R_FunTab[i].name);
  }

  fclose(f);
  return R_NilValue;
}
