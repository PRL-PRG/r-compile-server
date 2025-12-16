fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg l:*, reg c:L, reg r4:R, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg eval:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg quote:cls, reg r10:V, reg p:p(V +), reg r12:V, reg structure:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg list1:cls, reg r15:V, reg p1:p(V +), reg r17:V, reg r18:cls, reg obj:*, reg obj1:V, reg l3:*, reg c1:L, reg r20:R, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r23:V, reg eval1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg quote1:cls, reg r26:V, reg p2:p(V +), reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg list2:cls, reg r31:V, reg original:*, reg original1:V, reg l6:*, reg c2:L, reg r33:R, reg l8:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r36:V, reg eval2:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg quote2:cls, reg r39:V, reg p3:p(V +), reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg x1:*, reg x2:V, reg x3:*, reg x4:V, reg identical:cls, reg r44:V, reg c3:L, reg c5:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg c8:L, reg r46:V, reg obj2:*, reg obj3:V, reg obj4:*, reg obj5:V, reg identical1:cls, reg r47:V, reg c9:L, reg c10:V, reg c12:L, reg c14:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg c17:L, reg r49:V, reg x5:*, reg x6:V, reg original2:*, reg original3:V, reg identical2:cls, reg r50:V, reg r51:V, reg c18:L, reg c19:V, reg c21:L, reg c23:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg c26:L, reg r53:V, reg x7:*, reg x8:V, reg original4:*, reg original5:V, reg identical3:cls, reg r54:V, reg r55:V, reg c27:L, reg c28:V, reg c30:L, reg c32:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r56:V, reg c35:L, reg r57:V, reg x9:*, reg x10:V, reg x11:*, reg x12:V, reg identical4:cls, reg r58:V, reg c36:L, reg c37:V |
    mkenv;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r1):
    st x2 = r1;
    st x1 = r1;
    l = ld x1;
    c = `is.object`(l);
    if c then L15() else L16(2.0, l);
  L11():
    list = ldf list in base;
    r2 = dyn list(1.0);
    check L13() else D0();
  L12():
    r = dyn base[a](1.0);
    goto L0(r);
  D0():
    deopt 5 [r2];
  L13():
    goto L0(r2);
  L14(dx1):
    st x1 = dx1;
    eval = ldf eval;
    check L18() else D1();
  L15():
    dr = tryDispatchBuiltin.0("$<-", l, 2.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(2.0, dr);
  L16(r4, l2):
    r7 = `$<-`(l2, <sym b>, 2.0);
    goto L14(r7);
  D1():
    deopt 14 [];
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(dx);
  L18():
    p = prom<V +>{
      sym1 = ldf quote;
      base1 = ldf quote in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      quote = ldf quote in base;
      r10 = dyn quote(<lang `<-`(`$`(x2, b), 2.0)>);
      goto L0(r10);
    L2():
      r8 = dyn base1(<lang `<-`(`$`(x2, b), 2.0)>);
      goto L0(r8);
    };
    r12 = dyn eval(p);
    check L19() else D2();
  D2():
    deopt 16 [r12];
  L19():
    structure = ldf structure;
    check L20() else D3();
  D3():
    deopt 18 [];
  L20():
    p1 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      list1 = ldf list in base;
      r15 = dyn list1(1.0);
      goto L0(r15);
    L2():
      r13 = dyn base2[val](1.0);
      goto L0(r13);
    };
    r17 = dyn structure[, class](p1, "myobj");
    check L21() else D4();
  D4():
    deopt 22 [r17];
  L21():
    st obj = r17;
    r18 = clos `inner-1899694265`;
    st `$<-.myobj` = r18;
    obj = ld obj;
    check L22() else D5();
  D5():
    deopt 27 [obj];
  L22():
    obj1 = force? obj;
    checkMissing(obj1);
    st obj2 = obj1;
    st obj1 = obj1;
    l3 = ld obj1;
    c1 = `is.object`(l3);
    if c1 then L24() else L25(10.0, l3);
  L23(dx3):
    st obj1 = dx3;
    eval1 = ldf eval;
    check L27() else D6();
  L24():
    dr2 = tryDispatchBuiltin.0("$<-", l3, 10.0);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(10.0, dr2);
  L25(r20, l5):
    r23 = `$<-`(l5, <sym test>, 10.0);
    goto L23(r23);
  D6():
    deopt 37 [];
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L23(dx2);
  L27():
    p2 = prom<V +>{
      sym3 = ldf quote;
      base3 = ldf quote in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      quote1 = ldf quote in base;
      r26 = dyn quote1(<lang `<-`(`$`(obj2, test), 10.0)>);
      goto L0(r26);
    L2():
      r24 = dyn base3(<lang `<-`(`$`(obj2, test), 10.0)>);
      goto L0(r24);
    };
    r28 = dyn eval1(p2);
    check L28() else D7();
  D7():
    deopt 39 [r28];
  L28():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L29() else L30();
  L1(r30):
    st original = r30;
    original = ld original;
    check L32() else D9();
  L29():
    list2 = ldf list in base;
    r31 = dyn list2(1.0);
    check L31() else D8();
  L30():
    r29 = dyn base4[a](1.0);
    goto L1(r29);
  D8():
    deopt 45 [r31];
  D9():
    deopt 47 [original];
  L31():
    goto L1(r31);
  L32():
    original1 = force? original;
    checkMissing(original1);
    st x4 = original1;
    st x3 = original1;
    l6 = ld x3;
    c2 = `is.object`(l6);
    if c2 then L34() else L35(2.0, l6);
  L33(dx5):
    st x3 = dx5;
    eval2 = ldf eval;
    check L37() else D10();
  L34():
    dr4 = tryDispatchBuiltin.0("$<-", l6, 2.0);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L36() else L35(2.0, dr4);
  L35(r33, l8):
    r36 = `$<-`(l8, <sym b>, 2.0);
    goto L33(r36);
  D10():
    deopt 57 [];
  L36():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L33(dx4);
  L37():
    p3 = prom<V +>{
      sym5 = ldf quote;
      base5 = ldf quote in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r38):
      return r38;
    L1():
      quote2 = ldf quote in base;
      r39 = dyn quote2(<lang `<-`(`$`(x4, b), 2.0)>);
      goto L0(r39);
    L2():
      r37 = dyn base5(<lang `<-`(`$`(x4, b), 2.0)>);
      goto L0(r37);
    };
    r41 = dyn eval2(p3);
    check L38() else D11();
  D11():
    deopt 59 [r41];
  L38():
    sym6 = ldf identical;
    base6 = ldf identical in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L39() else L40();
  L2(r43):
    c3 = `as.logical`(r43);
    if c3 then L44() else L3(c3);
  L39():
    x1 = ld x1;
    check L41() else D12();
  L40():
    r42 = dyn base6(<sym x1>, <sym x2>);
    goto L2(r42);
  D12():
    deopt 62 [x1];
  L3(c5):
    c12 = `as.logical`(c5);
    if c12 then L51() else L5(c12);
  L41():
    x2 = force? x1;
    checkMissing(x2);
    x3 = ld x2;
    check L42() else D13();
  L44():
    sym7 = ldf identical;
    base7 = ldf identical in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L45() else L46();
  D13():
    deopt 64 [x3];
  L4(c8, r46):
    c9 = `as.logical`(r46);
    c10 = `&&`(c8, c9);
    goto L3(c10);
  L5(c14):
    c21 = `as.logical`(c14);
    if c21 then L58() else L7(c21);
  L42():
    x4 = force? x3;
    checkMissing(x4);
    identical = ldf identical in base;
    r44 = dyn identical(x2, x4, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L43() else D14();
  L45():
    obj2 = ld obj1;
    check L47() else D15();
  L46():
    r45 = dyn base7(<sym obj1>, <sym obj2>);
    goto L4(c3, r45);
  L51():
    sym8 = ldf identical;
    base8 = ldf identical in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L52() else L53();
  D14():
    deopt 74 [r44];
  D15():
    deopt 77 [c3, obj2];
  L6(c17, r49):
    r51 = `!`(r49);
    c18 = `as.logical`(r51);
    c19 = `&&`(c17, c18);
    goto L5(c19);
  L7(c23):
    c30 = `as.logical`(c23);
    if c30 then L65() else L9(c30);
  L43():
    goto L2(r44);
  L47():
    obj3 = force? obj2;
    checkMissing(obj3);
    obj4 = ld obj2;
    check L48() else D16();
  L52():
    x5 = ld x3;
    check L54() else D18();
  L53():
    r48 = dyn base8(<sym x3>, <sym original>);
    goto L6(c12, r48);
  L58():
    sym9 = ldf identical;
    base9 = ldf identical in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L59() else L60();
  D16():
    deopt 79 [c3, obj4];
  D18():
    deopt 93 [c12, x5];
  L8(c26, r53):
    r55 = `!`(r53);
    c27 = `as.logical`(r55);
    c28 = `&&`(c26, c27);
    goto L7(c28);
  L9(c32):
    popenv;
    return c32;
  L48():
    obj5 = force? obj4;
    checkMissing(obj5);
    identical1 = ldf identical in base;
    r47 = dyn identical1(obj3, obj5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L49() else D17();
  L54():
    x6 = force? x5;
    checkMissing(x6);
    original2 = ld original;
    check L55() else D19();
  L59():
    x7 = ld x4;
    check L61() else D21();
  L60():
    r52 = dyn base9(<sym x4>, <sym original>);
    goto L8(c21, r52);
  L65():
    sym10 = ldf identical;
    base10 = ldf identical in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L66() else L67();
  D17():
    deopt 89 [c3, r47];
  D19():
    deopt 95 [c12, original2];
  D21():
    deopt 110 [c21, x7];
  L10(c35, r57):
    c36 = `as.logical`(r57);
    c37 = `&&`(c35, c36);
    goto L9(c37);
  L49():
    goto L4(c3, r47);
  L55():
    original3 = force? original2;
    checkMissing(original3);
    identical2 = ldf identical in base;
    r50 = dyn identical2(x6, original3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L56() else D20();
  L61():
    x8 = force? x7;
    checkMissing(x8);
    original4 = ld original;
    check L62() else D22();
  L66():
    x9 = ld x3;
    check L68() else D24();
  L67():
    r56 = dyn base10(<sym x3>, <sym x4>);
    goto L10(c30, r56);
  D20():
    deopt 105 [c12, r50];
  D22():
    deopt 112 [c21, original4];
  D24():
    deopt 127 [c30, x9];
  L56():
    goto L6(c12, r50);
  L62():
    original5 = force? original4;
    checkMissing(original5);
    identical3 = ldf identical in base;
    r54 = dyn identical3(x8, original5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L63() else D23();
  L68():
    x10 = force? x9;
    checkMissing(x10);
    x11 = ld x4;
    check L69() else D25();
  D23():
    deopt 122 [c21, r54];
  D25():
    deopt 129 [c30, x11];
  L63():
    goto L8(c21, r54);
  L69():
    x12 = force? x11;
    checkMissing(x12);
    identical4 = ldf identical in base;
    r58 = dyn identical4(x10, x12, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L70() else D26();
  D26():
    deopt 139 [c30, r58];
  L70():
    goto L10(c30, r58);
  }
}
fun `inner-1899694265`(x, name, value) {
  (reg x:*, reg name:*, reg value:*) -+> V { var x:*, var name:*, var value:*, reg value1:*, reg value2:V, reg l:*, reg c:L, reg value4:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg paste0:cls, reg name1:*, reg name2:V, reg p:p(V +), reg r1:V, reg ____:cls, reg r2:V, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    st name = name;
    st value = value;
    value1 = ld value;
    check L1() else D0();
  D0():
    deopt 0 [value1];
  L1():
    value2 = force? value1;
    checkMissing(value2);
    l = ld x;
    c = `is.object`(l);
    if c then L2() else L3(value2, l);
  L0(dx1):
    st x = dx1;
    x1 = ld x;
    check L7() else D3();
  L2():
    dr = tryDispatchBuiltin.0("[[<-", l, value2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(value2, dr);
  L3(value4, l2):
    paste0 = ldf paste0;
    check L5() else D1();
  D1():
    deopt 4 [value4, l2, value2];
  D3():
    deopt 10 [x1];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    r1 = dyn paste0("modified_", p);
    check L6() else D2();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  D2():
    deopt 7 [value4, l2, value2, r1];
  L6():
    ____ = ldf `[[<-` in base;
    r2 = dyn ____(l2, value2, r1);
    goto L0(r2);
  }
}