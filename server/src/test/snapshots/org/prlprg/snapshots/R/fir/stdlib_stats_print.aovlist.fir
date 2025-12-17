fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.aovlist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg cl:*, reg cl1:V, reg c:V, reg r5:V, reg c1:L, reg cat:cls, reg r6:V, reg dput:cls, reg cl2:*, reg cl3:V, reg p:p(V +), reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg x3:*, reg x4:V, reg attr1:cls, reg r14:V, reg c2:V, reg r15:V, reg c3:L, reg cat1:cls, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg x5:*, reg x6:V, reg names:cls, reg r20:V, reg nx:*, reg nx1:V, reg c4:L, reg nx3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r21:V, reg r22:V, reg c5:L, reg x7:*, reg x8:V, reg c6:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r23:V, reg c7:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r24:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg mn:*, reg mn1:V, reg is_matrix:cls, reg r27:V, reg c8:L, reg cat2:cls, reg r28:V, reg print:cls, reg format:cls, reg mn2:*, reg mn3:V, reg c9:L, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r29:V, reg p1:p(V +), reg r31:V, reg p2:p(V +), reg r33:V, reg cat3:cls, reg format1:cls, reg mn6:*, reg mn7:V, reg c10:L, reg mn9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg __3:cls, reg r35:V, reg p3:p(V +), reg r37:V, reg p4:p(V +), reg r39:V, reg nx4:*, reg nx5:V, reg c11:L, reg nx7:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __4:cls, reg r40:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg nx8:*, reg nx9:V, reg r43:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c12:L, reg x11:V, reg nx10:*, reg nx11:V, reg c13:L, reg i6:I, reg nx13:V, reg dr12:V, reg dc6:L, reg dx15:V, reg i8:I, reg dx16:V, reg ii:*, reg ii1:V, reg __5:cls, reg r44:V, reg cat4:cls, reg ii2:*, reg ii3:V, reg p5:p(V +), reg i9:*, reg i10:V, reg p6:p(V +), reg r47:V, reg x12:*, reg x13:V, reg c14:L, reg i12:I, reg x15:V, reg dr14:V, reg dc7:L, reg dx17:V, reg i14:I, reg dx18:V, reg i15:*, reg i16:V, reg __6:cls, reg r48:V, reg print1:cls, reg xi:*, reg xi1:V, reg p7:p(V +), reg ddd1:dots?, reg r50:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg r52:V, reg x16:*, reg x17:V, reg invisible:cls, reg r53:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L0(r1):
    st cl = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L23():
    x1 = ld x;
    check L25() else D0();
  L24():
    r = dyn base(<sym x>, "call");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    r5 = `!`(r4);
    c1 = `as.logical`(r5);
    if c1 then L30() else L2();
  L25():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r2 = dyn attr(x2, "call");
    check L26() else D1();
  L27():
    cl = ld cl;
    check L29() else D2();
  L28():
    r3 = dyn base1(<sym cl>);
    goto L1(r3);
  D1():
    deopt 6 [r2];
  D2():
    deopt 9 [cl];
  L2():
    goto L3();
  L3():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L26():
    goto L0(r2);
  L29():
    cl1 = force? cl;
    checkMissing(cl1);
    c = `==`(cl1, NULL);
    goto L1(c);
  L30():
    cat = ldf cat;
    check L31() else D3();
  D3():
    deopt 14 [];
  L4(r11):
    r15 = `!`(r11);
    c3 = `as.logical`(r15);
    if c3 then L42() else L6();
  L31():
    r6 = dyn cat("\nCall:\n");
    check L32() else D4();
  L36():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L37():
    r10 = dyn base2(<lang attr(x, "weights")>);
    goto L4(r10);
  D4():
    deopt 16 [r6];
  L5(r13):
    c2 = `==`(r13, NULL);
    goto L4(c2);
  L6():
    goto L7();
  L7():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L46() else L47();
  L32():
    dput = ldf dput;
    check L33() else D5();
  L38():
    x3 = ld x;
    check L40() else D7();
  L39():
    r12 = dyn base3(<sym x>, "weights");
    goto L5(r12);
  L42():
    cat1 = ldf cat;
    check L43() else D9();
  D5():
    deopt 18 [];
  D7():
    deopt 26 [x3];
  D9():
    deopt 34 [];
  L8(r19):
    st nx = r19;
    nx = ld nx;
    check L50() else D13();
  L33():
    p = prom<V +>{
      cl2 = ld cl;
      cl3 = force? cl2;
      checkMissing(cl3);
      return cl3;
    };
    r8 = dyn dput(p);
    check L34() else D6();
  L40():
    x4 = force? x3;
    checkMissing(x4);
    attr1 = ldf attr in base;
    r14 = dyn attr1(x4, "weights");
    check L41() else D8();
  L43():
    r16 = dyn cat1("Note: The results below are on the weighted scale\n");
    check L44() else D10();
  L46():
    x5 = ld x;
    check L48() else D11();
  L47():
    r18 = dyn base4(<sym x>);
    goto L8(r18);
  D6():
    deopt 20 [r8];
  D8():
    deopt 30 [r14];
  D10():
    deopt 36 [r16];
  D11():
    deopt 41 [x5];
  D13():
    deopt 46 [nx];
  L34():
    goto L3();
  L41():
    goto L5(r14);
  L44():
    goto L7();
  L48():
    x6 = force? x5;
    checkMissing(x6);
    names = ldf names in base;
    r20 = dyn names(x6);
    check L49() else D12();
  L50():
    nx1 = force? nx;
    checkMissing(nx1);
    c4 = `is.object`(nx1);
    if c4 then L51() else L52(nx1);
  D12():
    deopt 44 [r20];
  L9(dx1):
    r22 = `==`(dx1, "(Intercept)");
    c5 = `as.logical`(r22);
    if c5 then L54() else L10();
  L49():
    goto L8(r20);
  L51():
    dr = tryDispatchBuiltin.1("[", nx1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L53() else L52(dr);
  L52(nx3):
    __ = ldf `[` in base;
    r21 = dyn __(nx3, 1);
    goto L9(r21);
  L10():
    goto L16();
  L16():
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L80() else L81();
  L53():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L54():
    x7 = ld x;
    check L55() else D14();
  D14():
    deopt 53 [x7];
  L17(r42):
    s = toForSeq(r42);
    l = length(s);
    i = 0;
    goto L18(i);
  L55():
    x8 = force? x7;
    checkMissing(x8);
    c6 = `is.object`(x8);
    if c6 then L56() else L57(x8);
  L80():
    nx8 = ld nx;
    check L82() else D24();
  L81():
    r41 = dyn base6(<sym nx>);
    goto L17(r41);
  D24():
    deopt 93 [nx8];
  L11(dx3):
    c7 = `is.object`(dx3);
    if c7 then L60() else L61(dx3);
  L18(i1):
    i2 = `+`.1(i1, 1);
    c12 = `<`.1(l, i2);
    if c12 then L83() else L21();
  L56():
    dr2 = tryDispatchBuiltin.1("[[", x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L58() else L57(dr2);
  L57(x10):
    __1 = ldf `[[` in base;
    r23 = dyn __1(x10, 1);
    goto L11(r23);
  L82():
    nx9 = force? nx8;
    checkMissing(nx9);
    r43 = seq_along(nx9);
    goto L17(r43);
  L21():
    x11 = `[[`(s, i2, NULL, TRUE);
    st ii = x11;
    nx10 = ld nx;
    check L84() else D25();
  L58():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx2);
  L59(dx7):
    st mn = dx7;
    sym5 = ldf `is.matrix`;
    base5 = ldf `is.matrix` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  L60():
    dr4 = tryDispatchBuiltin.1("$", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L62() else L61(dr4);
  L61(dx5):
    r24 = `$`(dx5, <sym coefficients>);
    goto L59(r24);
  L83():
    sym7 = ldf invisible;
    base7 = ldf invisible in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L98() else L99();
  D25():
    deopt 96 [i2, nx10];
  L12(r26):
    c8 = `as.logical`(r26);
    if c8 then L67() else L13();
  L22(r52):
    popenv;
    return r52;
  L62():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L59(dx6);
  L63():
    mn = ld mn;
    check L65() else D15();
  L64():
    r25 = dyn base5(<sym mn>);
    goto L12(r25);
  L84():
    nx11 = force? nx10;
    checkMissing(nx11);
    c13 = `is.object`(nx11);
    if c13 then L85() else L86(i2, nx11);
  L98():
    x16 = ld x;
    check L100() else D33();
  L99():
    r51 = dyn base7(<sym x>);
    goto L22(r51);
  D15():
    deopt 62 [mn];
  D33():
    deopt 128 [x16];
  L13():
    cat3 = ldf cat;
    check L73() else D21();
  L14():
    nx4 = ld nx;
    check L75() else D23();
  L19(i8, dx16):
    st i = dx16;
    cat4 = ldf cat;
    check L89() else D27();
  L65():
    mn1 = force? mn;
    checkMissing(mn1);
    is_matrix = ldf `is.matrix` in base;
    r27 = dyn is_matrix(mn1);
    check L66() else D16();
  L67():
    cat2 = ldf cat;
    check L68() else D17();
  L85():
    dr12 = tryDispatchBuiltin.1("[", nx11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L87() else L86(i2, dr12);
  L86(i6, nx13):
    ii = ld ii;
    check L88() else D26();
  L100():
    x17 = force? x16;
    checkMissing(x17);
    invisible = ldf invisible in base;
    r53 = dyn invisible(x17);
    check L101() else D34();
  D16():
    deopt 65 [r27];
  D17():
    deopt 67 [];
  D21():
    deopt 77 [];
  D23():
    deopt 84 [nx4];
  D26():
    deopt 98 [i6, nx13, ii];
  D27():
    deopt 103 [i8];
  D34():
    deopt 131 [r53];
  L66():
    goto L12(r27);
  L68():
    r28 = dyn cat2("\nGrand Means:\n");
    check L69() else D18();
  L73():
    p4 = prom<V +>{
      format1 = ldf format;
      p3 = prom<V +>{
        mn6 = ld mn;
        mn7 = force? mn6;
        checkMissing(mn7);
        c10 = `is.object`(mn7);
        if c10 then L1() else L2(mn7);
      L0(dx11):
        return dx11;
      L1():
        dr8 = tryDispatchBuiltin.1("[", mn7);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(mn9):
        __3 = ldf `[` in base;
        r35 = dyn __3(mn9, 1);
        goto L0(r35);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx10);
      };
      r37 = dyn format1(p3);
      return r37;
    };
    r39 = dyn cat3[, , , sep]("\nGrand Mean: ", p4, "\n", "");
    check L74() else D22();
  L75():
    nx5 = force? nx4;
    checkMissing(nx5);
    c11 = `is.object`(nx5);
    if c11 then L76() else L77(nx5);
  L87():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L19(i2, dx15);
  L88():
    ii1 = force? ii;
    __5 = ldf `[` in base;
    r44 = dyn __5(nx13, ii1);
    goto L19(i6, r44);
  L89():
    p5 = prom<V +>{
      ii2 = ld ii;
      ii3 = force? ii2;
      checkMissing(ii3);
      return ii3;
    };
    p6 = prom<V +>{
      i9 = ld i;
      i10 = force? i9;
      checkMissing(i10);
      return i10;
    };
    r47 = dyn cat4[, , , , , sep]("\nStratum ", p5, ": ", p6, "\n", "");
    check L90() else D28();
  L101():
    goto L22(r53);
  D18():
    deopt 69 [r28];
  D22():
    deopt 83 [r39];
  D28():
    deopt 111 [i8, r47];
  L15(dx13):
    st nx = dx13;
    goto L16();
  L69():
    print = ldf print;
    check L70() else D19();
  L74():
    goto L14();
  L76():
    dr10 = tryDispatchBuiltin.1("[", nx5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L78() else L77(dr10);
  L77(nx7):
    __4 = ldf `[` in base;
    r40 = dyn __4(nx7, -1);
    goto L15(r40);
  L90():
    x12 = ld x;
    check L91() else D29();
  D19():
    deopt 71 [];
  D29():
    deopt 112 [i8, x12];
  L70():
    p2 = prom<V +>{
      format = ldf format;
      p1 = prom<V +>{
        mn2 = ld mn;
        mn3 = force? mn2;
        checkMissing(mn3);
        c9 = `is.object`(mn3);
        if c9 then L1() else L2();
      L0(dx9):
        return dx9;
      L1():
        dr6 = tryDispatchBuiltin.1("[", mn3);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2();
      L2():
        __2 = ldf `[` in base;
        r29 = dyn __2(mn3, 1.0, <missing>);
        goto L0(r29);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx8);
      };
      r31 = dyn format(p1);
      return r31;
    };
    r33 = dyn print[, quote](p2, FALSE);
    check L71() else D20();
  L78():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L15(dx12);
  L91():
    x13 = force? x12;
    checkMissing(x13);
    c14 = `is.object`(x13);
    if c14 then L92() else L93(i8, x13);
  D20():
    deopt 75 [r33];
  L20(i14, dx18):
    st xi = dx18;
    print1 = ldf print;
    check L96() else D31();
  L71():
    goto L14();
  L92():
    dr14 = tryDispatchBuiltin.1("[[", x13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L94() else L93(i8, dr14);
  L93(i12, x15):
    i15 = ld i;
    check L95() else D30();
  D30():
    deopt 114 [i12, x15, i15];
  D31():
    deopt 119 [i14];
  L94():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L20(i8, dx17);
  L95():
    i16 = force? i15;
    __6 = ldf `[[` in base;
    r48 = dyn __6(x15, i16);
    goto L20(i12, r48);
  L96():
    p7 = prom<V +>{
      xi = ld xi;
      xi1 = force? xi;
      checkMissing(xi1);
      return xi1;
    };
    ddd1 = ld `...`;
    r50 = dyn print1[, `...`](p7, ddd1);
    check L97() else D32();
  D32():
    deopt 122 [i14, r50];
  L97():
    goto L18(i14);
  }
}