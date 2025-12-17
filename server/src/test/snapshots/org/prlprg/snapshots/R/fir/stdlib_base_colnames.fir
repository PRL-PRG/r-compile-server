fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2797193686;
    st colnames = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2797193686(x, `do.NULL`, prefix) {
  (reg x:*, reg do_NULL:*, reg prefix:*) -+> V { var x:*, var `do.NULL`:*, reg do_NULL_isMissing:L, reg do_NULL_orDefault:*, var prefix:*, reg prefix_isMissing:L, reg prefix_orDefault:*, reg is_data_frame:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg c2:V, reg do_NULL1:*, reg do_NULL2:V, reg c3:L, reg c4:V, reg c6:L, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x3:*, reg x4:V, reg names:cls, reg r4:V, reg ____:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x5:*, reg x6:V, reg dimnames:cls, reg r7:V, reg c7:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r10:V, reg p1:p(V +), reg do_NULL3:*, reg do_NULL4:V, reg c8:L, reg NCOL:cls, reg x7:*, reg x8:V, reg p2:p(V +), reg r13:V, reg nc:*, reg nc1:V, reg r14:V, reg c9:L, reg paste0:cls, reg prefix1:*, reg prefix2:V, reg p3:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg nc2:*, reg nc3:V, reg r18:I, reg p4:p(V +), reg r20:V, reg character:cls, reg r21:V, reg p5:p(V +), reg r23:V |
    mkenv;
    st x = x;
    do_NULL_isMissing = missing.0(do_NULL);
    if do_NULL_isMissing then L0(TRUE) else L0(do_NULL);
  L0(do_NULL_orDefault):
    st `do.NULL` = do_NULL_orDefault;
    prefix_isMissing = missing.0(prefix);
    if prefix_isMissing then L1("col") else L1(prefix);
  L1(prefix_orDefault):
    st prefix = prefix_orDefault;
    is_data_frame = ldf `is.data.frame`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_data_frame(p);
    check L6() else D1();
  D1():
    deopt 3 [r1];
  L6():
    c = `as.logical`(r1);
    if c then L7() else L2(c);
  L2(c2):
    c6 = `as.logical`(c2);
    if c6 then L10() else L3();
  L7():
    do_NULL1 = ld `do.NULL`;
    check L8() else D2();
  D2():
    deopt 4 [c, do_NULL1];
  L3():
    ____ = ldf `%||%`;
    check L16() else D5();
  L8():
    do_NULL2 = force? do_NULL1;
    checkMissing(do_NULL2);
    c3 = `as.logical`(do_NULL2);
    c4 = `&&`(c, c3);
    goto L2(c4);
  L10():
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  D5():
    deopt 14 [];
  L4(r3):
    popenv;
    return r3;
  L11():
    x3 = ld x;
    check L13() else D3();
  L12():
    r2 = dyn base(<sym x>);
    goto L4(r2);
  L16():
    p1 = prom<V +>{
      sym1 = ldf dimnames;
      base1 = ldf dimnames in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r6):
      c7 = `is.object`(r6);
      if c7 then L4() else L5(r6);
    L2():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      dimnames = ldf dimnames in base;
      r7 = dyn dimnames(x6);
      goto L0(r7);
    L3():
      r5 = dyn base1(<sym x>);
      goto L0(r5);
    L1(dx1):
      return dx1;
    L4():
      dr = tryDispatchBuiltin.1("[[", r6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(r9):
      __ = ldf `[[` in base;
      r10 = dyn __(r9, 2);
      goto L1(r10);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    p5 = prom<V +>{
      do_NULL3 = ld `do.NULL`;
      do_NULL4 = force? do_NULL3;
      checkMissing(do_NULL4);
      c8 = `as.logical`(do_NULL4);
      if c8 then L2() else L0();
    L0():
      NCOL = ldf NCOL;
      p2 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r13 = dyn NCOL(p2);
      st nc = r13;
      nc = ld nc;
      nc1 = force? nc;
      checkMissing(nc1);
      r14 = `>`(nc1, 0);
      c9 = `as.logical`(r14);
      if c9 then L4() else L1();
    L2():
      return NULL;
    L1():
      character = ldf character;
      r21 = dyn character();
      return r21;
    L4():
      paste0 = ldf paste0;
      p3 = prom<V +>{
        prefix1 = ld prefix;
        prefix2 = force? prefix1;
        checkMissing(prefix2);
        return prefix2;
      };
      p4 = prom<V +>{
        sym2 = ldf seq_len;
        base2 = ldf seq_len in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r17):
        return r17;
      L1():
        nc2 = ld nc;
        nc3 = force? nc2;
        checkMissing(nc3);
        r18 = seq_len(nc3);
        goto L0(r18);
      L2():
        r16 = dyn base2(<sym nc>);
        goto L0(r16);
      };
      r20 = dyn paste0(p3, p4);
      return r20;
    };
    r23 = dyn ____(p1, p5);
    check L17() else D6();
  D3():
    deopt 9 [x3];
  D6():
    deopt 17 [r23];
  L13():
    x4 = force? x3;
    checkMissing(x4);
    names = ldf names in base;
    r4 = dyn names(x4);
    check L14() else D4();
  L17():
    popenv;
    return r23;
  D4():
    deopt 12 [r4];
  L14():
    goto L4(r4);
  }
}