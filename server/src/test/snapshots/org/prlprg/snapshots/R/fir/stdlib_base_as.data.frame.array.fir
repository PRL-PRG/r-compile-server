fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3069603236;
    st `as.data.frame.array` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner3069603236(x, `row.names`, optional, `...`) {
  (reg x:*, reg row_names:*, reg optional:*, reg ddd:dots) -+> V { var x:*, var `row.names`:*, reg row_names_isMissing:L, reg row_names_orDefault:*, var optional:*, reg optional_isMissing:L, reg optional_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg dim:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg d:*, reg d1:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg as_data_frame_vector:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg c1:cls, reg r9:V, reg p:p(V +), reg row_names1:*, reg row_names2:V, reg p1:p(V +), reg optional1:*, reg optional2:V, reg p2:p(V +), reg ddd1:dots?, reg r13:V, reg optional3:*, reg optional4:V, reg r14:V, reg c2:L, reg deparse:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg substitute:cls, reg r17:V, reg p3:p(V +), reg r19:V, reg c3:L, reg r21:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r22:V, reg l:*, reg names__:cls, reg r23:V, reg value:*, reg value1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg d2:*, reg d3:V, reg length1:cls, reg r26:V, reg r27:V, reg c4:L, reg as_data_frame_matrix:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg row_names3:*, reg row_names4:V, reg p5:p(V +), reg optional5:*, reg optional6:V, reg p6:p(V +), reg ddd2:dots?, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg x7:*, reg x8:V, reg dimnames:cls, reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg d4:*, reg d5:V, reg c5:L, reg d7:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg __1:cls, reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg d8:*, reg d9:V, reg c6:L, reg d11:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __2:cls, reg r40:V, reg prod:cls, reg r41:V, reg c7:cls, reg r42:V, reg l1:*, reg dim__:cls, reg r43:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg dn:*, reg dn1:V, reg c8:V, reg r46:V, reg c9:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r47:V, reg r48:V, reg dn2:*, reg dn3:V, reg c10:L, reg dn5:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg __3:cls, reg r49:V, reg length2:cls, reg r50:V, reg c11:L, reg dn6:*, reg dn7:V, reg c12:L, reg dn9:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg __4:cls, reg r51:V, reg l2:*, reg rownames__:cls, reg r52:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r55:V, reg r56:I, reg r57:V, reg d12:*, reg d13:V, reg length3:cls, reg r58:V, reg r59:V, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c13:L, reg x9:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r60:V, reg i7:I, reg r61:V, reg dn10:*, reg dn11:V, reg c14:L, reg i9:I, reg dn13:V, reg dr10:V, reg dc5:L, reg dx12:V, reg i11:I, reg dx13:V, reg i12:*, reg i13:V, reg __5:cls, reg r62:V, reg c15:V, reg c16:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r63:V, reg i18:I, reg r64:V, reg d14:*, reg d15:V, reg c17:L, reg i20:I, reg d17:V, reg dr12:V, reg dc6:L, reg dx14:V, reg i22:I, reg dx15:V, reg i23:*, reg i24:V, reg __6:cls, reg r65:V, reg r66:I, reg l4:*, reg c18:L, reg i26:I, reg r68:V, reg l6:*, reg dr14:V, reg dc7:L, reg dx16:V, reg i28:I, reg r70:V, reg dx17:V, reg i29:*, reg i30:V, reg ____:cls, reg r71:V, reg i31:I, reg interaction:cls, reg expand_grid:cls, reg dn14:*, reg dn15:V, reg c19:L, reg dn17:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg __7:cls, reg r73:V, reg p7:p(V +), reg r75:V, reg p8:p(V +), reg r77:V, reg l7:*, reg colnames__:cls, reg r78:V, reg as_data_frame_matrix1:cls, reg x10:*, reg x11:V, reg p9:p(V +), reg row_names5:*, reg row_names6:V, reg p10:p(V +), reg optional7:*, reg optional8:V, reg p11:p(V +), reg ddd3:dots?, reg r83:V |
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
    st `...` = ddd;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L33() else L34();
  L2(r1):
    st d = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L33():
    x1 = ld x;
    check L35() else D0();
  L34():
    r = dyn base(<sym x>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L3(r4):
    r6 = `==`(r4, 1);
    c = `as.logical`(r6);
    if c then L41() else L4();
  L35():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r2 = dyn dim(x2);
    check L36() else D1();
  L37():
    d = ld d;
    check L39() else D2();
  L38():
    r3 = dyn base1(<sym d>);
    goto L3(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [d];
  L4():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L36():
    goto L2(r2);
  L39():
    d1 = force? d;
    checkMissing(d1);
    length = ldf length in base;
    r5 = dyn length(d1);
    check L40() else D3();
  L41():
    as_data_frame_vector = ldf `as.data.frame.vector`;
    check L42() else D4();
  D3():
    deopt 12 [r5];
  D4():
    deopt 16 [];
  L8(r25):
    r27 = `==`(r25, 2);
    c4 = `as.logical`(r27);
    if c4 then L60() else L9();
  L40():
    goto L3(r5);
  L42():
    p = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c1 = ldf c in base;
      r9 = dyn c1(x4);
      goto L0(r9);
    L2():
      r7 = dyn base2(<sym x>);
      goto L0(r7);
    };
    p1 = prom<V +>{
      row_names1 = ld `row.names`;
      row_names2 = force? row_names1;
      checkMissing(row_names2);
      return row_names2;
    };
    p2 = prom<V +>{
      optional1 = ld optional;
      optional2 = force? optional1;
      checkMissing(optional2);
      return optional2;
    };
    ddd1 = ld `...`;
    r13 = dyn as_data_frame_vector[, , , `...`](p, p1, p2, ddd1);
    check L43() else D5();
  L56():
    d2 = ld d;
    check L58() else D12();
  L57():
    r24 = dyn base4(<sym d>);
    goto L8(r24);
  D5():
    deopt 21 [r13];
  D12():
    deopt 44 [d2];
  L9():
    sym5 = ldf dimnames;
    base5 = ldf dimnames in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L64() else L65();
  L43():
    st value = r13;
    optional3 = ld optional;
    check L44() else D6();
  L58():
    d3 = force? d2;
    checkMissing(d3);
    length1 = ldf length in base;
    r26 = dyn length1(d3);
    check L59() else D13();
  L60():
    as_data_frame_matrix = ldf `as.data.frame.matrix`;
    check L61() else D14();
  D6():
    deopt 23 [optional3];
  D13():
    deopt 47 [r26];
  D14():
    deopt 51 [];
  L10(r33):
    st dn = r33;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L68() else L69();
  L44():
    optional4 = force? optional3;
    checkMissing(optional4);
    r14 = `!`(optional4);
    c2 = `as.logical`(r14);
    if c2 then L45() else L5();
  L59():
    goto L8(r26);
  L61():
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p5 = prom<V +>{
      row_names3 = ld `row.names`;
      row_names4 = force? row_names3;
      checkMissing(row_names4);
      return row_names4;
    };
    p6 = prom<V +>{
      optional5 = ld optional;
      optional6 = force? optional5;
      checkMissing(optional6);
      return optional6;
    };
    ddd2 = ld `...`;
    r31 = dyn as_data_frame_matrix[, , , `...`](p4, p5, p6, ddd2);
    check L62() else D15();
  L64():
    x7 = ld x;
    check L66() else D16();
  L65():
    r32 = dyn base5(<sym x>);
    goto L10(r32);
  D15():
    deopt 56 [r31];
  D16():
    deopt 59 [x7];
  L5():
    goto L7();
  L7():
    value = ld value;
    check L54() else D11();
  L11(r36):
    l1 = ld x;
    dim__ = ldf `dim<-`;
    check L82() else D22();
  L45():
    deparse = ldf deparse;
    check L46() else D7();
  L62():
    popenv;
    return r31;
  L66():
    x8 = force? x7;
    checkMissing(x8);
    dimnames = ldf dimnames in base;
    r34 = dyn dimnames(x8);
    check L67() else D17();
  L68():
    d4 = ld d;
    check L70() else D18();
  L69():
    r35 = dyn base6(<lang `[`(d, 1)>, <lang prod(`[`(d, `-`(1)))>);
    goto L11(r35);
  D7():
    deopt 27 [];
  D11():
    deopt 40 [value];
  D17():
    deopt 62 [r34];
  D18():
    deopt 66 [d4];
  D22():
    deopt 83 [r36, l1, r36];
  L46():
    p3 = prom<V +>{
      sym3 = ldf substitute;
      base3 = ldf substitute in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      substitute = ldf substitute in base;
      r17 = dyn substitute(<sym x>);
      goto L0(r17);
    L2():
      r15 = dyn base3(<sym x>);
      goto L0(r15);
    };
    r19 = dyn deparse(p3);
    check L47() else D8();
  L54():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  L67():
    goto L10(r34);
  L70():
    d5 = force? d4;
    checkMissing(d5);
    c5 = `is.object`(d5);
    if c5 then L71() else L72(d5);
  L82():
    r43 = dyn dim__(l1, NULL, r36);
    check L83() else D23();
  D8():
    deopt 29 [r19];
  D23():
    deopt 85 [r36, r43];
  L12(dx4):
    sym7 = ldf prod;
    base7 = ldf prod in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L74() else L75();
  L47():
    c3 = `is.object`(r19);
    if c3 then L48() else L49(r19);
  L71():
    dr2 = tryDispatchBuiltin.1("[", d5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L73() else L72(dr2);
  L72(d7):
    __1 = ldf `[` in base;
    r37 = dyn __1(d7, 1);
    goto L12(r37);
  L83():
    st x = r43;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L84() else L85();
  L6(dx1):
    l = ld value;
    names__ = ldf `names<-`;
    check L51() else D9();
  L13(r39):
    c7 = ldf c in base;
    r42 = dyn c7(dx4, r39);
    check L81() else D21();
  L15(r45):
    r46 = `!`(r45);
    c9 = `as.logical`(r46);
    if c9 then L87() else L16();
  L48():
    dr = tryDispatchBuiltin.1("[[", r19);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L50() else L49(dr);
  L49(r21):
    __ = ldf `[[` in base;
    r22 = dyn __(r21, 1);
    goto L6(r22);
  L73():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx3);
  L74():
    d8 = ld d;
    check L76() else D19();
  L75():
    r38 = dyn base7(<lang `[`(d, `-`(1))>);
    goto L13(r38);
  L84():
    dn = ld dn;
    check L86() else D24();
  L85():
    r44 = dyn base8(<sym dn>);
    goto L15(r44);
  D9():
    deopt 34 [dx1, l, dx1];
  D19():
    deopt 73 [d8];
  D21():
    deopt 81 [r42];
  D24():
    deopt 88 [dn];
  L16():
    goto L32();
  L32():
    as_data_frame_matrix1 = ldf `as.data.frame.matrix`;
    check L133() else D41();
  L50():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L51():
    r23 = dyn names__(l, NULL, dx1);
    check L52() else D10();
  L76():
    d9 = force? d8;
    checkMissing(d9);
    c6 = `is.object`(d9);
    if c6 then L77() else L78(d9);
  L81():
    goto L11(r42);
  L86():
    dn1 = force? dn;
    checkMissing(dn1);
    c8 = `==`(dn1, NULL);
    goto L15(c8);
  L87():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L88() else L89();
  D10():
    deopt 36 [dx1, r23];
  D41():
    deopt 157 [];
  L14(dx6):
    prod = ldf prod in base;
    r41 = dyn prod(dx6);
    check L80() else D20();
  L17(r48):
    c11 = `as.logical`(r48);
    if c11 then L95() else L19();
  L52():
    st value = r23;
    goto L7();
  L77():
    dr4 = tryDispatchBuiltin.1("[", d9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L79() else L78(dr4);
  L78(d11):
    __2 = ldf `[` in base;
    r40 = dyn __2(d11, -1);
    goto L14(r40);
  L88():
    dn2 = ld dn;
    check L90() else D25();
  L89():
    r47 = dyn base9(<lang `[[`(dn, 1)>);
    goto L17(r47);
  L133():
    p9 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    p10 = prom<V +>{
      row_names5 = ld `row.names`;
      row_names6 = force? row_names5;
      checkMissing(row_names6);
      return row_names6;
    };
    p11 = prom<V +>{
      optional7 = ld optional;
      optional8 = force? optional7;
      checkMissing(optional8);
      return optional8;
    };
    ddd3 = ld `...`;
    r83 = dyn as_data_frame_matrix1[, , , `...`](p9, p10, p11, ddd3);
    check L134() else D42();
  D20():
    deopt 79 [r41];
  D25():
    deopt 94 [dn2];
  D42():
    deopt 162 [r83];
  L19():
    goto L21();
  L21():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L103() else L104();
  L79():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L14(dx5);
  L80():
    goto L13(r41);
  L90():
    dn3 = force? dn2;
    checkMissing(dn3);
    c10 = `is.object`(dn3);
    if c10 then L91() else L92(dn3);
  L95():
    dn6 = ld dn;
    check L96() else D27();
  L134():
    popenv;
    return r83;
  D27():
    deopt 101 [dn6];
  L18(dx8):
    length2 = ldf length in base;
    r50 = dyn length2(dx8);
    check L94() else D26();
  L22(r56, r57):
    r59 = `:`(r56, r57);
    s = toForSeq(r59);
    l3 = length(s);
    i = 0;
    goto L23(i);
  L91():
    dr6 = tryDispatchBuiltin.1("[[", dn3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L93() else L92(dr6);
  L92(dn5):
    __3 = ldf `[[` in base;
    r49 = dyn __3(dn5, 1);
    goto L18(r49);
  L96():
    dn7 = force? dn6;
    checkMissing(dn7);
    c12 = `is.object`(dn7);
    if c12 then L97() else L98(dn7);
  L103():
    d12 = ld d;
    check L105() else D30();
  L104():
    r55 = dyn base10(<sym d>);
    goto L22(2, r55);
  D26():
    deopt 100 [r50];
  D30():
    deopt 116 [2, d12];
  L20(dx10):
    l2 = ld x;
    rownames__ = ldf `rownames<-`;
    check L100() else D28();
  L23(i1):
    i2 = `+`.1(i1, 1);
    c13 = `<`.1(l3, i2);
    if c13 then L107() else L31();
  L93():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L18(dx7);
  L94():
    goto L17(r50);
  L97():
    dr8 = tryDispatchBuiltin.1("[[", dn7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L99() else L98(dr8);
  L98(dn9):
    __4 = ldf `[[` in base;
    r51 = dyn __4(dn9, 1);
    goto L20(r51);
  L105():
    d13 = force? d12;
    checkMissing(d13);
    length3 = ldf length in base;
    r58 = dyn length3(d13);
    check L106() else D31();
  D28():
    deopt 107 [dx10, l2, dx10];
  D31():
    deopt 119 [2, r58];
  L31():
    x9 = `[[`(s, i2, NULL, TRUE);
    st i = x9;
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L108() else L109();
  L99():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L20(dx9);
  L100():
    r52 = dyn rownames__(l2, NULL, dx10);
    check L101() else D29();
  L106():
    goto L22(2, r58);
  L107():
    interaction = ldf interaction;
    check L128() else D37();
  D29():
    deopt 109 [dx10, r52];
  D37():
    deopt 146 [];
  L24(i7, r61):
    c16 = `as.logical`(r61);
    if c16 then L115() else L26();
  L101():
    st x = r52;
    goto L21();
  L108():
    dn10 = ld dn;
    check L110() else D32();
  L109():
    r60 = dyn base11(<lang `[[`(dn, i)>);
    goto L24(i2, r60);
  L128():
    p8 = prom<V +>{
      expand_grid = ldf `expand.grid`;
      p7 = prom<V +>{
        dn14 = ld dn;
        dn15 = force? dn14;
        checkMissing(dn15);
        c19 = `is.object`(dn15);
        if c19 then L1() else L2(dn15);
      L0(dx19):
        return dx19;
      L1():
        dr16 = tryDispatchBuiltin.1("[", dn15);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(dn17):
        __7 = ldf `[` in base;
        r73 = dyn __7(dn17, -1);
        goto L0(r73);
      L3():
        dx18 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx18);
      };
      r75 = dyn expand_grid(p7);
      return r75;
    };
    r77 = dyn interaction(p8);
    check L129() else D38();
  D32():
    deopt 122 [i2, dn10];
  D38():
    deopt 148 [r77];
  L26():
    goto L30(i7);
  L30(i31):
    goto L23(i31);
  L110():
    dn11 = force? dn10;
    checkMissing(dn11);
    c14 = `is.object`(dn11);
    if c14 then L111() else L112(i2, dn11);
  L115():
    sym12 = ldf seq_len;
    base12 = ldf seq_len in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L116() else L117();
  L129():
    l7 = ld x;
    colnames__ = ldf `colnames<-`;
    check L130() else D39();
  D39():
    deopt 150 [r77, l7, r77];
  L25(i11, dx13):
    c15 = `==`(dx13, NULL);
    goto L24(i11, c15);
  L27(i18, r64):
    l4 = ld dn;
    c18 = `is.object`(l4);
    if c18 then L123() else L124(i18, r64, l4);
  L111():
    dr10 = tryDispatchBuiltin.1("[[", dn11);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L113() else L112(i2, dr10);
  L112(i9, dn13):
    i12 = ld i;
    check L114() else D33();
  L116():
    d14 = ld d;
    check L118() else D34();
  L117():
    r63 = dyn base12(<lang `[`(d, i)>);
    goto L27(i7, r63);
  L130():
    r78 = dyn colnames__(l7, NULL, r77);
    check L131() else D40();
  D33():
    deopt 124 [i9, dn13, i12];
  D34():
    deopt 129 [i7, d14];
  D40():
    deopt 152 [r77, r78];
  L29(i28, r70, dx17):
    st dn = dx17;
    goto L30(i28);
  L113():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L25(i2, dx12);
  L114():
    i13 = force? i12;
    __5 = ldf `[[` in base;
    r62 = dyn __5(dn13, i13);
    goto L25(i9, r62);
  L118():
    d15 = force? d14;
    checkMissing(d15);
    c17 = `is.object`(d15);
    if c17 then L119() else L120(i7, d15);
  L123():
    dr14 = tryDispatchBuiltin.0("[[<-", l4, r64);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L125() else L124(i18, r64, dr14);
  L124(i26, r68, l6):
    i29 = ld i;
    check L126() else D36();
  L131():
    st x = r78;
    goto L32();
  D36():
    deopt 136 [i26, r68, l6, r64, i29];
  L28(i22, dx15):
    r66 = seq_len(dx15);
    goto L27(i22, r66);
  L119():
    dr12 = tryDispatchBuiltin.1("[", d15);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L121() else L120(i7, dr12);
  L120(i20, d17):
    i23 = ld i;
    check L122() else D35();
  L125():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L29(i18, r64, dx16);
  L126():
    i30 = force? i29;
    ____ = ldf `[[<-` in base;
    r71 = dyn ____(l6, r64, i30);
    goto L29(i26, r68, r71);
  D35():
    deopt 131 [i20, d17, i23];
  L121():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L28(i7, dx14);
  L122():
    i24 = force? i23;
    __6 = ldf `[` in base;
    r65 = dyn __6(d17, i24);
    goto L28(i20, r65);
  }
}