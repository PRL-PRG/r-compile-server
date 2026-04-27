fun main() {
  () -+> v1(I) { reg c0:cls |
    mkenv;
    c0 = clos f;
    f< I,cls -+> v1(I) >(42, c0);
    popenv;
    return <int 100>;
  }
}

fun f(r0, c0) {
  (reg r0:I, reg c0:cls) -+> v1(I) { var x:v1(I)?, reg r0b:v1(I), reg r1:v1(I)?, reg r2:cls, reg r3:cls, reg r4:v1(I) |
    mkenv;
    r0b = box<I --> v1(I)>(r0);
    st x = r0b;
    st y = c0;
    st z = r0b;
    r1 = ld x;
    r2 = ldf y;
    # no substitution because lookup "goes through", since `r0` isn't a closure
    # we can remove `r3`, but we can't remove the instruction, because it may force
    r3 = ldf z;
    r4 = r1 as v1(I);
    popenv;
    return r4;
  }
}

fun y() {
  () --> V { ... }
}
fun z() {
  () --> V { ... }
}
