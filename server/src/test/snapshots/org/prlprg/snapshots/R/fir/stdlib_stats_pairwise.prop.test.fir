fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg pairwise_prop_test:cls, reg smokers:*, reg smokers1:V, reg p:p(V +), reg patients:*, reg patients1:V, reg p1:p(V +), reg r9:V |
    mkenv;
    r = clos inner324950740;
    st `pairwise.prop.test` = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r2):
    st smokers = r2;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L2():
    c = ldf c in base;
    r3 = dyn c(83.0, 90.0, 129.0, 70.0);
    check L4() else D0();
  L3():
    r1 = dyn base(83.0, 90.0, 129.0, 70.0);
    goto L0(r1);
  D0():
    deopt 10 [r3];
  L1(r5):
    st patients = r5;
    pairwise_prop_test = ldf `pairwise.prop.test`;
    check L8() else D2();
  L4():
    goto L0(r3);
  L5():
    c1 = ldf c in base;
    r6 = dyn c1(86.0, 93.0, 136.0, 82.0);
    check L7() else D1();
  L6():
    r4 = dyn base1(86.0, 93.0, 136.0, 82.0);
    goto L1(r4);
  D1():
    deopt 19 [r6];
  D2():
    deopt 22 [];
  L7():
    goto L1(r6);
  L8():
    p = prom<V +>{
      smokers = ld smokers;
      smokers1 = force? smokers;
      checkMissing(smokers1);
      return smokers1;
    };
    p1 = prom<V +>{
      patients = ld patients;
      patients1 = force? patients;
      checkMissing(patients1);
      return patients1;
    };
    r9 = dyn pairwise_prop_test(p, p1);
    check L9() else D3();
  D3():
    deopt 25 [r9];
  L9():
    popenv;
    return r9;
  }
}
fun inner324950740(x, n, `p.adjust.method`, `...`) {
  (reg x:*, reg n:*, reg p_adjust_method:*, reg ddd:dots) -+> V { var x:*, var n:*, var `p.adjust.method`:*, reg p_adjust_method_isMissing:L, reg p_adjust_method_orDefault:*, reg p_adjust_methods:*, reg p_adjust_methods1:V, reg p:p(V +), var `...`:dots?, reg match_arg:cls, reg p_adjust_method1:*, reg p_adjust_method2:V, reg p1:p(V +), reg r2:V, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg substitute:cls, reg r5:V, reg p2:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x1:*, reg x2:V, reg is_matrix:cls, reg r10:V, reg c:L, reg ncol:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r12:V, reg r13:V, reg c1:L, reg stop:cls, reg r14:V, reg rowSums:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg r17:V, reg x7:*, reg x8:V, reg c2:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r18:V, reg paste:cls, reg DNAME:*, reg DNAME1:V, reg p5:p(V +), reg deparse2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg substitute1:cls, reg r22:V, reg p6:p(V +), reg r24:V, reg p7:p(V +), reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg x11:*, reg x12:V, reg length:cls, reg r29:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg r34:V, reg n1:*, reg n2:V, reg length1:cls, reg r35:V, reg r36:V, reg c3:L, reg stop1:cls, reg r37:V, reg complete_cases:cls, reg x13:*, reg x14:V, reg p8:p(V +), reg n3:*, reg n4:V, reg p9:p(V +), reg r40:V, reg x15:*, reg x16:V, reg c4:L, reg x18:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg OK:*, reg OK1:V, reg __1:cls, reg r41:V, reg n5:*, reg n6:V, reg c5:L, reg n8:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg OK2:*, reg OK3:V, reg __2:cls, reg r42:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg x19:*, reg x20:V, reg length2:cls, reg r45:V, reg r46:V, reg c6:L, reg stop2:cls, reg r47:V, reg r49:cls, reg ____:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:V, reg x21:*, reg x22:V, reg names:cls, reg r52:V, reg p10:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r54:V, reg r55:V, reg x23:*, reg x24:V, reg r56:I, reg p11:p(V +), reg r58:V, reg pairwise_table:cls, reg compare_levels:*, reg compare_levels1:V, reg p12:p(V +), reg level_names:*, reg level_names1:V, reg p13:p(V +), reg p_adjust_method3:*, reg p_adjust_method4:V, reg p14:p(V +), reg r62:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r63:V, reg r64:V, reg METHOD:*, reg METHOD1:V, reg DNAME2:*, reg DNAME3:V, reg PVAL:*, reg PVAL1:V, reg p_adjust_method5:*, reg p_adjust_method6:V, reg list:cls, reg r65:V, reg l:*, reg class__:cls, reg r66:V, reg ans:*, reg ans1:V |
    mkenv;
    st x = x;
    st n = n;
    p_adjust_method_isMissing = missing.0(p_adjust_method);
    if p_adjust_method_isMissing then L0() else L1(p_adjust_method);
  L0():
    p = prom<V +>{
      p_adjust_methods = ld `p.adjust.methods`;
      p_adjust_methods1 = force? p_adjust_methods;
      checkMissing(p_adjust_methods1);
      return p_adjust_methods1;
    };
    goto L1(p);
  L1(p_adjust_method_orDefault):
    st `p.adjust.method` = p_adjust_method_orDefault;
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L17() else D0();
  D0():
    deopt 1 [];
  L17():
    p1 = prom<V +>{
      p_adjust_method1 = ld `p.adjust.method`;
      p_adjust_method2 = force? p_adjust_method1;
      checkMissing(p_adjust_method2);
      return p_adjust_method2;
    };
    r2 = dyn match_arg(p1);
    check L18() else D1();
  D1():
    deopt 3 [r2];
  L18():
    st `p.adjust.method` = r2;
    st METHOD = "Pairwise comparison of proportions";
    deparse1 = ldf deparse1;
    check L19() else D2();
  D2():
    deopt 9 [];
  L19():
    p2 = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      substitute = ldf substitute in base;
      r5 = dyn substitute(<sym x>);
      goto L0(r5);
    L2():
      r3 = dyn base(<sym x>);
      goto L0(r3);
    };
    r7 = dyn deparse1(p2);
    check L20() else D3();
  D3():
    deopt 11 [r7];
  L20():
    st DNAME = r7;
    sym1 = ldf `is.matrix`;
    base1 = ldf `is.matrix` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L2(r9):
    c = `as.logical`(r9);
    if c then L25() else L3();
  L21():
    x1 = ld x;
    check L23() else D4();
  L22():
    r8 = dyn base1(<sym x>);
    goto L2(r8);
  D4():
    deopt 15 [x1];
  L3():
    paste = ldf paste;
    check L39() else D13();
  L7():
    complete_cases = ldf `complete.cases`;
    check L53() else D21();
  L23():
    x2 = force? x1;
    checkMissing(x2);
    is_matrix = ldf `is.matrix` in base;
    r10 = dyn is_matrix(x2);
    check L24() else D5();
  L25():
    ncol = ldf ncol;
    check L26() else D6();
  D5():
    deopt 18 [r10];
  D6():
    deopt 20 [];
  D13():
    deopt 44 [];
  D21():
    deopt 69 [];
  L24():
    goto L2(r10);
  L26():
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r12 = dyn ncol(p3);
    check L27() else D7();
  L39():
    p5 = prom<V +>{
      DNAME = ld DNAME;
      DNAME1 = force? DNAME;
      checkMissing(DNAME1);
      return DNAME1;
    };
    p7 = prom<V +>{
      deparse2 = ldf deparse1;
      p6 = prom<V +>{
        sym2 = ldf substitute;
        base2 = ldf substitute in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r21):
        return r21;
      L1():
        substitute1 = ldf substitute in base;
        r22 = dyn substitute1(<sym n>);
        goto L0(r22);
      L2():
        r20 = dyn base2(<sym n>);
        goto L0(r20);
      };
      r24 = dyn deparse2(p6);
      return r24;
    };
    r26 = dyn paste(p5, "out of", p7);
    check L40() else D14();
  L53():
    p8 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    p9 = prom<V +>{
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      return n4;
    };
    r40 = dyn complete_cases(p8, p9);
    check L54() else D22();
  D7():
    deopt 22 [r12];
  D14():
    deopt 48 [r26];
  D22():
    deopt 72 [r40];
  L27():
    r13 = `!=`(r12, 2.0);
    c1 = `as.logical`(r13);
    if c1 then L28() else L4();
  L40():
    st DNAME = r26;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L41() else L42();
  L54():
    st OK = r40;
    x15 = ld x;
    check L55() else D23();
  D23():
    deopt 74 [x15];
  L4():
    goto L5();
  L5():
    rowSums = ldf rowSums;
    check L32() else D10();
  L8(r28):
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  L28():
    stop = ldf stop;
    check L29() else D8();
  L41():
    x11 = ld x;
    check L43() else D15();
  L42():
    r27 = dyn base3(<sym x>);
    goto L8(r27);
  L55():
    x16 = force? x15;
    checkMissing(x16);
    c4 = `is.object`(x16);
    if c4 then L56() else L57(x16);
  D8():
    deopt 26 [];
  D10():
    deopt 32 [];
  D15():
    deopt 52 [x11];
  L9(r33, r34):
    r36 = `!=`(r33, r34);
    c3 = `as.logical`(r36);
    if c3 then L49() else L10();
  L11(dx4):
    st x = dx4;
    n5 = ld n;
    check L60() else D25();
  L29():
    r14 = dyn stop("'x' must have 2 columns");
    check L30() else D9();
  L32():
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r17 = dyn rowSums(p4);
    check L33() else D11();
  L43():
    x12 = force? x11;
    checkMissing(x12);
    length = ldf length in base;
    r29 = dyn length(x12);
    check L44() else D16();
  L45():
    n1 = ld n;
    check L47() else D17();
  L46():
    r32 = dyn base4(<sym n>);
    goto L9(r28, r32);
  L56():
    dr2 = tryDispatchBuiltin.1("[", x16);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L58() else L57(dr2);
  L57(x18):
    OK = ld OK;
    check L59() else D24();
  D9():
    deopt 28 [r14];
  D11():
    deopt 34 [r17];
  D16():
    deopt 55 [r29];
  D17():
    deopt 57 [r28, n1];
  D24():
    deopt 76 [x18, OK];
  D25():
    deopt 80 [n5];
  L10():
    goto L7();
  L30():
    goto L5();
  L33():
    st n = r17;
    x7 = ld x;
    check L34() else D12();
  L44():
    goto L8(r29);
  L47():
    n2 = force? n1;
    checkMissing(n2);
    length1 = ldf length in base;
    r35 = dyn length1(n2);
    check L48() else D18();
  L49():
    stop1 = ldf stop;
    check L50() else D19();
  L58():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx3);
  L59():
    OK1 = force? OK;
    __1 = ldf `[` in base;
    r41 = dyn __1(x18, OK1);
    goto L11(r41);
  L60():
    n6 = force? n5;
    checkMissing(n6);
    c5 = `is.object`(n6);
    if c5 then L61() else L62(n6);
  D12():
    deopt 36 [x7];
  D18():
    deopt 60 [r28, r35];
  D19():
    deopt 63 [];
  L12(dx6):
    st n = dx6;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L65() else L66();
  L34():
    x8 = force? x7;
    checkMissing(x8);
    c2 = `is.object`(x8);
    if c2 then L35() else L36();
  L48():
    goto L9(r28, r35);
  L50():
    r37 = dyn stop1("'x' and 'n' must have the same length");
    check L51() else D20();
  L61():
    dr4 = tryDispatchBuiltin.1("[", n6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L63() else L62(dr4);
  L62(n8):
    OK2 = ld OK;
    check L64() else D26();
  D20():
    deopt 65 [r37];
  D26():
    deopt 82 [n8, OK2];
  L6(dx1):
    st x = dx1;
    goto L7();
  L13(r44):
    r46 = `<`(r44, 2);
    c6 = `as.logical`(r46);
    if c6 then L69() else L14();
  L35():
    dr = tryDispatchBuiltin.1("[", x8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36();
  L36():
    __ = ldf `[` in base;
    r18 = dyn __(x8, <missing>, 1.0);
    goto L6(r18);
  L51():
    goto L7();
  L63():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L12(dx5);
  L64():
    OK3 = force? OK2;
    __2 = ldf `[` in base;
    r42 = dyn __2(n8, OK3);
    goto L12(r42);
  L65():
    x19 = ld x;
    check L67() else D27();
  L66():
    r43 = dyn base5(<sym x>);
    goto L13(r43);
  D27():
    deopt 88 [x19];
  L14():
    goto L15();
  L15():
    r49 = clos inner613390797;
    st `compare.levels` = r49;
    ____ = ldf `%||%`;
    check L73() else D31();
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L67():
    x20 = force? x19;
    checkMissing(x20);
    length2 = ldf length in base;
    r45 = dyn length2(x20);
    check L68() else D28();
  L69():
    stop2 = ldf stop;
    check L70() else D29();
  D28():
    deopt 91 [r45];
  D29():
    deopt 95 [];
  D31():
    deopt 104 [];
  L68():
    goto L13(r45);
  L70():
    r47 = dyn stop2("too few groups");
    check L71() else D30();
  L73():
    p10 = prom<V +>{
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r51):
      return r51;
    L1():
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      names = ldf names in base;
      r52 = dyn names(x22);
      goto L0(r52);
    L2():
      r50 = dyn base6(<sym x>);
      goto L0(r50);
    };
    p11 = prom<V +>{
      sym7 = ldf seq_along;
      base7 = ldf seq_along in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r55):
      return r55;
    L1():
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      r56 = seq_along(x24);
      goto L0(r56);
    L2():
      r54 = dyn base7(<sym x>);
      goto L0(r54);
    };
    r58 = dyn ____(p10, p11);
    check L74() else D32();
  D30():
    deopt 97 [r47];
  D32():
    deopt 107 [r58];
  L71():
    goto L15();
  L74():
    st `level.names` = r58;
    pairwise_table = ldf `pairwise.table`;
    check L75() else D33();
  D33():
    deopt 110 [];
  L75():
    p12 = prom<V +>{
      compare_levels = ld `compare.levels`;
      compare_levels1 = force? compare_levels;
      checkMissing(compare_levels1);
      return compare_levels1;
    };
    p13 = prom<V +>{
      level_names = ld `level.names`;
      level_names1 = force? level_names;
      checkMissing(level_names1);
      return level_names1;
    };
    p14 = prom<V +>{
      p_adjust_method3 = ld `p.adjust.method`;
      p_adjust_method4 = force? p_adjust_method3;
      checkMissing(p_adjust_method4);
      return p_adjust_method4;
    };
    r62 = dyn pairwise_table(p12, p13, p14);
    check L76() else D34();
  D34():
    deopt 114 [r62];
  L76():
    st PVAL = r62;
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L77() else L78();
  L16(r64):
    st ans = r64;
    l = ld ans;
    class__ = ldf `class<-`;
    check L84() else D40();
  L77():
    METHOD = ld METHOD;
    check L79() else D35();
  L78():
    r63 = dyn base8[method, `data.name`, `p.value`, `p.adjust.method`](<sym METHOD>, <sym DNAME>, <sym PVAL>, <sym p.adjust.method>);
    goto L16(r63);
  D35():
    deopt 118 [METHOD];
  D40():
    deopt 136 ["pairwise.htest", l, "pairwise.htest"];
  L79():
    METHOD1 = force? METHOD;
    checkMissing(METHOD1);
    DNAME2 = ld DNAME;
    check L80() else D36();
  L84():
    r66 = dyn class__(l, NULL, "pairwise.htest");
    check L85() else D41();
  D36():
    deopt 121 [DNAME2];
  D41():
    deopt 138 ["pairwise.htest", r66];
  L80():
    DNAME3 = force? DNAME2;
    checkMissing(DNAME3);
    PVAL = ld PVAL;
    check L81() else D37();
  L85():
    st ans = r66;
    ans = ld ans;
    check L86() else D42();
  D37():
    deopt 124 [PVAL];
  D42():
    deopt 140 [ans];
  L81():
    PVAL1 = force? PVAL;
    checkMissing(PVAL1);
    p_adjust_method5 = ld `p.adjust.method`;
    check L82() else D38();
  L86():
    ans1 = force? ans;
    checkMissing(ans1);
    popenv;
    return ans1;
  D38():
    deopt 127 [p_adjust_method5];
  L82():
    p_adjust_method6 = force? p_adjust_method5;
    checkMissing(p_adjust_method6);
    list = ldf list in base;
    r65 = dyn list(METHOD1, DNAME3, PVAL1, p_adjust_method6);
    check L83() else D39();
  D39():
    deopt 131 [r65];
  L83():
    goto L16(r65);
  }
}
fun inner613390797(i, j) {
  (reg i:*, reg j:*) -+> V { var i:*, var j:*, reg prop_test:cls, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg x6:V, reg r1:V, reg i1:*, reg i2:V, reg j1:*, reg j2:V, reg c1:cls, reg r2:V, reg __:cls, reg r3:V, reg p:p(V +), reg n:*, reg n1:V, reg c2:L, reg n3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg n6:V, reg r6:V, reg i3:*, reg i4:V, reg j3:*, reg j4:V, reg c3:cls, reg r7:V, reg __1:cls, reg r8:V, reg p1:p(V +), reg ddd:*, reg r10:V, reg c4:L, reg r12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r13:V |
    mkenv;
    st i = i;
    st j = j;
    prop_test = ldf `prop.test`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      c = `is.object`(x1);
      if c then L2() else L3(x1);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", x1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(x3):
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L5() else L6();
    L1(x6, r1):
      __ = ldf `[` in base;
      r3 = dyn __(x6, r1);
      goto L0(r3);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      i1 = ld i;
      i2 = force? i1;
      checkMissing(i2);
      j1 = ld j;
      j2 = force? j1;
      checkMissing(j2);
      c1 = ldf c in base;
      r2 = dyn c1(i2, j2);
      goto L1(x3, r2);
    L6():
      r = dyn base(<sym i>, <sym j>);
      goto L1(x3, r);
    };
    p1 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      c2 = `is.object`(n1);
      if c2 then L2() else L3(n1);
    L0(dx3):
      return dx3;
    L2():
      dr2 = tryDispatchBuiltin.1("[", n1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(n3):
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L1(n6, r6):
      __1 = ldf `[` in base;
      r8 = dyn __1(n6, r6);
      goto L0(r8);
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L5():
      i3 = ld i;
      i4 = force? i3;
      checkMissing(i4);
      j3 = ld j;
      j4 = force? j3;
      checkMissing(j4);
      c3 = ldf c in base;
      r7 = dyn c3(i4, j4);
      goto L1(n3, r7);
    L6():
      r5 = dyn base1(<sym i>, <sym j>);
      goto L1(n3, r5);
    };
    ddd = ld `...`;
    r10 = dyn prop_test[, , `...`](p, p1, ddd);
    check L1() else D1();
  D1():
    deopt 5 [r10];
  L1():
    c4 = `is.object`(r10);
    if c4 then L3() else L4(r10);
  L2(dx5):
    popenv;
    return dx5;
  L3():
    dr4 = tryDispatchBuiltin.1("$", r10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L5() else L4(dr4);
  L4(r12):
    r13 = `$`(r12, <sym p.value>);
    goto L2(r13);
  L5():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L2(dx4);
  }
}