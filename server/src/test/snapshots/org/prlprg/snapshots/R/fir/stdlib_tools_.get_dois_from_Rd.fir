fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.get_dois_from_Rd` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg character:cls, reg r:V, reg r1:cls, reg getDynamicFlags:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg c:L, reg r5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg c1:L, reg lapply:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg recurse:*, reg recurse1:V, reg p2:p(V +), reg r9:V, reg dois:*, reg dois1:V |
    mkenv;
    st x = x;
    character = ldf character;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    r = dyn character();
    check L4() else D1();
  D1():
    deopt 2 [r];
  L4():
    st dois = r;
    r1 = clos inner3708401697;
    st recurse = r1;
    getDynamicFlags = ldf getDynamicFlags;
    check L5() else D2();
  D2():
    deopt 8 [];
  L5():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn getDynamicFlags(p);
    check L6() else D3();
  D3():
    deopt 10 [r3];
  L6():
    c = `is.object`(r3);
    if c then L7() else L8(r3);
  L0(dx1):
    c1 = `as.logical`(dx1);
    if c1 then L10() else L1();
  L7():
    dr = tryDispatchBuiltin.1("[", r3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(r5):
    __ = ldf `[` in base;
    r6 = dyn __(r5, "\\Sexpr");
    goto L0(r6);
  L1():
    goto L2();
  L2():
    dois = ld dois;
    check L14() else D6();
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L10():
    lapply = ldf lapply;
    check L11() else D4();
  D4():
    deopt 15 [];
  D6():
    deopt 21 [dois];
  L11():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p2 = prom<V +>{
      recurse = ld recurse;
      recurse1 = force? recurse;
      checkMissing(recurse1);
      return recurse1;
    };
    r9 = dyn lapply(p1, p2);
    check L12() else D5();
  L14():
    dois1 = force? dois;
    checkMissing(dois1);
    popenv;
    return dois1;
  D5():
    deopt 18 [r9];
  L12():
    goto L2();
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg e1:*, reg e2:V, reg attr:cls, reg r4:V, reg identical:cls, reg r5:V, reg c:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg c5:L, reg r7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg c8:L, reg r9:V, reg e3:*, reg e4:V, reg attr1:cls, reg r10:V, reg identical1:cls, reg r11:V, reg c9:L, reg c10:V, reg c12:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg r13:V, reg dois:*, reg dois1:V, reg e5:*, reg e6:V, reg c13:L, reg e8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r14:V, reg c14:cls, reg r15:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r16:V, reg r17:V, reg e9:*, reg e10:V, reg is_list:cls, reg r18:V, reg c15:L, reg lapply:cls, reg e11:*, reg e12:V, reg p:p(V +), reg recurse:*, reg recurse1:V, reg p1:p(V +), reg r21:V |
    mkenv;
    st e = e;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r1):
    c = `as.logical`(r1);
    if c then L17() else L2(c);
  L10():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L11():
    r = dyn base(<lang attr(e, "Rd_tag")>, "USERMACRO");
    goto L0(r);
  L1(r3):
    identical = ldf identical in base;
    r5 = dyn identical(r3, "USERMACRO", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L16() else D2();
  L2(c2):
    c12 = `as.logical`(c2);
    if c12 then L26() else L5();
  L12():
    e1 = ld e;
    check L14() else D0();
  L13():
    r2 = dyn base1(<sym e>, "Rd_tag");
    goto L1(r2);
  L17():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  D0():
    deopt 4 [e1];
  D2():
    deopt 18 [r5];
  L3(c5, r7):
    c9 = `as.logical`(r7);
    c10 = `&&`(c5, c9);
    goto L2(c10);
  L5():
    sym5 = ldf `is.list`;
    base5 = ldf `is.list` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L36() else L37();
  L14():
    e2 = force? e1;
    checkMissing(e2);
    attr = ldf attr in base;
    r4 = dyn attr(e2, "Rd_tag");
    check L15() else D1();
  L16():
    goto L0(r5);
  L18():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L19():
    r6 = dyn base2(<lang attr(e, "macro")>, "\\doi");
    goto L3(c, r6);
  L26():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L27() else L28();
  D1():
    deopt 8 [r4];
  L4(c8, r9):
    identical1 = ldf identical in base;
    r11 = dyn identical1(r9, "\\doi", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L24() else D5();
  L6(r13):
    sst dois = r13;
    invisible.0();
    popenv;
    return r13;
  L8(r17):
    c15 = `as.logical`(r17);
    if c15 then L40() else L9();
  L15():
    goto L1(r4);
  L20():
    e3 = ld e;
    check L22() else D3();
  L21():
    r8 = dyn base3(<sym e>, "macro");
    goto L4(c, r8);
  L27():
    dois = ld dois;
    check L29() else D6();
  L28():
    r12 = dyn base4(<sym dois>, <lang `[`(e, 2)>);
    goto L6(r12);
  L36():
    e9 = ld e;
    check L38() else D9();
  L37():
    r16 = dyn base5(<sym e>);
    goto L8(r16);
  D3():
    deopt 23 [c, e3];
  D5():
    deopt 37 [c8, r11];
  D6():
    deopt 41 [dois];
  D9():
    deopt 54 [e9];
  L9():
    invisible.0();
    popenv;
    return NULL;
  L22():
    e4 = force? e3;
    checkMissing(e4);
    attr1 = ldf attr in base;
    r10 = dyn attr1(e4, "macro");
    check L23() else D4();
  L24():
    goto L3(c8, r11);
  L29():
    dois1 = force? dois;
    checkMissing(dois1);
    e5 = ld e;
    check L30() else D7();
  L38():
    e10 = force? e9;
    checkMissing(e10);
    is_list = ldf `is.list` in base;
    r18 = dyn is_list(e10);
    check L39() else D10();
  L40():
    lapply = ldf lapply;
    check L41() else D11();
  D4():
    deopt 27 [c, r10];
  D7():
    deopt 43 [e5];
  D10():
    deopt 57 [r18];
  D11():
    deopt 59 [];
  L23():
    goto L4(c, r10);
  L30():
    e6 = force? e5;
    checkMissing(e6);
    c13 = `is.object`(e6);
    if c13 then L31() else L32(e6);
  L39():
    goto L8(r18);
  L41():
    p = prom<V +>{
      e11 = ld e;
      e12 = force? e11;
      checkMissing(e12);
      return e12;
    };
    p1 = prom<V +>{
      recurse = ld recurse;
      recurse1 = force? recurse;
      checkMissing(recurse1);
      return recurse1;
    };
    r21 = dyn lapply(p, p1);
    check L42() else D12();
  D12():
    deopt 62 [r21];
  L7(dx1):
    c14 = ldf c in base;
    r15 = dyn c14(dois1, dx1);
    check L34() else D8();
  L31():
    dr = tryDispatchBuiltin.1("[", e6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L33() else L32(dr);
  L32(e8):
    __ = ldf `[` in base;
    r14 = dyn __(e8, 2);
    goto L7(r14);
  L42():
    popenv;
    return r21;
  D8():
    deopt 49 [r15];
  L33():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L34():
    goto L6(r15);
  }
}