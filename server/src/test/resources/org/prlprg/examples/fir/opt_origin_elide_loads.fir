#? noEval
fun main() {
  () -+> v1(I) {
    mkenv;
    c0: cls = clos f;
    f< v1(I),cls -+> v1(I) >(<int 42>, c0);
    popenv;
    return <int 100>;
  }
}

fun f(r0, c0) {
  (reg r0b:v1(I), reg c0:cls) -+> v1(I) {
    mkenv;
    st x = r0b;
    st y = c0;
    st z = r0b;
    r1: * = ld x;
    r2: cls = ldf y;
    # no substitution because lookup "goes through", since `r0` isn't a closure
    # we can remove `r3`, but we can't remove the instruction, because it may force
    r3: cls = ldf z;
    r4: v1(I) = r1 as v1(I);
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
