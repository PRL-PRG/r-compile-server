fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.tukeysmooth` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg cat:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg p:p(V +), reg deparse:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg attr1:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x5:*, reg x6:V, reg attr2:cls, reg r13:V, reg c:L, reg cat1:cls, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg x7:*, reg x8:V, reg attr3:cls, reg r20:V, reg c1:V, reg r21:V, reg c2:L, reg cat2:cls, reg it:*, reg it1:V, reg p3:p(V +), reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg r28:V, reg x9:*, reg x10:V, reg attr4:cls, reg r29:V, reg c3:V, reg r30:V, reg c4:L, reg cat3:cls, reg ch:*, reg ch1:V, reg r31:V, reg c5:L, reg p4:p(V +), reg r33:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r37:V, reg r38:V, reg x11:*, reg x12:V, reg oldClass:cls, reg r39:V, reg length:cls, reg r40:V, reg r41:V, reg c6:L, reg NextMethod:cls, reg r42:V, reg x13:*, reg x14:V, reg l:*, reg attributes__:cls, reg r43:V, reg print:cls, reg y:*, reg y1:V, reg p5:p(V +), reg ddd1:dots?, reg r45:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r46:V, reg r47:V, reg x15:*, reg x16:V, reg invisible:cls, reg r48:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    cat = ldf cat;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      attr = ldf attr in base;
      r2 = dyn attr(x2, "kind");
      goto L0(r2);
    L2():
      r = dyn base(<sym x>, "kind");
      goto L0(r);
    };
    p2 = prom<V +>{
      deparse = ldf deparse;
      p1 = prom<V +>{
        sym1 = ldf attr;
        base1 = ldf attr in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r5):
        return r5;
      L1():
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        attr1 = ldf attr in base;
        r6 = dyn attr1(x4, "call");
        goto L0(r6);
      L2():
        r4 = dyn base1(<sym x>, "call");
        goto L0(r4);
      };
      r8 = dyn deparse(p1);
      return r8;
    };
    r10 = dyn cat(p, "Tukey smoother resulting from ", p2, "\n");
    check L16() else D1();
  D1():
    deopt 6 [r10];
  L16():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L0(r12):
    c = `as.logical`(r12);
    if c then L21() else L1();
  L17():
    x5 = ld x;
    check L19() else D2();
  L18():
    r11 = dyn base2(<sym x>, "twiced");
    goto L0(r11);
  D2():
    deopt 9 [x5];
  L1():
    goto L2();
  L2():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  L19():
    x6 = force? x5;
    checkMissing(x6);
    attr2 = ldf attr in base;
    r13 = dyn attr2(x6, "twiced");
    check L20() else D3();
  L21():
    cat1 = ldf cat;
    check L22() else D4();
  D3():
    deopt 13 [r13];
  D4():
    deopt 15 [];
  L3(r17):
    r21 = `!`(r17);
    c2 = `as.logical`(r21);
    if c2 then L31() else L5();
  L20():
    goto L0(r13);
  L22():
    r14 = dyn cat1(" __twiced__ ");
    check L23() else D5();
  L25():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L27() else L28();
  L26():
    r16 = dyn base3(<lang `<-`(it, attr(x, "iter"))>);
    goto L3(r16);
  D5():
    deopt 17 [r14];
  L4(r19):
    st it = r19;
    c1 = `==`(r19, NULL);
    goto L3(c1);
  L5():
    goto L6();
  L6():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L35() else L36();
  L23():
    goto L2();
  L27():
    x7 = ld x;
    check L29() else D6();
  L28():
    r18 = dyn base4(<sym x>, "iter");
    goto L4(r18);
  L31():
    cat2 = ldf cat;
    check L32() else D8();
  D6():
    deopt 23 [x7];
  D8():
    deopt 32 [];
  L7(r26):
    r30 = `!`(r26);
    c4 = `as.logical`(r30);
    if c4 then L41() else L9();
  L29():
    x8 = force? x7;
    checkMissing(x8);
    attr3 = ldf attr in base;
    r20 = dyn attr3(x8, "iter");
    check L30() else D7();
  L32():
    p3 = prom<V +>{
      it = ld it;
      it1 = force? it;
      checkMissing(it1);
      return it1;
    };
    r23 = dyn cat2(" used", p3, "iterations\n");
    check L33() else D9();
  L35():
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L37() else L38();
  L36():
    r25 = dyn base5(<lang `<-`(ch, attr(x, "changed"))>);
    goto L7(r25);
  D7():
    deopt 27 [r20];
  D9():
    deopt 36 [r23];
  L8(r28):
    st ch = r28;
    c3 = `==`(r28, NULL);
    goto L7(c3);
  L9():
    goto L10();
  L10():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L45() else L46();
  L30():
    goto L4(r20);
  L33():
    goto L6();
  L37():
    x9 = ld x;
    check L39() else D10();
  L38():
    r27 = dyn base6(<sym x>, "changed");
    goto L8(r27);
  L41():
    cat3 = ldf cat;
    check L42() else D12();
  D10():
    deopt 42 [x9];
  D12():
    deopt 51 [];
  L11(r36):
    r41 = `>`(r36, 1);
    c6 = `as.logical`(r41);
    if c6 then L52() else L13();
  L39():
    x10 = force? x9;
    checkMissing(x10);
    attr4 = ldf attr in base;
    r29 = dyn attr4(x10, "changed");
    check L40() else D11();
  L42():
    p4 = prom<V +>{
      ch = ld ch;
      ch1 = force? ch;
      checkMissing(ch1);
      r31 = `!`(ch1);
      c5 = `as.logical`(r31);
      if c5 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return "NOT";
    };
    r33 = dyn cat3(p4, "changed\n");
    check L43() else D13();
  L45():
    sym8 = ldf oldClass;
    base8 = ldf oldClass in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L47() else L48();
  L46():
    r35 = dyn base7(<lang oldClass(x)>);
    goto L11(r35);
  D11():
    deopt 46 [r29];
  D13():
    deopt 54 [r33];
  L12(r38):
    length = ldf length in base;
    r40 = dyn length(r38);
    check L51() else D16();
  L13():
    x13 = ld x;
    check L56() else D19();
  L40():
    goto L8(r29);
  L43():
    goto L10();
  L47():
    x11 = ld x;
    check L49() else D14();
  L48():
    r37 = dyn base8(<sym x>);
    goto L12(r37);
  L52():
    NextMethod = ldf NextMethod;
    check L53() else D17();
  D14():
    deopt 61 [x11];
  D16():
    deopt 66 [r40];
  D17():
    deopt 70 [];
  D19():
    deopt 72 [x13];
  L49():
    x12 = force? x11;
    checkMissing(x12);
    oldClass = ldf oldClass in base;
    r39 = dyn oldClass(x12);
    check L50() else D15();
  L51():
    goto L11(r40);
  L53():
    r42 = dyn NextMethod();
    check L54() else D18();
  L56():
    x14 = force? x13;
    checkMissing(x14);
    st y = x14;
    l = ld y;
    attributes__ = ldf `attributes<-`;
    check L57() else D20();
  D15():
    deopt 64 [r39];
  D18():
    deopt 71 [r42];
  D20():
    deopt 78 [NULL, l, NULL];
  L50():
    goto L12(r39);
  L54():
    popenv;
    return r42;
  L57():
    r43 = dyn attributes__(l, NULL, NULL);
    check L58() else D21();
  D21():
    deopt 80 [NULL, r43];
  L58():
    st y = r43;
    print = ldf print;
    check L59() else D22();
  D22():
    deopt 83 [];
  L59():
    p5 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    ddd1 = ld `...`;
    r45 = dyn print[, `...`](p5, ddd1);
    check L60() else D23();
  D23():
    deopt 86 [r45];
  L60():
    sym9 = ldf invisible;
    base9 = ldf invisible in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L61() else L62();
  L14(r47):
    popenv;
    return r47;
  L61():
    x15 = ld x;
    check L63() else D24();
  L62():
    r46 = dyn base9(<sym x>);
    goto L14(r46);
  D24():
    deopt 89 [x15];
  L63():
    x16 = force? x15;
    checkMissing(x16);
    invisible = ldf invisible in base;
    r48 = dyn invisible(x16);
    check L64() else D25();
  D25():
    deopt 92 [r48];
  L64():
    goto L14(r48);
  }
}