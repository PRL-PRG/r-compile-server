fun main {
  () -+> I { reg c0:cls |
    c0 = clos f;
    f(42, c0);
    return 100;
  }
}

fun f {
  # after: (reg r0:I, reg c0:cls) -+> I { var x:I? |
  (reg r0:I, reg c0:cls) -+> I { var x:I?, reg r1:I?, reg r2:cls, reg r3:cls, reg r4:I |
    st x = r0;
    st y = c0;
    st z = r0;
    # after:
    r1 = ld x;
    # after:
    r2 = ldf y;
    # no substitution because lookup "goes through", since `r0` isn't a closure
    # we can remove `r3`, but we can't remove the instruction, because it may force
    # after: ldf z;
    r3 = ldf z;
    # after: r0 as I;
    r4 = r1 as I;
    # after: return r0;
    return r4;
  }
}

fun y {}
fun z {}