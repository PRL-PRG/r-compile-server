fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1404317226;
    st `de.restore` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1404317226(inlist, ncols, coltypes, argnames, args) {
  (reg inlist:*, reg ncols:*, reg coltypes:*, reg argnames:*, reg args:*) -+> V { var inlist:*, var ncols:*, var coltypes:*, var argnames:*, var args:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ncols1:*, reg ncols2:V, reg length:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg p:*, reg p1:V, reg vector:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg p2:*, reg p3:V, reg vector1:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg inlist1:*, reg inlist2:V, reg names:cls, reg r11:V, reg p4:*, reg p5:V, reg c:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg r13:V, reg p6:*, reg p7:V, reg r14:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg coltypes1:*, reg coltypes2:V, reg c2:L, reg i6:I, reg coltypes4:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r15:V, reg r16:V, reg c3:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r17:V, reg i15:I, reg r18:V, reg inlist3:*, reg inlist4:V, reg c4:L, reg i17:I, reg inlist6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i19:I, reg dx3:V, reg j:*, reg j1:V, reg __1:cls, reg r19:V, reg length1:cls, reg r20:V, reg matrix:cls, reg tlen:*, reg tlen1:V, reg p8:p(V +), reg ncols3:*, reg ncols4:V, reg c5:L, reg ncols6:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i20:*, reg i21:V, reg __2:cls, reg r22:V, reg p9:p(V +), reg r24:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg i24:I, reg r26:V, reg ncol:cls, reg x1:*, reg x2:V, reg p10:p(V +), reg r28:V, reg vector2:cls, reg r29:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg i27:I, reg r31:V, reg ncols7:*, reg ncols8:V, reg c6:L, reg i29:I, reg ncols10:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i31:I, reg dx7:V, reg i32:*, reg i33:V, reg __3:cls, reg r32:V, reg r33:I, reg s1:V, reg l1:I, reg i34:I, reg i35:I, reg i36:I, reg i37:I, reg c7:L, reg x3:V, reg tlen2:*, reg tlen3:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r34:V, reg i46:I, reg i47:I, reg tlen6:V, reg r35:V, reg inlist7:*, reg inlist8:V, reg c8:L, reg i50:I, reg i51:I, reg tlen8:V, reg inlist10:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i54:I, reg i55:I, reg tlen10:V, reg dx9:V, reg j2:*, reg j3:V, reg __4:cls, reg r36:V, reg length2:cls, reg r37:V, reg r38:V, reg c9:L, reg warning:cls, reg r39:V, reg inlist11:*, reg inlist12:V, reg inlist13:*, reg inlist14:V, reg c10:L, reg i66:I, reg i67:I, reg inlist16:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i70:I, reg i71:I, reg dx11:V, reg j4:*, reg j5:V, reg __5:cls, reg r42:V, reg l2:*, reg c11:L, reg i74:I, reg i75:I, reg dx13:V, reg l4:*, reg dr12:V, reg dc6:L, reg dx15:V, reg i78:I, reg i79:I, reg dx17:V, reg ind1:*, reg ind2:V, reg ___:cls, reg r43:V, reg lnames:*, reg lnames1:V, reg c12:L, reg i82:I, reg i83:I, reg lnames3:V, reg dr14:V, reg dc7:L, reg dx18:V, reg i86:I, reg i87:I, reg dx19:V, reg j6:*, reg j7:V, reg __6:cls, reg r44:V, reg l5:*, reg c13:L, reg i90:I, reg i91:I, reg dx21:V, reg l7:*, reg dr16:V, reg dc8:L, reg dx23:V, reg i94:I, reg i95:I, reg dx25:V, reg ind3:*, reg ind4:V, reg ___1:cls, reg r45:V, reg j8:*, reg j9:V, reg r46:V, reg nrow:cls, reg x4:*, reg x5:V, reg p11:p(V +), reg r48:V, reg nrow1:cls, reg args1:*, reg args2:V, reg c14:L, reg args4:V, reg dr18:V, reg dc9:L, reg dx26:V, reg dx27:V, reg i96:*, reg i97:V, reg __7:cls, reg r49:V, reg p12:p(V +), reg r51:V, reg r52:V, reg c15:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r53:V, reg i102:I, reg r54:V, reg args5:*, reg args6:V, reg c16:L, reg i104:I, reg args8:V, reg dr20:V, reg dc10:L, reg dx28:V, reg i106:I, reg dx29:V, reg i107:*, reg i108:V, reg __8:cls, reg r55:V, reg dimnames:cls, reg r56:V, reg c17:L, reg i110:I, reg r58:V, reg dr22:V, reg dc11:L, reg dx30:V, reg i112:I, reg dx31:V, reg __9:cls, reg r59:V, reg i113:I, reg sym10:cls, reg base10:cls, reg guard10:L, reg r60:V, reg i116:I, reg r61:V, reg cnames:*, reg cnames1:V, reg r62:V, reg any:cls, reg r63:V, reg c18:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r64:V, reg i121:I, reg r65:V, reg rn:*, reg rn1:V, reg cnames2:*, reg cnames3:V, reg list:cls, reg r66:V, reg l8:*, reg dimnames__:cls, reg r67:V, reg i122:I, reg x6:*, reg x7:V, reg l9:*, reg c19:L, reg i124:I, reg x9:V, reg l11:*, reg dr24:V, reg dc12:L, reg dx33:V, reg i126:I, reg dx34:V, reg i127:*, reg i128:V, reg ____:cls, reg r69:V, reg argnames1:*, reg argnames2:V, reg c20:L, reg i130:I, reg argnames4:V, reg dr26:V, reg dc13:L, reg dx35:V, reg i132:I, reg dx36:V, reg i133:*, reg i134:V, reg __10:cls, reg r70:V, reg l12:*, reg c21:L, reg i136:I, reg dx38:V, reg l14:*, reg dr28:V, reg dc14:L, reg dx40:V, reg i138:I, reg dx41:V, reg dx42:V, reg i139:*, reg i140:V, reg ___2:cls, reg r71:V, reg i141:I, reg coltypes5:*, reg coltypes6:V, reg c22:L, reg i143:I, reg coltypes8:V, reg dr30:V, reg dc15:L, reg dx44:V, reg i145:I, reg dx45:V, reg i146:*, reg i147:V, reg __11:cls, reg r72:V, reg r73:V, reg c23:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r74:V, reg i152:I, reg r75:V, reg ncols11:*, reg ncols12:V, reg c24:L, reg i154:I, reg ncols14:V, reg dr32:V, reg dc16:L, reg dx46:V, reg i156:I, reg dx47:V, reg i157:*, reg i158:V, reg __12:cls, reg r76:V, reg vector3:cls, reg r77:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r78:V, reg i161:I, reg r79:V, reg ncols15:*, reg ncols16:V, reg c25:L, reg i163:I, reg ncols18:V, reg dr34:V, reg dc17:L, reg dx48:V, reg i165:I, reg dx49:V, reg i166:*, reg i167:V, reg __13:cls, reg r80:V, reg vector4:cls, reg r81:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r82:V, reg i170:I, reg r83:V, reg ncols19:*, reg ncols20:V, reg c26:L, reg i172:I, reg ncols22:V, reg dr36:V, reg dc18:L, reg dx50:V, reg i174:I, reg dx51:V, reg i175:*, reg i176:V, reg __14:cls, reg r84:V, reg r85:I, reg s2:V, reg l15:I, reg i177:I, reg i178:I, reg i179:I, reg i180:I, reg c27:L, reg x12:V, reg inlist17:*, reg inlist18:V, reg c28:L, reg i187:I, reg i188:I, reg inlist20:V, reg dr38:V, reg dc19:L, reg dx52:V, reg i191:I, reg i192:I, reg dx53:V, reg j10:*, reg j11:V, reg __15:cls, reg r86:V, reg l16:*, reg c29:L, reg i195:I, reg i196:I, reg dx55:V, reg l18:*, reg dr40:V, reg dc20:L, reg dx57:V, reg i199:I, reg i200:I, reg dx59:V, reg ind5:*, reg ind6:V, reg ____1:cls, reg r87:V, reg lnames4:*, reg lnames5:V, reg c30:L, reg i203:I, reg i204:I, reg lnames7:V, reg dr42:V, reg dc21:L, reg dx60:V, reg i207:I, reg i208:I, reg dx61:V, reg j12:*, reg j13:V, reg __16:cls, reg r88:V, reg l19:*, reg c31:L, reg i211:I, reg i212:I, reg dx63:V, reg l21:*, reg dr44:V, reg dc22:L, reg dx65:V, reg i215:I, reg i216:I, reg dx67:V, reg ind7:*, reg ind8:V, reg ___3:cls, reg r89:V, reg j14:*, reg j15:V, reg r90:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r91:V, reg i219:I, reg r92:V, reg cnames4:*, reg cnames5:V, reg r93:V, reg any1:cls, reg r94:V, reg c32:L, reg cnames6:*, reg cnames7:V, reg l22:*, reg names__:cls, reg r95:V, reg i222:I, reg x13:*, reg x14:V, reg l23:*, reg c33:L, reg i224:I, reg x16:V, reg l25:*, reg dr46:V, reg dc23:L, reg dx68:V, reg i226:I, reg dx69:V, reg i227:*, reg i228:V, reg ____2:cls, reg r96:V, reg argnames5:*, reg argnames6:V, reg c34:L, reg i230:I, reg argnames8:V, reg dr48:V, reg dc24:L, reg dx70:V, reg i232:I, reg dx71:V, reg i233:*, reg i234:V, reg __17:cls, reg r97:V, reg l26:*, reg c35:L, reg i236:I, reg dx73:V, reg l28:*, reg dr50:V, reg dc25:L, reg dx75:V, reg i238:I, reg dx76:V, reg dx77:V, reg i239:*, reg i240:V, reg ___4:cls, reg r98:V, reg inlist21:*, reg inlist22:V, reg c36:L, reg i242:I, reg inlist24:V, reg dr52:V, reg dc26:L, reg dx78:V, reg i244:I, reg dx79:V, reg j16:*, reg j17:V, reg __18:cls, reg r99:V, reg l29:*, reg c37:L, reg i246:I, reg dx81:V, reg l31:*, reg dr54:V, reg dc27:L, reg dx83:V, reg i248:I, reg dx85:V, reg i249:*, reg i250:V, reg ____3:cls, reg r100:V, reg j18:*, reg j19:V, reg r101:V, reg argnames9:*, reg argnames10:V, reg c38:L, reg i252:I, reg argnames12:V, reg dr56:V, reg dc28:L, reg dx86:V, reg i254:I, reg dx87:V, reg i255:*, reg i256:V, reg __19:cls, reg r102:V, reg l32:*, reg c39:L, reg i258:I, reg dx89:V, reg l34:*, reg dr58:V, reg dc29:L, reg dx91:V, reg i260:I, reg dx92:V, reg dx93:V, reg i261:*, reg i262:V, reg ___5:cls, reg r103:V, reg rnames:*, reg rnames1:V, reg l35:*, reg names__1:cls, reg r104:V, reg rlist:*, reg rlist1:V |
    mkenv;
    st inlist = inlist;
    st ncols = ncols;
    st coltypes = coltypes;
    st argnames = argnames;
    st args = args;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L63() else L64();
  L0(r1):
    st p = r1;
    sym1 = ldf vector;
    base1 = ldf vector in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L67() else L68();
  L63():
    ncols1 = ld ncols;
    check L65() else D0();
  L64():
    r = dyn base(<sym ncols>);
    goto L0(r);
  D0():
    deopt 2 [ncols1];
  L1(r4):
    st rlist = r4;
    sym2 = ldf vector;
    base2 = ldf vector in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L71() else L72();
  L65():
    ncols2 = force? ncols1;
    checkMissing(ncols2);
    length = ldf length in base;
    r2 = dyn length(ncols2);
    check L66() else D1();
  L67():
    p = ld p;
    check L69() else D2();
  L68():
    r3 = dyn base1[, length]("list", <sym p>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 10 [p];
  L2(r7):
    st rnames = r7;
    st j = 1;
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L75() else L76();
  L66():
    goto L0(r2);
  L69():
    p1 = force? p;
    checkMissing(p1);
    vector = ldf vector in base;
    r5 = dyn vector("list", p1);
    check L70() else D3();
  L71():
    p2 = ld p;
    check L73() else D4();
  L72():
    r6 = dyn base2[, length]("character", <sym p>);
    goto L2(r6);
  D3():
    deopt 13 [r5];
  D4():
    deopt 18 [p2];
  L3(r10):
    st lnames = r10;
    p4 = ld p;
    check L79() else D8();
  L70():
    goto L1(r5);
  L73():
    p3 = force? p2;
    checkMissing(p3);
    vector1 = ldf vector in base;
    r8 = dyn vector1("character", p3);
    check L74() else D5();
  L75():
    inlist1 = ld inlist;
    check L77() else D6();
  L76():
    r9 = dyn base3(<sym inlist>);
    goto L3(r9);
  D5():
    deopt 21 [r8];
  D6():
    deopt 28 [inlist1];
  D8():
    deopt 33 [p4];
  L74():
    goto L2(r8);
  L77():
    inlist2 = force? inlist1;
    checkMissing(inlist2);
    names = ldf names in base;
    r11 = dyn names(inlist2);
    check L78() else D7();
  L79():
    p5 = force? p4;
    checkMissing(p5);
    c = `as.logical`(p5);
    if c then L80() else L4();
  D7():
    deopt 31 [r11];
  L4():
    goto L62();
  L62():
    rnames = ld rnames;
    check L286() else D89();
  L78():
    goto L3(r11);
  L80():
    sym4 = ldf seq_len;
    base4 = ldf seq_len in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L81() else L82();
  D89():
    deopt 324 [rnames];
  L5(r13):
    s = toForSeq(r13);
    l = length(s);
    i = 0;
    goto L6(i);
  L81():
    p6 = ld p;
    check L83() else D9();
  L82():
    r12 = dyn base4(<sym p>);
    goto L5(r12);
  L286():
    rnames1 = force? rnames;
    checkMissing(rnames1);
    l35 = ld rlist;
    names__1 = ldf `names<-`;
    check L287() else D90();
  D9():
    deopt 36 [p6];
  D90():
    deopt 327 [rnames1, l35, rnames1];
  L6(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L84() else L61();
  L83():
    p7 = force? p6;
    checkMissing(p7);
    r14 = seq_len(p7);
    goto L5(r14);
  L287():
    r104 = dyn names__1(l35, NULL, rnames1);
    check L288() else D91();
  D91():
    deopt 329 [rnames1, r104];
  L61():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    coltypes1 = ld coltypes;
    check L85() else D10();
  L84():
    goto L62();
  L288():
    st rlist = r104;
    rlist = ld rlist;
    check L289() else D92();
  D10():
    deopt 39 [i2, coltypes1];
  D92():
    deopt 331 [rlist];
  L85():
    coltypes2 = force? coltypes1;
    checkMissing(coltypes2);
    c2 = `is.object`(coltypes2);
    if c2 then L86() else L87(i2, coltypes2);
  L289():
    rlist1 = force? rlist;
    checkMissing(rlist1);
    popenv;
    return rlist1;
  L7(i8, dx1):
    r16 = `==`(dx1, 2.0);
    c3 = `as.logical`(r16);
    if c3 then L90() else L8();
  L86():
    dr = tryDispatchBuiltin.1("[", coltypes2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L88() else L87(i2, dr);
  L87(i6, coltypes4):
    i9 = ld i;
    check L89() else D11();
  D11():
    deopt 41 [i6, coltypes4, i9];
  L8():
    coltypes5 = ld coltypes;
    check L193() else D55();
  L36(i141):
    goto L6(i141);
  L88():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(i2, dx);
  L89():
    i10 = force? i9;
    __ = ldf `[` in base;
    r15 = dyn __(coltypes4, i10);
    goto L7(i6, r15);
  L90():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L91() else L92();
  D55():
    deopt 196 [i8, coltypes5];
  L9(i15, r18):
    st tlen = r18;
    matrix = ldf matrix;
    check L99() else D15();
  L91():
    inlist3 = ld inlist;
    check L93() else D12();
  L92():
    r17 = dyn base5(<lang `[[`(inlist, j)>);
    goto L9(i8, r17);
  L193():
    coltypes6 = force? coltypes5;
    checkMissing(coltypes6);
    c22 = `is.object`(coltypes6);
    if c22 then L194() else L195(i8, coltypes6);
  D12():
    deopt 48 [i8, inlist3];
  D15():
    deopt 57 [i15];
  L37(i145, dx45):
    r73 = `==`(dx45, 3.0);
    c23 = `as.logical`(r73);
    if c23 then L198() else L38();
  L93():
    inlist4 = force? inlist3;
    checkMissing(inlist4);
    c4 = `is.object`(inlist4);
    if c4 then L94() else L95(i8, inlist4);
  L99():
    p8 = prom<V +>{
      tlen = ld tlen;
      tlen1 = force? tlen;
      checkMissing(tlen1);
      return tlen1;
    };
    p9 = prom<V +>{
      ncols3 = ld ncols;
      ncols4 = force? ncols3;
      checkMissing(ncols4);
      c5 = `is.object`(ncols4);
      if c5 then L1() else L2(ncols4);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", ncols4);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(ncols6):
      i20 = ld i;
      i21 = force? i20;
      __2 = ldf `[` in base;
      r22 = dyn __2(ncols6, i21);
      goto L0(r22);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r24 = dyn matrix[, nrow, ncol](0.0, p8, p9);
    check L100() else D16();
  L194():
    dr30 = tryDispatchBuiltin.1("[", coltypes6);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L196() else L195(i8, dr30);
  L195(i143, coltypes8):
    i146 = ld i;
    check L197() else D56();
  D16():
    deopt 63 [i15, r24];
  D56():
    deopt 198 [i143, coltypes8, i146];
  L10(i19, dx3):
    length1 = ldf length in base;
    r20 = dyn length1(dx3);
    check L98() else D14();
  L38():
    inlist21 = ld inlist;
    check L266() else D82();
  L94():
    dr2 = tryDispatchBuiltin.1("[[", inlist4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L96() else L95(i8, dr2);
  L95(i17, inlist6):
    j = ld j;
    check L97() else D13();
  L100():
    st x = r24;
    sym6 = ldf vector;
    base6 = ldf vector in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L101() else L102();
  L196():
    dx44 = getTryDispatchBuiltinValue(dr30);
    goto L37(i8, dx44);
  L197():
    i147 = force? i146;
    __11 = ldf `[` in base;
    r72 = dyn __11(coltypes8, i147);
    goto L37(i143, r72);
  L198():
    sym12 = ldf vector;
    base12 = ldf vector in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L199() else L200();
  D13():
    deopt 50 [i17, inlist6, j];
  D14():
    deopt 54 [i19, r20];
  D82():
    deopt 294 [i145, inlist21];
  L11(i24, r26):
    st cnames = r26;
    sym7 = ldf seq_len;
    base7 = ldf seq_len in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L106() else L107();
  L39(i152, r75):
    st x = r75;
    sym13 = ldf vector;
    base13 = ldf vector in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L207() else L208();
  L96():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(i8, dx2);
  L97():
    j1 = force? j;
    __1 = ldf `[[` in base;
    r19 = dyn __1(inlist6, j1);
    goto L10(i17, r19);
  L98():
    goto L9(i19, r20);
  L101():
    ncol = ldf ncol;
    check L103() else D17();
  L102():
    r25 = dyn base6("character", <lang ncol(x)>);
    goto L11(i15, r25);
  L199():
    ncols11 = ld ncols;
    check L201() else D57();
  L200():
    r74 = dyn base12[, length]("list", <lang `[`(ncols, i)>);
    goto L39(i145, r74);
  L266():
    inlist22 = force? inlist21;
    checkMissing(inlist22);
    c36 = `is.object`(inlist22);
    if c36 then L267() else L268(i145, inlist22);
  D17():
    deopt 69 [i15];
  D57():
    deopt 206 [i145, ncols11];
  L12(i27, r31):
    s1 = toForSeq(r31);
    l1 = length(s1);
    i34 = 0;
    goto L14(i27, i34);
  L41(i161, r79):
    st cnames = r79;
    sym14 = ldf seq_len;
    base14 = ldf seq_len in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L215() else L216();
  L57(i244, dx79):
    l29 = ld rlist;
    c37 = `is.object`(l29);
    if c37 then L271() else L272(i244, dx79, l29);
  L103():
    p10 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r28 = dyn ncol(p10);
    check L104() else D18();
  L106():
    ncols7 = ld ncols;
    check L108() else D20();
  L107():
    r30 = dyn base7(<lang `[`(ncols, i)>);
    goto L12(i24, r30);
  L201():
    ncols12 = force? ncols11;
    checkMissing(ncols12);
    c24 = `is.object`(ncols12);
    if c24 then L202() else L203(i145, ncols12);
  L207():
    ncols15 = ld ncols;
    check L209() else D60();
  L208():
    r78 = dyn base13("character", <lang `[`(ncols, i)>);
    goto L41(i152, r78);
  L267():
    dr52 = tryDispatchBuiltin.1("[[", inlist22);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L269() else L268(i145, dr52);
  L268(i242, inlist24):
    j16 = ld j;
    check L270() else D83();
  D18():
    deopt 71 [i15, r28];
  D20():
    deopt 76 [i24, ncols7];
  D60():
    deopt 217 [i152, ncols15];
  D83():
    deopt 296 [i242, inlist24, j16];
  L14(i35, i36):
    i37 = `+`.1(i36, 1);
    c7 = `<`.1(l1, i37);
    if c7 then L113() else L23();
  L40(i156, dx47):
    vector3 = ldf vector in base;
    r77 = dyn vector3("list", dx47);
    check L206() else D59();
  L43(i170, r83):
    s2 = toForSeq(r83);
    l15 = length(s2);
    i177 = 0;
    goto L45(i170, i177);
  L58(i248, dx85):
    st rlist = dx85;
    j18 = ld j;
    check L275() else D85();
  L104():
    vector2 = ldf vector in base;
    r29 = dyn vector2("character", r28);
    check L105() else D19();
  L108():
    ncols8 = force? ncols7;
    checkMissing(ncols8);
    c6 = `is.object`(ncols8);
    if c6 then L109() else L110(i24, ncols8);
  L202():
    dr32 = tryDispatchBuiltin.1("[", ncols12);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L204() else L203(i145, dr32);
  L203(i154, ncols14):
    i157 = ld i;
    check L205() else D58();
  L209():
    ncols16 = force? ncols15;
    checkMissing(ncols16);
    c25 = `is.object`(ncols16);
    if c25 then L210() else L211(i152, ncols16);
  L215():
    ncols19 = ld ncols;
    check L217() else D63();
  L216():
    r82 = dyn base14(<lang `[`(ncols, i)>);
    goto L43(i161, r82);
  L269():
    dx78 = getTryDispatchBuiltinValue(dr52);
    goto L57(i145, dx78);
  L270():
    j17 = force? j16;
    __18 = ldf `[[` in base;
    r99 = dyn __18(inlist24, j17);
    goto L57(i242, r99);
  L271():
    dr54 = tryDispatchBuiltin.0("[[<-", l29, dx79);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L273() else L272(i244, dx79, dr54);
  L272(i246, dx81, l31):
    i249 = ld i;
    check L274() else D84();
  D19():
    deopt 73 [i15, r29];
  D58():
    deopt 208 [i154, ncols14, i157];
  D59():
    deopt 212 [i156, r77];
  D63():
    deopt 226 [i161, ncols19];
  D84():
    deopt 300 [i246, dx81, l31, dx79, i249];
  D85():
    deopt 304 [i248, j18];
  L13(i31, dx7):
    r33 = seq_len(dx7);
    goto L12(i31, r33);
  L23():
    x3 = `[[`(s1, i37, NULL, TRUE);
    st ind1 = x3;
    tlen2 = ld tlen;
    check L114() else D22();
  L42(i165, dx49):
    vector4 = ldf vector in base;
    r81 = dyn vector4("character", dx49);
    check L214() else D62();
  L45(i178, i179):
    i180 = `+`.1(i179, 1);
    c27 = `<`.1(l15, i180);
    if c27 then L222() else L50();
  L105():
    goto L11(i15, r29);
  L109():
    dr6 = tryDispatchBuiltin.1("[", ncols8);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L111() else L110(i24, dr6);
  L110(i29, ncols10):
    i32 = ld i;
    check L112() else D21();
  L113():
    nrow = ldf nrow;
    check L148() else D36();
  L204():
    dx46 = getTryDispatchBuiltinValue(dr32);
    goto L40(i145, dx46);
  L205():
    i158 = force? i157;
    __12 = ldf `[` in base;
    r76 = dyn __12(ncols14, i158);
    goto L40(i154, r76);
  L206():
    goto L39(i156, r77);
  L210():
    dr34 = tryDispatchBuiltin.1("[", ncols16);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L212() else L211(i152, dr34);
  L211(i163, ncols18):
    i166 = ld i;
    check L213() else D61();
  L217():
    ncols20 = force? ncols19;
    checkMissing(ncols20);
    c26 = `is.object`(ncols20);
    if c26 then L218() else L219(i161, ncols20);
  L273():
    dx83 = getTryDispatchBuiltinValue(dr54);
    goto L58(i244, dx83);
  L274():
    i250 = force? i249;
    ____3 = ldf `[[<-` in base;
    r100 = dyn ____3(l31, dx79, i250);
    goto L58(i246, r100);
  L275():
    j19 = force? j18;
    checkMissing(j19);
    r101 = `+`(j19, 1.0);
    st j = r101;
    argnames9 = ld argnames;
    check L276() else D86();
  D21():
    deopt 78 [i29, ncols10, i32];
  D22():
    deopt 82 [i35, i37, tlen2];
  D36():
    deopt 133 [i35];
  D61():
    deopt 219 [i163, ncols18, i166];
  D62():
    deopt 223 [i165, r81];
  D86():
    deopt 309 [i248, argnames9];
  L44(i174, dx51):
    r85 = seq_len(dx51);
    goto L43(i174, r85);
  L50():
    x12 = `[[`(s2, i180, NULL, TRUE);
    st ind1 = x12;
    inlist17 = ld inlist;
    check L223() else D65();
  L111():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L13(i24, dx6);
  L112():
    i33 = force? i32;
    __3 = ldf `[` in base;
    r32 = dyn __3(ncols10, i33);
    goto L13(i29, r32);
  L114():
    tlen3 = force? tlen2;
    checkMissing(tlen3);
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L115() else L116();
  L148():
    p11 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r48 = dyn nrow(p11);
    check L149() else D37();
  L212():
    dx48 = getTryDispatchBuiltinValue(dr34);
    goto L42(i152, dx48);
  L213():
    i167 = force? i166;
    __13 = ldf `[` in base;
    r80 = dyn __13(ncols18, i167);
    goto L42(i163, r80);
  L214():
    goto L41(i165, r81);
  L218():
    dr36 = tryDispatchBuiltin.1("[", ncols20);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L220() else L219(i161, dr36);
  L219(i172, ncols22):
    i175 = ld i;
    check L221() else D64();
  L222():
    sym15 = ldf any;
    base15 = ldf any in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L242() else L243();
  L276():
    argnames10 = force? argnames9;
    checkMissing(argnames10);
    c38 = `is.object`(argnames10);
    if c38 then L277() else L278(i248, argnames10);
  D37():
    deopt 135 [i35, r48];
  D64():
    deopt 228 [i172, ncols22, i175];
  D65():
    deopt 232 [i178, i180, inlist17];
  L15(i46, i47, tlen6, r35):
    r38 = `!=`(tlen6, r35);
    c9 = `as.logical`(r38);
    if c9 then L123() else L17();
  L51(i219, r92):
    c32 = `as.logical`(r92);
    if c32 then L246() else L52();
  L59(i254, dx87):
    l32 = ld rnames;
    c39 = `is.object`(l32);
    if c39 then L281() else L282(i254, dx87, l32);
  L115():
    inlist7 = ld inlist;
    check L117() else D23();
  L116():
    r34 = dyn base8(<lang `[[`(inlist, j)>);
    goto L15(i35, i37, tlen3, r34);
  L149():
    nrow1 = ldf nrow;
    check L150() else D38();
  L220():
    dx50 = getTryDispatchBuiltinValue(dr36);
    goto L44(i161, dx50);
  L221():
    i176 = force? i175;
    __14 = ldf `[` in base;
    r84 = dyn __14(ncols22, i176);
    goto L44(i172, r84);
  L223():
    inlist18 = force? inlist17;
    checkMissing(inlist18);
    c28 = `is.object`(inlist18);
    if c28 then L224() else L225(i178, i180, inlist18);
  L242():
    cnames4 = ld cnames;
    check L244() else D72();
  L243():
    r91 = dyn base15(<lang `!=`(cnames, "")>);
    goto L51(i178, r91);
  L277():
    dr56 = tryDispatchBuiltin.1("[", argnames10);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L279() else L278(i248, dr56);
  L278(i252, argnames12):
    i255 = ld i;
    check L280() else D87();
  D23():
    deopt 85 [i35, i37, tlen3, inlist7];
  D38():
    deopt 136 [i35, r48];
  D72():
    deopt 262 [i178, cnames4];
  D87():
    deopt 311 [i252, argnames12, i255];
  L17():
    inlist13 = ld inlist;
    check L129() else D29();
  L46(i191, i192, dx53):
    l16 = ld x;
    c29 = `is.object`(l16);
    if c29 then L228() else L229(i191, i192, dx53, l16);
  L52():
    goto L53(i219);
  L53(i222):
    x13 = ld x;
    check L251() else D77();
  L60(i260, dx92, dx93):
    st rnames = dx93;
    goto L36(i260);
  L117():
    inlist8 = force? inlist7;
    checkMissing(inlist8);
    c8 = `is.object`(inlist8);
    if c8 then L118() else L119(i35, i37, tlen3, inlist8);
  L123():
    warning = ldf warning;
    check L124() else D26();
  L150():
    p12 = prom<V +>{
      args1 = ld args;
      args2 = force? args1;
      checkMissing(args2);
      c14 = `is.object`(args2);
      if c14 then L1() else L2(args2);
    L0(dx27):
      return dx27;
    L1():
      dr18 = tryDispatchBuiltin.1("[[", args2);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(args4):
      i96 = ld i;
      i97 = force? i96;
      __7 = ldf `[[` in base;
      r49 = dyn __7(args4, i97);
      goto L0(r49);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx26);
    };
    r51 = dyn nrow1(p12);
    check L151() else D39();
  L224():
    dr38 = tryDispatchBuiltin.1("[[", inlist18);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L226() else L225(i178, i180, dr38);
  L225(i187, i188, inlist20):
    j10 = ld j;
    check L227() else D66();
  L244():
    cnames5 = force? cnames4;
    checkMissing(cnames5);
    r93 = `!=`(cnames5, "");
    any1 = ldf any in base;
    r94 = dyn any1(r93);
    check L245() else D73();
  L246():
    cnames6 = ld cnames;
    check L247() else D74();
  L279():
    dx86 = getTryDispatchBuiltinValue(dr56);
    goto L59(i248, dx86);
  L280():
    i256 = force? i255;
    __19 = ldf `[` in base;
    r102 = dyn __19(argnames12, i256);
    goto L59(i252, r102);
  L281():
    dr58 = tryDispatchBuiltin.0("[<-", l32, dx87);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L283() else L282(i254, dx87, dr58);
  L282(i258, dx89, l34):
    i261 = ld i;
    check L284() else D88();
  D26():
    deopt 94 [i46, i47];
  D29():
    deopt 102 [i46, i47, inlist13];
  D39():
    deopt 138 [i35, r48, r51];
  D66():
    deopt 234 [i187, i188, inlist20, j10];
  D73():
    deopt 267 [i178, r94];
  D74():
    deopt 268 [i219, cnames6];
  D77():
    deopt 277 [i222, x13];
  D88():
    deopt 315 [i258, dx89, l34, dx87, i261];
  L16(i54, i55, tlen10, dx9):
    length2 = ldf length in base;
    r37 = dyn length2(dx9);
    check L122() else D25();
  L47(i199, i200, dx59):
    st x = dx59;
    lnames4 = ld lnames;
    check L232() else D68();
  L118():
    dr8 = tryDispatchBuiltin.1("[[", inlist8);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L120() else L119(i35, i37, tlen3, dr8);
  L119(i50, i51, tlen8, inlist10):
    j2 = ld j;
    check L121() else D24();
  L124():
    r39 = dyn warning("could not restore type information");
    check L125() else D27();
  L129():
    inlist14 = force? inlist13;
    checkMissing(inlist14);
    c10 = `is.object`(inlist14);
    if c10 then L130() else L131(i46, i47, inlist14);
  L151():
    r52 = `==`(r48, r51);
    c15 = `as.logical`(r52);
    if c15 then L152() else L24();
  L226():
    dx52 = getTryDispatchBuiltinValue(dr38);
    goto L46(i178, i180, dx52);
  L227():
    j11 = force? j10;
    __15 = ldf `[[` in base;
    r86 = dyn __15(inlist20, j11);
    goto L46(i187, i188, r86);
  L228():
    dr40 = tryDispatchBuiltin.0("[[<-", l16, dx53);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L230() else L229(i191, i192, dx53, dr40);
  L229(i195, i196, dx55, l18):
    ind5 = ld ind1;
    check L231() else D67();
  L245():
    goto L51(i178, r94);
  L247():
    cnames7 = force? cnames6;
    checkMissing(cnames7);
    l22 = ld x;
    names__ = ldf `names<-`;
    check L248() else D75();
  L251():
    x14 = force? x13;
    checkMissing(x14);
    l23 = ld rlist;
    c33 = `is.object`(l23);
    if c33 then L252() else L253(i222, x14, l23);
  L283():
    dx91 = getTryDispatchBuiltinValue(dr58);
    goto L60(i254, dx87, dx91);
  L284():
    i262 = force? i261;
    ___5 = ldf `[<-` in base;
    r103 = dyn ___5(l34, dx87, i262);
    goto L60(i258, dx89, r103);
  D24():
    deopt 87 [i50, i51, tlen8, inlist10, j2];
  D25():
    deopt 91 [i54, i55, tlen10, r37];
  D27():
    deopt 96 [i46, i47, r39];
  D67():
    deopt 238 [i195, i196, dx55, l18, dx53, ind5];
  D68():
    deopt 242 [i199, i200, lnames4];
  D75():
    deopt 271 [i219, cnames7, l22, cnames7];
  L19(i70, i71, dx11):
    l2 = ld x;
    c11 = `is.object`(l2);
    if c11 then L134() else L135(i70, i71, dx11, l2);
  L24():
    st rn = NULL;
    goto L28(i35);
  L28(i113):
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L165() else L166();
  L54(i226, dx69):
    st rlist = dx69;
    argnames5 = ld argnames;
    check L256() else D79();
  L120():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L16(i35, i37, tlen3, dx8);
  L121():
    j3 = force? j2;
    __4 = ldf `[[` in base;
    r36 = dyn __4(inlist10, j3);
    goto L16(i50, i51, tlen8, r36);
  L122():
    goto L15(i54, i55, tlen10, r37);
  L125():
    inlist11 = ld inlist;
    check L126() else D28();
  L130():
    dr10 = tryDispatchBuiltin.1("[[", inlist14);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L132() else L131(i46, i47, dr10);
  L131(i66, i67, inlist16):
    j4 = ld j;
    check L133() else D30();
  L152():
    sym9 = ldf dimnames;
    base9 = ldf dimnames in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L153() else L154();
  L230():
    dx57 = getTryDispatchBuiltinValue(dr40);
    goto L47(i191, i192, dx57);
  L231():
    ind6 = force? ind5;
    ____1 = ldf `[[<-` in base;
    r87 = dyn ____1(l18, dx53, ind6);
    goto L47(i195, i196, r87);
  L232():
    lnames5 = force? lnames4;
    checkMissing(lnames5);
    c30 = `is.object`(lnames5);
    if c30 then L233() else L234(i199, i200, lnames5);
  L248():
    r95 = dyn names__(l22, NULL, cnames7);
    check L249() else D76();
  L252():
    dr46 = tryDispatchBuiltin.0("[[<-", l23, x14);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L254() else L253(i222, x14, dr46);
  L253(i224, x16, l25):
    i227 = ld i;
    check L255() else D78();
  D28():
    deopt 97 [i46, i47, inlist11];
  D30():
    deopt 104 [i66, i67, inlist16, j4];
  D76():
    deopt 273 [i219, cnames7, r95];
  D78():
    deopt 280 [i224, x16, l25, x14, i227];
  D79():
    deopt 284 [i226, argnames5];
  L20(i78, i79, dx17):
    st x = dx17;
    lnames = ld lnames;
    check L138() else D32();
  L25(i102, r54):
    c17 = `is.object`(r54);
    if c17 then L161() else L162(i102, r54);
  L29(i116, r61):
    c18 = `as.logical`(r61);
    if c18 then L169() else L30();
  L48(i207, i208, dx61):
    l19 = ld cnames;
    c31 = `is.object`(l19);
    if c31 then L237() else L238(i207, i208, dx61, l19);
  L126():
    inlist12 = force? inlist11;
    checkMissing(inlist12);
    popenv;
    return inlist12;
  L132():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L19(i46, i47, dx10);
  L133():
    j5 = force? j4;
    __5 = ldf `[[` in base;
    r42 = dyn __5(inlist16, j5);
    goto L19(i66, i67, r42);
  L134():
    dr12 = tryDispatchBuiltin.0("[<-", l2, dx11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L136() else L135(i70, i71, dx11, dr12);
  L135(i74, i75, dx13, l4):
    ind1 = ld ind1;
    check L137() else D31();
  L153():
    args5 = ld args;
    check L155() else D40();
  L154():
    r53 = dyn base9(<lang `[[`(args, i)>);
    goto L25(i35, r53);
  L165():
    cnames = ld cnames;
    check L167() else D43();
  L166():
    r60 = dyn base10(<lang `!=`(cnames, "")>);
    goto L29(i113, r60);
  L233():
    dr42 = tryDispatchBuiltin.1("[", lnames5);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L235() else L234(i199, i200, dr42);
  L234(i203, i204, lnames7):
    j12 = ld j;
    check L236() else D69();
  L249():
    st x = r95;
    goto L53(i219);
  L254():
    dx68 = getTryDispatchBuiltinValue(dr46);
    goto L54(i222, dx68);
  L255():
    i228 = force? i227;
    ____2 = ldf `[[<-` in base;
    r96 = dyn ____2(l25, x14, i228);
    goto L54(i224, r96);
  L256():
    argnames6 = force? argnames5;
    checkMissing(argnames6);
    c34 = `is.object`(argnames6);
    if c34 then L257() else L258(i226, argnames6);
  D31():
    deopt 109 [i74, i75, dx13, l4, dx11, ind1];
  D32():
    deopt 114 [i78, i79, lnames];
  D40():
    deopt 142 [i35, args5];
  D43():
    deopt 158 [i113, cnames];
  D69():
    deopt 244 [i203, i204, lnames7, j12];
  L27(i112, dx31):
    st rn = dx31;
    goto L28(i112);
  L30():
    goto L32(i116);
  L32(i122):
    x6 = ld x;
    check L178() else D50();
  L49(i215, i216, dx67):
    st cnames = dx67;
    j14 = ld j;
    check L241() else D71();
  L55(i232, dx71):
    l26 = ld rnames;
    c35 = `is.object`(l26);
    if c35 then L261() else L262(i232, dx71, l26);
  L136():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L20(i70, i71, dx15);
  L137():
    ind2 = force? ind1;
    ___ = ldf `[<-` in base;
    r43 = dyn ___(l2, <missing>, ind2, dx11);
    goto L20(i74, i75, r43);
  L138():
    lnames1 = force? lnames;
    checkMissing(lnames1);
    c12 = `is.object`(lnames1);
    if c12 then L139() else L140(i78, i79, lnames1);
  L155():
    args6 = force? args5;
    checkMissing(args6);
    c16 = `is.object`(args6);
    if c16 then L156() else L157(i35, args6);
  L161():
    dr22 = tryDispatchBuiltin.1("[[", r54);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L163() else L162(i102, dr22);
  L162(i110, r58):
    __9 = ldf `[[` in base;
    r59 = dyn __9(r58, 1);
    goto L27(i110, r59);
  L167():
    cnames1 = force? cnames;
    checkMissing(cnames1);
    r62 = `!=`(cnames1, "");
    any = ldf any in base;
    r63 = dyn any(r62);
    check L168() else D44();
  L169():
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L170() else L171();
  L235():
    dx60 = getTryDispatchBuiltinValue(dr42);
    goto L48(i199, i200, dx60);
  L236():
    j13 = force? j12;
    __16 = ldf `[` in base;
    r88 = dyn __16(lnames7, j13);
    goto L48(i203, i204, r88);
  L237():
    dr44 = tryDispatchBuiltin.0("[<-", l19, dx61);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L239() else L238(i207, i208, dx61, dr44);
  L238(i211, i212, dx63, l21):
    ind7 = ld ind1;
    check L240() else D70();
  L257():
    dr48 = tryDispatchBuiltin.1("[", argnames6);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L259() else L258(i226, dr48);
  L258(i230, argnames8):
    i233 = ld i;
    check L260() else D80();
  D44():
    deopt 163 [i113, r63];
  D50():
    deopt 179 [i122, x6];
  D70():
    deopt 248 [i211, i212, dx63, l21, dx61, ind7];
  D71():
    deopt 252 [i215, i216, j14];
  D80():
    deopt 286 [i230, argnames8, i233];
  L21(i86, i87, dx19):
    l5 = ld cnames;
    c13 = `is.object`(l5);
    if c13 then L143() else L144(i86, i87, dx19, l5);
  L26(i106, dx29):
    dimnames = ldf dimnames in base;
    r56 = dyn dimnames(dx29);
    check L160() else D42();
  L31(i121, r65):
    l8 = ld x;
    dimnames__ = ldf `dimnames<-`;
    check L175() else D48();
  L56(i238, dx76, dx77):
    st rnames = dx77;
    goto L36(i238);
  L139():
    dr14 = tryDispatchBuiltin.1("[", lnames1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L141() else L140(i78, i79, dr14);
  L140(i82, i83, lnames3):
    j6 = ld j;
    check L142() else D33();
  L156():
    dr20 = tryDispatchBuiltin.1("[[", args6);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L158() else L157(i35, dr20);
  L157(i104, args8):
    i107 = ld i;
    check L159() else D41();
  L163():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L27(i102, dx30);
  L168():
    goto L29(i113, r63);
  L170():
    rn = ld rn;
    check L172() else D45();
  L171():
    r64 = dyn base11(<sym rn>, <sym cnames>);
    goto L31(i116, r64);
  L178():
    x7 = force? x6;
    checkMissing(x7);
    l9 = ld rlist;
    c19 = `is.object`(l9);
    if c19 then L179() else L180(i122, x7, l9);
  L239():
    dx65 = getTryDispatchBuiltinValue(dr44);
    goto L49(i207, i208, dx65);
  L240():
    ind8 = force? ind7;
    ___3 = ldf `[<-` in base;
    r89 = dyn ___3(l21, dx61, ind8);
    goto L49(i211, i212, r89);
  L241():
    j15 = force? j14;
    checkMissing(j15);
    r90 = `+`(j15, 1);
    st j = r90;
    goto L45(i215, i216);
  L259():
    dx70 = getTryDispatchBuiltinValue(dr48);
    goto L55(i226, dx70);
  L260():
    i234 = force? i233;
    __17 = ldf `[` in base;
    r97 = dyn __17(argnames8, i234);
    goto L55(i230, r97);
  L261():
    dr50 = tryDispatchBuiltin.0("[<-", l26, dx71);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L263() else L262(i232, dx71, dr50);
  L262(i236, dx73, l28):
    i239 = ld i;
    check L264() else D81();
  D33():
    deopt 116 [i82, i83, lnames3, j6];
  D41():
    deopt 144 [i104, args8, i107];
  D42():
    deopt 148 [i106, r56];
  D45():
    deopt 166 [i116, rn];
  D48():
    deopt 173 [i121, r65, l8, r65];
  D81():
    deopt 290 [i236, dx73, l28, dx71, i239];
  L22(i94, i95, dx25):
    st cnames = dx25;
    j8 = ld j;
    check L147() else D35();
  L33(i126, dx34):
    st rlist = dx34;
    argnames1 = ld argnames;
    check L183() else D52();
  L141():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L21(i78, i79, dx18);
  L142():
    j7 = force? j6;
    __6 = ldf `[` in base;
    r44 = dyn __6(lnames3, j7);
    goto L21(i82, i83, r44);
  L143():
    dr16 = tryDispatchBuiltin.0("[<-", l5, dx19);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L145() else L144(i86, i87, dx19, dr16);
  L144(i90, i91, dx21, l7):
    ind3 = ld ind1;
    check L146() else D34();
  L158():
    dx28 = getTryDispatchBuiltinValue(dr20);
    goto L26(i35, dx28);
  L159():
    i108 = force? i107;
    __8 = ldf `[[` in base;
    r55 = dyn __8(args8, i108);
    goto L26(i104, r55);
  L160():
    goto L25(i106, r56);
  L172():
    rn1 = force? rn;
    checkMissing(rn1);
    cnames2 = ld cnames;
    check L173() else D46();
  L175():
    r67 = dyn dimnames__(l8, NULL, r65);
    check L176() else D49();
  L179():
    dr24 = tryDispatchBuiltin.0("[[<-", l9, x7);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L181() else L180(i122, x7, dr24);
  L180(i124, x9, l11):
    i127 = ld i;
    check L182() else D51();
  L263():
    dx75 = getTryDispatchBuiltinValue(dr50);
    goto L56(i232, dx71, dx75);
  L264():
    i240 = force? i239;
    ___4 = ldf `[<-` in base;
    r98 = dyn ___4(l28, dx71, i240);
    goto L56(i236, dx73, r98);
  D34():
    deopt 120 [i90, i91, dx21, l7, dx19, ind3];
  D35():
    deopt 124 [i94, i95, j8];
  D46():
    deopt 168 [i116, cnames2];
  D49():
    deopt 175 [i121, r65, r67];
  D51():
    deopt 182 [i124, x9, l11, x7, i127];
  D52():
    deopt 186 [i126, argnames1];
  L145():
    dx23 = getTryDispatchBuiltinValue(dr16);
    goto L22(i86, i87, dx23);
  L146():
    ind4 = force? ind3;
    ___1 = ldf `[<-` in base;
    r45 = dyn ___1(l7, dx19, ind4);
    goto L22(i90, i91, r45);
  L147():
    j9 = force? j8;
    checkMissing(j9);
    r46 = `+`(j9, 1);
    st j = r46;
    goto L14(i94, i95);
  L173():
    cnames3 = force? cnames2;
    checkMissing(cnames3);
    list = ldf list in base;
    r66 = dyn list(rn1, cnames3);
    check L174() else D47();
  L176():
    st x = r67;
    goto L32(i121);
  L181():
    dx33 = getTryDispatchBuiltinValue(dr24);
    goto L33(i122, dx33);
  L182():
    i128 = force? i127;
    ____ = ldf `[[<-` in base;
    r69 = dyn ____(l11, x7, i128);
    goto L33(i124, r69);
  L183():
    argnames2 = force? argnames1;
    checkMissing(argnames2);
    c20 = `is.object`(argnames2);
    if c20 then L184() else L185(i126, argnames2);
  D47():
    deopt 171 [i116, r66];
  L34(i132, dx36):
    l12 = ld rnames;
    c21 = `is.object`(l12);
    if c21 then L188() else L189(i132, dx36, l12);
  L174():
    goto L31(i116, r66);
  L184():
    dr26 = tryDispatchBuiltin.1("[", argnames2);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L186() else L185(i126, dr26);
  L185(i130, argnames4):
    i133 = ld i;
    check L187() else D53();
  D53():
    deopt 188 [i130, argnames4, i133];
  L35(i138, dx41, dx42):
    st rnames = dx42;
    goto L36(i138);
  L186():
    dx35 = getTryDispatchBuiltinValue(dr26);
    goto L34(i126, dx35);
  L187():
    i134 = force? i133;
    __10 = ldf `[` in base;
    r70 = dyn __10(argnames4, i134);
    goto L34(i130, r70);
  L188():
    dr28 = tryDispatchBuiltin.0("[<-", l12, dx36);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L190() else L189(i132, dx36, dr28);
  L189(i136, dx38, l14):
    i139 = ld i;
    check L191() else D54();
  D54():
    deopt 192 [i136, dx38, l14, dx36, i139];
  L190():
    dx40 = getTryDispatchBuiltinValue(dr28);
    goto L35(i132, dx36, dx40);
  L191():
    i140 = force? i139;
    ___2 = ldf `[<-` in base;
    r71 = dyn ___2(l14, dx36, i140);
    goto L35(i136, dx38, r71);
  }
}