fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1687091684;
    st rowMeans = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1687091684(x, `na.rm`, dims) {
  (reg x:*, reg na_rm:*, reg dims:*) -+> V { var x:*, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, var dims:*, reg dims_isMissing:L, reg dims_orDefault:*, reg is_data_frame:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg as_matrix:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg x5:*, reg x6:V, reg is_array:cls, reg r7:V, reg r8:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg c6:L, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg c9:L, reg r12:V, reg x7:*, reg x8:V, reg dim:cls, reg r13:V, reg length:cls, reg r14:V, reg r15:V, reg c10:L, reg c11:V, reg c13:L, reg stop:cls, reg r16:V, reg dims1:*, reg dims2:V, reg r18:V, reg c14:L, reg c15:V, reg dims3:*, reg dims4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg c19:L, reg dims7:V, reg r20:V, reg dn:*, reg dn1:V, reg length1:cls, reg r21:V, reg r22:V, reg r23:V, reg c20:L, reg c21:V, reg c23:L, reg stop1:cls, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg dn2:*, reg dn3:V, reg c24:L, reg dn5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg dn8:V, reg r29:V, reg dims8:*, reg dims9:V, reg r30:I, reg r31:V, reg __:cls, reg r32:V, reg prod:cls, reg r33:V, reg dn9:*, reg dn10:V, reg c25:L, reg dn12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg id:*, reg id1:V, reg __1:cls, reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg x9:*, reg x10:V, reg c26:L, reg c27:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg x11:*, reg x12:V, reg Re:cls, reg r41:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r42:V, reg r43:V, reg dn13:*, reg dn14:V, reg prod1:cls, reg r44:V, reg p2:*, reg p3:V, reg na_rm1:*, reg na_rm2:V, reg rowMeans:cls, reg r45:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r50:V, reg r51:V, reg r52:V, reg r53:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r58:V, reg r59:V, reg r60:V, reg r61:V, reg x13:*, reg x14:V, reg Im:cls, reg r62:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r67:V, reg r68:V, reg r69:V, reg r70:V, reg dn15:*, reg dn16:V, reg prod2:cls, reg r71:V, reg p4:*, reg p5:V, reg na_rm3:*, reg na_rm4:V, reg rowMeans1:cls, reg r72:V, reg r73:V, reg r74:V, reg r75:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r76:V, reg x15:*, reg x16:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r77:V, reg r78:V, reg dn17:*, reg dn18:V, reg prod3:cls, reg r79:V, reg p6:*, reg p7:V, reg na_rm5:*, reg na_rm6:V, reg rowMeans2:cls, reg r80:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r81:V, reg r82:V, reg dn19:*, reg dn20:V, reg length2:cls, reg r83:V, reg r84:V, reg c28:L, reg dn21:*, reg dn22:V, reg l:*, reg dim__:cls, reg r85:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r86:V, reg r87:V, reg x17:*, reg x18:V, reg dimnames:cls, reg r88:V, reg c29:L, reg r90:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg id2:*, reg id3:V, reg __2:cls, reg r91:V, reg l1:*, reg dimnames__:cls, reg r92:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r93:V, reg r94:V, reg x19:*, reg x20:V, reg dimnames1:cls, reg r95:V, reg c30:L, reg r97:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg __3:cls, reg r98:V, reg l2:*, reg names__:cls, reg r99:V, reg z:*, reg z1:V |
    mkenv;
    st x = x;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L0(FALSE) else L0(na_rm);
  L0(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    dims_isMissing = missing.0(dims);
    if dims_isMissing then L1(1) else L1(dims);
  L1(dims_orDefault):
    st dims = dims_orDefault;
    is_data_frame = ldf `is.data.frame`;
    check L35() else D0();
  D0():
    deopt 1 [];
  L35():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_data_frame(p);
    check L36() else D1();
  D1():
    deopt 3 [r1];
  L36():
    c = `as.logical`(r1);
    if c then L37() else L2();
  L2():
    goto L3();
  L3():
    sym = ldf `is.array`;
    base = ldf `is.array` in base;
    guard = `==`.4(sym, base);
    if guard then L41() else L42();
  L37():
    as_matrix = ldf `as.matrix`;
    check L38() else D2();
  D2():
    deopt 5 [];
  L4(r6):
    r8 = `!`(r6);
    c1 = `as.logical`(r8);
    if c1 then L5(c1) else L45();
  L38():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn as_matrix(p1);
    check L39() else D3();
  L41():
    x5 = ld x;
    check L43() else D4();
  L42():
    r5 = dyn base(<sym x>);
    goto L4(r5);
  D3():
    deopt 7 [r3];
  D4():
    deopt 13 [x5];
  L5(c2):
    c13 = `as.logical`(c2);
    if c13 then L54() else L8();
  L39():
    st x = r3;
    goto L3();
  L43():
    x6 = force? x5;
    checkMissing(x6);
    is_array = ldf `is.array` in base;
    r7 = dyn is_array(x6);
    check L44() else D5();
  L45():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L46() else L47();
  D5():
    deopt 16 [r7];
  L6(c6, r10):
    r15 = `<`(r10, 2);
    c10 = `as.logical`(r15);
    c11 = `||`(c6, c10);
    goto L5(c11);
  L8():
    goto L9();
  L9():
    dims1 = ld dims;
    check L58() else D11();
  L44():
    goto L4(r7);
  L46():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  L47():
    r9 = dyn base1(<lang `<-`(dn, dim(x))>);
    goto L6(c1, r9);
  L54():
    stop = ldf stop;
    check L55() else D9();
  D9():
    deopt 33 [];
  D11():
    deopt 38 [dims1];
  L7(c9, r12):
    st dn = r12;
    length = ldf length in base;
    r14 = dyn length(r12);
    check L52() else D8();
  L48():
    x7 = ld x;
    check L50() else D6();
  L49():
    r11 = dyn base2(<sym x>);
    goto L7(c1, r11);
  L55():
    r16 = dyn stop("'x' must be an array of at least two dimensions");
    check L56() else D10();
  L58():
    dims2 = force? dims1;
    checkMissing(dims2);
    r18 = `<`(dims2, 1);
    c14 = `as.logical`(r18);
    if c14 then L10(c14) else L59();
  D6():
    deopt 22 [c1, x7];
  D8():
    deopt 28 [c9, r14];
  D10():
    deopt 35 [r16];
  L10(c15):
    c23 = `as.logical`(c15);
    if c23 then L66() else L12();
  L50():
    x8 = force? x7;
    checkMissing(x8);
    dim = ldf dim in base;
    r13 = dyn dim(x8);
    check L51() else D7();
  L52():
    goto L6(c9, r14);
  L56():
    goto L9();
  L59():
    dims3 = ld dims;
    check L60() else D12();
  D7():
    deopt 25 [c1, r13];
  D12():
    deopt 42 [c14, dims3];
  L12():
    goto L13();
  L13():
    sym4 = ldf prod;
    base4 = ldf prod in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L70() else L71();
  L51():
    goto L7(c1, r13);
  L60():
    dims4 = force? dims3;
    checkMissing(dims4);
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L61() else L62();
  L66():
    stop1 = ldf stop;
    check L67() else D15();
  D15():
    deopt 54 [];
  L11(c19, dims7, r20):
    r22 = `-`(r20, 1);
    r23 = `>`(dims7, r22);
    c20 = `as.logical`(r23);
    c21 = `||`(c19, c20);
    goto L10(c21);
  L14(r27):
    st p = r27;
    dn9 = ld dn;
    check L80() else D20();
  L61():
    dn = ld dn;
    check L63() else D13();
  L62():
    r19 = dyn base3(<sym dn>);
    goto L11(c14, dims4, r19);
  L67():
    r24 = dyn stop1("invalid 'dims'");
    check L68() else D16();
  L70():
    dn2 = ld dn;
    check L72() else D17();
  L71():
    r26 = dyn base4(<lang `[`(dn, `-`(`(`(`<-`(id, seq_len(dims)))))>);
    goto L14(r26);
  D13():
    deopt 45 [c14, dims4, dn];
  D16():
    deopt 56 [r24];
  D17():
    deopt 61 [dn2];
  D20():
    deopt 73 [dn9];
  L63():
    dn1 = force? dn;
    checkMissing(dn1);
    length1 = ldf length in base;
    r21 = dyn length1(dn1);
    check L64() else D14();
  L68():
    goto L13();
  L72():
    dn3 = force? dn2;
    checkMissing(dn3);
    c24 = `is.object`(dn3);
    if c24 then L73() else L74(dn3);
  L80():
    dn10 = force? dn9;
    checkMissing(dn10);
    c25 = `is.object`(dn10);
    if c25 then L81() else L82(dn10);
  D14():
    deopt 48 [c14, dims4, r21];
  L15(dx1):
    prod = ldf prod in base;
    r33 = dyn prod(dx1);
    check L79() else D19();
  L17(dx3):
    st dn = dx3;
    sym6 = ldf `is.complex`;
    base6 = ldf `is.complex` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L85() else L86();
  L64():
    goto L11(c14, dims4, r21);
  L73():
    dr = tryDispatchBuiltin.1("[", dn3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L75() else L74(dr);
  L74(dn5):
    sym5 = ldf seq_len;
    base5 = ldf seq_len in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L76() else L77();
  L81():
    dr2 = tryDispatchBuiltin.1("[", dn10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L83() else L82(dr2);
  L82(dn12):
    id = ld id;
    check L84() else D21();
  D19():
    deopt 71 [r33];
  D21():
    deopt 75 [dn12, id];
  L16(dn8, r29):
    st id = r29;
    r31 = `-`(<missing>, r29);
    __ = ldf `[` in base;
    r32 = dyn __(dn8, r31);
    goto L15(r32);
  L18(r36):
    c27 = `as.logical`(r36);
    if c27 then L88() else L19();
  L75():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L76():
    dims8 = ld dims;
    check L78() else D18();
  L77():
    r28 = dyn base5(<sym dims>);
    goto L16(dn5, r28);
  L79():
    goto L14(r33);
  L83():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx2);
  L84():
    id1 = force? id;
    __1 = ldf `[` in base;
    r34 = dyn __1(dn12, id1);
    goto L17(r34);
  L85():
    x9 = ld x;
    check L87() else D22();
  L86():
    r35 = dyn base6(<sym x>);
    goto L18(r35);
  D18():
    deopt 64 [dn5, dims8];
  D22():
    deopt 80 [x9];
  L19():
    sym13 = ldf `.Internal`;
    base13 = ldf `.Internal` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L116() else L117();
  L26(r75):
    st z = r75;
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L126() else L127();
  L78():
    dims9 = force? dims8;
    checkMissing(dims9);
    r30 = seq_len(dims9);
    goto L16(dn5, r30);
  L87():
    x10 = force? x9;
    checkMissing(x10);
    c26 = `is.complex`(x10);
    goto L18(c26);
  L88():
    sym7 = ldf `.Internal`;
    base7 = ldf `.Internal` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L89() else L90();
  L20(r38):
    sym10 = ldf `.Internal`;
    base10 = ldf `.Internal` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L102() else L103();
  L28(r82):
    r84 = `>`(r82, 1);
    c28 = `as.logical`(r84);
    if c28 then L130() else L29();
  L89():
    sym8 = ldf Re;
    base8 = ldf Re in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L91() else L92();
  L90():
    r37 = dyn base7(<lang rowMeans(Re(x), prod(dn), p, na.rm)>);
    goto L20(r37);
  L116():
    x15 = ld x;
    check L118() else D37();
  L117():
    r76 = dyn base13(<lang rowMeans(x, prod(dn), p, na.rm)>);
    goto L26(r76);
  L126():
    dn19 = ld dn;
    check L128() else D43();
  L127():
    r81 = dyn base15(<sym dn>);
    goto L28(r81);
  D37():
    deopt 127 [x15];
  D43():
    deopt 144 [dn19];
  L21(r40):
    sym9 = ldf prod;
    base9 = ldf prod in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L95() else L96();
  L23(r51, r52, r53):
    r73 = `*`(r52, r53);
    r74 = `+`(r51, r73);
    goto L26(r74);
  L29():
    sym17 = ldf dimnames;
    base17 = ldf dimnames in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L145() else L146();
  L32():
    z = ld z;
    check L154() else D57();
  L91():
    x11 = ld x;
    check L93() else D23();
  L92():
    r39 = dyn base8(<sym x>);
    goto L21(r39);
  L102():
    sym11 = ldf Im;
    base11 = ldf Im in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L104() else L105();
  L103():
    r50 = dyn base10(<lang rowMeans(Im(x), prod(dn), p, na.rm)>);
    goto L23(r38, 1.0i, r50);
  L118():
    x16 = force? x15;
    checkMissing(x16);
    sym14 = ldf prod;
    base14 = ldf prod in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L119() else L120();
  L128():
    dn20 = force? dn19;
    checkMissing(dn20);
    length2 = ldf length in base;
    r83 = dyn length2(dn20);
    check L129() else D44();
  L130():
    dn21 = ld dn;
    check L131() else D45();
  D23():
    deopt 87 [x11];
  D44():
    deopt 147 [r83];
  D45():
    deopt 150 [dn21];
  D57():
    deopt 185 [z];
  L22(r43):
    p2 = ld p;
    check L99() else D27();
  L24(r59, r60, r61):
    sym12 = ldf prod;
    base12 = ldf prod in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L108() else L109();
  L27(r78):
    p6 = ld p;
    check L123() else D40();
  L33(r94):
    c30 = `is.object`(r94);
    if c30 then L149() else L150(r94);
  L93():
    x12 = force? x11;
    checkMissing(x12);
    Re = ldf Re in base;
    r41 = dyn Re(x12);
    check L94() else D24();
  L95():
    dn13 = ld dn;
    check L97() else D25();
  L96():
    r42 = dyn base9(<sym dn>);
    goto L22(r42);
  L104():
    x13 = ld x;
    check L106() else D30();
  L105():
    r58 = dyn base11(<sym x>);
    goto L24(r38, 1.0i, r58);
  L119():
    dn17 = ld dn;
    check L121() else D38();
  L120():
    r77 = dyn base14(<sym dn>);
    goto L27(r77);
  L129():
    goto L28(r83);
  L131():
    dn22 = force? dn21;
    checkMissing(dn22);
    l = ld z;
    dim__ = ldf `dim<-`;
    check L132() else D46();
  L145():
    x19 = ld x;
    check L147() else D53();
  L146():
    r93 = dyn base17(<sym x>);
    goto L33(r93);
  L154():
    z1 = force? z;
    checkMissing(z1);
    popenv;
    return z1;
  D24():
    deopt 90 [r41];
  D25():
    deopt 93 [dn13];
  D27():
    deopt 97 [p2];
  D30():
    deopt 107 [r38, 1.0i, x13];
  D38():
    deopt 131 [dn17];
  D40():
    deopt 135 [p6];
  D46():
    deopt 153 [dn22, l, dn22];
  D53():
    deopt 173 [x19];
  L25(r68, r69, r70):
    p4 = ld p;
    check L112() else D34();
  L34(dx8):
    l2 = ld z;
    names__ = ldf `names<-`;
    check L152() else D55();
  L94():
    goto L21(r41);
  L97():
    dn14 = force? dn13;
    checkMissing(dn14);
    prod1 = ldf prod in base;
    r44 = dyn prod1(dn14);
    check L98() else D26();
  L99():
    p3 = force? p2;
    checkMissing(p3);
    na_rm1 = ld `na.rm`;
    check L100() else D28();
  L106():
    x14 = force? x13;
    checkMissing(x14);
    Im = ldf Im in base;
    r62 = dyn Im(x14);
    check L107() else D31();
  L108():
    dn15 = ld dn;
    check L110() else D32();
  L109():
    r67 = dyn base12(<sym dn>);
    goto L25(r59, r60, r67);
  L121():
    dn18 = force? dn17;
    checkMissing(dn18);
    prod3 = ldf prod in base;
    r79 = dyn prod3(dn18);
    check L122() else D39();
  L123():
    p7 = force? p6;
    checkMissing(p7);
    na_rm5 = ld `na.rm`;
    check L124() else D41();
  L132():
    r85 = dyn dim__(l, NULL, dn22);
    check L133() else D47();
  L147():
    x20 = force? x19;
    checkMissing(x20);
    dimnames1 = ldf dimnames in base;
    r95 = dyn dimnames1(x20);
    check L148() else D54();
  L149():
    dr6 = tryDispatchBuiltin.1("[[", r94);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L151() else L150(dr6);
  L150(r97):
    __3 = ldf `[[` in base;
    r98 = dyn __3(r97, 1);
    goto L34(r98);
  D26():
    deopt 96 [r44];
  D28():
    deopt 99 [na_rm1];
  D31():
    deopt 110 [r38, 1.0i, r62];
  D32():
    deopt 113 [r59, r60, dn15];
  D34():
    deopt 117 [r68, r69, p4];
  D39():
    deopt 134 [r79];
  D41():
    deopt 137 [na_rm5];
  D47():
    deopt 155 [dn22, r85];
  D54():
    deopt 176 [r95];
  D55():
    deopt 181 [dx8, l2, dx8];
  L98():
    goto L22(r44);
  L100():
    na_rm2 = force? na_rm1;
    checkMissing(na_rm2);
    rowMeans = ldf rowMeans in base;
    r45 = dyn rowMeans(r40, r43, p3, na_rm2);
    check L101() else D29();
  L107():
    goto L24(r38, 1.0i, r62);
  L110():
    dn16 = force? dn15;
    checkMissing(dn16);
    prod2 = ldf prod in base;
    r71 = dyn prod2(dn16);
    check L111() else D33();
  L112():
    p5 = force? p4;
    checkMissing(p5);
    na_rm3 = ld `na.rm`;
    check L113() else D35();
  L122():
    goto L27(r79);
  L124():
    na_rm6 = force? na_rm5;
    checkMissing(na_rm6);
    rowMeans2 = ldf rowMeans in base;
    r80 = dyn rowMeans2(x16, r78, p7, na_rm6);
    check L125() else D42();
  L133():
    st z = r85;
    sym16 = ldf dimnames;
    base16 = ldf dimnames in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L134() else L135();
  L148():
    goto L33(r95);
  L151():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L34(dx7);
  L152():
    r99 = dyn names__(l2, NULL, dx8);
    check L153() else D56();
  D29():
    deopt 102 [r45];
  D33():
    deopt 116 [r59, r60, r71];
  D35():
    deopt 119 [r68, r69, na_rm3];
  D42():
    deopt 140 [r80];
  D56():
    deopt 183 [dx8, r99];
  L30(r87):
    c29 = `is.object`(r87);
    if c29 then L138() else L139(r87);
  L101():
    goto L20(r45);
  L111():
    goto L25(r59, r60, r71);
  L113():
    na_rm4 = force? na_rm3;
    checkMissing(na_rm4);
    rowMeans1 = ldf rowMeans in base;
    r72 = dyn rowMeans1(r61, r70, p5, na_rm4);
    check L114() else D36();
  L125():
    goto L26(r80);
  L134():
    x17 = ld x;
    check L136() else D48();
  L135():
    r86 = dyn base16(<sym x>);
    goto L30(r86);
  L153():
    st z = r99;
    goto L32();
  D36():
    deopt 122 [r68, r69, r72];
  D48():
    deopt 159 [x17];
  L31(dx5):
    l1 = ld z;
    dimnames__ = ldf `dimnames<-`;
    check L142() else D51();
  L114():
    goto L23(r68, r69, r72);
  L136():
    x18 = force? x17;
    checkMissing(x18);
    dimnames = ldf dimnames in base;
    r88 = dyn dimnames(x18);
    check L137() else D49();
  L138():
    dr4 = tryDispatchBuiltin.1("[", r87);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L140() else L139(dr4);
  L139(r90):
    id2 = ld id;
    check L141() else D50();
  D49():
    deopt 162 [r88];
  D50():
    deopt 163 [r90, id2];
  D51():
    deopt 167 [dx5, l1, dx5];
  L137():
    goto L30(r88);
  L140():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L31(dx4);
  L141():
    id3 = force? id2;
    __2 = ldf `[` in base;
    r91 = dyn __2(r90, id3);
    goto L31(r91);
  L142():
    r92 = dyn dimnames__(l1, NULL, dx5);
    check L143() else D52();
  D52():
    deopt 169 [dx5, r92];
  L143():
    st z = r92;
    goto L32();
  }
}