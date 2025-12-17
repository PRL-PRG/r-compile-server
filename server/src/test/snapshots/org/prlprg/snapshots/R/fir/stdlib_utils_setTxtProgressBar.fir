fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1981101355;
    st setTxtProgressBar = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1981101355(pb, value, title, label) {
  (reg pb:*, reg value:*, reg title:*, reg label:*) -+> V { var pb:*, var value:*, var title:*, reg title_isMissing:L, reg title_orDefault:*, var label:*, reg label_isMissing:L, reg label_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg pb1:*, reg pb2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg r4:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V, reg pb3:*, reg pb4:V, reg c1:L, reg pb6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg dx2:cls, reg r11:V, reg pb7:*, reg pb8:V, reg c2:L, reg pb10:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg r12:V, reg dx5:cls, reg value1:*, reg value2:V, reg p2:p(V +), reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg oldval:*, reg oldval1:V, reg invisible:cls, reg r17:V |
    mkenv;
    st pb = pb;
    st value = value;
    title_isMissing = missing.0(title);
    if title_isMissing then L0(NULL) else L0(title);
  L0(title_orDefault):
    st title = title_orDefault;
    label_isMissing = missing.0(label);
    if label_isMissing then L1(NULL) else L1(label);
  L1(label_orDefault):
    st label = label_orDefault;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L10() else L3();
  L6():
    pb1 = ld pb;
    check L8() else D0();
  L7():
    r = dyn base(<sym pb>, "txtProgressBar");
    goto L2(r);
  D0():
    deopt 2 [pb1];
  L3():
    goto L4();
  L4():
    pb3 = ld pb;
    check L14() else D4();
  L8():
    pb2 = force? pb1;
    checkMissing(pb2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(pb2, "txtProgressBar", FALSE);
    check L9() else D1();
  L10():
    stop = ldf stop;
    check L11() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 10 [];
  D4():
    deopt 17 [pb3];
  L9():
    goto L2(r2);
  L11():
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
    check L12() else D3();
  L14():
    pb4 = force? pb3;
    checkMissing(pb4);
    c1 = `is.object`(pb4);
    if c1 then L16() else L17(pb4);
  D3():
    deopt 14 [r8];
  L12():
    goto L4();
  L15(dx1):
    checkFun.0(dx1);
    dx2 = dx1 as cls;
    r11 = dyn dx2();
    check L19() else D5();
  L16():
    dr = tryDispatchBuiltin.1("$", pb4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(pb6):
    r10 = `$`(pb6, <sym getVal>);
    goto L15(r10);
  D5():
    deopt 21 [r11];
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L19():
    st oldval = r11;
    pb7 = ld pb;
    check L20() else D6();
  D6():
    deopt 23 [pb7];
  L20():
    pb8 = force? pb7;
    checkMissing(pb8);
    c2 = `is.object`(pb8);
    if c2 then L22() else L23(pb8);
  L21(dx4):
    checkFun.0(dx4);
    dx5 = dx4 as cls;
    p2 = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    r14 = dyn dx5(p2);
    check L25() else D7();
  L22():
    dr2 = tryDispatchBuiltin.1("$", pb8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(dr2);
  L23(pb10):
    r12 = `$`(pb10, <sym up>);
    goto L21(r12);
  D7():
    deopt 28 [r14];
  L24():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L21(dx3);
  L25():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L5(r16):
    popenv;
    return r16;
  L26():
    oldval = ld oldval;
    check L28() else D8();
  L27():
    r15 = dyn base1(<sym oldval>);
    goto L5(r15);
  D8():
    deopt 31 [oldval];
  L28():
    oldval1 = force? oldval;
    checkMissing(oldval1);
    invisible = ldf invisible in base;
    r17 = dyn invisible(oldval1);
    check L29() else D9();
  D9():
    deopt 34 [r17];
  L29():
    goto L5(r17);
  }
}