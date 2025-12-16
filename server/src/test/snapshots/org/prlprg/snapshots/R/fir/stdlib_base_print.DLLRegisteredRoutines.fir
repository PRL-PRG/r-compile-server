fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `print.DLLRegisteredRoutines` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg lengths:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg n:*, reg n1:V, reg r2:V, reg __:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg n2:*, reg n3:V, reg max:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg list:cls, reg r9:V, reg sapply:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x7:*, reg x8:V, reg names:cls, reg r12:V, reg p1:p(V +), reg r14:cls, reg p2:p(V +), reg r16:V, reg print:cls, reg as_data_frame:cls, reg d:*, reg d1:V, reg p3:p(V +), reg r18:V, reg p4:p(V +), reg ddd1:dots?, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg x9:*, reg x10:V, reg invisible:cls, reg r23:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    lengths = ldf lengths;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn lengths(p);
    check L5() else D1();
  D1():
    deopt 3 [r1];
  L5():
    st n = r1;
    x3 = ld x;
    check L6() else D2();
  D2():
    deopt 5 [x3];
  L6():
    x4 = force? x3;
    checkMissing(x4);
    c = `is.object`(x4);
    if c then L7() else L8(x4);
  L0(dx1):
    st x = dx1;
    sym = ldf max;
    base = ldf max in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L7():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(x6):
    n = ld n;
    check L10() else D3();
  D3():
    deopt 7 [x6, n];
  L1(r5):
    st n = r5;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L10():
    n1 = force? n;
    checkMissing(n1);
    r2 = `>`(n1, 0.0);
    __ = ldf `[` in base;
    r3 = dyn __(x6, r2);
    goto L0(r3);
  L11():
    n2 = ld n;
    check L13() else D4();
  L12():
    r4 = dyn base(<sym n>);
    goto L1(r4);
  D4():
    deopt 15 [n2];
  L2(r8):
    st d = r8;
    sapply = ldf sapply;
    check L18() else D7();
  L13():
    n3 = force? n2;
    checkMissing(n3);
    max = ldf max in base;
    r6 = dyn max(n3);
    check L14() else D5();
  L15():
    list = ldf list in base;
    r9 = dyn list();
    check L17() else D6();
  L16():
    r7 = dyn base1();
    goto L2(r7);
  D5():
    deopt 18 [r6];
  D6():
    deopt 23 [r9];
  D7():
    deopt 26 [];
  L14():
    goto L1(r6);
  L17():
    goto L2(r9);
  L18():
    p1 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      names = ldf names in base;
      r12 = dyn names(x8);
      goto L0(r12);
    L2():
      r10 = dyn base2(<sym x>);
      goto L0(r10);
    };
    p2 = prom<V +>{
      r14 = clos inner110540412;
      return r14;
    };
    r16 = dyn sapply(p1, p2);
    check L19() else D8();
  D8():
    deopt 29 [r16];
  L19():
    print = ldf print;
    check L20() else D9();
  D9():
    deopt 31 [];
  L20():
    p4 = prom<V +>{
      as_data_frame = ldf `as.data.frame`;
      p3 = prom<V +>{
        d = ld d;
        d1 = force? d;
        checkMissing(d1);
        return d1;
      };
      r18 = dyn as_data_frame(p3);
      return r18;
    };
    ddd1 = ld `...`;
    r20 = dyn print[, `...`](p4, ddd1);
    check L21() else D10();
  D10():
    deopt 34 [r20];
  L21():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L3(r22):
    popenv;
    return r22;
  L22():
    x9 = ld x;
    check L24() else D11();
  L23():
    r21 = dyn base3(<sym x>);
    goto L3(r21);
  D11():
    deopt 37 [x9];
  L24():
    x10 = force? x9;
    checkMissing(x10);
    invisible = ldf invisible in base;
    r23 = dyn invisible(x10);
    check L25() else D12();
  D12():
    deopt 40 [r23];
  L25():
    goto L3(r23);
  }
}
fun inner110540412(id) {
  (reg id:*) -+> V { var id:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg n:*, reg n1:V, reg rep_int:cls, reg r2:V, reg l:*, reg c:L, reg r4:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg id1:*, reg id2:V, reg ____:cls, reg r7:V, reg vapply:cls, reg x:*, reg x1:V, reg c1:L, reg x3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg id3:*, reg id4:V, reg __:cls, reg r8:V, reg p:p(V +), reg r10:cls, reg p1:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg names:*, reg names1:V, reg length:cls, reg r15:V, reg c2:L, reg names2:*, reg names3:V, reg l3:*, reg c3:L, reg names6:V, reg l6:*, reg names7:V, reg l7:*, reg dr4:V, reg dc2:L, reg dx4:V, reg names10:V, reg l9:*, reg names11:V, reg dx5:V, reg id5:*, reg id6:V, reg __1:cls, reg r16:V, reg c4:L, reg names13:V, reg l11:*, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg names15:V, reg l13:*, reg dx9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg names20:V, reg l16:*, reg dx12:V, reg names21:V, reg r18:V, reg names22:*, reg names23:V, reg r19:I, reg ___:cls, reg r20:V, reg c5:L, reg names25:V, reg l18:*, reg dr8:V, reg dc4:L, reg dx13:V, reg names27:V, reg dx14:V, reg id7:*, reg id8:V, reg ____1:cls, reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg n2:*, reg n3:V, reg rep_int1:cls, reg r24:V, reg l19:*, reg c6:L, reg r26:V, reg l21:*, reg dr10:V, reg dc5:L, reg dx15:V, reg dx16:V, reg paste:cls, reg id9:*, reg id10:V, reg p2:p(V +), reg r30:V, reg ____2:cls, reg r31:V, reg sapply:cls, reg x4:*, reg x5:V, reg c7:L, reg x7:V, reg dr12:V, reg dc6:L, reg dx17:V, reg dx18:V, reg id11:*, reg id12:V, reg __2:cls, reg r32:V, reg p3:p(V +), reg r34:cls, reg p4:p(V +), reg r36:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:V, reg names29:*, reg names30:V, reg length1:cls, reg r39:V, reg c8:L, reg names31:*, reg names32:V, reg l22:*, reg c9:L, reg names35:V, reg l25:*, reg names36:V, reg l26:*, reg dr14:V, reg dc7:L, reg dx19:V, reg names39:V, reg l28:*, reg names40:V, reg dx20:V, reg paste1:cls, reg id13:*, reg id14:V, reg p5:p(V +), reg r41:V, reg __3:cls, reg r42:V, reg c10:L, reg names42:V, reg l30:*, reg dx22:V, reg dr16:V, reg dc8:L, reg dx23:V, reg names44:V, reg l32:*, reg dx24:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg names49:V, reg l35:*, reg dx27:V, reg names50:V, reg r44:V, reg names51:*, reg names52:V, reg r45:I, reg ___1:cls, reg r46:V, reg c11:L, reg names54:V, reg l37:*, reg dr18:V, reg dc9:L, reg dx28:V, reg names56:V, reg dx29:V, reg paste2:cls, reg id15:*, reg id16:V, reg p6:p(V +), reg r48:V, reg ____3:cls, reg r49:V |
    mkenv;
    st id = id;
    sym = ldf `rep.int`;
    base = ldf `rep.int` in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r1):
    l = sld d;
    c = `is.object`(l);
    if c then L21() else L22(r1, l);
  L17():
    n = ld n;
    check L19() else D0();
  L18():
    r = dyn base("", <sym n>);
    goto L0(r);
  D0():
    deopt 3 [n];
  L1(dx1):
    sst d = dx1;
    vapply = ldf vapply;
    check L25() else D3();
  L19():
    n1 = force? n;
    checkMissing(n1);
    rep_int = ldf `rep.int` in base;
    r2 = dyn rep_int("", n1);
    check L20() else D1();
  L21():
    dr = tryDispatchBuiltin.0("[[<-", l, r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(r1, dr);
  L22(r4, l2):
    id1 = ld id;
    check L24() else D2();
  D1():
    deopt 6 [r2];
  D2():
    deopt 8 [r4, l2, r1, id1];
  D3():
    deopt 13 [];
  L20():
    goto L0(r2);
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L24():
    id2 = force? id1;
    ____ = ldf `[[<-` in base;
    r7 = dyn ____(l2, r1, id2);
    goto L1(r7);
  L25():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      c1 = `is.object`(x1);
      if c1 then L1() else L2(x1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", x1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x3):
      id3 = ld id;
      id4 = force? id3;
      __ = ldf `[[` in base;
      r8 = dyn __(x3, id4);
      goto L0(r8);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p1 = prom<V +>{
      r10 = clos inner354062069;
      return r10;
    };
    r12 = dyn vapply(p, p1, "");
    check L26() else D4();
  D4():
    deopt 17 [r12];
  L26():
    st names = r12;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L2(r14):
    c2 = `as.logical`(r14);
    if c2 then L31() else L3();
  L27():
    names = ld names;
    check L29() else D5();
  L28():
    r13 = dyn base1(<sym names>);
    goto L2(r13);
  D5():
    deopt 21 [names];
  L3():
    goto L8();
  L8():
    sym3 = ldf `rep.int`;
    base3 = ldf `rep.int` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L29():
    names1 = force? names;
    checkMissing(names1);
    length = ldf length in base;
    r15 = dyn length(names1);
    check L30() else D6();
  L31():
    names2 = ld names;
    check L32() else D7();
  D6():
    deopt 24 [r15];
  D7():
    deopt 25 [names2];
  L9(r23):
    l19 = sld d;
    c6 = `is.object`(l19);
    if c6 then L52() else L53(r23, l19);
  L30():
    goto L2(r15);
  L32():
    names3 = force? names2;
    checkMissing(names3);
    l3 = sld d;
    c3 = `is.object`(l3);
    if c3 then L33() else L34(names3, l3, names3, l3);
  L48():
    n2 = ld n;
    check L50() else D11();
  L49():
    r22 = dyn base3("", <sym n>);
    goto L9(r22);
  D11():
    deopt 47 [n2];
  L4(names10, l9, names11, dx5):
    c4 = `is.object`(dx5);
    if c4 then L37() else L38(names10, l9, dx5);
  L10(dx16):
    sst d = dx16;
    sapply = ldf sapply;
    check L57() else D15();
  L33():
    dr4 = tryDispatchBuiltin.1("[[", l3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L35() else L34(names3, l3, names3, dr4);
  L34(names6, l6, names7, l7):
    id5 = ld id;
    check L36() else D8();
  L50():
    n3 = force? n2;
    checkMissing(n3);
    rep_int1 = ldf `rep.int` in base;
    r24 = dyn rep_int1("", n3);
    check L51() else D12();
  L52():
    dr10 = tryDispatchBuiltin.0("[[<-", l19, r23);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L54() else L53(r23, dr10);
  L53(r26, l21):
    paste = ldf paste;
    check L55() else D13();
  D8():
    deopt 29 [names6, l6, names7, l7, id5];
  D12():
    deopt 50 [r24];
  D13():
    deopt 53 [r26, l21, r23];
  D15():
    deopt 60 [];
  L5(names15, l13, dx9):
    c5 = `is.object`(l13);
    if c5 then L43() else L44(names15, l13);
  L35():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L4(names3, l3, names3, dx4);
  L36():
    id6 = force? id5;
    __1 = ldf `[[` in base;
    r16 = dyn __1(l7, id6);
    goto L4(names6, l6, names7, r16);
  L37():
    dr6 = tryDispatchBuiltin.0("[<-", dx5, names11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L39() else L38(names10, l9, dr6);
  L38(names13, l11, dx7):
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  L51():
    goto L9(r24);
  L54():
    dx15 = getTryDispatchBuiltinValue(dr10);
    goto L10(dx15);
  L55():
    p2 = prom<V +>{
      id9 = ld id;
      id10 = force? id9;
      checkMissing(id10);
      return id10;
    };
    r30 = dyn paste(p2, "numParameters");
    check L56() else D14();
  L57():
    p3 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      c7 = `is.object`(x5);
      if c7 then L1() else L2(x5);
    L0(dx18):
      return dx18;
    L1():
      dr12 = tryDispatchBuiltin.1("[[", x5);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(x7):
      id11 = ld id;
      id12 = force? id11;
      __2 = ldf `[[` in base;
      r32 = dyn __2(x7, id12);
      goto L0(r32);
    L3():
      dx17 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx17);
    };
    p4 = prom<V +>{
      r34 = clos inner354062069;
      return r34;
    };
    r36 = dyn sapply(p3, p4);
    check L58() else D16();
  D14():
    deopt 56 [r26, l21, r23, r30];
  D16():
    deopt 63 [r36];
  L6(names20, l16, dx12, names21, r18):
    ___ = ldf `[<-` in base;
    r20 = dyn ___(dx12, names21, r18);
    goto L5(names20, l16, r20);
  L7(names27, dx14):
    sst d = dx14;
    goto L8();
  L39():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L5(names10, l9, dx8);
  L40():
    names22 = ld names;
    check L42() else D9();
  L41():
    r17 = dyn base2(<sym names>);
    goto L6(names13, l11, dx7, names11, r17);
  L43():
    dr8 = tryDispatchBuiltin.0("[[<-", l13, dx9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L45() else L44(names15, dr8);
  L44(names25, l18):
    id7 = ld id;
    check L46() else D10();
  L56():
    ____2 = ldf `[[<-` in base;
    r31 = dyn ____2(l21, r23, r30);
    goto L10(r31);
  L58():
    st names = r36;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L59() else L60();
  D9():
    deopt 34 [names13, l11, dx7, names11, names22];
  D10():
    deopt 38 [names25, l18, dx9, id7];
  L11(r38):
    c8 = `as.logical`(r38);
    if c8 then L63() else L12();
  L42():
    names23 = force? names22;
    checkMissing(names23);
    r19 = seq_along(names23);
    goto L6(names13, l11, dx7, names11, r19);
  L45():
    dx13 = getTryDispatchBuiltinValue(dr8);
    goto L7(names15, dx13);
  L46():
    id8 = force? id7;
    ____1 = ldf `[[<-` in base;
    r21 = dyn ____1(l18, dx9, id8);
    goto L7(names25, r21);
  L59():
    names29 = ld names;
    check L61() else D17();
  L60():
    r37 = dyn base4(<sym names>);
    goto L11(r37);
  D17():
    deopt 67 [names29];
  L12():
    invisible.0();
    popenv;
    return NULL;
  L61():
    names30 = force? names29;
    checkMissing(names30);
    length1 = ldf length in base;
    r39 = dyn length1(names30);
    check L62() else D18();
  L63():
    names31 = ld names;
    check L64() else D19();
  D18():
    deopt 70 [r39];
  D19():
    deopt 71 [names31];
  L62():
    goto L11(r39);
  L64():
    names32 = force? names31;
    checkMissing(names32);
    l22 = sld d;
    c9 = `is.object`(l22);
    if c9 then L65() else L66(names32, l22, names32, l22);
  L13(names39, l28, names40, dx20):
    c10 = `is.object`(dx20);
    if c10 then L70() else L71(names39, l28, dx20);
  L65():
    dr14 = tryDispatchBuiltin.1("[[", l22);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L67() else L66(names32, l22, names32, dr14);
  L66(names35, l25, names36, l26):
    paste1 = ldf paste;
    check L68() else D20();
  D20():
    deopt 76 [names35, l25, names36, l26];
  L14(names44, l32, dx24):
    c11 = `is.object`(l32);
    if c11 then L76() else L77(names44, l32);
  L67():
    dx19 = getTryDispatchBuiltinValue(dr14);
    goto L13(names32, l22, names32, dx19);
  L68():
    p5 = prom<V +>{
      id13 = ld id;
      id14 = force? id13;
      checkMissing(id14);
      return id14;
    };
    r41 = dyn paste1(p5, "numParameters");
    check L69() else D21();
  L70():
    dr16 = tryDispatchBuiltin.0("[<-", dx20, names40);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L72() else L71(names39, l28, dr16);
  L71(names42, l30, dx22):
    sym5 = ldf seq_along;
    base5 = ldf seq_along in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L73() else L74();
  D21():
    deopt 79 [names35, l25, names36, l26, r41];
  L15(names49, l35, dx27, names50, r44):
    ___1 = ldf `[<-` in base;
    r46 = dyn ___1(dx27, names50, r44);
    goto L14(names49, l35, r46);
  L16(names56, dx29):
    sst d = dx29;
    invisible.0();
    popenv;
    return names56;
  L69():
    __3 = ldf `[[` in base;
    r42 = dyn __3(l26, r41);
    goto L13(names35, l25, names36, r42);
  L72():
    dx23 = getTryDispatchBuiltinValue(dr16);
    goto L14(names39, l28, dx23);
  L73():
    names51 = ld names;
    check L75() else D22();
  L74():
    r43 = dyn base5(<sym names>);
    goto L15(names42, l30, dx22, names40, r43);
  L76():
    dr18 = tryDispatchBuiltin.0("[[<-", l32, dx24);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L78() else L77(names44, dr18);
  L77(names54, l37):
    paste2 = ldf paste;
    check L79() else D23();
  D22():
    deopt 83 [names42, l30, dx22, names40, names51];
  D23():
    deopt 88 [names54, l37, dx24];
  L75():
    names52 = force? names51;
    checkMissing(names52);
    r45 = seq_along(names52);
    goto L15(names42, l30, dx22, names40, r45);
  L78():
    dx28 = getTryDispatchBuiltinValue(dr18);
    goto L16(names44, dx28);
  L79():
    p6 = prom<V +>{
      id15 = ld id;
      id16 = force? id15;
      checkMissing(id16);
      return id16;
    };
    r48 = dyn paste2(p6, "numParameters");
    check L80() else D24();
  D24():
    deopt 91 [names54, l37, dx24, r48];
  L80():
    ____3 = ldf `[[<-` in base;
    r49 = dyn ____3(l37, dx24, r48);
    goto L16(names54, r49);
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L2() else L3(x2);
  L1(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(x4):
    r = `$`(x4, <sym name>);
    goto L1(r);
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  }
}