fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `model.offset` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg attr:cls, reg r4:V, reg attr1:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg offsets:*, reg offsets1:V, reg length:cls, reg r8:V, reg c:L, reg ____:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg x3:*, reg x4:V, reg _subset2:cls, reg r11:V, reg p:p(V +), reg r13:V, reg offsets2:*, reg offsets3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x5:V, reg ans:*, reg ans1:V, reg x6:*, reg x7:V, reg c2:L, reg i6:I, reg ans3:V, reg x9:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg ans5:V, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r14:V, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg x10:*, reg x11:V, reg _subset3:cls, reg r18:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg r20:V, reg ans6:*, reg ans7:V, reg c3:V, reg r21:V, reg c4:L, reg c6:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg c9:L, reg r23:V, reg ans8:*, reg ans9:V, reg is_numeric:cls, reg r24:V, reg r25:V, reg c10:L, reg c11:V, reg c13:L, reg stop:cls, reg r26:V, reg ans10:*, reg ans11:V |
    mkenv;
    st x = x;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r1):
    st offsets = r1;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L14():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L15():
    r = dyn base(<lang attr(x, "terms")>, "offset");
    goto L0(r);
  L1(r3):
    attr1 = ldf attr in base;
    r5 = dyn attr1(r3, "offset");
    check L20() else D2();
  L2(r7):
    c = `as.logical`(r7);
    if c then L25() else L3();
  L16():
    x1 = ld x;
    check L18() else D0();
  L17():
    r2 = dyn base1(<sym x>, "terms");
    goto L1(r2);
  L21():
    offsets = ld offsets;
    check L23() else D3();
  L22():
    r6 = dyn base2(<sym offsets>);
    goto L2(r6);
  D0():
    deopt 4 [x1];
  D2():
    deopt 11 [r5];
  D3():
    deopt 15 [offsets];
  L3():
    sym4 = ldf `.subset2`;
    base4 = ldf `.subset2` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  L7():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L41() else L42();
  L18():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r4 = dyn attr(x2, "terms");
    check L19() else D1();
  L20():
    goto L0(r5);
  L23():
    offsets1 = force? offsets;
    checkMissing(offsets1);
    length = ldf length in base;
    r8 = dyn length(offsets1);
    check L24() else D4();
  L25():
    ____ = ldf `%||%`;
    check L26() else D5();
  D1():
    deopt 8 [r4];
  D4():
    deopt 18 [r8];
  D5():
    deopt 20 [];
  L8(r17):
    st ans = r17;
    goto L7();
  L9(r20):
    r21 = `!`(r20);
    c4 = `as.logical`(r21);
    if c4 then L44() else L10(c4);
  L19():
    goto L1(r4);
  L24():
    goto L2(r8);
  L26():
    p = prom<V +>{
      sym3 = ldf `.subset2`;
      base3 = ldf `.subset2` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      _subset2 = ldf `.subset2` in base;
      r11 = dyn _subset2(x4, "(offset)");
      goto L0(r11);
    L2():
      r9 = dyn base3(<sym x>, "(offset)");
      goto L0(r9);
    };
    r13 = dyn ____(p, 0.0);
    check L27() else D6();
  L37():
    x10 = ld x;
    check L39() else D11();
  L38():
    r16 = dyn base4(<sym x>, "(offset)");
    goto L8(r16);
  L41():
    ans6 = ld ans;
    check L43() else D13();
  L42():
    r19 = dyn base5(<sym ans>);
    goto L9(r19);
  D6():
    deopt 23 [r13];
  D11():
    deopt 40 [x10];
  D13():
    deopt 47 [ans6];
  L10(c6):
    c13 = `as.logical`(c6);
    if c13 then L50() else L12();
  L27():
    st ans = r13;
    offsets2 = ld offsets;
    check L28() else D7();
  L39():
    x11 = force? x10;
    checkMissing(x11);
    _subset3 = ldf `.subset2` in base;
    r18 = dyn _subset3(x11, "(offset)");
    check L40() else D12();
  L43():
    ans7 = force? ans6;
    checkMissing(ans7);
    c3 = `==`(ans7, NULL);
    goto L9(c3);
  L44():
    sym6 = ldf `is.numeric`;
    base6 = ldf `is.numeric` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L45() else L46();
  D7():
    deopt 25 [offsets2];
  D12():
    deopt 44 [r18];
  L11(c9, r23):
    r25 = `!`(r23);
    c10 = `as.logical`(r25);
    c11 = `&&`(c9, c10);
    goto L10(c11);
  L12():
    goto L13();
  L13():
    ans10 = ld ans;
    check L54() else D18();
  L28():
    offsets3 = force? offsets2;
    checkMissing(offsets3);
    s = toForSeq(offsets3);
    l = length(s);
    i = 0;
    goto L4(i);
  L40():
    goto L8(r18);
  L45():
    ans8 = ld ans;
    check L47() else D14();
  L46():
    r22 = dyn base6(<sym ans>);
    goto L11(c4, r22);
  L50():
    stop = ldf stop;
    check L51() else D16();
  D14():
    deopt 53 [c4, ans8];
  D16():
    deopt 60 [];
  D18():
    deopt 65 [ans10];
  L4(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L29() else L6();
  L47():
    ans9 = force? ans8;
    checkMissing(ans9);
    is_numeric = ldf `is.numeric` in base;
    r24 = dyn is_numeric(ans9);
    check L48() else D15();
  L51():
    r26 = dyn stop("'offset' must be numeric");
    check L52() else D17();
  L54():
    ans11 = force? ans10;
    checkMissing(ans11);
    popenv;
    return ans11;
  D15():
    deopt 56 [c4, r24];
  D17():
    deopt 62 [r26];
  L6():
    x5 = `[[`(s, i2, NULL, TRUE);
    st i = x5;
    ans = ld ans;
    check L30() else D8();
  L29():
    goto L7();
  L48():
    goto L11(c4, r24);
  L52():
    goto L13();
  D8():
    deopt 27 [i2, ans];
  L30():
    ans1 = force? ans;
    checkMissing(ans1);
    x6 = ld x;
    check L31() else D9();
  D9():
    deopt 28 [i2, ans1, x6];
  L31():
    x7 = force? x6;
    checkMissing(x7);
    c2 = `is.object`(x7);
    if c2 then L32() else L33(i2, ans1, x7);
  L5(i8, ans5, dx1):
    r15 = `+`(ans5, dx1);
    st ans = r15;
    goto L4(i8);
  L32():
    dr = tryDispatchBuiltin.1("[[", x7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L34() else L33(i2, ans1, dr);
  L33(i6, ans3, x9):
    i9 = ld i;
    check L35() else D10();
  D10():
    deopt 30 [i6, ans3, x9, i9];
  L34():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(i2, ans1, dx);
  L35():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r14 = dyn __(x9, i10);
    goto L5(i6, ans3, r14);
  }
}