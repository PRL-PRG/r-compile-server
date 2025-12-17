fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner808245010;
    st getTxtProgressBar = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner808245010(pb) {
  (reg pb:*) -+> V { var pb:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg pb1:*, reg pb2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg r4:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V, reg pb3:*, reg pb4:V, reg c1:L, reg pb6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg dx2:cls, reg r11:V |
    mkenv;
    st pb = pb;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L7() else L1();
  L3():
    pb1 = ld pb;
    check L5() else D0();
  L4():
    r = dyn base(<sym pb>, "txtProgressBar");
    goto L0(r);
  D0():
    deopt 2 [pb1];
  L1():
    goto L2();
  L2():
    pb3 = ld pb;
    check L11() else D4();
  L5():
    pb2 = force? pb1;
    checkMissing(pb2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(pb2, "txtProgressBar", FALSE);
    check L6() else D1();
  L7():
    stop = ldf stop;
    check L8() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 10 [];
  D4():
    deopt 17 [pb3];
  L6():
    goto L0(r2);
  L8():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        dQuote = ldf dQuote;
        r4 = dyn dQuote("txtProgressBar");
        return r4;
      };
      r6 = dyn gettextf("'pb' is not from class %s", p);
      return r6;
    };
    r8 = dyn stop[, domain](p1, NA_LGL);
    check L9() else D3();
  L11():
    pb4 = force? pb3;
    checkMissing(pb4);
    c1 = `is.object`(pb4);
    if c1 then L13() else L14(pb4);
  D3():
    deopt 14 [r8];
  L9():
    goto L2();
  L12(dx1):
    checkFun.0(dx1);
    dx2 = dx1 as cls;
    r11 = dyn dx2();
    check L16() else D5();
  L13():
    dr = tryDispatchBuiltin.1("$", pb4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(pb6):
    r10 = `$`(pb6, <sym getVal>);
    goto L12(r10);
  D5():
    deopt 21 [r11];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L16():
    popenv;
    return r11;
  }
}