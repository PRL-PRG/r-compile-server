fun main() {
  () --> v(I)f { reg r:v(I)o, reg r1:I |
    r = v(I)[1, 2, 3];
    # cleanup:
    prom<I ->{ r1 = r[0]; return r1; };
    # provenance-error: Use after capture: r
    return use r;
  }
}
