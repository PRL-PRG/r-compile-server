fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `cophenetic.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg as_hclust:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg length:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg nobs:*, reg nobs1:V, reg vector:cls, reg r8:V, reg matrix:cls, reg nobs2:*, reg nobs3:V, reg p1:p(V +), reg nobs4:*, reg nobs5:V, reg p2:p(V +), reg r11:V, reg nobs6:*, reg nobs7:V, reg r12:V, reg r13:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x7:V, reg x8:*, reg x9:V, reg c2:L, reg i6:I, reg x11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg r14:V, reg c3:L, reg i10:I, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg i12:I, reg dx7:V, reg i13:*, reg i14:V, reg __:cls, reg r15:V, reg inds:*, reg inds1:V, reg c4:L, reg i16:I, reg inds3:V, reg dr6:V, reg dc3:L, reg dx8:V, reg i18:I, reg dx9:V, reg __1:cls, reg r16:V, reg r17:V, reg c5:L, reg inds4:*, reg inds5:V, reg c6:L, reg i22:I, reg inds7:V, reg dr8:V, reg dc4:L, reg dx10:V, reg i24:I, reg dx11:V, reg __2:cls, reg r18:V, reg r19:V, reg i25:I, reg r20:V, reg ilist:*, reg ilist1:V, reg c7:L, reg i27:I, reg ilist3:V, reg dr10:V, reg dc5:L, reg dx12:V, reg inds8:*, reg inds9:V, reg c8:L, reg i30:I, reg ilist5:V, reg inds11:V, reg dr12:V, reg dc6:L, reg dx13:V, reg i32:I, reg ilist7:V, reg dx14:V, reg __3:cls, reg r21:V, reg __4:cls, reg r22:V, reg inds12:*, reg inds13:V, reg c9:L, reg i34:I, reg inds15:V, reg dr14:V, reg dc7:L, reg dx15:V, reg i36:I, reg dx16:V, reg __5:cls, reg r23:V, reg r24:V, reg c10:L, reg inds16:*, reg inds17:V, reg c11:L, reg i40:I, reg inds19:V, reg dr16:V, reg dc8:L, reg dx17:V, reg i42:I, reg dx18:V, reg __6:cls, reg r25:V, reg r26:V, reg i43:I, reg r27:V, reg ilist8:*, reg ilist9:V, reg c12:L, reg i45:I, reg ilist11:V, reg dr18:V, reg dc9:L, reg dx19:V, reg inds20:*, reg inds21:V, reg c13:L, reg i48:I, reg ilist13:V, reg inds23:V, reg dr20:V, reg dc10:L, reg dx20:V, reg i50:I, reg ilist15:V, reg dx21:V, reg __7:cls, reg r28:V, reg __8:cls, reg r29:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg i53:I, reg r31:V, reg ids1:*, reg ids2:V, reg ids3:*, reg ids4:V, reg c14:cls, reg r32:V, reg l1:*, reg c15:L, reg i55:I, reg r34:V, reg l3:*, reg dr22:V, reg dc11:L, reg dx22:V, reg i57:I, reg dx23:V, reg i58:*, reg i59:V, reg ____:cls, reg r37:V, reg x12:*, reg x13:V, reg c16:L, reg i61:I, reg x15:V, reg dr24:V, reg dc12:L, reg dx24:V, reg i63:I, reg dx25:V, reg r38:V, reg c17:L, reg i65:I, reg dx27:V, reg dr26:V, reg dc13:L, reg dx28:V, reg i67:I, reg dx29:V, reg i68:*, reg i69:V, reg __9:cls, reg r39:V, reg l4:*, reg c18:L, reg i71:I, reg dx31:V, reg l6:*, reg dr28:V, reg dc14:L, reg dx33:V, reg i73:I, reg dx35:V, reg cbind:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r40:V, reg r41:V, reg ids5:*, reg ids6:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r42:V, reg r43:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg r45:V, reg ids7:*, reg ids8:V, reg length1:cls, reg r46:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg r48:V, reg ids9:*, reg ids10:V, reg length2:cls, reg r49:V, reg rep_int:cls, reg r50:V, reg rep_int1:cls, reg r51:V, reg p3:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg r54:V, reg ids11:*, reg ids12:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg ids13:*, reg ids14:V, reg length3:cls, reg r57:V, reg rep_int2:cls, reg r58:V, reg p4:p(V +), reg r60:V, reg ___:cls, reg r61:V, reg x16:*, reg x17:V, reg c19:L, reg x19:V, reg dr30:V, reg dc15:L, reg dx36:V, reg dx37:V, reg r62:V, reg l7:*, reg rownames__:cls, reg r63:V, reg as_dist:cls, reg out:*, reg out1:V, reg t:cls, reg out2:*, reg out3:V, reg p5:p(V +), reg r65:V, reg r66:V, reg p6:p(V +), reg r68:V |
    mkenv;
    st x = x;
    as_hclust = ldf `as.hclust`;
    check L19() else D0();
  D0():
    deopt 1 [];
  L19():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn as_hclust(p);
    check L20() else D1();
  D1():
    deopt 3 [r1];
  L20():
    st x = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L0(r3):
    st nobs = r3;
    sym1 = ldf vector;
    base1 = ldf vector in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L21():
    x3 = ld x;
    check L23() else D2();
  L22():
    r2 = dyn base(<lang `$`(x, order)>);
    goto L0(r2);
  D2():
    deopt 7 [x3];
  L1(r7):
    st ilist = r7;
    matrix = ldf matrix;
    check L33() else D6();
  L23():
    x4 = force? x3;
    checkMissing(x4);
    c = `is.object`(x4);
    if c then L25() else L26(x4);
  L29():
    nobs = ld nobs;
    check L31() else D4();
  L30():
    r6 = dyn base1[, length]("list", <sym nobs>);
    goto L1(r6);
  D4():
    deopt 16 [nobs];
  D6():
    deopt 22 [];
  L24(dx1):
    length = ldf length in base;
    r5 = dyn length(dx1);
    check L28() else D3();
  L25():
    dr = tryDispatchBuiltin.1("$", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(x6):
    r4 = `$`(x6, <sym order>);
    goto L24(r4);
  L31():
    nobs1 = force? nobs;
    checkMissing(nobs1);
    vector = ldf vector in base;
    r8 = dyn vector("list", nobs1);
    check L32() else D5();
  L33():
    p1 = prom<V +>{
      nobs2 = ld nobs;
      nobs3 = force? nobs2;
      checkMissing(nobs3);
      return nobs3;
    };
    p2 = prom<V +>{
      nobs4 = ld nobs;
      nobs5 = force? nobs4;
      checkMissing(nobs5);
      return nobs5;
    };
    r11 = dyn matrix[, nrow, ncol](0.0, p1, p2);
    check L34() else D7();
  D3():
    deopt 11 [r5];
  D5():
    deopt 19 [r8];
  D7():
    deopt 28 [r11];
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L24(dx);
  L28():
    goto L0(r5);
  L32():
    goto L1(r8);
  L34():
    st out = r11;
    nobs6 = ld nobs;
    check L35() else D8();
  D8():
    deopt 31 [1.0, nobs6];
  L35():
    nobs7 = force? nobs6;
    checkMissing(nobs7);
    r12 = `-`(nobs7, 1.0);
    r13 = `:`(1.0, r12);
    s = toForSeq(r13);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L36() else L18();
  L18():
    x7 = `[[`(s, i2, NULL, TRUE);
    st i = x7;
    x8 = ld x;
    check L37() else D9();
  L36():
    x16 = ld x;
    check L105() else D27();
  D9():
    deopt 36 [i2, x8];
  D27():
    deopt 119 [x16];
  L37():
    x9 = force? x8;
    checkMissing(x9);
    c2 = `is.object`(x9);
    if c2 then L39() else L40(i2, x9);
  L105():
    x17 = force? x16;
    checkMissing(x17);
    c19 = `is.object`(x17);
    if c19 then L107() else L108(x17);
  L38(i8, dx3):
    c3 = `is.object`(dx3);
    if c3 then L42() else L43(i8, dx3);
  L39():
    dr2 = tryDispatchBuiltin.1("$", x9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L41() else L40(i2, dr2);
  L40(i6, x11):
    r14 = `$`(x11, <sym merge>);
    goto L38(i6, r14);
  L106(dx37):
    l7 = ld out;
    rownames__ = ldf `rownames<-`;
    check L110() else D28();
  L107():
    dr30 = tryDispatchBuiltin.1("$", x17);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L109() else L108(dr30);
  L108(x19):
    r62 = `$`(x19, <sym labels>);
    goto L106(r62);
  D28():
    deopt 123 [dx37, l7, dx37];
  L3(i12, dx7):
    st inds = dx7;
    inds = ld inds;
    check L46() else D11();
  L41():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L38(i2, dx2);
  L42():
    dr4 = tryDispatchBuiltin.1("[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L44() else L43(i8, dr4);
  L43(i10, dx5):
    i13 = ld i;
    check L45() else D10();
  L109():
    dx36 = getTryDispatchBuiltinValue(dr30);
    goto L106(dx36);
  L110():
    r63 = dyn rownames__(l7, NULL, dx37);
    check L111() else D29();
  D10():
    deopt 39 [i10, dx5, i13];
  D11():
    deopt 45 [i12, inds];
  D29():
    deopt 125 [dx37, r63];
  L44():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L3(i8, dx6);
  L45():
    i14 = force? i13;
    __ = ldf `[` in base;
    r15 = dyn __(dx3, i14, <missing>);
    goto L3(i10, r15);
  L46():
    inds1 = force? inds;
    checkMissing(inds1);
    c4 = `is.object`(inds1);
    if c4 then L47() else L48(i12, inds1);
  L111():
    st out = r63;
    as_dist = ldf `as.dist`;
    check L112() else D30();
  D30():
    deopt 128 [];
  L4(i18, dx9):
    r17 = `<`(dx9, 0);
    c5 = `as.logical`(r17);
    if c5 then L50() else L5();
  L47():
    dr6 = tryDispatchBuiltin.1("[", inds1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L49() else L48(i12, dr6);
  L48(i16, inds3):
    __1 = ldf `[` in base;
    r16 = dyn __1(inds3, 1);
    goto L4(i16, r16);
  L112():
    p6 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      t = ldf t;
      p5 = prom<V +>{
        out2 = ld out;
        out3 = force? out2;
        checkMissing(out3);
        return out3;
      };
      r65 = dyn t(p5);
      r66 = `+`(out1, r65);
      return r66;
    };
    r68 = dyn as_dist(p6);
    check L113() else D31();
  D31():
    deopt 130 [r68];
  L5():
    ilist = ld ilist;
    check L56() else D13();
  L7(i25, r20):
    st ids1 = r20;
    inds12 = ld inds;
    check L64() else D15();
  L49():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L4(i12, dx8);
  L50():
    inds4 = ld inds;
    check L51() else D12();
  L113():
    popenv;
    return r68;
  D12():
    deopt 52 [i18, inds4];
  D13():
    deopt 58 [i18, ilist];
  D15():
    deopt 67 [i25, inds12];
  L51():
    inds5 = force? inds4;
    checkMissing(inds5);
    c6 = `is.object`(inds5);
    if c6 then L52() else L53(i18, inds5);
  L56():
    ilist1 = force? ilist;
    checkMissing(ilist1);
    c7 = `is.object`(ilist1);
    if c7 then L57() else L58(i18, ilist1);
  L64():
    inds13 = force? inds12;
    checkMissing(inds13);
    c9 = `is.object`(inds13);
    if c9 then L65() else L66(i25, inds13);
  L6(i24, dx11):
    r19 = `-`(<missing>, dx11);
    goto L7(i24, r19);
  L9(i36, dx16):
    r24 = `<`(dx16, 0);
    c10 = `as.logical`(r24);
    if c10 then L68() else L10();
  L52():
    dr8 = tryDispatchBuiltin.1("[", inds5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L54() else L53(i18, dr8);
  L53(i22, inds7):
    __2 = ldf `[` in base;
    r18 = dyn __2(inds7, 1);
    goto L6(i22, r18);
  L57():
    dr10 = tryDispatchBuiltin.1("[[", ilist1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L59() else L58(i18, dr10);
  L58(i27, ilist3):
    inds8 = ld inds;
    check L60() else D14();
  L65():
    dr14 = tryDispatchBuiltin.1("[", inds13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L67() else L66(i25, dr14);
  L66(i34, inds15):
    __5 = ldf `[` in base;
    r23 = dyn __5(inds15, 2);
    goto L9(i34, r23);
  D14():
    deopt 60 [i27, ilist3, inds8];
  L10():
    ilist8 = ld ilist;
    check L74() else D17();
  L12(i43, r27):
    st ids2 = r27;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L82() else L83();
  L54():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L6(i18, dx10);
  L59():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L7(i18, dx12);
  L60():
    inds9 = force? inds8;
    checkMissing(inds9);
    c8 = `is.object`(inds9);
    if c8 then L61() else L62(i27, ilist3, inds9);
  L67():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L9(i25, dx15);
  L68():
    inds16 = ld inds;
    check L69() else D16();
  D16():
    deopt 74 [i36, inds16];
  D17():
    deopt 80 [i36, ilist8];
  L8(i32, ilist7, dx14):
    __4 = ldf `[[` in base;
    r22 = dyn __4(ilist7, dx14);
    goto L7(i32, r22);
  L14(i53, r31):
    l1 = ld ilist;
    c15 = `is.object`(l1);
    if c15 then L87() else L88(i53, r31, l1);
  L61():
    dr12 = tryDispatchBuiltin.1("[", inds9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L63() else L62(i27, ilist3, dr12);
  L62(i30, ilist5, inds11):
    __3 = ldf `[` in base;
    r21 = dyn __3(inds11, 1);
    goto L8(i30, ilist5, r21);
  L69():
    inds17 = force? inds16;
    checkMissing(inds17);
    c11 = `is.object`(inds17);
    if c11 then L70() else L71(i36, inds17);
  L74():
    ilist9 = force? ilist8;
    checkMissing(ilist9);
    c12 = `is.object`(ilist9);
    if c12 then L75() else L76(i36, ilist9);
  L82():
    ids1 = ld ids1;
    check L84() else D19();
  L83():
    r30 = dyn base2(<sym ids1>, <sym ids2>);
    goto L14(i43, r30);
  D19():
    deopt 91 [i43, ids1];
  L11(i42, dx18):
    r26 = `-`(<missing>, dx18);
    goto L12(i42, r26);
  L15(i57, dx23):
    st ilist = dx23;
    x12 = ld x;
    check L91() else D23();
  L63():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L8(i27, ilist3, dx13);
  L70():
    dr16 = tryDispatchBuiltin.1("[", inds17);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L72() else L71(i36, dr16);
  L71(i40, inds19):
    __6 = ldf `[` in base;
    r25 = dyn __6(inds19, 2);
    goto L11(i40, r25);
  L75():
    dr18 = tryDispatchBuiltin.1("[[", ilist9);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L77() else L76(i36, dr18);
  L76(i45, ilist11):
    inds20 = ld inds;
    check L78() else D18();
  L84():
    ids2 = force? ids1;
    checkMissing(ids2);
    ids3 = ld ids2;
    check L85() else D20();
  L87():
    dr22 = tryDispatchBuiltin.0("[[<-", l1, r31);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L89() else L88(i53, r31, dr22);
  L88(i55, r34, l3):
    i58 = ld i;
    check L90() else D22();
  D18():
    deopt 82 [i45, ilist11, inds20];
  D20():
    deopt 93 [i43, ids3];
  D22():
    deopt 98 [i55, r34, l3, r31, i58];
  D23():
    deopt 102 [i57, x12];
  L72():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L11(i36, dx17);
  L77():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L12(i36, dx19);
  L78():
    inds21 = force? inds20;
    checkMissing(inds21);
    c13 = `is.object`(inds21);
    if c13 then L79() else L80(i45, ilist11, inds21);
  L85():
    ids4 = force? ids3;
    checkMissing(ids4);
    c14 = ldf c in base;
    r32 = dyn c14(ids2, ids4);
    check L86() else D21();
  L89():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L15(i53, dx22);
  L90():
    i59 = force? i58;
    ____ = ldf `[[<-` in base;
    r37 = dyn ____(l3, r31, i59);
    goto L15(i55, r37);
  L91():
    x13 = force? x12;
    checkMissing(x13);
    c16 = `is.object`(x13);
    if c16 then L93() else L94(i57, x13);
  D21():
    deopt 96 [i43, r32];
  L13(i50, ilist15, dx21):
    __8 = ldf `[[` in base;
    r29 = dyn __8(ilist15, dx21);
    goto L12(i50, r29);
  L79():
    dr20 = tryDispatchBuiltin.1("[", inds21);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L81() else L80(i45, ilist11, dr20);
  L80(i48, ilist13, inds23):
    __7 = ldf `[` in base;
    r28 = dyn __7(inds23, 2);
    goto L13(i48, ilist13, r28);
  L86():
    goto L14(i43, r32);
  L92(i63, dx25):
    c17 = `is.object`(dx25);
    if c17 then L96() else L97(i63, dx25);
  L93():
    dr24 = tryDispatchBuiltin.1("$", x13);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L95() else L94(i57, dr24);
  L94(i61, x15):
    r38 = `$`(x15, <sym height>);
    goto L92(i61, r38);
  L16(i67, dx29):
    l4 = ld out;
    c18 = `is.object`(l4);
    if c18 then L100() else L101(i67, dx29, l4);
  L81():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L13(i45, ilist11, dx20);
  L95():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L92(i57, dx24);
  L96():
    dr26 = tryDispatchBuiltin.1("[", dx25);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L98() else L97(i63, dr26);
  L97(i65, dx27):
    i68 = ld i;
    check L99() else D24();
  D24():
    deopt 105 [i65, dx27, i68];
  L17(i73, dx35):
    st out = dx35;
    goto L2(i73);
  L98():
    dx28 = getTryDispatchBuiltinValue(dr26);
    goto L16(i63, dx28);
  L99():
    i69 = force? i68;
    __9 = ldf `[` in base;
    r39 = dyn __9(dx27, i69);
    goto L16(i65, r39);
  L100():
    dr28 = tryDispatchBuiltin.0("[<-", l4, dx29);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L102() else L101(i67, dx29, dr28);
  L101(i71, dx31, l6):
    cbind = ldf cbind;
    check L103() else D25();
  D25():
    deopt 110 [i71, dx31, l6, dx29];
  L102():
    dx33 = getTryDispatchBuiltinValue(dr28);
    goto L17(i67, dx33);
  L103():
    p3 = prom<V +>{
      sym3 = ldf `rep.int`;
      base3 = ldf `rep.int` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L4() else L5();
    L0(r41):
      return r41;
    L4():
      ids5 = ld ids1;
      ids6 = force? ids5;
      checkMissing(ids6);
      sym4 = ldf `rep.int`;
      base4 = ldf `rep.int` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L6() else L7();
    L5():
      r40 = dyn base3(<sym ids1>, <lang rep.int(length(ids2), length(ids1))>);
      goto L0(r40);
    L1(r43):
      rep_int1 = ldf `rep.int` in base;
      r51 = dyn rep_int1(ids6, r43);
      goto L0(r51);
    L6():
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L8() else L9();
    L7():
      r42 = dyn base4(<lang length(ids2)>, <lang length(ids1)>);
      goto L1(r42);
    L2(r45):
      sym6 = ldf length;
      base6 = ldf length in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L10() else L11();
    L8():
      ids7 = ld ids2;
      ids8 = force? ids7;
      checkMissing(ids8);
      length1 = ldf length in base;
      r46 = dyn length1(ids8);
      goto L2(r46);
    L9():
      r44 = dyn base5(<sym ids2>);
      goto L2(r44);
    L3(r48):
      rep_int = ldf `rep.int` in base;
      r50 = dyn rep_int(r45, r48);
      goto L1(r50);
    L10():
      ids9 = ld ids1;
      ids10 = force? ids9;
      checkMissing(ids10);
      length2 = ldf length in base;
      r49 = dyn length2(ids10);
      goto L3(r49);
    L11():
      r47 = dyn base6(<sym ids1>);
      goto L3(r47);
    };
    p4 = prom<V +>{
      sym7 = ldf `rep.int`;
      base7 = ldf `rep.int` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r54):
      return r54;
    L2():
      ids11 = ld ids2;
      ids12 = force? ids11;
      checkMissing(ids12);
      sym8 = ldf length;
      base8 = ldf length in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L3():
      r53 = dyn base7(<sym ids2>, <lang length(ids1)>);
      goto L0(r53);
    L1(r56):
      rep_int2 = ldf `rep.int` in base;
      r58 = dyn rep_int2(ids12, r56);
      goto L0(r58);
    L4():
      ids13 = ld ids1;
      ids14 = force? ids13;
      checkMissing(ids14);
      length3 = ldf length in base;
      r57 = dyn length3(ids14);
      goto L1(r57);
    L5():
      r55 = dyn base8(<sym ids1>);
      goto L1(r55);
    };
    r60 = dyn cbind(p3, p4);
    check L104() else D26();
  D26():
    deopt 113 [i71, dx31, l6, dx29, r60];
  L104():
    ___ = ldf `[<-` in base;
    r61 = dyn ___(l6, dx29, r60);
    goto L17(i71, r61);
  }
}