fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3047752191;
    st `make.tables.aovproj` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3047752191(`proj.cols`, `mf.cols`, prjs, mf, fun, prt, `...`) {
  (reg proj_cols:*, reg mf_cols:*, reg prjs:*, reg mf:*, reg fun:*, reg prt:*, reg ddd:dots) -+> V { var `proj.cols`:*, var `mf.cols`:*, var prjs:*, var mf:*, var fun:*, reg fun_isMissing:L, reg fun_orDefault:*, var prt:*, reg prt_isMissing:L, reg prt_orDefault:*, var `...`:dots?, reg setNames:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg proj_cols1:*, reg proj_cols2:V, reg length:cls, reg r4:V, reg vector:cls, reg r5:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg proj_cols3:*, reg proj_cols4:V, reg names:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg tables:*, reg tables1:V, reg r14:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg proj_cols5:*, reg proj_cols6:V, reg c1:L, reg i6:I, reg proj_cols8:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r15:V, reg terms:*, reg terms1:V, reg c2:L, reg i12:I, reg terms3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i14:I, reg dx3:V, reg _in_:cls, reg terms4:*, reg terms5:V, reg p2:p(V +), reg colnames:cls, reg prjs1:*, reg prjs2:V, reg p3:p(V +), reg r18:V, reg p4:p(V +), reg r20:V, reg __1:cls, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg i17:I, reg r23:V, reg terms6:*, reg terms7:V, reg length1:cls, reg r24:V, reg r25:V, reg c3:L, reg prjs3:*, reg prjs4:V, reg c4:L, reg i21:I, reg prjs6:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i23:I, reg dx5:V, reg terms8:*, reg terms9:V, reg __2:cls, reg r26:V, reg i24:I, reg dx6:V, reg prjs7:*, reg prjs8:V, reg c5:L, reg i26:I, reg prjs10:V, reg dr6:V, reg dc3:L, reg dx7:V, reg i28:I, reg dx8:V, reg terms10:*, reg terms11:V, reg __3:cls, reg r27:V, reg as_matrix:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg terms12:*, reg terms13:V, reg length2:cls, reg r32:V, reg rep_int:cls, reg r33:V, reg p5:p(V +), reg r35:V, reg ___:cls, reg r36:V, reg tapply:cls, reg data:*, reg data1:V, reg p6:p(V +), reg mf1:*, reg mf2:V, reg c6:L, reg mf4:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg mf_cols1:*, reg mf_cols2:V, reg c7:L, reg mf6:V, reg mf_cols4:V, reg dr10:V, reg dc5:L, reg dx11:V, reg mf8:V, reg dx12:V, reg i29:*, reg i30:V, reg __4:cls, reg r38:V, reg __5:cls, reg r39:V, reg p7:p(V +), reg get:cls, reg fun1:*, reg fun2:V, reg p8:p(V +), reg r42:V, reg p9:p(V +), reg r44:V, reg l1:*, reg c8:L, reg i32:I, reg r46:V, reg l3:*, reg dr12:V, reg dc6:L, reg dx13:V, reg i34:I, reg dx14:V, reg i35:*, reg i36:V, reg ____:cls, reg r49:V, reg l4:*, reg c9:L, reg i38:I, reg r52:S, reg l7:*, reg r53:S, reg l8:*, reg dr14:V, reg dc7:L, reg dx15:V, reg i40:I, reg r56:S, reg l10:*, reg r57:S, reg dx16:V, reg i41:*, reg i42:V, reg __6:cls, reg r58:V, reg class__:cls, reg r59:V, reg c10:L, reg i44:I, reg r61:S, reg l12:*, reg dr16:V, reg dc8:L, reg dx17:V, reg i46:I, reg dx18:V, reg i47:*, reg i48:V, reg ____1:cls, reg r64:V, reg prt1:*, reg prt2:V, reg c11:L, reg print:cls, reg tables2:*, reg tables3:V, reg c12:L, reg tables5:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg i51:*, reg i52:V, reg __7:cls, reg r65:V, reg p10:p(V +), reg ddd1:dots?, reg r67:V, reg i53:I, reg tables6:*, reg tables7:V |
    mkenv;
    st `proj.cols` = proj_cols;
    st `mf.cols` = mf_cols;
    st prjs = prjs;
    st mf = mf;
    fun_isMissing = missing.0(fun);
    if fun_isMissing then L0("mean") else L0(fun);
  L0(fun_orDefault):
    st fun = fun_orDefault;
    prt_isMissing = missing.0(prt);
    if prt_isMissing then L1(FALSE) else L1(prt);
  L1(prt_orDefault):
    st prt = prt_orDefault;
    st `...` = ddd;
    setNames = ldf setNames;
    check L17() else D0();
  D0():
    deopt 1 [];
  L17():
    p = prom<V +>{
      sym = ldf vector;
      base = ldf vector in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      return r1;
    L2():
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r = dyn base("list", <lang length(proj.cols)>);
      goto L0(r);
    L1(r3):
      vector = ldf vector in base;
      r5 = dyn vector("list", r3);
      goto L0(r5);
    L4():
      proj_cols1 = ld `proj.cols`;
      proj_cols2 = force? proj_cols1;
      checkMissing(proj_cols2);
      length = ldf length in base;
      r4 = dyn length(proj_cols2);
      goto L1(r4);
    L5():
      r2 = dyn base1(<sym proj.cols>);
      goto L1(r2);
    };
    p1 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      proj_cols3 = ld `proj.cols`;
      proj_cols4 = force? proj_cols3;
      checkMissing(proj_cols4);
      names = ldf names in base;
      r9 = dyn names(proj_cols4);
      goto L0(r9);
    L2():
      r7 = dyn base2(<sym proj.cols>);
      goto L0(r7);
    };
    r11 = dyn setNames(p, p1);
    check L18() else D1();
  D1():
    deopt 4 [r11];
  L18():
    st tables = r11;
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L2(r13):
    s = toForSeq(r13);
    l = length(s);
    i = 0;
    goto L3(i);
  L19():
    tables = ld tables;
    check L21() else D2();
  L20():
    r12 = dyn base3(<sym tables>);
    goto L2(r12);
  D2():
    deopt 7 [tables];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L22() else L16();
  L21():
    tables1 = force? tables;
    checkMissing(tables1);
    r14 = seq_along(tables1);
    goto L2(r14);
  L16():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    proj_cols5 = ld `proj.cols`;
    check L23() else D3();
  L22():
    tables6 = ld tables;
    check L74() else D27();
  D3():
    deopt 10 [i2, proj_cols5];
  D27():
    deopt 95 [tables6];
  L23():
    proj_cols6 = force? proj_cols5;
    checkMissing(proj_cols6);
    c1 = `is.object`(proj_cols6);
    if c1 then L24() else L25(i2, proj_cols6);
  L74():
    tables7 = force? tables6;
    checkMissing(tables7);
    popenv;
    return tables7;
  L4(i8, dx1):
    st terms = dx1;
    terms = ld terms;
    check L28() else D5();
  L24():
    dr = tryDispatchBuiltin.1("[[", proj_cols6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L26() else L25(i2, dr);
  L25(i6, proj_cols8):
    i9 = ld i;
    check L27() else D4();
  D4():
    deopt 12 [i6, proj_cols8, i9];
  D5():
    deopt 16 [i8, terms];
  L26():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(i2, dx);
  L27():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r15 = dyn __(proj_cols8, i10);
    goto L4(i6, r15);
  L28():
    terms1 = force? terms;
    checkMissing(terms1);
    c2 = `is.object`(terms1);
    if c2 then L29() else L30(i8, terms1);
  L5(i14, dx3):
    st terms = dx3;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  L29():
    dr2 = tryDispatchBuiltin.1("[", terms1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(i8, dr2);
  L30(i12, terms3):
    _in_ = ldf `%in%`;
    check L32() else D6();
  D6():
    deopt 19 [i12, terms3];
  L6(i17, r23):
    r25 = `==`(r23, 1);
    c3 = `as.logical`(r25);
    if c3 then L38() else L7();
  L31():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(i8, dx2);
  L32():
    p2 = prom<V +>{
      terms4 = ld terms;
      terms5 = force? terms4;
      checkMissing(terms5);
      return terms5;
    };
    p4 = prom<V +>{
      colnames = ldf colnames;
      p3 = prom<V +>{
        prjs1 = ld prjs;
        prjs2 = force? prjs1;
        checkMissing(prjs2);
        return prjs2;
      };
      r18 = dyn colnames(p3);
      return r18;
    };
    r20 = dyn _in_(p2, p4);
    check L33() else D7();
  L34():
    terms6 = ld terms;
    check L36() else D8();
  L35():
    r22 = dyn base4(<sym terms>);
    goto L6(i14, r22);
  D7():
    deopt 22 [i12, terms3, r20];
  D8():
    deopt 27 [i14, terms6];
  L7():
    prjs7 = ld prjs;
    check L45() else D12();
  L9(i24, dx6):
    st data = dx6;
    tapply = ldf tapply;
    check L53() else D17();
  L33():
    __1 = ldf `[` in base;
    r21 = dyn __1(terms3, r20);
    goto L5(i12, r21);
  L36():
    terms7 = force? terms6;
    checkMissing(terms7);
    length1 = ldf length in base;
    r24 = dyn length1(terms7);
    check L37() else D9();
  L38():
    prjs3 = ld prjs;
    check L39() else D10();
  D9():
    deopt 30 [i14, r24];
  D10():
    deopt 33 [i17, prjs3];
  D12():
    deopt 41 [i17, prjs7];
  D17():
    deopt 56 [i24];
  L37():
    goto L6(i14, r24);
  L39():
    prjs4 = force? prjs3;
    checkMissing(prjs4);
    c4 = `is.object`(prjs4);
    if c4 then L40() else L41(i17, prjs4);
  L45():
    prjs8 = force? prjs7;
    checkMissing(prjs8);
    c5 = `is.object`(prjs8);
    if c5 then L46() else L47(i17, prjs8);
  L53():
    p6 = prom<V +>{
      data = ld data;
      data1 = force? data;
      checkMissing(data1);
      return data1;
    };
    p7 = prom<V +>{
      mf1 = ld mf;
      mf2 = force? mf1;
      checkMissing(mf2);
      c6 = `is.object`(mf2);
      if c6 then L2() else L3(mf2);
    L0(dx10):
      return dx10;
    L2():
      dr8 = tryDispatchBuiltin.1("[", mf2);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L4() else L3(dr8);
    L3(mf4):
      mf_cols1 = ld `mf.cols`;
      mf_cols2 = force? mf_cols1;
      checkMissing(mf_cols2);
      c7 = `is.object`(mf_cols2);
      if c7 then L5() else L6(mf4, mf_cols2);
    L1(mf8, dx12):
      __5 = ldf `[` in base;
      r39 = dyn __5(mf8, dx12);
      goto L0(r39);
    L4():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    L5():
      dr10 = tryDispatchBuiltin.1("[[", mf_cols2);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L7() else L6(mf4, dr10);
    L6(mf6, mf_cols4):
      i29 = ld i;
      i30 = force? i29;
      __4 = ldf `[[` in base;
      r38 = dyn __4(mf_cols4, i30);
      goto L1(mf6, r38);
    L7():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L1(mf4, dx11);
    };
    p9 = prom<V +>{
      get = ldf get;
      p8 = prom<V +>{
        fun1 = ld fun;
        fun2 = force? fun1;
        checkMissing(fun2);
        return fun2;
      };
      r42 = dyn get[, mode](p8, "function");
      return r42;
    };
    r44 = dyn tapply(p6, p7, p9);
    check L54() else D18();
  D18():
    deopt 60 [i24, r44];
  L8(i23, dx5):
    goto L9(i23, dx5);
  L10(i28, dx8):
    as_matrix = ldf `as.matrix`;
    check L50() else D14();
  L40():
    dr4 = tryDispatchBuiltin.1("[", prjs4);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L42() else L41(i17, dr4);
  L41(i21, prjs6):
    terms8 = ld terms;
    check L43() else D11();
  L46():
    dr6 = tryDispatchBuiltin.1("[", prjs8);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L48() else L47(i17, dr6);
  L47(i26, prjs10):
    terms10 = ld terms;
    check L49() else D13();
  L54():
    l1 = ld tables;
    c8 = `is.object`(l1);
    if c8 then L55() else L56(i24, r44, l1);
  D11():
    deopt 36 [i21, prjs6, terms8];
  D13():
    deopt 44 [i26, prjs10, terms10];
  D14():
    deopt 49 [i28];
  L11(i34, dx14):
    st tables = dx14;
    l4 = ld tables;
    c9 = `is.object`(l4);
    if c9 then L59() else L60(i34, "mtable", l4, "mtable", l4);
  L42():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(i17, dx4);
  L43():
    terms9 = force? terms8;
    __2 = ldf `[` in base;
    r26 = dyn __2(prjs4, <missing>, terms9);
    goto L8(i21, r26);
  L48():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L10(i17, dx7);
  L49():
    terms11 = force? terms10;
    __3 = ldf `[` in base;
    r27 = dyn __3(prjs8, <missing>, terms11);
    goto L10(i26, r27);
  L50():
    p5 = prom<V +>{
      sym5 = ldf `rep.int`;
      base5 = ldf `rep.int` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r29):
      return r29;
    L2():
      sym6 = ldf length;
      base6 = ldf length in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L3():
      r28 = dyn base5(1.0, <lang length(terms)>);
      goto L0(r28);
    L1(r31):
      rep_int = ldf `rep.int` in base;
      r33 = dyn rep_int(1.0, r31);
      goto L0(r33);
    L4():
      terms12 = ld terms;
      terms13 = force? terms12;
      checkMissing(terms13);
      length2 = ldf length in base;
      r32 = dyn length2(terms13);
      goto L1(r32);
    L5():
      r30 = dyn base6(<sym terms>);
      goto L1(r30);
    };
    r35 = dyn as_matrix(p5);
    check L51() else D15();
  L55():
    dr12 = tryDispatchBuiltin.0("[[<-", l1, r44);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L57() else L56(i24, r44, dr12);
  L56(i32, r46, l3):
    i35 = ld i;
    check L58() else D19();
  D15():
    deopt 51 [i28, r35];
  D19():
    deopt 62 [i32, r46, l3, r44, i35];
  L12(i40, r56, l10, r57, dx16):
    class__ = ldf `class<-`;
    check L63() else D21();
  L51():
    ___ = ldf `%*%` in base;
    r36 = dyn ___(dx8, r35);
    check L52() else D16();
  L57():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L11(i24, dx13);
  L58():
    i36 = force? i35;
    ____ = ldf `[[<-` in base;
    r49 = dyn ____(l3, r44, i36);
    goto L11(i32, r49);
  L59():
    dr14 = tryDispatchBuiltin.1("[[", l4);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L61() else L60(i34, "mtable", l4, "mtable", dr14);
  L60(i38, r52, l7, r53, l8):
    i41 = ld i;
    check L62() else D20();
  D16():
    deopt 53 [i28, r36];
  D20():
    deopt 70 [i38, r52, l7, r53, l8, i41];
  D21():
    deopt 74 [i40, r56, l10, dx16, r57];
  L52():
    goto L9(i28, r36);
  L61():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L12(i34, "mtable", l4, "mtable", dx15);
  L62():
    i42 = force? i41;
    __6 = ldf `[[` in base;
    r58 = dyn __6(l8, i42);
    goto L12(i38, r52, l7, r53, r58);
  L63():
    r59 = dyn class__(dx16, NULL, r57);
    check L64() else D22();
  D22():
    deopt 76 [i40, r56, l10, r59];
  L64():
    c10 = `is.object`(l10);
    if c10 then L65() else L66(i40, r56, l10);
  L13(i46, dx18):
    st tables = dx18;
    prt1 = ld prt;
    check L69() else D24();
  L65():
    dr16 = tryDispatchBuiltin.0("[[<-", l10, r59);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L67() else L66(i40, r56, dr16);
  L66(i44, r61, l12):
    i47 = ld i;
    check L68() else D23();
  D23():
    deopt 77 [i44, r61, l12, r59, i47];
  D24():
    deopt 81 [i46, prt1];
  L67():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L13(i40, dx17);
  L68():
    i48 = force? i47;
    ____1 = ldf `[[<-` in base;
    r64 = dyn ____1(l12, r59, i48);
    goto L13(i44, r64);
  L69():
    prt2 = force? prt1;
    checkMissing(prt2);
    c11 = `as.logical`(prt2);
    if c11 then L70() else L14();
  L14():
    goto L15(i46);
  L15(i53):
    goto L3(i53);
  L70():
    print = ldf print;
    check L71() else D25();
  D25():
    deopt 84 [i46];
  L71():
    p10 = prom<V +>{
      tables2 = ld tables;
      tables3 = force? tables2;
      checkMissing(tables3);
      c12 = `is.object`(tables3);
      if c12 then L1() else L2(tables3);
    L0(dx20):
      return dx20;
    L1():
      dr18 = tryDispatchBuiltin.1("[", tables3);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(tables5):
      i51 = ld i;
      i52 = force? i51;
      __7 = ldf `[` in base;
      r65 = dyn __7(tables5, i52);
      goto L0(r65);
    L3():
      dx19 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx19);
    };
    ddd1 = ld `...`;
    r67 = dyn print[, `...`, quote](p10, ddd1, FALSE);
    check L72() else D26();
  D26():
    deopt 89 [i46, r67];
  L72():
    goto L15(i46);
  }
}