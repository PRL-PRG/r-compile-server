fun main {
  # cleanup: () --> V { reg r0:I, reg r2:I, reg r4:V, reg r5:p(I -), reg r6:p(I -) |
  () --> V { reg r0:I, reg r1:I, reg r2:I, reg r3:V, reg r4:V, reg r5:p(I -), reg r6:p(I -) |
    r0 = upcast.0(1);  # nil
    r5 = prom<I ->{ return 1; };
    # cleanup: upcast.0(r5);
    r1 = upcast.0(r5);  # nil
    r6 = prom<I ->{ return 1; };
    r2 = upcast.0(r6);  # not nil
    # cleanup: downcast.0(r2);
    r3 = downcast.0(r2);
    r4 = downcast.0(r0);
    return r4;
  }
}

fun upcast {
  (reg r:*) --> I { reg r0:p(I -), reg r1:I |
    # runtime-error: Type mismatch in cast: 1 {:I} isn't a(n) p(I -)
    r0 = r as p(I -);
    r1 = force r0;
    return r1;
  }
}

fun downcast {
  (reg r:I) --> V { reg r0:V |
    r0 = r as V;
    return r0;
  }
}
