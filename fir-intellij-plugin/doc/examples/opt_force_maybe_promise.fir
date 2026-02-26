fun main() {
  # after: () --> I { reg r:I, reg p:p(I -), reg p1:p(I -)? |
  () -+> V { reg r:V, reg p:p(I -), reg p1:p(I -)? |
    p = prom<I ->{ return 42; };
    p1 = p as p(I -)?;
    r = force? p1;
    return r;
  }
}