check({
  .Call(tools:::C_nonASCII, 'Ř')
}, returns(TRUE))

check({
  .Call(tools:::C_check_nonASCII, 'Ř', TRUE)
}, returns(TRUE))

# tests the case with over 16 arguments which has to go through do_dotCall builtin
check({
  src <- '
    int sum = INTEGER(a1)[0] + INTEGER(a2)[0] + INTEGER(a3)[0] + INTEGER(a4)[0] +
              INTEGER(a5)[0] + INTEGER(a6)[0] + INTEGER(a7)[0] + INTEGER(a8)[0] +
              INTEGER(a9)[0] + INTEGER(a10)[0] + INTEGER(a11)[0] + INTEGER(a12)[0] +
              INTEGER(a13)[0] + INTEGER(a14)[0] + INTEGER(a15)[0] + INTEGER(a16)[0] +
              INTEGER(a17)[0];

    SEXP out = PROTECT(Rf_allocVector(INTSXP, 1));
    INTEGER(out)[0] = sum;
    UNPROTECT(1);
    return out;
  '
  manyargs <- inline::cfunction(
    sig = setNames(rep("integer", 17), paste0("a", 1:17)),
    body = src,
    convention = ".Call",
    name = "manyargs"
  )

  manyargs(1L, 2L, 3L, 4L, 5L, 6L, 7L, 8L, 9L, 10L, 11L, 12L, 13L, 14L, 15L, 16L, 17L)
}, returns(153L))

