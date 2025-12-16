fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-882935235`;
    st rownames = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-882935235`(x, `do.NULL`, prefix) {
  (reg x:*, reg do_NULL:*, reg prefix:*) -+> V { var x:*, var `do.NULL`:*, reg do_NULL_isMissing:L, reg do_NULL_orDefault:*, var prefix:*, reg prefix_isMissing:L, reg prefix_orDefault:*, reg ____:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg dimnames:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg p:p(V +), reg do_NULL1:*, reg do_NULL2:V, reg c1:L, reg NROW:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r8:V, reg nr:*, reg nr1:V, reg r9:V, reg c2:L, reg paste0:cls, reg prefix1:*, reg prefix2:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg nr2:*, reg nr3:V, reg r13:I, reg p3:p(V +), reg r15:V, reg character:cls, reg r16:V, reg p4:p(V +), reg r18:V |
    mkenv;
    st x = x;
    do_NULL_isMissing = missing.0(do_NULL);
    if do_NULL_isMissing then L0(TRUE) else L0(do_NULL);
  L0(do_NULL_orDefault):
    st `do.NULL` = do_NULL_orDefault;
    prefix_isMissing = missing.0(prefix);
    if prefix_isMissing then L1("row") else L1(prefix);
  L1(prefix_orDefault):
    st prefix = prefix_orDefault;
    ____ = ldf `%||%`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      sym = ldf dimnames;
      base = ldf dimnames in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      c = `is.object`(r1);
      if c then L4() else L5(r1);
    L2():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      dimnames = ldf dimnames in base;
      r2 = dyn dimnames(x2);
      goto L0(r2);
    L3():
      r = dyn base(<sym x>);
      goto L0(r);
    L1(dx1):
      return dx1;
    L4():
      dr = tryDispatchBuiltin.1("[[", r1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(r4):
      __ = ldf `[[` in base;
      r5 = dyn __(r4, 1);
      goto L1(r5);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    p4 = prom<V +>{
      do_NULL1 = ld `do.NULL`;
      do_NULL2 = force? do_NULL1;
      checkMissing(do_NULL2);
      c1 = `as.logical`(do_NULL2);
      if c1 then L2() else L0();
    L0():
      NROW = ldf NROW;
      p1 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r8 = dyn NROW(p1);
      st nr = r8;
      nr = ld nr;
      nr1 = force? nr;
      checkMissing(nr1);
      r9 = `>`(nr1, 0);
      c2 = `as.logical`(r9);
      if c2 then L4() else L1();
    L2():
      return NULL;
    L1():
      character = ldf character;
      r16 = dyn character();
      return r16;
    L4():
      paste0 = ldf paste0;
      p2 = prom<V +>{
        prefix1 = ld prefix;
        prefix2 = force? prefix1;
        checkMissing(prefix2);
        return prefix2;
      };
      p3 = prom<V +>{
        sym1 = ldf seq_len;
        base1 = ldf seq_len in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r12):
        return r12;
      L1():
        nr2 = ld nr;
        nr3 = force? nr2;
        checkMissing(nr3);
        r13 = seq_len(nr3);
        goto L0(r13);
      L2():
        r11 = dyn base1(<sym nr>);
        goto L0(r11);
      };
      r15 = dyn paste0(p2, p3);
      return r15;
    };
    r18 = dyn ____(p, p4);
    check L3() else D1();
  D1():
    deopt 4 [r18];
  L3():
    popenv;
    return r18;
  }
}