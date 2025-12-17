fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner404037382;
    st `as.vector.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner404037382(x, mode) {
  (reg x:*, reg mode:*) -+> V { var x:*, var mode:*, reg mode_isMissing:L, reg mode_orDefault:*, reg as_list_data_frame:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg _in_:cls, reg mode1:*, reg mode2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg p2:p(V +), reg r7:V, reg c1:L, reg x3:*, reg x4:V, reg as_vector:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg mode3:*, reg mode4:V, reg p4:p(V +), reg r10:V |
    mkenv;
    st x = x;
    mode_isMissing = missing.0(mode);
    if mode_isMissing then L0("any") else L0(mode);
  L0(mode_orDefault):
    st mode = mode_orDefault;
    as_list_data_frame = ldf `as.list.data.frame`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn as_list_data_frame(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    st x = r1;
    _in_ = ldf `%in%`;
    check L4() else D2();
  D2():
    deopt 6 [];
  L4():
    p1 = prom<V +>{
      mode1 = ld mode;
      mode2 = force? mode1;
      checkMissing(mode2);
      return mode2;
    };
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      c = ldf c in base;
      r5 = dyn c("any", "list");
      goto L0(r5);
    L2():
      r3 = dyn base("any", "list");
      goto L0(r3);
    };
    r7 = dyn _in_(p1, p2);
    check L5() else D3();
  D3():
    deopt 9 [r7];
  L5():
    c1 = `as.logical`(r7);
    if c1 then L6() else L1();
  L1():
    as_vector = ldf `as.vector`;
    check L9() else D5();
  L6():
    x3 = ld x;
    check L7() else D4();
  D4():
    deopt 10 [x3];
  D5():
    deopt 13 [];
  L7():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L9():
    p3 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p4 = prom<V +>{
      mode3 = ld mode;
      mode4 = force? mode3;
      checkMissing(mode4);
      return mode4;
    };
    r10 = dyn as_vector[, mode](p3, p4);
    check L10() else D6();
  D6():
    deopt 17 [r10];
  L10():
    popenv;
    return r10;
  }
}