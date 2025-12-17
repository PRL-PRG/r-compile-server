fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.Rd_get_name` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg _Rd_get_section:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x3:*, reg x4:V, reg length:cls, reg r4:V, reg c:L, reg trimws:cls, reg _Rd_deparse:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg character:cls, reg r9:V |
    mkenv;
    st x = x;
    _Rd_get_section = ldf `.Rd_get_section`;
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
    r1 = dyn _Rd_get_section(p, "name");
    check L3() else D1();
  D1():
    deopt 4 [r1];
  L3():
    st x = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r3):
    c = `as.logical`(r3);
    if c then L8() else L1();
  L4():
    x3 = ld x;
    check L6() else D2();
  L5():
    r2 = dyn base(<sym x>);
    goto L0(r2);
  D2():
    deopt 8 [x3];
  L1():
    character = ldf character;
    check L12() else D6();
  L6():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r4 = dyn length(x4);
    check L7() else D3();
  L8():
    trimws = ldf trimws;
    check L9() else D4();
  D3():
    deopt 11 [r4];
  D4():
    deopt 13 [];
  D6():
    deopt 17 [];
  L7():
    goto L0(r4);
  L9():
    p2 = prom<V +>{
      _Rd_deparse = ldf `.Rd_deparse`;
      p1 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r6 = dyn _Rd_deparse[, tag](p1, FALSE);
      return r6;
    };
    r8 = dyn trimws(p2);
    check L10() else D5();
  L12():
    r9 = dyn character();
    check L13() else D7();
  D5():
    deopt 15 [r8];
  D7():
    deopt 18 [r9];
  L10():
    popenv;
    return r8;
  L13():
    popenv;
    return r9;
  }
}