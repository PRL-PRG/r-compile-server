fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner131594683;
    st `de.setup` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner131594683(ilist, `list.names`, incols) {
  (reg ilist:*, reg list_names:*, reg incols:*) -+> V { var ilist:*, var `list.names`:*, var incols:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg incols1:*, reg incols2:V, reg sum:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg ilen:*, reg ilen1:V, reg vector:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg ilen2:*, reg ilen3:V, reg vector1:cls, reg r8:V, reg ilist1:*, reg ilist2:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg k:*, reg k1:V, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg i7:I, reg r11:V, reg telt:*, reg telt1:V, reg is_list:cls, reg r12:V, reg c1:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg i12:I, reg r14:V, reg telt2:*, reg telt3:V, reg names:cls, reg r15:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r16:V, reg i15:I, reg r17:V, reg telt4:*, reg telt5:V, reg r18:I, reg s1:V, reg l1:I, reg i16:I, reg i17:I, reg i18:I, reg i19:I, reg c2:L, reg x1:V, reg telt6:*, reg telt7:V, reg c3:L, reg i26:I, reg i27:I, reg telt9:V, reg dr:V, reg dc:L, reg dx:V, reg i30:I, reg i31:I, reg dx1:V, reg j:*, reg j1:V, reg __:cls, reg r19:V, reg l2:*, reg c4:L, reg i34:I, reg i35:I, reg dx3:V, reg l4:*, reg dr2:V, reg dc1:L, reg dx5:V, reg i38:I, reg i39:I, reg dx7:V, reg i40:*, reg i41:V, reg ____:cls, reg r20:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r21:V, reg i46:I, reg i47:I, reg r22:V, reg y:*, reg y1:V, reg c5:V, reg c6:L, reg i48:I, reg i49:I, reg c7:V, reg y2:*, reg y3:V, reg c9:L, reg i54:I, reg i55:I, reg c11:L, reg y5:V, reg dr4:V, reg dc2:L, reg dx8:V, reg i58:I, reg i59:I, reg c13:L, reg dx9:V, reg j2:*, reg j3:V, reg __1:cls, reg r23:V, reg r24:V, reg c14:L, reg c15:V, reg c17:L, reg paste0:cls, reg i66:*, reg i67:V, reg p:p(V +), reg r26:V, reg l5:*, reg c18:L, reg i70:I, reg i71:I, reg r28:V, reg l7:*, reg dr6:V, reg dc3:L, reg dx10:V, reg i74:I, reg i75:I, reg r30:V, reg dx11:V, reg i76:*, reg i77:V, reg ____1:cls, reg r31:V, reg i78:I, reg i79:I, reg y6:*, reg y7:V, reg c19:L, reg i82:I, reg i83:I, reg y9:V, reg dr8:V, reg dc4:L, reg dx12:V, reg i86:I, reg i87:I, reg dx13:V, reg j4:*, reg j5:V, reg __2:cls, reg r33:V, reg l8:*, reg c20:L, reg i90:I, reg i91:I, reg dx15:V, reg l10:*, reg dr10:V, reg dc5:L, reg dx17:V, reg i94:I, reg i95:I, reg dx18:V, reg dx19:V, reg i96:*, reg i97:V, reg ____2:cls, reg r34:V, reg i98:*, reg i99:V, reg r35:V, reg i100:I, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg i104:I, reg r37:V, reg telt10:*, reg telt11:V, reg is_vector:cls, reg r38:V, reg c21:L, reg telt12:*, reg telt13:V, reg l11:*, reg c22:L, reg i108:I, reg telt15:V, reg l13:*, reg dr12:V, reg dc6:L, reg dx20:V, reg i110:I, reg dx21:V, reg i111:*, reg i112:V, reg ____3:cls, reg r39:V, reg list_names1:*, reg list_names2:V, reg c23:L, reg i114:I, reg list_names4:V, reg dr14:V, reg dc7:L, reg dx22:V, reg i116:I, reg dx23:V, reg k2:*, reg k3:V, reg __3:cls, reg r40:V, reg l14:*, reg c24:L, reg i118:I, reg dx25:V, reg l16:*, reg dr16:V, reg dc8:L, reg dx27:V, reg i120:I, reg dx29:V, reg i121:*, reg i122:V, reg ____4:cls, reg r41:V, reg i123:*, reg i124:V, reg r42:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg i127:I, reg r44:V, reg telt18:*, reg telt19:V, reg is_matrix:cls, reg r45:V, reg c25:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r46:V, reg i132:I, reg r47:V, reg telt20:*, reg telt21:V, reg dimnames:cls, reg r48:V, reg c26:L, reg i134:I, reg r50:V, reg dr18:V, reg dc9:L, reg dx30:V, reg i136:I, reg dx31:V, reg __4:cls, reg r51:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r52:V, reg i139:I, reg r53:V, reg ncol:cls, reg telt22:*, reg telt23:V, reg p1:p(V +), reg r55:V, reg r56:I, reg s2:V, reg l17:I, reg i140:I, reg i141:I, reg i142:I, reg i143:I, reg c27:L, reg x2:V, reg telt24:*, reg telt25:V, reg c28:L, reg i150:I, reg i151:I, reg telt27:V, reg dr20:V, reg dc10:L, reg dx32:V, reg i154:I, reg i155:I, reg dx33:V, reg j6:*, reg j7:V, reg __5:cls, reg r57:V, reg l18:*, reg c29:L, reg i158:I, reg i159:I, reg dx35:V, reg l20:*, reg dr22:V, reg dc11:L, reg dx37:V, reg i162:I, reg i163:I, reg dx39:V, reg i164:*, reg i165:V, reg ____5:cls, reg r58:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r59:V, reg i170:I, reg i171:I, reg r60:V, reg y10:*, reg y11:V, reg c30:V, reg c31:L, reg i172:I, reg i173:I, reg c32:V, reg y12:*, reg y13:V, reg c34:L, reg i178:I, reg i179:I, reg c36:L, reg y15:V, reg dr24:V, reg dc12:L, reg dx40:V, reg i182:I, reg i183:I, reg c38:L, reg dx41:V, reg j8:*, reg j9:V, reg __6:cls, reg r61:V, reg r62:V, reg c39:L, reg c40:V, reg c42:L, reg paste1:cls, reg i190:*, reg i191:V, reg p2:p(V +), reg r64:V, reg l21:*, reg c43:L, reg i194:I, reg i195:I, reg r66:V, reg l23:*, reg dr26:V, reg dc13:L, reg dx42:V, reg i198:I, reg i199:I, reg r68:V, reg dx43:V, reg i200:*, reg i201:V, reg ____6:cls, reg r69:V, reg i202:I, reg i203:I, reg y16:*, reg y17:V, reg c44:L, reg i206:I, reg i207:I, reg y19:V, reg dr28:V, reg dc14:L, reg dx44:V, reg i210:I, reg i211:I, reg dx45:V, reg j10:*, reg j11:V, reg __7:cls, reg r71:V, reg l24:*, reg c45:L, reg i214:I, reg i215:I, reg dx47:V, reg l26:*, reg dr30:V, reg dc15:L, reg dx49:V, reg i218:I, reg i219:I, reg dx50:V, reg dx51:V, reg i220:*, reg i221:V, reg ____7:cls, reg r72:V, reg i222:*, reg i223:V, reg r73:V, reg stop:cls, reg r74:V, reg inames:*, reg inames1:V, reg l27:*, reg names__:cls, reg r75:V, reg ivec:*, reg ivec1:V |
    mkenv;
    st ilist = ilist;
    st `list.names` = list_names;
    st incols = incols;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L44() else L45();
  L0(r1):
    st ilen = r1;
    sym1 = ldf vector;
    base1 = ldf vector in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L48() else L49();
  L44():
    incols1 = ld incols;
    check L46() else D0();
  L45():
    r = dyn base(<sym incols>);
    goto L0(r);
  D0():
    deopt 2 [incols1];
  L1(r4):
    st ivec = r4;
    sym2 = ldf vector;
    base2 = ldf vector in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L52() else L53();
  L46():
    incols2 = force? incols1;
    checkMissing(incols2);
    sum = ldf sum in base;
    r2 = dyn sum(incols2);
    check L47() else D1();
  L48():
    ilen = ld ilen;
    check L50() else D2();
  L49():
    r3 = dyn base1("list", <sym ilen>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 10 [ilen];
  L2(r7):
    st inames = r7;
    st i = 1;
    st k = 0;
    ilist1 = ld ilist;
    check L56() else D6();
  L47():
    goto L0(r2);
  L50():
    ilen1 = force? ilen;
    checkMissing(ilen1);
    vector = ldf vector in base;
    r5 = dyn vector("list", ilen1);
    check L51() else D3();
  L52():
    ilen2 = ld ilen;
    check L54() else D4();
  L53():
    r6 = dyn base2("list", <sym ilen>);
    goto L2(r6);
  D3():
    deopt 13 [r5];
  D4():
    deopt 18 [ilen2];
  D6():
    deopt 29 [ilist1];
  L51():
    goto L1(r5);
  L54():
    ilen3 = force? ilen2;
    checkMissing(ilen3);
    vector1 = ldf vector in base;
    r8 = dyn vector1("list", ilen3);
    check L55() else D5();
  L56():
    ilist2 = force? ilist1;
    checkMissing(ilist2);
    s = toForSeq(ilist2);
    l = length(s);
    i = 0;
    goto L3(i);
  D5():
    deopt 21 [r8];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L57() else L43();
  L55():
    goto L2(r8);
  L43():
    x = `[[`(s, i2, NULL, TRUE);
    st telt = x;
    k = ld k;
    check L58() else D7();
  L57():
    inames = ld inames;
    check L188() else D55();
  D7():
    deopt 31 [i2, k];
  D55():
    deopt 213 [inames];
  L58():
    k1 = force? k;
    checkMissing(k1);
    r9 = `+`(k1, 1);
    st k = r9;
    sym3 = ldf `is.list`;
    base3 = ldf `is.list` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  L188():
    inames1 = force? inames;
    checkMissing(inames1);
    l27 = ld ivec;
    names__ = ldf `names<-`;
    check L189() else D56();
  D56():
    deopt 216 [inames1, l27, inames1];
  L4(i7, r11):
    c1 = `as.logical`(r11);
    if c1 then L63() else L5();
  L59():
    telt = ld telt;
    check L61() else D8();
  L60():
    r10 = dyn base3(<sym telt>);
    goto L4(i2, r10);
  L189():
    r75 = dyn names__(l27, NULL, inames1);
    check L190() else D57();
  D8():
    deopt 38 [i2, telt];
  D57():
    deopt 218 [inames1, r75];
  L5():
    sym7 = ldf `is.vector`;
    base7 = ldf `is.vector` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L110() else L111();
  L20(i100):
    goto L3(i100);
  L61():
    telt1 = force? telt;
    checkMissing(telt1);
    is_list = ldf `is.list` in base;
    r12 = dyn is_list(telt1);
    check L62() else D9();
  L63():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L64() else L65();
  L190():
    st ivec = r75;
    ivec = ld ivec;
    check L191() else D58();
  D9():
    deopt 41 [i2, r12];
  D58():
    deopt 220 [ivec];
  L6(i12, r14):
    st y = r14;
    sym5 = ldf seq_along;
    base5 = ldf seq_along in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L68() else L69();
  L21(i104, r37):
    c21 = `as.logical`(r37);
    if c21 then L114() else L22();
  L62():
    goto L4(i2, r12);
  L64():
    telt2 = ld telt;
    check L66() else D10();
  L65():
    r13 = dyn base4(<sym telt>);
    goto L6(i7, r13);
  L110():
    telt10 = ld telt;
    check L112() else D26();
  L111():
    r36 = dyn base7(<sym telt>);
    goto L21(i7, r36);
  L191():
    ivec1 = force? ivec;
    checkMissing(ivec1);
    popenv;
    return ivec1;
  D10():
    deopt 44 [i7, telt2];
  D26():
    deopt 105 [i7, telt10];
  L7(i15, r17):
    s1 = toForSeq(r17);
    l1 = length(s1);
    i16 = 0;
    goto L8(i15, i16);
  L22():
    sym8 = ldf `is.matrix`;
    base8 = ldf `is.matrix` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L131() else L132();
  L66():
    telt3 = force? telt2;
    checkMissing(telt3);
    names = ldf names in base;
    r15 = dyn names(telt3);
    check L67() else D11();
  L68():
    telt4 = ld telt;
    check L70() else D12();
  L69():
    r16 = dyn base5(<sym telt>);
    goto L7(i12, r16);
  L112():
    telt11 = force? telt10;
    checkMissing(telt11);
    is_vector = ldf `is.vector` in base;
    r38 = dyn is_vector(telt11, "any");
    check L113() else D27();
  L114():
    telt12 = ld telt;
    check L115() else D28();
  D11():
    deopt 47 [i7, r15];
  D12():
    deopt 50 [i12, telt4];
  D27():
    deopt 109 [i7, r38];
  D28():
    deopt 110 [i104, telt12];
  L8(i17, i18):
    i19 = `+`.1(i18, 1);
    c2 = `<`.1(l1, i19);
    if c2 then L71() else L19();
  L26(i127, r44):
    c25 = `as.logical`(r44);
    if c25 then L135() else L27();
  L67():
    goto L6(i7, r15);
  L70():
    telt5 = force? telt4;
    checkMissing(telt5);
    r18 = seq_along(telt5);
    goto L7(i12, r18);
  L113():
    goto L21(i7, r38);
  L115():
    telt13 = force? telt12;
    checkMissing(telt13);
    l11 = ld ivec;
    c22 = `is.object`(l11);
    if c22 then L116() else L117(i104, telt13, l11);
  L131():
    telt18 = ld telt;
    check L133() else D34();
  L132():
    r43 = dyn base8(<sym telt>);
    goto L26(i104, r43);
  D34():
    deopt 134 [i104, telt18];
  L19():
    x1 = `[[`(s1, i19, NULL, TRUE);
    st j = x1;
    telt6 = ld telt;
    check L72() else D13();
  L23(i110, dx21):
    st ivec = dx21;
    list_names1 = ld `list.names`;
    check L120() else D30();
  L27():
    stop = ldf stop;
    check L186() else D53();
  L71():
    goto L20(i17);
  L116():
    dr12 = tryDispatchBuiltin.0("[[<-", l11, telt13);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L118() else L117(i104, telt13, dr12);
  L117(i108, telt15, l13):
    i111 = ld i;
    check L119() else D29();
  L133():
    telt19 = force? telt18;
    checkMissing(telt19);
    is_matrix = ldf `is.matrix` in base;
    r45 = dyn is_matrix(telt19);
    check L134() else D35();
  L135():
    sym9 = ldf dimnames;
    base9 = ldf dimnames in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L136() else L137();
  D13():
    deopt 53 [i17, i19, telt6];
  D29():
    deopt 113 [i108, telt15, l13, telt13, i111];
  D30():
    deopt 117 [i110, list_names1];
  D35():
    deopt 137 [i104, r45];
  D53():
    deopt 207 [i127];
  L28(i132, r47):
    c26 = `is.object`(r47);
    if c26 then L140() else L141(i132, r47);
  L72():
    telt7 = force? telt6;
    checkMissing(telt7);
    c3 = `is.object`(telt7);
    if c3 then L73() else L74(i17, i19, telt7);
  L118():
    dx20 = getTryDispatchBuiltinValue(dr12);
    goto L23(i104, dx20);
  L119():
    i112 = force? i111;
    ____3 = ldf `[[<-` in base;
    r39 = dyn ____3(l13, telt13, i112);
    goto L23(i108, r39);
  L120():
    list_names2 = force? list_names1;
    checkMissing(list_names2);
    c23 = `is.object`(list_names2);
    if c23 then L121() else L122(i110, list_names2);
  L134():
    goto L26(i104, r45);
  L136():
    telt20 = ld telt;
    check L138() else D36();
  L137():
    r46 = dyn base9(<sym telt>);
    goto L28(i127, r46);
  L186():
    r74 = dyn stop("wrong argument to 'dataentry'");
    check L187() else D54();
  D36():
    deopt 140 [i127, telt20];
  D54():
    deopt 209 [i127, r74];
  L9(i30, i31, dx1):
    l2 = ld ivec;
    c4 = `is.object`(l2);
    if c4 then L77() else L78(i30, i31, dx1, l2);
  L24(i116, dx23):
    l14 = ld inames;
    c24 = `is.object`(l14);
    if c24 then L125() else L126(i116, dx23, l14);
  L29(i136, dx31):
    st y = dx31;
    sym10 = ldf seq_len;
    base10 = ldf seq_len in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L143() else L144();
  L73():
    dr = tryDispatchBuiltin.1("[[", telt7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L75() else L74(i17, i19, dr);
  L74(i26, i27, telt9):
    j = ld j;
    check L76() else D14();
  L121():
    dr14 = tryDispatchBuiltin.1("[[", list_names2);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L123() else L122(i110, dr14);
  L122(i114, list_names4):
    k2 = ld k;
    check L124() else D31();
  L138():
    telt21 = force? telt20;
    checkMissing(telt21);
    dimnames = ldf dimnames in base;
    r48 = dyn dimnames(telt21);
    check L139() else D37();
  L140():
    dr18 = tryDispatchBuiltin.1("[[", r47);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L142() else L141(i132, dr18);
  L141(i134, r50):
    __4 = ldf `[[` in base;
    r51 = dyn __4(r50, 2);
    goto L29(i134, r51);
  L187():
    goto L20(i127);
  D14():
    deopt 55 [i26, i27, telt9, j];
  D31():
    deopt 119 [i114, list_names4, k2];
  D37():
    deopt 143 [i127, r48];
  L10(i38, i39, dx7):
    st ivec = dx7;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L81() else L82();
  L25(i120, dx29):
    st inames = dx29;
    i123 = ld i;
    check L129() else D33();
  L30(i139, r53):
    s2 = toForSeq(r53);
    l17 = length(s2);
    i140 = 0;
    goto L31(i139, i140);
  L75():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(i17, i19, dx);
  L76():
    j1 = force? j;
    __ = ldf `[[` in base;
    r19 = dyn __(telt9, j1);
    goto L9(i26, i27, r19);
  L77():
    dr2 = tryDispatchBuiltin.0("[[<-", l2, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L79() else L78(i30, i31, dx1, dr2);
  L78(i34, i35, dx3, l4):
    i40 = ld i;
    check L80() else D15();
  L123():
    dx22 = getTryDispatchBuiltinValue(dr14);
    goto L24(i110, dx22);
  L124():
    k3 = force? k2;
    __3 = ldf `[[` in base;
    r40 = dyn __3(list_names4, k3);
    goto L24(i114, r40);
  L125():
    dr16 = tryDispatchBuiltin.0("[[<-", l14, dx23);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L127() else L126(i116, dx23, dr16);
  L126(i118, dx25, l16):
    i121 = ld i;
    check L128() else D32();
  L139():
    goto L28(i127, r48);
  L142():
    dx30 = getTryDispatchBuiltinValue(dr18);
    goto L29(i132, dx30);
  L143():
    ncol = ldf ncol;
    check L145() else D38();
  L144():
    r52 = dyn base10(<lang ncol(telt)>);
    goto L30(i136, r52);
  D15():
    deopt 59 [i34, i35, dx3, l4, dx1, i40];
  D32():
    deopt 123 [i118, dx25, l16, dx23, i121];
  D33():
    deopt 127 [i120, i123];
  D38():
    deopt 150 [i136];
  L11(i46, i47, r22):
    c6 = `as.logical`(r22);
    if c6 then L12(i46, i47, c6) else L84();
  L31(i141, i142):
    i143 = `+`.1(i142, 1);
    c27 = `<`.1(l17, i143);
    if c27 then L147() else L42();
  L79():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L10(i30, i31, dx5);
  L80():
    i41 = force? i40;
    ____ = ldf `[[<-` in base;
    r20 = dyn ____(l4, dx1, i41);
    goto L10(i34, i35, r20);
  L81():
    y = ld y;
    check L83() else D16();
  L82():
    r21 = dyn base6(<sym y>);
    goto L11(i38, i39, r21);
  L127():
    dx27 = getTryDispatchBuiltinValue(dr16);
    goto L25(i116, dx27);
  L128():
    i122 = force? i121;
    ____4 = ldf `[[<-` in base;
    r41 = dyn ____4(l16, dx23, i122);
    goto L25(i118, r41);
  L129():
    i124 = force? i123;
    checkMissing(i124);
    r42 = `+`(i124, 1.0);
    st i = r42;
    goto L20(i120);
  L145():
    p1 = prom<V +>{
      telt22 = ld telt;
      telt23 = force? telt22;
      checkMissing(telt23);
      return telt23;
    };
    r55 = dyn ncol(p1);
    check L146() else D39();
  D16():
    deopt 64 [i38, i39, y];
  D39():
    deopt 152 [i136, r55];
  L12(i48, i49, c7):
    c17 = `as.logical`(c7);
    if c17 then L91() else L14();
  L42():
    x2 = `[[`(s2, i143, NULL, TRUE);
    st j = x2;
    telt24 = ld telt;
    check L148() else D40();
  L83():
    y1 = force? y;
    checkMissing(y1);
    c5 = `==`(y1, NULL);
    goto L11(i38, i39, c5);
  L84():
    y2 = ld y;
    check L85() else D17();
  L146():
    r56 = seq_len(r55);
    goto L30(i136, r56);
  L147():
    goto L20(i141);
  D17():
    deopt 67 [i46, i47, c6, y2];
  D40():
    deopt 154 [i141, i143, telt24];
  L14():
    y6 = ld y;
    check L99() else D22();
  L16(i78, i79):
    i98 = ld i;
    check L108() else D25();
  L85():
    y3 = force? y2;
    checkMissing(y3);
    c9 = `is.object`(y3);
    if c9 then L86() else L87(i46, i47, c6, y3);
  L91():
    paste0 = ldf paste0;
    check L92() else D19();
  L148():
    telt25 = force? telt24;
    checkMissing(telt25);
    c28 = `is.object`(telt25);
    if c28 then L149() else L150(i141, i143, telt25);
  D19():
    deopt 76 [i48, i49];
  D22():
    deopt 85 [i48, i49, y6];
  D25():
    deopt 95 [i78, i79, i98];
  L13(i58, i59, c13, dx9):
    r24 = `==`(dx9, "");
    c14 = `as.logical`(r24);
    c15 = `||`(c13, c14);
    goto L12(i58, i59, c15);
  L32(i154, i155, dx33):
    l18 = ld ivec;
    c29 = `is.object`(l18);
    if c29 then L153() else L154(i154, i155, dx33, l18);
  L86():
    dr4 = tryDispatchBuiltin.1("[", y3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L88() else L87(i46, i47, c6, dr4);
  L87(i54, i55, c11, y5):
    j2 = ld j;
    check L89() else D18();
  L92():
    p = prom<V +>{
      i66 = ld i;
      i67 = force? i66;
      checkMissing(i67);
      return i67;
    };
    r26 = dyn paste0("var", p);
    check L93() else D20();
  L99():
    y7 = force? y6;
    checkMissing(y7);
    c19 = `is.object`(y7);
    if c19 then L100() else L101(i48, i49, y7);
  L108():
    i99 = force? i98;
    checkMissing(i99);
    r35 = `+`(i99, 1);
    st i = r35;
    goto L8(i78, i79);
  L149():
    dr20 = tryDispatchBuiltin.1("[", telt25);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L151() else L150(i141, i143, dr20);
  L150(i150, i151, telt27):
    j6 = ld j;
    check L152() else D41();
  D18():
    deopt 69 [i54, i55, c11, y5, j2];
  D20():
    deopt 79 [i48, i49, r26];
  D41():
    deopt 157 [i150, i151, telt27, j6];
  L17(i86, i87, dx13):
    l8 = ld inames;
    c20 = `is.object`(l8);
    if c20 then L104() else L105(i86, i87, dx13, l8);
  L33(i162, i163, dx39):
    st ivec = dx39;
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L157() else L158();
  L88():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L13(i46, i47, c6, dx8);
  L89():
    j3 = force? j2;
    __1 = ldf `[` in base;
    r23 = dyn __1(y5, j3);
    goto L13(i54, i55, c11, r23);
  L93():
    l5 = ld inames;
    c18 = `is.object`(l5);
    if c18 then L94() else L95(i48, i49, r26, l5);
  L100():
    dr8 = tryDispatchBuiltin.1("[", y7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L102() else L101(i48, i49, dr8);
  L101(i82, i83, y9):
    j4 = ld j;
    check L103() else D23();
  L151():
    dx32 = getTryDispatchBuiltinValue(dr20);
    goto L32(i141, i143, dx32);
  L152():
    j7 = force? j6;
    __5 = ldf `[` in base;
    r57 = dyn __5(telt25, <missing>, j7);
    goto L32(i150, i151, r57);
  L153():
    dr22 = tryDispatchBuiltin.0("[[<-", l18, dx33);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L155() else L154(i154, i155, dx33, dr22);
  L154(i158, i159, dx35, l20):
    i164 = ld i;
    check L156() else D42();
  D23():
    deopt 87 [i82, i83, y9, j4];
  D42():
    deopt 162 [i158, i159, dx35, l20, dx33, i164];
  L15(i74, i75, r30, dx11):
    st inames = dx11;
    goto L16(i74, i75);
  L18(i94, i95, dx18, dx19):
    st inames = dx19;
    goto L16(i94, i95);
  L34(i170, i171, r60):
    c31 = `as.logical`(r60);
    if c31 then L35(i170, i171, c31) else L160();
  L94():
    dr6 = tryDispatchBuiltin.0("[[<-", l5, r26);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L96() else L95(i48, i49, r26, dr6);
  L95(i70, i71, r28, l7):
    i76 = ld i;
    check L97() else D21();
  L102():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L17(i48, i49, dx12);
  L103():
    j5 = force? j4;
    __2 = ldf `[` in base;
    r33 = dyn __2(y9, j5);
    goto L17(i82, i83, r33);
  L104():
    dr10 = tryDispatchBuiltin.0("[[<-", l8, dx13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L106() else L105(i86, i87, dx13, dr10);
  L105(i90, i91, dx15, l10):
    i96 = ld i;
    check L107() else D24();
  L155():
    dx37 = getTryDispatchBuiltinValue(dr22);
    goto L33(i154, i155, dx37);
  L156():
    i165 = force? i164;
    ____5 = ldf `[[<-` in base;
    r58 = dyn ____5(l20, dx33, i165);
    goto L33(i158, i159, r58);
  L157():
    y10 = ld y;
    check L159() else D43();
  L158():
    r59 = dyn base11(<sym y>);
    goto L34(i162, i163, r59);
  D21():
    deopt 81 [i70, i71, r28, l7, r26, i76];
  D24():
    deopt 91 [i90, i91, dx15, l10, dx13, i96];
  D43():
    deopt 167 [i162, i163, y10];
  L35(i172, i173, c32):
    c42 = `as.logical`(c32);
    if c42 then L167() else L37();
  L96():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L15(i48, i49, r26, dx10);
  L97():
    i77 = force? i76;
    ____1 = ldf `[[<-` in base;
    r31 = dyn ____1(l7, r26, i77);
    goto L15(i70, i71, r28, r31);
  L106():
    dx17 = getTryDispatchBuiltinValue(dr10);
    goto L18(i86, i87, dx13, dx17);
  L107():
    i97 = force? i96;
    ____2 = ldf `[[<-` in base;
    r34 = dyn ____2(l10, dx13, i97);
    goto L18(i90, i91, dx15, r34);
  L159():
    y11 = force? y10;
    checkMissing(y11);
    c30 = `==`(y11, NULL);
    goto L34(i162, i163, c30);
  L160():
    y12 = ld y;
    check L161() else D44();
  D44():
    deopt 170 [i170, i171, c31, y12];
  L37():
    y16 = ld y;
    check L175() else D49();
  L39(i202, i203):
    i222 = ld i;
    check L184() else D52();
  L161():
    y13 = force? y12;
    checkMissing(y13);
    c34 = `is.object`(y13);
    if c34 then L162() else L163(i170, i171, c31, y13);
  L167():
    paste1 = ldf paste0;
    check L168() else D46();
  D46():
    deopt 179 [i172, i173];
  D49():
    deopt 188 [i172, i173, y16];
  D52():
    deopt 198 [i202, i203, i222];
  L36(i182, i183, c38, dx41):
    r62 = `==`(dx41, "");
    c39 = `as.logical`(r62);
    c40 = `||`(c38, c39);
    goto L35(i182, i183, c40);
  L162():
    dr24 = tryDispatchBuiltin.1("[", y13);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L164() else L163(i170, i171, c31, dr24);
  L163(i178, i179, c36, y15):
    j8 = ld j;
    check L165() else D45();
  L168():
    p2 = prom<V +>{
      i190 = ld i;
      i191 = force? i190;
      checkMissing(i191);
      return i191;
    };
    r64 = dyn paste1("var", p2);
    check L169() else D47();
  L175():
    y17 = force? y16;
    checkMissing(y17);
    c44 = `is.object`(y17);
    if c44 then L176() else L177(i172, i173, y17);
  L184():
    i223 = force? i222;
    checkMissing(i223);
    r73 = `+`(i223, 1);
    st i = r73;
    goto L31(i202, i203);
  D45():
    deopt 172 [i178, i179, c36, y15, j8];
  D47():
    deopt 182 [i172, i173, r64];
  L40(i210, i211, dx45):
    l24 = ld inames;
    c45 = `is.object`(l24);
    if c45 then L180() else L181(i210, i211, dx45, l24);
  L164():
    dx40 = getTryDispatchBuiltinValue(dr24);
    goto L36(i170, i171, c31, dx40);
  L165():
    j9 = force? j8;
    __6 = ldf `[` in base;
    r61 = dyn __6(y15, j9);
    goto L36(i178, i179, c36, r61);
  L169():
    l21 = ld inames;
    c43 = `is.object`(l21);
    if c43 then L170() else L171(i172, i173, r64, l21);
  L176():
    dr28 = tryDispatchBuiltin.1("[", y17);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L178() else L177(i172, i173, dr28);
  L177(i206, i207, y19):
    j10 = ld j;
    check L179() else D50();
  D50():
    deopt 190 [i206, i207, y19, j10];
  L38(i198, i199, r68, dx43):
    st inames = dx43;
    goto L39(i198, i199);
  L41(i218, i219, dx50, dx51):
    st inames = dx51;
    goto L39(i218, i219);
  L170():
    dr26 = tryDispatchBuiltin.0("[[<-", l21, r64);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L172() else L171(i172, i173, r64, dr26);
  L171(i194, i195, r66, l23):
    i200 = ld i;
    check L173() else D48();
  L178():
    dx44 = getTryDispatchBuiltinValue(dr28);
    goto L40(i172, i173, dx44);
  L179():
    j11 = force? j10;
    __7 = ldf `[` in base;
    r71 = dyn __7(y19, j11);
    goto L40(i206, i207, r71);
  L180():
    dr30 = tryDispatchBuiltin.0("[[<-", l24, dx45);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L182() else L181(i210, i211, dx45, dr30);
  L181(i214, i215, dx47, l26):
    i220 = ld i;
    check L183() else D51();
  D48():
    deopt 184 [i194, i195, r66, l23, r64, i200];
  D51():
    deopt 194 [i214, i215, dx47, l26, dx45, i220];
  L172():
    dx42 = getTryDispatchBuiltinValue(dr26);
    goto L38(i172, i173, r64, dx42);
  L173():
    i201 = force? i200;
    ____6 = ldf `[[<-` in base;
    r69 = dyn ____6(l23, r64, i201);
    goto L38(i194, i195, r66, r69);
  L182():
    dx49 = getTryDispatchBuiltinValue(dr30);
    goto L41(i210, i211, dx45, dx49);
  L183():
    i221 = force? i220;
    ____7 = ldf `[[<-` in base;
    r72 = dyn ____7(l26, dx45, i221);
    goto L41(i214, i215, dx47, r72);
  }
}