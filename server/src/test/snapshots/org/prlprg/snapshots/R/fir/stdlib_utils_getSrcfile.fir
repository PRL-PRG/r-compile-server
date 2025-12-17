fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st getSrcfile = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg attr:cls, reg r4:V, reg c:V, reg r5:V, reg c1:L, reg r6:*, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x3:*, reg x4:V, reg attr1:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg srcref:*, reg srcref1:V, reg c2:V, reg c3:L, reg getSrcref:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg srcref2:*, reg srcref3:V, reg is_list:cls, reg r19:V, reg c4:L, reg c6:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg c9:L, reg r21:V, reg srcref4:*, reg srcref5:V, reg length:cls, reg r22:V, reg c10:L, reg c11:V, reg c13:L, reg srcref6:*, reg srcref7:V, reg c14:L, reg srcref9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r23:V, reg srcref12:V, reg r24:V, reg srcref13:*, reg srcref14:V, reg length1:cls, reg r25:V, reg __:cls, reg r26:V, reg dx2:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg r28:V, reg srcref15:*, reg srcref16:V, reg attr2:cls, reg r29:V |
    mkenv;
    st x = x;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    r5 = `!`(r1);
    c1 = `as.logical`(r5);
    if c1 then L22() else L2();
  L16():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L17():
    r = dyn base(<lang `<-`(r, attr(x, "srcfile"))>);
    goto L0(r);
  L1(r3):
    st r = r3;
    c = `==`(r3, NULL);
    goto L0(c);
  L2():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L18():
    x1 = ld x;
    check L20() else D0();
  L19():
    r2 = dyn base1(<sym x>, "srcfile");
    goto L1(r2);
  L22():
    r6 = ld r;
    check L23() else D2();
  D0():
    deopt 3 [x1];
  D2():
    deopt 11 [r6];
  L4(r11):
    st srcref = r11;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  L20():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r4 = dyn attr(x2, "srcfile");
    check L21() else D1();
  L23():
    r7 = force? r6;
    checkMissing(r7);
    popenv;
    return r7;
  L26():
    x3 = ld x;
    check L28() else D3();
  L27():
    r10 = dyn base2(<sym x>, "wholeSrcref");
    goto L4(r10);
  D1():
    deopt 7 [r4];
  D3():
    deopt 18 [x3];
  L5(r14):
    c3 = `as.logical`(r14);
    if c3 then L33() else L6();
  L21():
    goto L1(r4);
  L28():
    x4 = force? x3;
    checkMissing(x4);
    attr1 = ldf attr in base;
    r12 = dyn attr1(x4, "wholeSrcref");
    check L29() else D4();
  L30():
    srcref = ld srcref;
    check L32() else D5();
  L31():
    r13 = dyn base3(<sym srcref>);
    goto L5(r13);
  D4():
    deopt 22 [r12];
  D5():
    deopt 25 [srcref];
  L6():
    goto L14();
  L14():
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L57() else L58();
  L29():
    goto L4(r12);
  L32():
    srcref1 = force? srcref;
    checkMissing(srcref1);
    c2 = `==`(srcref1, NULL);
    goto L5(c2);
  L33():
    getSrcref = ldf getSrcref;
    check L34() else D6();
  D6():
    deopt 29 [];
  L15(r28):
    popenv;
    return r28;
  L34():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r16 = dyn getSrcref(p);
    check L35() else D7();
  L57():
    srcref15 = ld srcref;
    check L59() else D15();
  L58():
    r27 = dyn base7(<sym srcref>, "srcfile");
    goto L15(r27);
  D7():
    deopt 31 [r16];
  D15():
    deopt 62 [srcref15];
  L35():
    st srcref = r16;
    sym4 = ldf `is.list`;
    base4 = ldf `is.list` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L36() else L37();
  L59():
    srcref16 = force? srcref15;
    checkMissing(srcref16);
    attr2 = ldf attr in base;
    r29 = dyn attr2(srcref16, "srcfile");
    check L60() else D16();
  D16():
    deopt 66 [r29];
  L7(r18):
    c4 = `as.logical`(r18);
    if c4 then L40() else L8(c4);
  L36():
    srcref2 = ld srcref;
    check L38() else D8();
  L37():
    r17 = dyn base4(<sym srcref>);
    goto L7(r17);
  L60():
    goto L15(r29);
  D8():
    deopt 35 [srcref2];
  L8(c6):
    c13 = `as.logical`(c6);
    if c13 then L46() else L10();
  L38():
    srcref3 = force? srcref2;
    checkMissing(srcref3);
    is_list = ldf `is.list` in base;
    r19 = dyn is_list(srcref3);
    check L39() else D9();
  L40():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L41() else L42();
  D9():
    deopt 38 [r19];
  L9(c9, r21):
    c10 = `as.logical`(r21);
    c11 = `&&`(c9, c10);
    goto L8(c11);
  L10():
    goto L13(NULL);
  L13(dx2):
    goto L14();
  L39():
    goto L7(r19);
  L41():
    srcref4 = ld srcref;
    check L43() else D10();
  L42():
    r20 = dyn base5(<sym srcref>);
    goto L9(c4, r20);
  L46():
    srcref6 = ld srcref;
    check L47() else D12();
  D10():
    deopt 41 [c4, srcref4];
  D12():
    deopt 46 [srcref6];
  L43():
    srcref5 = force? srcref4;
    checkMissing(srcref5);
    length = ldf length in base;
    r22 = dyn length(srcref5);
    check L44() else D11();
  L47():
    srcref7 = force? srcref6;
    checkMissing(srcref7);
    c14 = `is.object`(srcref7);
    if c14 then L48() else L49(srcref7);
  D11():
    deopt 44 [c4, r22];
  L11(dx1):
    st srcref = dx1;
    goto L13(dx1);
  L44():
    goto L9(c4, r22);
  L48():
    dr = tryDispatchBuiltin.1("[[", srcref7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L50() else L49(dr);
  L49(srcref9):
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L51() else L52();
  L12(srcref12, r24):
    __ = ldf `[[` in base;
    r26 = dyn __(srcref12, r24);
    goto L11(r26);
  L50():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L51():
    srcref13 = ld srcref;
    check L53() else D13();
  L52():
    r23 = dyn base6(<sym srcref>);
    goto L12(srcref9, r23);
  D13():
    deopt 50 [srcref9, srcref13];
  L53():
    srcref14 = force? srcref13;
    checkMissing(srcref14);
    length1 = ldf length in base;
    r25 = dyn length1(srcref14);
    check L54() else D14();
  D14():
    deopt 53 [srcref9, r25];
  L54():
    goto L12(srcref9, r25);
  }
}