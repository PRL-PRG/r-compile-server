fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2774181015;
    st `.storeMtable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2774181015(table, sig, method, i, add, fenv) {
  (reg table:*, reg sig:*, reg method:*, reg i:*, reg add:*, reg fenv:*) -+> V { var table:*, var sig:*, var method:*, var i:*, var add:*, var fenv:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg method1:*, reg method2:V, reg c:V, reg c1:L, reg table1:*, reg table2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg method3:*, reg method4:V, reg list:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg m:*, reg m1:V, reg names:cls, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg m2:*, reg m3:V, reg r12:I, reg s:V, reg l:I, reg i1:I, reg i2:I, reg i3:I, reg c2:L, reg x:V, reg m4:*, reg m5:V, reg c3:L, reg i7:I, reg m7:V, reg dr:V, reg dc:L, reg dx:V, reg i9:I, reg dx1:V, reg j:*, reg j1:V, reg __:cls, reg r13:V, reg classes:*, reg classes1:V, reg c4:L, reg i11:I, reg classes3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i13:I, reg dx3:V, reg j2:*, reg j3:V, reg __1:cls, reg r14:V, reg l1:*, reg c5:L, reg i15:I, reg dx5:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx7:V, reg i17:I, reg dx9:V, reg i18:*, reg i19:V, reg ____:cls, reg r15:V, reg is:cls, reg el:*, reg el1:V, reg p:p(V +), reg r17:V, reg c6:L, reg i20:I, reg c7:V, reg is_primitive:cls, reg el2:*, reg el3:V, reg p1:p(V +), reg r19:V, reg c9:L, reg c10:V, reg c12:L, reg add1:*, reg add2:V, reg c13:L, reg assign:cls, reg _sigLabel:cls, reg sig1:*, reg sig2:V, reg p2:p(V +), reg r21:V, reg p3:p(V +), reg el4:*, reg el5:V, reg p4:p(V +), reg table3:*, reg table4:V, reg p5:p(V +), reg r25:V, reg i27:I, reg r26:V, reg remove:cls, reg _sigLabel1:cls, reg sig3:*, reg sig4:V, reg p6:p(V +), reg r28:V, reg p7:p(V +), reg table5:*, reg table6:V, reg p8:p(V +), reg r31:V, reg i28:I, reg is1:cls, reg el6:*, reg el7:V, reg p9:p(V +), reg r34:V, reg c14:L, reg _MlistDefunct:cls, reg r35:V, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg classes4:*, reg classes5:V, reg c15:L, reg classes7:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg j4:*, reg j5:V, reg __2:cls, reg r36:V, reg p10:p(V +), reg r38:V, reg p11:p(V +), reg i31:*, reg i32:V, reg p12:p(V +), reg dQuote:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg el8:*, reg el9:V, reg class:cls, reg r43:V, reg p13:p(V +), reg r45:V, reg p14:p(V +), reg r47:V, reg p15:p(V +), reg r49:V, reg table7:*, reg table8:V |
    mkenv;
    st table = table;
    st sig = sig;
    st method = method;
    st i = i;
    st add = add;
    st fenv = fenv;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L20() else L1();
  L17():
    method1 = ld method;
    check L19() else D0();
  L18():
    r = dyn base(<sym method>);
    goto L0(r);
  D0():
    deopt 1 [method1];
  L1():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L19():
    method2 = force? method1;
    checkMissing(method2);
    c = `==`(method2, NULL);
    goto L0(c);
  L20():
    table1 = ld table;
    check L21() else D1();
  D1():
    deopt 4 [table1];
  L3(r5):
    st m = r5;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L21():
    table2 = force? table1;
    checkMissing(table2);
    popenv;
    return table2;
  L24():
    method3 = ld method;
    check L26() else D2();
  L25():
    r4 = dyn base1[ANY](<sym method>);
    goto L3(r4);
  D2():
    deopt 11 [method3];
  L4(r8):
    st classes = r8;
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L26():
    method4 = force? method3;
    checkMissing(method4);
    list = ldf list in base;
    r6 = dyn list(method4);
    check L27() else D3();
  L28():
    m = ld m;
    check L30() else D4();
  L29():
    r7 = dyn base2(<sym m>);
    goto L4(r7);
  D3():
    deopt 15 [r6];
  D4():
    deopt 19 [m];
  L5(r11):
    s = toForSeq(r11);
    l = length(s);
    i1 = 0;
    goto L6(i1);
  L27():
    goto L3(r6);
  L30():
    m1 = force? m;
    checkMissing(m1);
    names = ldf names in base;
    r9 = dyn names(m1);
    check L31() else D5();
  L32():
    m2 = ld m;
    check L34() else D6();
  L33():
    r10 = dyn base3(<sym m>);
    goto L5(r10);
  D5():
    deopt 22 [r9];
  D6():
    deopt 25 [m2];
  L6(i2):
    i3 = `+`.1(i2, 1);
    c2 = `<`.1(l, i3);
    if c2 then L35() else L16();
  L31():
    goto L4(r9);
  L34():
    m3 = force? m2;
    checkMissing(m3);
    r12 = seq_along(m3);
    goto L5(r12);
  L16():
    x = `[[`(s, i3, NULL, TRUE);
    st j = x;
    m4 = ld m;
    check L36() else D7();
  L35():
    table7 = ld table;
    check L73() else D27();
  D7():
    deopt 28 [i3, m4];
  D27():
    deopt 87 [table7];
  L36():
    m5 = force? m4;
    checkMissing(m5);
    c3 = `is.object`(m5);
    if c3 then L37() else L38(i3, m5);
  L73():
    table8 = force? table7;
    checkMissing(table8);
    popenv;
    return table8;
  L7(i9, dx1):
    st el = dx1;
    classes = ld classes;
    check L41() else D9();
  L37():
    dr = tryDispatchBuiltin.1("[[", m5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38(i3, dr);
  L38(i7, m7):
    j = ld j;
    check L40() else D8();
  D8():
    deopt 30 [i7, m7, j];
  D9():
    deopt 34 [i9, classes];
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(i3, dx);
  L40():
    j1 = force? j;
    __ = ldf `[[` in base;
    r13 = dyn __(m7, j1);
    goto L7(i7, r13);
  L41():
    classes1 = force? classes;
    checkMissing(classes1);
    c4 = `is.object`(classes1);
    if c4 then L42() else L43(i9, classes1);
  L8(i13, dx3):
    l1 = ld sig;
    c5 = `is.object`(l1);
    if c5 then L46() else L47(i13, dx3, l1);
  L42():
    dr2 = tryDispatchBuiltin.1("[[", classes1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L44() else L43(i9, dr2);
  L43(i11, classes3):
    j2 = ld j;
    check L45() else D10();
  D10():
    deopt 36 [i11, classes3, j2];
  L9(i17, dx9):
    st sig = dx9;
    is = ldf is;
    check L50() else D12();
  L44():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(i9, dx2);
  L45():
    j3 = force? j2;
    __1 = ldf `[[` in base;
    r14 = dyn __1(classes3, j3);
    goto L8(i11, r14);
  L46():
    dr4 = tryDispatchBuiltin.0("[[<-", l1, dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L48() else L47(i13, dx3, dr4);
  L47(i15, dx5, l3):
    i18 = ld i;
    check L49() else D11();
  D11():
    deopt 40 [i15, dx5, l3, dx3, i18];
  D12():
    deopt 45 [i17];
  L48():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L9(i13, dx7);
  L49():
    i19 = force? i18;
    ____ = ldf `[[<-` in base;
    r15 = dyn ____(l3, dx3, i19);
    goto L9(i15, r15);
  L50():
    p = prom<V +>{
      el = ld el;
      el1 = force? el;
      checkMissing(el1);
      return el1;
    };
    r17 = dyn is(p, "MethodDefinition");
    check L51() else D13();
  D13():
    deopt 48 [i17, r17];
  L51():
    c6 = `as.logical`(r17);
    if c6 then L10(i17, c6) else L52();
  L10(i20, c7):
    c12 = `as.logical`(c7);
    if c12 then L56() else L11();
  L52():
    is_primitive = ldf `is.primitive`;
    check L53() else D14();
  D14():
    deopt 50 [i17, c6];
  L11():
    is1 = ldf is;
    check L65() else D21();
  L14(i28):
    goto L6(i28);
  L53():
    p1 = prom<V +>{
      el2 = ld el;
      el3 = force? el2;
      checkMissing(el3);
      return el3;
    };
    r19 = dyn is_primitive(p1);
    check L54() else D15();
  L56():
    add1 = ld add;
    check L57() else D16();
  D15():
    deopt 52 [i17, c6, r19];
  D16():
    deopt 54 [i20, add1];
  D21():
    deopt 71 [i20];
  L54():
    c9 = `as.logical`(r19);
    c10 = `||`(c6, c9);
    goto L10(i17, c10);
  L57():
    add2 = force? add1;
    checkMissing(add2);
    c13 = `as.logical`(add2);
    if c13 then L58() else L12();
  L65():
    p9 = prom<V +>{
      el6 = ld el;
      el7 = force? el6;
      checkMissing(el7);
      return el7;
    };
    r34 = dyn is1(p9, "MethodsList");
    check L66() else D22();
  D22():
    deopt 74 [i20, r34];
  L12():
    remove = ldf remove;
    check L62() else D19();
  L13(i27, r26):
    goto L14(i27);
  L58():
    assign = ldf assign;
    check L59() else D17();
  L66():
    c14 = `as.logical`(r34);
    if c14 then L67() else L15();
  D17():
    deopt 57 [i20];
  D19():
    deopt 64 [i20];
  L15():
    stop = ldf stop;
    check L71() else D25();
  L59():
    p3 = prom<V +>{
      _sigLabel = ldf `.sigLabel`;
      p2 = prom<V +>{
        sig1 = ld sig;
        sig2 = force? sig1;
        checkMissing(sig2);
        return sig2;
      };
      r21 = dyn _sigLabel(p2);
      return r21;
    };
    p4 = prom<V +>{
      el4 = ld el;
      el5 = force? el4;
      checkMissing(el5);
      return el5;
    };
    p5 = prom<V +>{
      table3 = ld table;
      table4 = force? table3;
      checkMissing(table4);
      return table4;
    };
    r25 = dyn assign[, , envir](p3, p4, p5);
    check L60() else D18();
  L62():
    p7 = prom<V +>{
      _sigLabel1 = ldf `.sigLabel`;
      p6 = prom<V +>{
        sig3 = ld sig;
        sig4 = force? sig3;
        checkMissing(sig4);
        return sig4;
      };
      r28 = dyn _sigLabel1(p6);
      return r28;
    };
    p8 = prom<V +>{
      table5 = ld table;
      table6 = force? table5;
      checkMissing(table6);
      return table6;
    };
    r31 = dyn remove[list, envir](p7, p8);
    check L63() else D20();
  L67():
    _MlistDefunct = ldf `.MlistDefunct`;
    check L68() else D23();
  D18():
    deopt 62 [i20, r25];
  D20():
    deopt 69 [i20, r31];
  D23():
    deopt 76 [i20];
  D25():
    deopt 79 [i20];
  L60():
    goto L13(i20, r25);
  L63():
    goto L13(i20, r31);
  L68():
    r35 = dyn _MlistDefunct();
    check L69() else D24();
  L71():
    p15 = prom<V +>{
      gettextf = ldf gettextf;
      p11 = prom<V +>{
        sQuote = ldf sQuote;
        p10 = prom<V +>{
          classes4 = ld classes;
          classes5 = force? classes4;
          checkMissing(classes5);
          c15 = `is.object`(classes5);
          if c15 then L1() else L2(classes5);
        L0(dx11):
          return dx11;
        L1():
          dr6 = tryDispatchBuiltin.1("[[", classes5);
          dc3 = getTryDispatchBuiltinDispatched(dr6);
          if dc3 then L3() else L2(dr6);
        L2(classes7):
          j4 = ld j;
          j5 = force? j4;
          __2 = ldf `[[` in base;
          r36 = dyn __2(classes7, j5);
          goto L0(r36);
        L3():
          dx10 = getTryDispatchBuiltinValue(dr6);
          goto L0(dx10);
        };
        r38 = dyn sQuote(p10);
        return r38;
      };
      p12 = prom<V +>{
        i31 = ld i;
        i32 = force? i31;
        checkMissing(i32);
        return i32;
      };
      p14 = prom<V +>{
        dQuote = ldf dQuote;
        p13 = prom<V +>{
          sym4 = ldf class;
          base4 = ldf class in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L1() else L2();
        L0(r42):
          return r42;
        L1():
          el8 = ld el;
          el9 = force? el8;
          checkMissing(el9);
          class = ldf class in base;
          r43 = dyn class(el9);
          goto L0(r43);
        L2():
          r41 = dyn base4(<sym el>);
          goto L0(r41);
        };
        r45 = dyn dQuote(p13);
        return r45;
      };
      r47 = dyn gettextf("invalid method element for signature %s at level %d (should be MethodDefinition or .Primitive, had class %s)", p11, p12, p14);
      return r47;
    };
    r49 = dyn stop[, domain](p15, NA_LGL);
    check L72() else D26();
  D24():
    deopt 77 [i20, r35];
  D26():
    deopt 83 [i20, r49];
  L69():
    goto L14(i20);
  L72():
    goto L14(i20);
  }
}