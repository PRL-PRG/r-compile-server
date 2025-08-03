fun main {
  # type-error: Function effects mismatch: expected -, got +
  () --> I { reg r:p(I +), reg r0:I |
    r = prom<I +>{ return 1; };
    r0 = force r;
    return r0;
  }
}
