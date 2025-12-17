fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `summary.tukeysmooth` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg cat:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg attr:cls, reg r2:V, reg p:p(V +), reg deparse:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg object3:*, reg object4:V, reg attr1:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg object5:*, reg object6:V, reg length:cls, reg r12:V, reg p3:p(V +), reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg object7:*, reg object8:V, reg attr2:cls, reg r17:V, reg c:L, reg cat1:cls, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg object9:*, reg object10:V, reg attr3:cls, reg r24:V, reg c1:V, reg r25:V, reg c2:L, reg cat2:cls, reg it:*, reg it1:V, reg p4:p(V +), reg r27:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r31:V, reg r32:V, reg object11:*, reg object12:V, reg attr4:cls, reg r33:V, reg c3:V, reg r34:V, reg c4:L, reg cat3:cls, reg ch:*, reg ch1:V, reg r35:V, reg c5:L, reg p5:p(V +), reg r37:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r41:V, reg r42:V, reg object13:*, reg object14:V, reg oldClass:cls, reg r43:V, reg length1:cls, reg r44:V, reg r45:V, reg c6:L, reg NextMethod:cls, reg r46:V, reg object15:*, reg object16:V, reg l:*, reg attributes__:cls, reg r47:V, reg summary:cls, reg y:*, reg y1:V, reg p6:p(V +), reg ddd1:dots?, reg r49:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    cat = ldf cat;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      attr = ldf attr in base;
      r2 = dyn attr(object2, "kind");
      goto L0(r2);
    L2():
      r = dyn base(<sym object>, "kind");
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
        object3 = ld object;
        object4 = force? object3;
        checkMissing(object4);
        attr1 = ldf attr in base;
        r6 = dyn attr1(object4, "call");
        goto L0(r6);
      L2():
        r4 = dyn base1(<sym object>, "call");
        goto L0(r4);
      };
      r8 = dyn deparse(p1);
      return r8;
    };
    p3 = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      length = ldf length in base;
      r12 = dyn length(object6);
      goto L0(r12);
    L2():
      r10 = dyn base2(<sym object>);
      goto L0(r10);
    };
    r14 = dyn cat(p, "Tukey smoother resulting from\n", p2, ";  n =", p3, "\n");
    check L15() else D1();
  D1():
    deopt 8 [r14];
  L15():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L16() else L17();
  L0(r16):
    c = `as.logical`(r16);
    if c then L20() else L1();
  L16():
    object7 = ld object;
    check L18() else D2();
  L17():
    r15 = dyn base3(<sym object>, "twiced");
    goto L0(r15);
  D2():
    deopt 11 [object7];
  L1():
    goto L2();
  L2():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L24() else L25();
  L18():
    object8 = force? object7;
    checkMissing(object8);
    attr2 = ldf attr in base;
    r17 = dyn attr2(object8, "twiced");
    check L19() else D3();
  L20():
    cat1 = ldf cat;
    check L21() else D4();
  D3():
    deopt 15 [r17];
  D4():
    deopt 17 [];
  L3(r21):
    r25 = `!`(r21);
    c2 = `as.logical`(r25);
    if c2 then L30() else L5();
  L19():
    goto L0(r17);
  L21():
    r18 = dyn cat1(" __twiced__ ");
    check L22() else D5();
  L24():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L26() else L27();
  L25():
    r20 = dyn base4(<lang `<-`(it, attr(object, "iter"))>);
    goto L3(r20);
  D5():
    deopt 19 [r18];
  L4(r23):
    st it = r23;
    c1 = `==`(r23, NULL);
    goto L3(c1);
  L5():
    goto L6();
  L6():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L34() else L35();
  L22():
    goto L2();
  L26():
    object9 = ld object;
    check L28() else D6();
  L27():
    r22 = dyn base5(<sym object>, "iter");
    goto L4(r22);
  L30():
    cat2 = ldf cat;
    check L31() else D8();
  D6():
    deopt 25 [object9];
  D8():
    deopt 34 [];
  L7(r30):
    r34 = `!`(r30);
    c4 = `as.logical`(r34);
    if c4 then L40() else L9();
  L28():
    object10 = force? object9;
    checkMissing(object10);
    attr3 = ldf attr in base;
    r24 = dyn attr3(object10, "iter");
    check L29() else D7();
  L31():
    p4 = prom<V +>{
      it = ld it;
      it1 = force? it;
      checkMissing(it1);
      return it1;
    };
    r27 = dyn cat2(" used", p4, "iterations\n");
    check L32() else D9();
  L34():
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L36() else L37();
  L35():
    r29 = dyn base6(<lang `<-`(ch, attr(object, "changed"))>);
    goto L7(r29);
  D7():
    deopt 29 [r24];
  D9():
    deopt 38 [r27];
  L8(r32):
    st ch = r32;
    c3 = `==`(r32, NULL);
    goto L7(c3);
  L9():
    goto L10();
  L10():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L44() else L45();
  L29():
    goto L4(r24);
  L32():
    goto L6();
  L36():
    object11 = ld object;
    check L38() else D10();
  L37():
    r31 = dyn base7(<sym object>, "changed");
    goto L8(r31);
  L40():
    cat3 = ldf cat;
    check L41() else D12();
  D10():
    deopt 44 [object11];
  D12():
    deopt 53 [];
  L11(r40):
    r45 = `>`(r40, 1);
    c6 = `as.logical`(r45);
    if c6 then L51() else L13();
  L38():
    object12 = force? object11;
    checkMissing(object12);
    attr4 = ldf attr in base;
    r33 = dyn attr4(object12, "changed");
    check L39() else D11();
  L41():
    p5 = prom<V +>{
      ch = ld ch;
      ch1 = force? ch;
      checkMissing(ch1);
      r35 = `!`(ch1);
      c5 = `as.logical`(r35);
      if c5 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return " NOT";
    };
    r37 = dyn cat3(p5, "changed\n");
    check L42() else D13();
  L44():
    sym9 = ldf oldClass;
    base9 = ldf oldClass in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L46() else L47();
  L45():
    r39 = dyn base8(<lang oldClass(object)>);
    goto L11(r39);
  D11():
    deopt 48 [r33];
  D13():
    deopt 56 [r37];
  L12(r42):
    length1 = ldf length in base;
    r44 = dyn length1(r42);
    check L50() else D16();
  L13():
    object15 = ld object;
    check L55() else D19();
  L39():
    goto L8(r33);
  L42():
    goto L10();
  L46():
    object13 = ld object;
    check L48() else D14();
  L47():
    r41 = dyn base9(<sym object>);
    goto L12(r41);
  L51():
    NextMethod = ldf NextMethod;
    check L52() else D17();
  D14():
    deopt 63 [object13];
  D16():
    deopt 68 [r44];
  D17():
    deopt 72 [];
  D19():
    deopt 74 [object15];
  L48():
    object14 = force? object13;
    checkMissing(object14);
    oldClass = ldf oldClass in base;
    r43 = dyn oldClass(object14);
    check L49() else D15();
  L50():
    goto L11(r44);
  L52():
    r46 = dyn NextMethod();
    check L53() else D18();
  L55():
    object16 = force? object15;
    checkMissing(object16);
    st y = object16;
    l = ld y;
    attributes__ = ldf `attributes<-`;
    check L56() else D20();
  D15():
    deopt 66 [r43];
  D18():
    deopt 73 [r46];
  D20():
    deopt 80 [NULL, l, NULL];
  L49():
    goto L12(r43);
  L53():
    popenv;
    return r46;
  L56():
    r47 = dyn attributes__(l, NULL, NULL);
    check L57() else D21();
  D21():
    deopt 82 [NULL, r47];
  L57():
    st y = r47;
    summary = ldf summary;
    check L58() else D22();
  D22():
    deopt 85 [];
  L58():
    p6 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    ddd1 = ld `...`;
    r49 = dyn summary[, `...`](p6, ddd1);
    check L59() else D23();
  D23():
    deopt 88 [r49];
  L59():
    popenv;
    return r49;
  }
}