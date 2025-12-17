fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.CRAN_package_reverse_dependencies_and_views` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg apply:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:cls, reg p1:p(V +), reg r3:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    apply = ldf apply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      r1 = clos inner3708401697;
      return r1;
    };
    r3 = dyn apply(p, 1, p1);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg paste:cls, reg formatDL:cls, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg e7:V, reg r1:V, reg e8:*, reg e9:V, reg is_na:cls, reg r2:V, reg r3:V, reg __:cls, reg r4:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V |
    mkenv;
    st e = e;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      formatDL = ldf formatDL;
      p = prom<V +>{
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        c = `is.object`(e2);
        if c then L2() else L3(e2);
      L0(dx1):
        return dx1;
      L2():
        dr = tryDispatchBuiltin.1("[", e2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L4() else L3(dr);
      L3(e4):
        sym = ldf `is.na`;
        base = ldf `is.na` in base;
        guard = `==`.4(sym, base);
        if guard then L5() else L6();
      L1(e7, r1):
        r3 = `!`(r1);
        __ = ldf `[` in base;
        r4 = dyn __(e7, r3);
        goto L0(r4);
      L4():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      L5():
        e8 = ld e;
        e9 = force? e8;
        checkMissing(e9);
        is_na = ldf `is.na` in base;
        r2 = dyn is_na(e9);
        goto L1(e4, r2);
      L6():
        r = dyn base(<sym e>);
        goto L1(e4, r);
      };
      r6 = dyn formatDL[, style, indent](p, "list", 2);
      return r6;
    };
    r8 = dyn paste[, collapse](p1, "\n");
    check L1() else D1();
  D1():
    deopt 5 [r8];
  L1():
    popenv;
    return r8;
  }
}