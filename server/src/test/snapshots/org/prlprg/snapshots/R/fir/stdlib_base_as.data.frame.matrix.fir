fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1716100263;
    st `as.data.frame.matrix` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1716100263(x, `row.names`, optional, `make.names`, `...`, stringsAsFactors) {
  (reg x:*, reg row_names:*, reg optional:*, reg make_names:*, reg ddd:dots, reg stringsAsFactors:*) -+> V { var x:*, var `row.names`:*, reg row_names_isMissing:L, reg row_names_orDefault:*, var optional:*, reg optional_isMissing:L, reg optional_orDefault:*, var `make.names`:*, reg make_names_isMissing:L, reg make_names_orDefault:*, var `...`:dots?, var stringsAsFactors:*, reg stringsAsFactors_isMissing:L, reg stringsAsFactors_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg dim:cls, reg r2:V, reg d:*, reg d1:V, reg c:L, reg d3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r3:V, reg d4:*, reg d5:V, reg c1:L, reg d7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg ncols:*, reg ncols1:V, reg r7:I, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x3:*, reg x4:V, reg dimnames:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg row_names1:*, reg row_names2:V, reg c2:V, reg c3:L, reg dn:*, reg dn1:V, reg c4:L, reg dn3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r13:V, reg dn4:*, reg dn5:V, reg c5:L, reg dn7:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg __3:cls, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r17:V, reg r18:V, reg collabs:*, reg collabs1:V, reg nzchar:cls, reg r19:V, reg r20:V, reg any:cls, reg r21:V, reg c6:L, reg paste0:cls, reg ic:*, reg ic1:V, reg p:p(V +), reg r23:V, reg c7:L, reg r25:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg empty:*, reg empty1:V, reg __4:cls, reg r26:V, reg l:*, reg c8:L, reg dx12:V, reg l2:*, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg dx16:V, reg empty2:*, reg empty3:V, reg ___:cls, reg r27:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg ncols2:*, reg ncols3:V, reg vector:cls, reg r30:V, reg mode:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r32:V, reg r33:V, reg c9:L, reg c11:V, reg stringsAsFactors1:*, reg stringsAsFactors2:V, reg c12:L, reg c13:V, reg c15:L, reg ic2:*, reg ic3:V, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c16:L, reg x7:V, reg as_factor:cls, reg x8:*, reg x9:V, reg c17:L, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg i5:*, reg i6:V, reg __5:cls, reg r34:V, reg p2:p(V +), reg r36:V, reg l4:*, reg c18:L, reg i8:I, reg r38:V, reg l6:*, reg dr14:V, reg dc7:L, reg dx20:V, reg i10:I, reg dx21:V, reg i11:*, reg i12:V, reg ____:cls, reg r41:V, reg ic4:*, reg ic5:V, reg s1:V, reg l7:I, reg i14:I, reg i15:I, reg i16:I, reg c19:L, reg x12:V, reg as_vector:cls, reg x13:*, reg x14:V, reg c20:L, reg dr16:V, reg dc8:L, reg dx22:V, reg dx23:V, reg i19:*, reg i20:V, reg __6:cls, reg r42:V, reg p3:p(V +), reg r44:V, reg l8:*, reg c21:L, reg i22:I, reg r46:V, reg l10:*, reg dr18:V, reg dc9:L, reg dx24:V, reg i24:I, reg dx25:V, reg i25:*, reg i26:V, reg ____1:cls, reg r49:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg r51:V, reg row_names3:*, reg row_names4:V, reg c22:V, reg c23:L, reg c24:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r52:V, reg c28:L, reg r53:V, reg row_names5:*, reg row_names6:V, reg length:cls, reg r54:V, reg nrows:*, reg nrows1:V, reg r55:V, reg c29:L, reg c30:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r56:V, reg r57:V, reg collabs2:*, reg collabs3:V, reg length1:cls, reg r58:V, reg ncols4:*, reg ncols5:V, reg r59:V, reg c32:L, reg ____2:cls, reg collabs4:*, reg collabs5:V, reg p4:p(V +), reg character:cls, reg r61:V, reg p5:p(V +), reg r63:V, reg l11:*, reg names__:cls, reg r64:V, reg optional1:*, reg optional2:V, reg r66:V, reg c33:L, reg paste1:cls, reg ic6:*, reg ic7:V, reg p6:p(V +), reg r68:V, reg l12:*, reg names__1:cls, reg r69:V, reg l13:*, reg class__:cls, reg r70:V, reg autoRN:*, reg autoRN1:V, reg c34:L, reg _set_row_names:cls, reg nrows2:*, reg nrows3:V, reg p7:p(V +), reg r72:V, reg l14:*, reg attr__:cls, reg r73:V, reg row_names7:*, reg row_names8:V, reg l15:*, reg _rowNamesDF__:cls, reg make_names1:*, reg make_names2:V, reg p8:p(V +), reg r76:V, reg value:*, reg value1:V |
    mkenv;
    st x = x;
    row_names_isMissing = missing.0(row_names);
    if row_names_isMissing then L0(NULL) else L0(row_names);
  L0(row_names_orDefault):
    st `row.names` = row_names_orDefault;
    optional_isMissing = missing.0(optional);
    if optional_isMissing then L1(FALSE) else L1(optional);
  L1(optional_orDefault):
    st optional = optional_orDefault;
    make_names_isMissing = missing.0(make_names);
    if make_names_isMissing then L2(TRUE) else L2(make_names);
  L2(make_names_orDefault):
    st `make.names` = make_names_orDefault;
    st `...` = ddd;
    stringsAsFactors_isMissing = missing.0(stringsAsFactors);
    if stringsAsFactors_isMissing then L3(FALSE) else L3(stringsAsFactors);
  L3(stringsAsFactors_orDefault):
    st stringsAsFactors = stringsAsFactors_orDefault;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L39() else L40();
  L4(r1):
    st d = r1;
    d = ld d;
    check L43() else D2();
  L39():
    x1 = ld x;
    check L41() else D0();
  L40():
    r = dyn base(<sym x>);
    goto L4(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 7 [d];
  L41():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r2 = dyn dim(x2);
    check L42() else D1();
  L43():
    d1 = force? d;
    checkMissing(d1);
    c = `is.object`(d1);
    if c then L44() else L45(d1);
  D1():
    deopt 5 [r2];
  L5(dx1):
    st nrows = dx1;
    d4 = ld d;
    check L47() else D3();
  L42():
    goto L4(r2);
  L44():
    dr = tryDispatchBuiltin.1("[[", d1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L46() else L45(dr);
  L45(d3):
    __ = ldf `[[` in base;
    r3 = dyn __(d3, 1);
    goto L5(r3);
  D3():
    deopt 13 [d4];
  L46():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L47():
    d5 = force? d4;
    checkMissing(d5);
    c1 = `is.object`(d5);
    if c1 then L48() else L49(d5);
  L6(dx3):
    st ncols = dx3;
    sym1 = ldf seq_len;
    base1 = ldf seq_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L51() else L52();
  L48():
    dr2 = tryDispatchBuiltin.1("[[", d5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L50() else L49(dr2);
  L49(d7):
    __1 = ldf `[[` in base;
    r4 = dyn __1(d7, 2);
    goto L6(r4);
  L7(r6):
    st ic = r6;
    sym2 = ldf dimnames;
    base2 = ldf dimnames in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L54() else L55();
  L50():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L51():
    ncols = ld ncols;
    check L53() else D4();
  L52():
    r5 = dyn base1(<sym ncols>);
    goto L7(r5);
  D4():
    deopt 20 [ncols];
  L8(r9):
    st dn = r9;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L58() else L59();
  L53():
    ncols1 = force? ncols;
    checkMissing(ncols1);
    r7 = seq_len(ncols1);
    goto L7(r7);
  L54():
    x3 = ld x;
    check L56() else D5();
  L55():
    r8 = dyn base2(<sym x>);
    goto L8(r8);
  D5():
    deopt 26 [x3];
  L9(r12):
    c3 = `as.logical`(r12);
    if c3 then L61() else L10();
  L56():
    x4 = force? x3;
    checkMissing(x4);
    dimnames = ldf dimnames in base;
    r10 = dyn dimnames(x4);
    check L57() else D6();
  L58():
    row_names1 = ld `row.names`;
    check L60() else D7();
  L59():
    r11 = dyn base3(<sym row.names>);
    goto L9(r11);
  D6():
    deopt 29 [r10];
  D7():
    deopt 32 [row_names1];
  L10():
    goto L12();
  L12():
    dn4 = ld dn;
    check L67() else D9();
  L57():
    goto L8(r10);
  L60():
    row_names2 = force? row_names1;
    checkMissing(row_names2);
    c2 = `==`(row_names2, NULL);
    goto L9(c2);
  L61():
    dn = ld dn;
    check L62() else D8();
  D8():
    deopt 35 [dn];
  D9():
    deopt 43 [dn4];
  L62():
    dn1 = force? dn;
    checkMissing(dn1);
    c4 = `is.object`(dn1);
    if c4 then L63() else L64(dn1);
  L67():
    dn5 = force? dn4;
    checkMissing(dn5);
    c5 = `is.object`(dn5);
    if c5 then L68() else L69(dn5);
  L11(dx5):
    st `row.names` = dx5;
    goto L12();
  L13(dx8):
    st collabs = dx8;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L71() else L72();
  L63():
    dr4 = tryDispatchBuiltin.1("[[", dn1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L65() else L64(dr4);
  L64(dn3):
    __2 = ldf `[[` in base;
    r13 = dyn __2(dn3, 1);
    goto L11(r13);
  L68():
    dr6 = tryDispatchBuiltin.1("[[", dn5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L70() else L69(dr6);
  L69(dn7):
    __3 = ldf `[[` in base;
    r14 = dyn __3(dn7, 2);
    goto L13(r14);
  L14(r16):
    c6 = `as.logical`(r16);
    if c6 then L78() else L16();
  L65():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(dx4);
  L70():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L13(dx7);
  L71():
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L73() else L74();
  L72():
    r15 = dyn base4(<lang `<-`(empty, `!`(nzchar(collabs)))>);
    goto L14(r15);
  L15(r18):
    r20 = `!`(r18);
    st empty = r20;
    any = ldf any in base;
    r21 = dyn any(r20);
    check L77() else D12();
  L16():
    goto L19();
  L19():
    sym6 = ldf vector;
    base6 = ldf vector in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L90() else L91();
  L73():
    collabs = ld collabs;
    check L75() else D10();
  L74():
    r17 = dyn base5(<sym collabs>);
    goto L15(r17);
  L78():
    paste0 = ldf paste0;
    check L79() else D13();
  D10():
    deopt 53 [collabs];
  D12():
    deopt 60 [r21];
  D13():
    deopt 62 [];
  L20(r29):
    st value = r29;
    mode = ldf mode;
    check L94() else D19();
  L75():
    collabs1 = force? collabs;
    checkMissing(collabs1);
    nzchar = ldf nzchar in base;
    r19 = dyn nzchar(collabs1);
    check L76() else D11();
  L77():
    goto L14(r21);
  L79():
    p = prom<V +>{
      ic = ld ic;
      ic1 = force? ic;
      checkMissing(ic1);
      return ic1;
    };
    r23 = dyn paste0("V", p);
    check L80() else D14();
  L90():
    ncols2 = ld ncols;
    check L92() else D17();
  L91():
    r28 = dyn base6("list", <sym ncols>);
    goto L20(r28);
  D11():
    deopt 56 [r19];
  D14():
    deopt 65 [r23];
  D17():
    deopt 79 [ncols2];
  D19():
    deopt 85 [];
  L76():
    goto L15(r19);
  L80():
    c7 = `is.object`(r23);
    if c7 then L81() else L82(r23);
  L92():
    ncols3 = force? ncols2;
    checkMissing(ncols3);
    vector = ldf vector in base;
    r30 = dyn vector("list", ncols3);
    check L93() else D18();
  L94():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r32 = dyn mode(p1);
    check L95() else D20();
  D18():
    deopt 82 [r30];
  D20():
    deopt 87 [r32];
  L17(dx10):
    l = ld collabs;
    c8 = `is.object`(l);
    if c8 then L85() else L86(dx10, l);
  L81():
    dr8 = tryDispatchBuiltin.1("[", r23);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L83() else L82(dr8);
  L82(r25):
    empty = ld empty;
    check L84() else D15();
  L93():
    goto L20(r30);
  L95():
    r33 = `==`(r32, "character");
    c9 = `as.logical`(r33);
    if c9 then L96() else L21(c9);
  D15():
    deopt 66 [r25, empty];
  L18(dx15, dx16):
    st collabs = dx16;
    goto L19();
  L21(c11):
    c15 = `as.logical`(c11);
    if c15 then L99() else L22();
  L83():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L17(dx9);
  L84():
    empty1 = force? empty;
    __4 = ldf `[` in base;
    r26 = dyn __4(r25, empty1);
    goto L17(r26);
  L85():
    dr10 = tryDispatchBuiltin.0("[<-", l, dx10);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L87() else L86(dx10, dr10);
  L86(dx12, l2):
    empty2 = ld empty;
    check L88() else D16();
  L96():
    stringsAsFactors1 = ld stringsAsFactors;
    check L97() else D21();
  D16():
    deopt 70 [dx12, l2, dx10, empty2];
  D21():
    deopt 90 [c9, stringsAsFactors1];
  L22():
    ic4 = ld ic;
    check L109() else D26();
  L26():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L117() else L118();
  L87():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L18(dx10, dx14);
  L88():
    empty3 = force? empty2;
    ___ = ldf `[<-` in base;
    r27 = dyn ___(l2, dx10, empty3);
    goto L18(dx12, r27);
  L97():
    stringsAsFactors2 = force? stringsAsFactors1;
    checkMissing(stringsAsFactors2);
    c12 = `as.logical`(stringsAsFactors2);
    c13 = `&&`(c9, c12);
    goto L21(c13);
  L99():
    ic2 = ld ic;
    check L100() else D22();
  D22():
    deopt 93 [ic2];
  D26():
    deopt 107 [ic4];
  L30(r51):
    c23 = `as.logical`(r51);
    if c23 then L31(c23) else L120();
  L100():
    ic3 = force? ic2;
    checkMissing(ic3);
    s = toForSeq(ic3);
    l3 = length(s);
    i = 0;
    goto L23(i);
  L109():
    ic5 = force? ic4;
    checkMissing(ic5);
    s1 = toForSeq(ic5);
    l7 = length(s1);
    i14 = 0;
    goto L27(i14);
  L117():
    row_names3 = ld `row.names`;
    check L119() else D30();
  L118():
    r50 = dyn base7(<sym row.names>);
    goto L30(r50);
  D30():
    deopt 122 [row_names3];
  L23(i1):
    i2 = `+`.1(i1, 1);
    c16 = `<`.1(l3, i2);
    if c16 then L101() else L25();
  L27(i15):
    i16 = `+`.1(i15, 1);
    c19 = `<`.1(l7, i16);
    if c19 then L110() else L29();
  L31(c24):
    st autoRN = c24;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L127() else L128();
  L119():
    row_names4 = force? row_names3;
    checkMissing(row_names4);
    c22 = `==`(row_names4, NULL);
    goto L30(c22);
  L120():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L121() else L122();
  L25():
    x7 = `[[`(s, i2, NULL, TRUE);
    st i = x7;
    as_factor = ldf `as.factor`;
    check L102() else D23();
  L29():
    x12 = `[[`(s1, i16, NULL, TRUE);
    st i = x12;
    as_vector = ldf `as.vector`;
    check L111() else D27();
  L32(c28, r53):
    nrows = ld nrows;
    check L125() else D33();
  L33(r57):
    ncols4 = ld ncols;
    check L131() else D36();
  L101():
    goto L26();
  L110():
    goto L26();
  L121():
    row_names5 = ld `row.names`;
    check L123() else D31();
  L122():
    r52 = dyn base8(<sym row.names>);
    goto L32(c23, r52);
  L127():
    collabs2 = ld collabs;
    check L129() else D34();
  L128():
    r56 = dyn base9(<sym collabs>);
    goto L33(r56);
  D23():
    deopt 96 [i2];
  D27():
    deopt 110 [i16];
  D31():
    deopt 127 [c23, row_names5];
  D33():
    deopt 130 [c28, r53, nrows];
  D34():
    deopt 137 [collabs2];
  D36():
    deopt 140 [r57, ncols4];
  L102():
    p2 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      c17 = `is.object`(x9);
      if c17 then L1() else L2();
    L0(dx19):
      return dx19;
    L1():
      dr12 = tryDispatchBuiltin.1("[", x9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      i5 = ld i;
      i6 = force? i5;
      __5 = ldf `[` in base;
      r34 = dyn __5(x9, <missing>, i6);
      goto L0(r34);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx18);
    };
    r36 = dyn as_factor(p2);
    check L103() else D24();
  L111():
    p3 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c20 = `is.object`(x14);
      if c20 then L1() else L2();
    L0(dx23):
      return dx23;
    L1():
      dr16 = tryDispatchBuiltin.1("[", x14);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2();
    L2():
      i19 = ld i;
      i20 = force? i19;
      __6 = ldf `[` in base;
      r42 = dyn __6(x14, <missing>, i20);
      goto L0(r42);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx22);
    };
    r44 = dyn as_vector(p3);
    check L112() else D28();
  L123():
    row_names6 = force? row_names5;
    checkMissing(row_names6);
    length = ldf length in base;
    r54 = dyn length(row_names6);
    check L124() else D32();
  L125():
    nrows1 = force? nrows;
    checkMissing(nrows1);
    r55 = `!=`(r53, nrows1);
    c29 = `as.logical`(r55);
    c30 = `||`(c28, c29);
    goto L31(c30);
  L129():
    collabs3 = force? collabs2;
    checkMissing(collabs3);
    length1 = ldf length in base;
    r58 = dyn length1(collabs3);
    check L130() else D35();
  L131():
    ncols5 = force? ncols4;
    checkMissing(ncols5);
    r59 = `==`(r57, ncols5);
    c32 = `as.logical`(r59);
    if c32 then L132() else L34();
  D24():
    deopt 98 [i2, r36];
  D28():
    deopt 112 [i16, r44];
  D32():
    deopt 130 [c23, r54];
  D35():
    deopt 140 [r58];
  L34():
    optional1 = ld optional;
    check L138() else D41();
  L35():
    l13 = ld value;
    class__ = ldf `class<-`;
    check L145() else D46();
  L103():
    l4 = ld value;
    c18 = `is.object`(l4);
    if c18 then L104() else L105(i2, r36, l4);
  L112():
    l8 = ld value;
    c21 = `is.object`(l8);
    if c21 then L113() else L114(i16, r44, l8);
  L124():
    goto L32(c23, r54);
  L130():
    goto L33(r58);
  L132():
    ____2 = ldf `%||%`;
    check L133() else D37();
  D37():
    deopt 144 [];
  D41():
    deopt 153 [optional1];
  D46():
    deopt 171 ["data.frame", l13, "data.frame"];
  L24(i10, dx21):
    st value = dx21;
    goto L23(i10);
  L28(i24, dx25):
    st value = dx25;
    goto L27(i24);
  L104():
    dr14 = tryDispatchBuiltin.0("[[<-", l4, r36);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L106() else L105(i2, r36, dr14);
  L105(i8, r38, l6):
    i11 = ld i;
    check L107() else D25();
  L113():
    dr18 = tryDispatchBuiltin.0("[[<-", l8, r44);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L115() else L114(i16, r44, dr18);
  L114(i22, r46, l10):
    i25 = ld i;
    check L116() else D29();
  L133():
    p4 = prom<V +>{
      collabs4 = ld collabs;
      collabs5 = force? collabs4;
      checkMissing(collabs5);
      return collabs5;
    };
    p5 = prom<V +>{
      character = ldf character;
      r61 = dyn character();
      return r61;
    };
    r63 = dyn ____2(p4, p5);
    check L134() else D38();
  L138():
    optional2 = force? optional1;
    checkMissing(optional2);
    r66 = `!`(optional2);
    c33 = `as.logical`(r66);
    if c33 then L139() else L36();
  L145():
    r70 = dyn class__(l13, NULL, "data.frame");
    check L146() else D47();
  D25():
    deopt 100 [i8, r38, l6, r36, i11];
  D29():
    deopt 114 [i22, r46, l10, r44, i25];
  D38():
    deopt 147 [r63];
  D47():
    deopt 173 ["data.frame", r70];
  L36():
    goto L35();
  L106():
    dx20 = getTryDispatchBuiltinValue(dr14);
    goto L24(i2, dx20);
  L107():
    i12 = force? i11;
    ____ = ldf `[[<-` in base;
    r41 = dyn ____(l6, r36, i12);
    goto L24(i8, r41);
  L115():
    dx24 = getTryDispatchBuiltinValue(dr18);
    goto L28(i16, dx24);
  L116():
    i26 = force? i25;
    ____1 = ldf `[[<-` in base;
    r49 = dyn ____1(l10, r44, i26);
    goto L28(i22, r49);
  L134():
    l11 = ld value;
    names__ = ldf `names<-`;
    check L135() else D39();
  L139():
    paste1 = ldf paste0;
    check L140() else D42();
  L146():
    st value = r70;
    autoRN = ld autoRN;
    check L147() else D48();
  D39():
    deopt 149 [r63, l11, r63];
  D42():
    deopt 157 [];
  D48():
    deopt 175 [autoRN];
  L135():
    r64 = dyn names__(l11, NULL, r63);
    check L136() else D40();
  L140():
    p6 = prom<V +>{
      ic6 = ld ic;
      ic7 = force? ic6;
      checkMissing(ic7);
      return ic7;
    };
    r68 = dyn paste1("V", p6);
    check L141() else D43();
  L147():
    autoRN1 = force? autoRN;
    checkMissing(autoRN1);
    c34 = `as.logical`(autoRN1);
    if c34 then L148() else L37();
  D40():
    deopt 151 [r63, r64];
  D43():
    deopt 160 [r68];
  L37():
    row_names7 = ld `row.names`;
    check L154() else D53();
  L38():
    value = ld value;
    check L157() else D56();
  L136():
    st value = r64;
    goto L35();
  L141():
    l12 = ld value;
    names__1 = ldf `names<-`;
    check L142() else D44();
  L148():
    _set_row_names = ldf `.set_row_names`;
    check L149() else D49();
  D44():
    deopt 162 [r68, l12, r68];
  D49():
    deopt 178 [];
  D53():
    deopt 187 [row_names7];
  D56():
    deopt 196 [value];
  L142():
    r69 = dyn names__1(l12, NULL, r68);
    check L143() else D45();
  L149():
    p7 = prom<V +>{
      nrows2 = ld nrows;
      nrows3 = force? nrows2;
      checkMissing(nrows3);
      return nrows3;
    };
    r72 = dyn _set_row_names(p7);
    check L150() else D50();
  L154():
    row_names8 = force? row_names7;
    checkMissing(row_names8);
    l15 = ld value;
    _rowNamesDF__ = ldf `.rowNamesDF<-`;
    check L155() else D54();
  L157():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  D45():
    deopt 164 [r68, r69];
  D50():
    deopt 180 [r72];
  D54():
    deopt 190 [row_names8, l15, row_names8];
  L143():
    st value = r69;
    goto L35();
  L150():
    l14 = ld value;
    attr__ = ldf `attr<-`;
    check L151() else D51();
  L155():
    p8 = prom<V +>{
      make_names1 = ld `make.names`;
      make_names2 = force? make_names1;
      checkMissing(make_names2);
      return make_names2;
    };
    r76 = dyn _rowNamesDF__[, , `make.names`, ](l15, NULL, p8, row_names8);
    check L156() else D55();
  D51():
    deopt 182 [r72, l14, r72];
  D55():
    deopt 194 [row_names8, r76];
  L151():
    r73 = dyn attr__(l14, NULL, "row.names", r72);
    check L152() else D52();
  L156():
    st value = r76;
    goto L38();
  D52():
    deopt 185 [r72, r73];
  L152():
    st value = r73;
    goto L38();
  }
}