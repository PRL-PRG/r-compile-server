fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3624283997;
    st `[.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3624283997(x, i) {
  (reg x:*, reg i:*) -+> V { var x:*, var i:*, reg NextMethod:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg ans:*, reg ans1:V, reg length:cls, reg r3:V, reg r4:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c5:L, reg r6:V, reg ans2:*, reg ans3:V, reg c6:L, reg c8:L, reg ans5:V, reg dr:V, reg dc:L, reg dx:V, reg c10:L, reg dx1:V, reg __:cls, reg r7:V, reg c11:L, reg c12:L, reg c15:L, reg c16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg c21:L, reg c22:L, reg r9:V, reg a1:*, reg a2:V, reg as_character:cls, reg r10:V, reg r11:V, reg c23:L, reg c24:V, reg c27:L, reg c28:V, reg c30:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg ans6:*, reg ans7:V, reg c31:V, reg c32:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg list:cls, reg r16:V, reg l:*, reg class__:cls, reg r18:V, reg environment:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r20:V, reg l1:*, reg environment__:cls, reg r21:V, reg ans8:*, reg ans9:V |
    mkenv;
    st x = x;
    st i = i;
    NextMethod = ldf NextMethod;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    r = dyn NextMethod("[");
    check L13() else D1();
  D1():
    deopt 3 [r];
  L13():
    st ans = r;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r2):
    r4 = `!`(r2);
    c = `as.logical`(r4);
    if c then L1(c) else L18();
  L14():
    ans = ld ans;
    check L16() else D2();
  L15():
    r1 = dyn base(<sym ans>);
    goto L0(r1);
  D2():
    deopt 7 [ans];
  L1(c1):
    c30 = `as.logical`(c1);
    if c30 then L32() else L6();
  L16():
    ans1 = force? ans;
    checkMissing(ans1);
    length = ldf length in base;
    r3 = dyn length(ans1);
    check L17() else D3();
  L18():
    sym1 = ldf `is.symbol`;
    base1 = ldf `is.symbol` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  D3():
    deopt 10 [r3];
  L2(c5, r6):
    c12 = `as.logical`(r6);
    if c12 then L25() else L4(c5, c12);
  L6():
    goto L11();
  L11():
    ans8 = ld ans;
    check L48() else D15();
  L17():
    goto L0(r3);
  L19():
    ans2 = ld ans;
    check L21() else D4();
  L20():
    r5 = dyn base1(<lang `<-`(a1, `[[`(ans, 1))>);
    goto L2(c, r5);
  L32():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  D4():
    deopt 13 [c, ans2];
  D15():
    deopt 59 [ans8];
  L4(c15, c16):
    c27 = `as.logical`(c16);
    c28 = `||`(c15, c27);
    goto L1(c28);
  L7(r13):
    c32 = `as.logical`(r13);
    if c32 then L36() else L8();
  L21():
    ans3 = force? ans2;
    checkMissing(ans3);
    c6 = `is.object`(ans3);
    if c6 then L22() else L23(c, ans3);
  L25():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L33():
    ans6 = ld ans;
    check L35() else D7();
  L34():
    r12 = dyn base3(<sym ans>);
    goto L7(r12);
  L48():
    ans9 = force? ans8;
    checkMissing(ans9);
    popenv;
    return ans9;
  D7():
    deopt 31 [ans6];
  L3(c10, dx1):
    st a1 = dx1;
    c11 = `is.symbol`(dx1);
    goto L2(c10, c11);
  L5(c21, c22, r9):
    r11 = `==`(r9, "~");
    c23 = `as.logical`(r11);
    c24 = `&&`(c22, c23);
    goto L4(c21, c24);
  L8():
    goto L10();
  L10():
    l = ld ans;
    class__ = ldf `class<-`;
    check L41() else D9();
  L22():
    dr = tryDispatchBuiltin.1("[[", ans3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(c, dr);
  L23(c8, ans5):
    __ = ldf `[[` in base;
    r7 = dyn __(ans5, 1);
    goto L3(c8, r7);
  L26():
    a1 = ld a1;
    check L28() else D5();
  L27():
    r8 = dyn base2(<sym a1>);
    goto L5(c5, c12, r8);
  L35():
    ans7 = force? ans6;
    checkMissing(ans7);
    c31 = `==`(ans7, NULL);
    goto L7(c31);
  L36():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  D5():
    deopt 22 [c5, c12, a1];
  D9():
    deopt 44 ["formula", l, "formula"];
  L9(r15):
    st ans = r15;
    goto L10();
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(c, dx);
  L28():
    a2 = force? a1;
    checkMissing(a2);
    as_character = ldf `as.character` in base;
    r10 = dyn as_character(a2);
    check L29() else D6();
  L37():
    list = ldf list in base;
    r16 = dyn list();
    check L39() else D8();
  L38():
    r14 = dyn base4();
    goto L9(r14);
  L41():
    r18 = dyn class__(l, NULL, "formula");
    check L42() else D10();
  D6():
    deopt 25 [c5, c12, r10];
  D8():
    deopt 37 [r16];
  D10():
    deopt 46 ["formula", r18];
  L29():
    goto L5(c5, c12, r10);
  L39():
    goto L9(r16);
  L42():
    st ans = r18;
    environment = ldf environment;
    check L43() else D11();
  D11():
    deopt 49 [];
  L43():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r20 = dyn environment(p);
    check L44() else D12();
  D12():
    deopt 51 [r20];
  L44():
    l1 = ld ans;
    environment__ = ldf `environment<-`;
    check L45() else D13();
  D13():
    deopt 53 [r20, l1, r20];
  L45():
    r21 = dyn environment__(l1, NULL, r20);
    check L46() else D14();
  D14():
    deopt 55 [r20, r21];
  L46():
    st ans = r21;
    goto L11();
  }
}