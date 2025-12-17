fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1696122488;
    st noteLog = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1696122488(Log, text) {
  (reg Log:*, reg text:*) -+> V { var Log:*, var text:*, reg text_isMissing:L, reg text_orDefault:*, reg resultLog:cls, reg Log1:*, reg Log2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg text1:*, reg text2:V, reg nzchar:cls, reg r4:V, reg c:L, reg printLog:cls, reg Log3:*, reg Log4:V, reg p1:p(V +), reg text3:*, reg text4:V, reg p2:p(V +), reg r7:V, reg Log5:*, reg Log6:V, reg c1:L, reg Log8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg r10:V, reg l:*, reg c2:L, reg r12:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r14:V, reg dx3:V, reg r15:V |
    mkenv;
    st Log = Log;
    text_isMissing = missing.0(text);
    if text_isMissing then L0("") else L0(text);
  L0(text_orDefault):
    st text = text_orDefault;
    resultLog = ldf resultLog;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      Log1 = ld Log;
      Log2 = force? Log1;
      checkMissing(Log2);
      return Log2;
    };
    r1 = dyn resultLog(p, "NOTE");
    check L5() else D1();
  D1():
    deopt 4 [r1];
  L5():
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L1(r3):
    c = `as.logical`(r3);
    if c then L10() else L2();
  L6():
    text1 = ld text;
    check L8() else D2();
  L7():
    r2 = dyn base(<sym text>);
    goto L1(r2);
  D2():
    deopt 7 [text1];
  L2():
    goto L3();
  L3():
    Log5 = ld Log;
    check L14() else D6();
  L8():
    text2 = force? text1;
    checkMissing(text2);
    nzchar = ldf nzchar in base;
    r4 = dyn nzchar(text2);
    check L9() else D3();
  L10():
    printLog = ldf printLog;
    check L11() else D4();
  D3():
    deopt 10 [r4];
  D4():
    deopt 12 [];
  D6():
    deopt 19 [Log5];
  L9():
    goto L1(r4);
  L11():
    p1 = prom<V +>{
      Log3 = ld Log;
      Log4 = force? Log3;
      checkMissing(Log4);
      return Log4;
    };
    p2 = prom<V +>{
      text3 = ld text;
      text4 = force? text3;
      checkMissing(text4);
      return text4;
    };
    r7 = dyn printLog(p1, p2, "\n");
    check L12() else D5();
  L14():
    Log6 = force? Log5;
    checkMissing(Log6);
    c1 = `is.object`(Log6);
    if c1 then L16() else L17(Log6);
  D5():
    deopt 16 [r7];
  L12():
    goto L3();
  L15(dx1):
    r10 = `+`(dx1, 1);
    l = ld Log;
    c2 = `is.object`(l);
    if c2 then L20() else L21(r10, l);
  L16():
    dr = tryDispatchBuiltin.1("$", Log6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(Log8):
    r9 = `$`(Log8, <sym notes>);
    goto L15(r9);
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L19(r14, dx3):
    st Log = dx3;
    invisible.0();
    popenv;
    return r14;
  L20():
    dr2 = tryDispatchBuiltin.0("$<-", l, r10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L22() else L21(r10, dr2);
  L21(r12, l2):
    r15 = `$<-`(l2, <sym notes>, r10);
    goto L19(r12, r15);
  L22():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L19(r10, dx2);
  }
}