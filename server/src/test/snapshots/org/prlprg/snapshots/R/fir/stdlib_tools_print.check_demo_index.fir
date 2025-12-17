fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.check_demo_index` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg length:cls, reg r3:V, reg c1:L, reg writeLines:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg paste0:cls, reg bad:*, reg bad1:V, reg p:p(V +), reg r7:V, reg c2:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r14:V, reg length1:cls, reg r15:V, reg c4:L, reg writeLines1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg paste1:cls, reg bad2:*, reg bad3:V, reg p2:p(V +), reg r19:V, reg c5:cls, reg r20:V, reg p3:p(V +), reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg x9:*, reg x10:V, reg invisible:cls, reg r26:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L15() else L1();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r = dyn base(<lang `<-`(bad, `$`(x, missing_from_index))>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    goto L2();
  L2():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L11() else L12(x2);
  L15():
    writeLines = ldf writeLines;
    check L16() else D2();
  D2():
    deopt 9 [];
  L3(r13):
    c4 = `as.logical`(r13);
    if c4 then L27() else L4();
  L10(dx1):
    st bad = dx1;
    length = ldf length in base;
    r3 = dyn length(dx1);
    check L14() else D1();
  L11():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(x4):
    r2 = `$`(x4, <sym missing_from_index>);
    goto L10(r2);
  L16():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      paste0 = ldf paste0;
      p = prom<V +>{
        bad = ld bad;
        bad1 = force? bad;
        checkMissing(bad1);
        return bad1;
      };
      r7 = dyn paste0("  ", p);
      c2 = ldf c in base;
      r8 = dyn c2("Demos with missing or empty index information:", r7);
      goto L0(r8);
    L2():
      r4 = dyn base1("Demos with missing or empty index information:", <lang paste0("  ", bad)>);
      goto L0(r4);
    };
    r10 = dyn writeLines(p1);
    check L17() else D3();
  L19():
    x5 = ld x;
    check L21() else D4();
  L20():
    r12 = dyn base2(<lang `<-`(bad, `$`(x, missing_from_demos))>);
    goto L3(r12);
  D1():
    deopt 7 [r3];
  D3():
    deopt 11 [r10];
  D4():
    deopt 16 [x5];
  L4():
    goto L5();
  L5():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L31() else L32();
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L14():
    goto L0(r3);
  L17():
    goto L2();
  L21():
    x6 = force? x5;
    checkMissing(x6);
    c3 = `is.object`(x6);
    if c3 then L23() else L24(x6);
  L27():
    writeLines1 = ldf writeLines;
    check L28() else D6();
  D6():
    deopt 23 [];
  L6(r25):
    popenv;
    return r25;
  L22(dx3):
    st bad = dx3;
    length1 = ldf length in base;
    r15 = dyn length1(dx3);
    check L26() else D5();
  L23():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(dr2);
  L24(x8):
    r14 = `$`(x8, <sym missing_from_demos>);
    goto L22(r14);
  L28():
    p3 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      paste1 = ldf paste0;
      p2 = prom<V +>{
        bad2 = ld bad;
        bad3 = force? bad2;
        checkMissing(bad3);
        return bad3;
      };
      r19 = dyn paste1("  ", p2);
      c5 = ldf c in base;
      r20 = dyn c5("Demo index entries without corresponding demo:", r19);
      goto L0(r20);
    L2():
      r16 = dyn base3("Demo index entries without corresponding demo:", <lang paste0("  ", bad)>);
      goto L0(r16);
    };
    r22 = dyn writeLines1(p3);
    check L29() else D7();
  L31():
    x9 = ld x;
    check L33() else D8();
  L32():
    r24 = dyn base4(<sym x>);
    goto L6(r24);
  D5():
    deopt 21 [r15];
  D7():
    deopt 25 [r22];
  D8():
    deopt 30 [x9];
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L22(dx2);
  L26():
    goto L3(r15);
  L29():
    goto L5();
  L33():
    x10 = force? x9;
    checkMissing(x10);
    invisible = ldf invisible in base;
    r26 = dyn invisible(x10);
    check L34() else D9();
  D9():
    deopt 33 [r26];
  L34():
    goto L6(r26);
  }
}