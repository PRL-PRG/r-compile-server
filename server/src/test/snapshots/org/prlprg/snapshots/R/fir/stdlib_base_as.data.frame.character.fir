fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1279511308;
    st `as.data.frame.character` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1279511308(x, `...`, stringsAsFactors) {
  (reg x:*, reg ddd:dots, reg stringsAsFactors:*) -+> V { var x:*, var `...`:dots?, var stringsAsFactors:*, reg stringsAsFactors_isMissing:L, reg stringsAsFactors_orDefault:*, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg stringsAsFactors1:*, reg stringsAsFactors2:V, reg c:L, reg factor:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r6:V, reg _in_:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg ___names:cls, reg r10:V, reg p2:p(V +), reg r12:V, reg r13:V, reg c1:L, reg as_data_frame_vector:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg ddd1:dots?, reg nm:*, reg nm1:V, reg p4:p(V +), reg r16:V, reg as_data_frame_vector1:cls, reg x5:*, reg x6:V, reg p5:p(V +), reg ddd2:dots?, reg r18:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    stringsAsFactors_isMissing = missing.0(stringsAsFactors);
    if stringsAsFactors_isMissing then L0(FALSE) else L0(stringsAsFactors);
  L0(stringsAsFactors_orDefault):
    st stringsAsFactors = stringsAsFactors_orDefault;
    deparse1 = ldf deparse1;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      substitute = ldf substitute in base;
      r2 = dyn substitute(<sym x>);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    r4 = dyn deparse1(p);
    check L5() else D1();
  D1():
    deopt 3 [r4];
  L5():
    st nm = r4;
    stringsAsFactors1 = ld stringsAsFactors;
    check L6() else D2();
  D2():
    deopt 5 [stringsAsFactors1];
  L6():
    stringsAsFactors2 = force? stringsAsFactors1;
    checkMissing(stringsAsFactors2);
    c = `as.logical`(stringsAsFactors2);
    if c then L7() else L1();
  L1():
    goto L2();
  L2():
    _in_ = ldf `%in%`;
    check L11() else D5();
  L7():
    factor = ldf factor;
    check L8() else D3();
  D3():
    deopt 8 [];
  D5():
    deopt 15 [];
  L8():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r6 = dyn factor(p1);
    check L9() else D4();
  L11():
    p2 = prom<V +>{
      sym1 = ldf `...names`;
      base1 = ldf `...names` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      ___names = ldf `...names` in base;
      r10 = dyn ___names();
      goto L0(r10);
    L2():
      r8 = dyn base1();
      goto L0(r8);
    };
    r12 = dyn _in_("nm", p2);
    check L12() else D6();
  D4():
    deopt 10 [r6];
  D6():
    deopt 18 [r12];
  L9():
    st x = r6;
    goto L2();
  L12():
    r13 = `!`(r12);
    c1 = `as.logical`(r13);
    if c1 then L13() else L3();
  L3():
    as_data_frame_vector1 = ldf `as.data.frame.vector`;
    check L17() else D9();
  L13():
    as_data_frame_vector = ldf `as.data.frame.vector`;
    check L14() else D7();
  D7():
    deopt 21 [];
  D9():
    deopt 28 [];
  L14():
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    ddd1 = ld `...`;
    p4 = prom<V +>{
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      return nm1;
    };
    r16 = dyn as_data_frame_vector[, `...`, nm](p3, ddd1, p4);
    check L15() else D8();
  L17():
    p5 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    ddd2 = ld `...`;
    r18 = dyn as_data_frame_vector1[, `...`](p5, ddd2);
    check L18() else D10();
  D8():
    deopt 26 [r16];
  D10():
    deopt 31 [r18];
  L15():
    popenv;
    return r16;
  L18():
    popenv;
    return r18;
  }
}