fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1743446265`;
    st `as.vector.factor` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1743446265`(x, mode) {
  (reg x:*, reg mode:*) -+> V { var x:*, var mode:*, reg mode_isMissing:L, reg mode_orDefault:*, reg mode1:*, reg mode2:V, reg r:V, reg c:L, reg as_list:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r2:V, reg mode3:*, reg mode4:V, reg r3:V, reg c1:L, reg c2:V, reg mode5:*, reg mode6:V, reg r4:V, reg c4:L, reg c5:V, reg c7:L, reg c8:V, reg mode7:*, reg mode8:V, reg r5:V, reg c10:L, reg c11:V, reg c13:L, reg as_vector:cls, reg levels:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r7:V, reg c14:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg x5:*, reg x6:V, reg __:cls, reg r10:V, reg p2:p(V +), reg mode9:*, reg mode10:V, reg p3:p(V +), reg r13:V, reg as_vector1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg r15:V, reg x7:*, reg x8:V, reg unclass:cls, reg r16:V, reg p4:p(V +), reg mode11:*, reg mode12:V, reg p5:p(V +), reg r19:V |
    mkenv;
    st x = x;
    mode_isMissing = missing.0(mode);
    if mode_isMissing then L0("any") else L0(mode);
  L0(mode_orDefault):
    st mode = mode_orDefault;
    mode1 = ld mode;
    check L5() else D0();
  D0():
    deopt 0 [mode1];
  L5():
    mode2 = force? mode1;
    checkMissing(mode2);
    r = `==`(mode2, "list");
    c = `as.logical`(r);
    if c then L6() else L1();
  L1():
    mode3 = ld mode;
    check L10() else D3();
  L6():
    as_list = ldf `as.list`;
    check L7() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 8 [mode3];
  L7():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r2 = dyn as_list(p);
    check L8() else D2();
  L10():
    mode4 = force? mode3;
    checkMissing(mode4);
    r3 = `==`(mode4, "any");
    c1 = `as.logical`(r3);
    if c1 then L2(c1) else L11();
  D2():
    deopt 7 [r2];
  L2(c2):
    c7 = `as.logical`(c2);
    if c7 then L3(c7) else L14();
  L8():
    popenv;
    return r2;
  L11():
    mode5 = ld mode;
    check L12() else D4();
  D4():
    deopt 12 [c1, mode5];
  L3(c8):
    c13 = `as.logical`(c8);
    if c13 then L17() else L4();
  L12():
    mode6 = force? mode5;
    checkMissing(mode6);
    r4 = `==`(mode6, "character");
    c4 = `as.logical`(r4);
    c5 = `||`(c1, c4);
    goto L2(c5);
  L14():
    mode7 = ld mode;
    check L15() else D5();
  D5():
    deopt 17 [c7, mode7];
  L4():
    as_vector1 = ldf `as.vector`;
    check L21() else D8();
  L15():
    mode8 = force? mode7;
    checkMissing(mode8);
    r5 = `==`(mode8, "logical");
    c10 = `as.logical`(r5);
    c11 = `||`(c7, c10);
    goto L3(c11);
  L17():
    as_vector = ldf `as.vector`;
    check L18() else D6();
  D6():
    deopt 23 [];
  D8():
    deopt 28 [];
  L18():
    p2 = prom<V +>{
      levels = ldf levels;
      p1 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r7 = dyn levels(p1);
      c14 = `is.object`(r7);
      if c14 then L1() else L2(r7);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r7);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r9):
      x5 = ld x;
      x6 = force? x5;
      __ = ldf `[` in base;
      r10 = dyn __(r9, x6);
      goto L0(r10);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      mode9 = ld mode;
      mode10 = force? mode9;
      checkMissing(mode10);
      return mode10;
    };
    r13 = dyn as_vector(p2, p3);
    check L19() else D7();
  L21():
    p4 = prom<V +>{
      sym = ldf unclass;
      base = ldf unclass in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r15):
      return r15;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      unclass = ldf unclass in base;
      r16 = dyn unclass(x8);
      goto L0(r16);
    L2():
      r14 = dyn base(<sym x>);
      goto L0(r14);
    };
    p5 = prom<V +>{
      mode11 = ld mode;
      mode12 = force? mode11;
      checkMissing(mode12);
      return mode12;
    };
    r19 = dyn as_vector1(p4, p5);
    check L22() else D9();
  D7():
    deopt 26 [r13];
  D9():
    deopt 31 [r19];
  L19():
    popenv;
    return r13;
  L22():
    popenv;
    return r19;
  }
}