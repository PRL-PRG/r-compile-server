fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4036216225;
    st Tr = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4036216225(matrix) {
  (reg matrix:*) -+> V { var matrix:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg diag:cls, reg matrix1:*, reg matrix2:V, reg p:p(V +), reg r3:V, reg sum:cls, reg r4:V |
    mkenv;
    st matrix = matrix;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    diag = ldf diag;
    check L3() else D0();
  L2():
    r = dyn base(<lang diag(matrix)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      matrix1 = ld matrix;
      matrix2 = force? matrix1;
      checkMissing(matrix2);
      return matrix2;
    };
    r3 = dyn diag(p);
    check L4() else D1();
  D1():
    deopt 5 [r3];
  L4():
    sum = ldf sum in base;
    r4 = dyn sum(r3);
    check L5() else D2();
  D2():
    deopt 7 [r4];
  L5():
    goto L0(r4);
  }
}