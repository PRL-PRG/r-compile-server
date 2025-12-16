fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-853049936`;
    st `as.double.difftime` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-853049936`(x, units, `...`) {
  (reg x:*, reg units:*, reg ddd:dots) -+> V { var x:*, var units:*, reg units_isMissing:L, reg units_orDefault:*, var `...`:dots?, reg units1:*, reg units2:V, reg r:V, reg c:L, reg units3:*, reg units4:V, reg l:*, reg units__:cls, reg r1:V, reg as_vector:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V |
    mkenv;
    st x = x;
    units_isMissing = missing.0(units);
    if units_isMissing then L0("auto") else L0(units);
  L0(units_orDefault):
    st units = units_orDefault;
    st `...` = ddd;
    units1 = ld units;
    check L3() else D0();
  D0():
    deopt 0 [units1];
  L3():
    units2 = force? units1;
    checkMissing(units2);
    r = `!=`(units2, "auto");
    c = `as.logical`(r);
    if c then L4() else L1();
  L1():
    goto L2();
  L2():
    as_vector = ldf `as.vector`;
    check L9() else D4();
  L4():
    units3 = ld units;
    check L5() else D1();
  D1():
    deopt 4 [units3];
  D4():
    deopt 14 [];
  L5():
    units4 = force? units3;
    checkMissing(units4);
    l = ld x;
    units__ = ldf `units<-`;
    check L6() else D2();
  L9():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn as_vector(p, "double");
    check L10() else D5();
  D2():
    deopt 7 [units4, l, units4];
  D5():
    deopt 17 [r3];
  L6():
    r1 = dyn units__(l, NULL, units4);
    check L7() else D3();
  L10():
    popenv;
    return r3;
  D3():
    deopt 9 [units4, r1];
  L7():
    st x = r1;
    goto L2();
  }
}