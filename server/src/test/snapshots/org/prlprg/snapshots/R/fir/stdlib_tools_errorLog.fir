fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1384943734;
    st errorLog = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1384943734(Log, `...`) {
  (reg Log:*, reg ddd:dots) -+> V { var Log:*, var `...`:dots?, reg resultLog:cls, reg Log1:*, reg Log2:V, reg p:p(V +), reg r1:V, reg paste0:cls, reg ddd1:dots?, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg text:*, reg text1:V, reg length:cls, reg r5:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg c5:L, reg r7:V, reg text2:*, reg text3:V, reg nzchar:cls, reg r8:V, reg c6:L, reg c7:V, reg c9:L, reg printLog:cls, reg Log3:*, reg Log4:V, reg p1:p(V +), reg ddd2:dots?, reg r10:V, reg Log5:*, reg Log6:V, reg c10:L, reg Log8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r12:V, reg r13:V, reg l:*, reg c11:L, reg r15:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r17:V, reg dx3:V, reg r18:V |
    mkenv;
    st Log = Log;
    st `...` = ddd;
    resultLog = ldf resultLog;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      Log1 = ld Log;
      Log2 = force? Log1;
      checkMissing(Log2);
      return Log2;
    };
    r1 = dyn resultLog(p, "ERROR");
    check L6() else D1();
  D1():
    deopt 4 [r1];
  L6():
    paste0 = ldf paste0;
    check L7() else D2();
  D2():
    deopt 6 [];
  L7():
    ddd1 = ld `...`;
    r2 = dyn paste0[`...`](ddd1);
    check L8() else D3();
  D3():
    deopt 8 [r2];
  L8():
    st text = r2;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r4):
    c = `as.logical`(r4);
    if c then L13() else L1(c);
  L9():
    text = ld text;
    check L11() else D4();
  L10():
    r3 = dyn base(<sym text>);
    goto L0(r3);
  D4():
    deopt 12 [text];
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L19() else L3();
  L11():
    text1 = force? text;
    checkMissing(text1);
    length = ldf length in base;
    r5 = dyn length(text1);
    check L12() else D5();
  L13():
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  D5():
    deopt 15 [r5];
  L2(c5, r7):
    c6 = `as.logical`(r7);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L3():
    goto L4();
  L4():
    Log5 = ld Log;
    check L23() else D10();
  L12():
    goto L0(r5);
  L14():
    text2 = ld text;
    check L16() else D6();
  L15():
    r6 = dyn base1(<sym text>);
    goto L2(c, r6);
  L19():
    printLog = ldf printLog;
    check L20() else D8();
  D6():
    deopt 18 [c, text2];
  D8():
    deopt 24 [];
  D10():
    deopt 31 [Log5];
  L16():
    text3 = force? text2;
    checkMissing(text3);
    nzchar = ldf nzchar in base;
    r8 = dyn nzchar(text3);
    check L17() else D7();
  L20():
    p1 = prom<V +>{
      Log3 = ld Log;
      Log4 = force? Log3;
      checkMissing(Log4);
      return Log4;
    };
    ddd2 = ld `...`;
    r10 = dyn printLog[, `...`, ](p1, ddd2, "\n");
    check L21() else D9();
  L23():
    Log6 = force? Log5;
    checkMissing(Log6);
    c10 = `is.object`(Log6);
    if c10 then L25() else L26(Log6);
  D7():
    deopt 21 [c, r8];
  D9():
    deopt 28 [r10];
  L17():
    goto L2(c, r8);
  L21():
    goto L4();
  L24(dx1):
    r13 = `+`(dx1, 1);
    l = ld Log;
    c11 = `is.object`(l);
    if c11 then L29() else L30(r13, l);
  L25():
    dr = tryDispatchBuiltin.1("$", Log6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(Log8):
    r12 = `$`(Log8, <sym errors>);
    goto L24(r12);
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L24(dx);
  L28(r17, dx3):
    st Log = dx3;
    invisible.0();
    popenv;
    return r17;
  L29():
    dr2 = tryDispatchBuiltin.0("$<-", l, r13);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(r13, dr2);
  L30(r15, l2):
    r18 = `$<-`(l2, <sym errors>, r13);
    goto L28(r15, r18);
  L31():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L28(r13, dx2);
  }
}