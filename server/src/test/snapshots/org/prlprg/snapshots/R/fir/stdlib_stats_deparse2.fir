fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st deparse2 = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg paste:cls, reg deparse:cls, reg x1:*, reg x2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x3:*, reg x4:V, reg c:L, reg r3:V, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c6:L, reg r5:V, reg x5:*, reg x6:V, reg is_language:cls, reg r6:V, reg c7:L, reg c8:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V |
    mkenv;
    st x = x;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      deparse = ldf deparse;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p1 = prom<V +>{
        sym = ldf `is.symbol`;
        base = ldf `is.symbol` in base;
        guard = `==`.4(sym, base);
        if guard then L3() else L4();
      L0(r2):
        r3 = `!`(r2);
        c1 = `as.logical`(r3);
        if c1 then L5() else L1(c1);
      L3():
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        c = `is.symbol`(x4);
        goto L0(c);
      L4():
        r1 = dyn base(<sym x>);
        goto L0(r1);
      L1(c3):
        return c3;
      L5():
        sym1 = ldf `is.language`;
        base1 = ldf `is.language` in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L6() else L7();
      L2(c6, r5):
        c7 = `as.logical`(r5);
        c8 = `&&`(c6, c7);
        goto L1(c8);
      L6():
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        is_language = ldf `is.language` in base;
        r6 = dyn is_language(x6);
        goto L2(c1, r6);
      L7():
        r4 = dyn base1(<sym x>);
        goto L2(c1, r4);
      };
      r8 = dyn deparse[, `width.cutoff`, backtick](p, 500, p1);
      return r8;
    };
    r10 = dyn paste[, collapse](p2, " ");
    check L1() else D1();
  D1():
    deopt 5 [r10];
  L1():
    popenv;
    return r10;
  }
}