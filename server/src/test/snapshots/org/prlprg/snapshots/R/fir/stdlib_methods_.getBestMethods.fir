fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner212531787;
    st `.getBestMethods` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner212531787(methods, supersList, fromGroup, verbose) {
  (reg methods:*, reg supersList:*, reg fromGroup:*, reg verbose:*) -+> V { var methods:*, var supersList:*, var fromGroup:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg methods1:*, reg methods2:V, reg length:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg supersList1:*, reg supersList2:V, reg length1:cls, reg r5:V, reg matrix:cls, reg nArg:*, reg nArg1:V, reg p:p(V +), reg n:*, reg n1:V, reg p1:p(V +), reg r8:V, reg n2:*, reg n3:V, reg r9:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg __:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg i7:I, reg r12:V, reg sig:*, reg sig1:V, reg length2:cls, reg r13:V, reg nArg2:*, reg nArg3:V, reg r14:V, reg c1:L, reg verbose1:*, reg verbose2:V, reg c2:L, reg cat:cls, reg sprintf:cls, reg i12:*, reg i13:V, reg p2:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg sig2:*, reg sig3:V, reg length3:cls, reg r18:V, reg p3:p(V +), reg nArg4:*, reg nArg5:V, reg p4:p(V +), reg r21:V, reg p5:p(V +), reg r23:V, reg i14:I, reg sig4:*, reg sig5:V, reg l1:*, reg c3:L, reg i16:I, reg sig7:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg i18:I, reg sig9:V, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg i21:I, reg sig14:V, reg l6:*, reg sig15:V, reg r26:V, reg sig16:*, reg sig17:V, reg r27:I, reg i22:*, reg i23:V, reg ___:cls, reg r28:V, reg i24:I, reg sig19:*, reg sig20:V, reg l7:*, reg c4:L, reg i26:I, reg sig22:V, reg l9:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i28:I, reg sig24:V, reg dx3:V, reg i29:*, reg i30:V, reg ___1:cls, reg r29:V, reg nArg6:*, reg nArg7:V, reg r30:V, reg c5:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg sigs:*, reg sigs1:V, reg c6:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r35:V, reg supersList3:*, reg supersList4:V, reg c7:L, reg supersList6:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r36:V, reg match:cls, reg r37:V, reg which_min:cls, reg r38:V, reg matrix1:cls, reg nArg8:*, reg nArg9:V, reg p6:p(V +), reg n4:*, reg n5:V, reg p7:p(V +), reg r43:V, reg nArg10:*, reg nArg11:V, reg r44:V, reg s1:V, reg l10:I, reg i31:I, reg i32:I, reg i33:I, reg c8:L, reg x1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg i38:I, reg r46:V, reg sigs4:*, reg sigs5:V, reg c9:L, reg i40:I, reg sigs7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i42:I, reg dx9:V, reg i43:*, reg i44:V, reg __3:cls, reg r47:V, reg supersList7:*, reg supersList8:V, reg c10:L, reg i46:I, reg supersList10:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i48:I, reg dx11:V, reg i49:*, reg i50:V, reg __4:cls, reg r48:V, reg match1:cls, reg r49:V, reg l11:*, reg c11:L, reg i52:I, reg r51:V, reg l13:*, reg dr12:V, reg dc6:L, reg dx12:V, reg i54:I, reg dx13:V, reg i55:*, reg i56:V, reg ___2:cls, reg r54:V, reg colSums:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg pos:*, reg pos1:V, reg is_na:cls, reg r57:V, reg p8:p(V +), reg r59:V, reg r60:V, reg valid:*, reg valid1:V, reg valid2:*, reg valid3:V, reg r61:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r62:V, reg r63:V, reg n6:*, reg n7:V, reg r64:I, reg seqn:*, reg seqn1:V, reg c12:L, reg seqn3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg valid4:*, reg valid5:V, reg __5:cls, reg r65:V, reg s2:V, reg l14:I, reg i57:I, reg i58:I, reg i59:I, reg c13:L, reg x2:V, reg seqn4:*, reg seqn5:V, reg c14:L, reg i63:I, reg seqn7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg i65:I, reg dx17:V, reg i66:*, reg i67:V, reg r66:V, reg __6:cls, reg r67:V, reg c15:L, reg i69:I, reg dx19:V, reg dr18:V, reg dc9:L, reg dx20:V, reg i71:I, reg dx21:V, reg valid6:*, reg valid7:V, reg c16:L, reg i73:I, reg dx23:V, reg valid9:V, reg dr20:V, reg dc10:L, reg dx25:V, reg i75:I, reg dx26:V, reg dx27:V, reg i76:*, reg i77:V, reg r68:V, reg __7:cls, reg r69:V, reg __8:cls, reg r70:V, reg s3:V, reg l15:I, reg i78:I, reg i79:I, reg i80:I, reg i81:I, reg c17:L, reg x3:V, reg pos2:*, reg pos3:V, reg c18:L, reg i88:I, reg i89:I, reg pos5:V, reg dr22:V, reg dc11:L, reg dx28:V, reg i92:I, reg i93:I, reg dx29:V, reg j:*, reg j1:V, reg __9:cls, reg r71:V, reg pos6:*, reg pos7:V, reg c19:L, reg i96:I, reg i97:I, reg dx31:V, reg pos9:V, reg dr24:V, reg dc12:L, reg dx33:V, reg i100:I, reg i101:I, reg dx34:V, reg dx35:V, reg i102:*, reg i103:V, reg __10:cls, reg r72:V, reg r73:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r74:V, reg i108:I, reg i109:I, reg r75:V, reg diffs:*, reg diffs1:V, reg r76:V, reg any:cls, reg r77:V, reg c20:L, reg l16:*, reg c21:L, reg i116:I, reg i117:I, reg r79:L, reg l18:*, reg dr26:V, reg dc13:L, reg dx36:V, reg i120:I, reg i121:I, reg dx37:V, reg i122:*, reg i123:V, reg ___3:cls, reg r82:V, reg dominated:*, reg dominated1:V, reg c22:L, reg i126:I, reg i127:I, reg dominated3:V, reg dr28:V, reg dc14:L, reg dx38:V, reg i130:I, reg i131:I, reg dx39:V, reg i132:*, reg i133:V, reg __11:cls, reg r83:V, reg c23:L, reg i138:I, reg i144:I, reg i145:I, reg sym11:cls, reg base11:cls, reg guard11:L, reg r86:V, reg i150:I, reg i151:I, reg r87:V, reg diffs2:*, reg diffs3:V, reg r88:V, reg all:cls, reg r89:V, reg c24:L, reg l19:*, reg c25:L, reg i158:I, reg i159:I, reg r91:L, reg l21:*, reg dr30:V, reg dc15:L, reg dx40:V, reg i162:I, reg i163:I, reg dx41:V, reg i164:*, reg i165:V, reg ___4:cls, reg r94:V, reg best:*, reg best1:V, reg c26:L, reg i168:I, reg i169:I, reg best3:V, reg dr32:V, reg dc16:L, reg dx42:V, reg i172:I, reg i173:I, reg dx43:V, reg i174:*, reg i175:V, reg __12:cls, reg r95:V, reg r96:V, reg c27:L, reg i184:I, reg i185:I, reg verbose3:*, reg verbose4:V, reg c28:L, reg cat1:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r99:V, reg r100:V, reg best4:*, reg best5:V, reg any1:cls, reg r101:V, reg c29:L, reg paste:cls, reg paste1:cls, reg format:cls, reg seqn8:*, reg seqn9:V, reg c30:L, reg seqn11:V, reg dr34:V, reg dc17:L, reg dx44:V, reg dx45:V, reg best6:*, reg best7:V, reg __13:cls, reg r102:V, reg p9:p(V +), reg r104:V, reg p10:p(V +), reg r106:V, reg p11:p(V +), reg r108:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r109:V, reg r110:V, reg dominated4:*, reg dominated5:V, reg any2:cls, reg r111:V, reg c31:L, reg paste2:cls, reg paste3:cls, reg format1:cls, reg seqn12:*, reg seqn13:V, reg c32:L, reg seqn15:V, reg dr36:V, reg dc18:L, reg dx46:V, reg dx47:V, reg dominated6:*, reg dominated7:V, reg __14:cls, reg r112:V, reg p12:p(V +), reg r114:V, reg p13:p(V +), reg r116:V, reg p14:p(V +), reg r118:V, reg p15:p(V +), reg r120:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r122:V, reg r123:V, reg best8:*, reg best9:V, reg any3:cls, reg r124:V, reg c33:L, reg seqn16:*, reg seqn17:V, reg c34:L, reg seqn19:V, reg dr38:V, reg dc19:L, reg dx48:V, reg dx49:V, reg best10:*, reg best11:V, reg __15:cls, reg r125:V, reg seqn20:*, reg seqn21:V, reg c35:L, reg seqn23:V, reg dr40:V, reg dc20:L, reg dx50:V, reg dx51:V, reg dominated8:*, reg dominated9:V, reg r126:V, reg __16:cls, reg r127:V |
    mkenv;
    st methods = methods;
    st supersList = supersList;
    st fromGroup = fromGroup;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0(FALSE) else L0(verbose);
  L0(verbose_orDefault):
    st verbose = verbose_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L57() else L58();
  L1(r1):
    st n = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L61() else L62();
  L57():
    methods1 = ld methods;
    check L59() else D0();
  L58():
    r = dyn base(<sym methods>);
    goto L1(r);
  D0():
    deopt 2 [methods1];
  L2(r4):
    st nArg = r4;
    matrix = ldf matrix;
    check L65() else D4();
  L59():
    methods2 = force? methods1;
    checkMissing(methods2);
    length = ldf length in base;
    r2 = dyn length(methods2);
    check L60() else D1();
  L61():
    supersList1 = ld supersList;
    check L63() else D2();
  L62():
    r3 = dyn base1(<sym supersList>);
    goto L2(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [supersList1];
  D4():
    deopt 15 [];
  L60():
    goto L1(r2);
  L63():
    supersList2 = force? supersList1;
    checkMissing(supersList2);
    length1 = ldf length in base;
    r5 = dyn length1(supersList2);
    check L64() else D3();
  L65():
    p = prom<V +>{
      nArg = ld nArg;
      nArg1 = force? nArg;
      checkMissing(nArg1);
      return nArg1;
    };
    p1 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    r8 = dyn matrix("ANY", p, p1);
    check L66() else D5();
  D3():
    deopt 12 [r5];
  D5():
    deopt 19 [r8];
  L64():
    goto L2(r5);
  L66():
    st sigs = r8;
    n2 = ld n;
    check L67() else D6();
  D6():
    deopt 22 [1.0, n2];
  L67():
    n3 = force? n2;
    checkMissing(n3);
    r9 = `:`(1.0, n3);
    s = toForSeq(r9);
    l = length(s);
    i = 0;
    goto L3(i);
  L3(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L68() else L12();
  L12():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    __ = ldf `@` in base;
    r10 = dyn __(<lang `[[`(methods, i)>, <sym defined>);
    st sig = r10;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L69() else L70();
  L68():
    nArg6 = ld nArg;
    check L94() else D18();
  D18():
    deopt 66 [nArg6];
  L4(i7, r12):
    nArg2 = ld nArg;
    check L73() else D9();
  L69():
    sig = ld sig;
    check L71() else D7();
  L70():
    r11 = dyn base2(<sym sig>);
    goto L4(i2, r11);
  L94():
    nArg7 = force? nArg6;
    checkMissing(nArg7);
    r30 = `<`(nArg7, 2.0);
    c5 = `as.logical`(r30);
    if c5 then L95() else L13();
  D7():
    deopt 30 [i2, sig];
  D9():
    deopt 33 [i7, r12, nArg2];
  L13():
    matrix1 = ldf matrix;
    check L112() else D23();
  L71():
    sig1 = force? sig;
    checkMissing(sig1);
    length2 = ldf length in base;
    r13 = dyn length2(sig1);
    check L72() else D8();
  L73():
    nArg3 = force? nArg2;
    checkMissing(nArg3);
    r14 = `<`(r12, nArg3);
    c1 = `as.logical`(r14);
    if c1 then L74() else L5();
  L95():
    sym5 = ldf `which.min`;
    base5 = ldf `which.min` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L96() else L97();
  D8():
    deopt 33 [i2, r13];
  D23():
    deopt 95 [];
  L5():
    sig19 = ld sig;
    check L89() else D16();
  L10(i24):
    goto L3(i24);
  L14(r32):
    popenv;
    return r32;
  L72():
    goto L4(i2, r13);
  L74():
    verbose1 = ld verbose;
    check L75() else D10();
  L96():
    sym6 = ldf match;
    base6 = ldf match in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L98() else L99();
  L97():
    r31 = dyn base5(<lang match(`[`(sigs, 1, ), `[[`(supersList, 1))>);
    goto L14(r31);
  L112():
    p6 = prom<V +>{
      nArg8 = ld nArg;
      nArg9 = force? nArg8;
      checkMissing(nArg9);
      return nArg9;
    };
    p7 = prom<V +>{
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      return n5;
    };
    r43 = dyn matrix1(0, p6, p7);
    check L113() else D24();
  D10():
    deopt 36 [i7, verbose1];
  D16():
    deopt 54 [i7, sig19];
  D24():
    deopt 99 [r43];
  L15(r34):
    which_min = ldf `which.min` in base;
    r38 = dyn which_min(r34);
    check L109() else D22();
  L75():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c2 = `as.logical`(verbose2);
    if c2 then L76() else L6();
  L89():
    sig20 = force? sig19;
    checkMissing(sig20);
    l7 = ld sigs;
    c4 = `is.object`(l7);
    if c4 then L90() else L91(i7, sig20, l7);
  L98():
    sigs = ld sigs;
    check L100() else D19();
  L99():
    r33 = dyn base6(<lang `[`(sigs, 1, )>, <lang `[[`(supersList, 1)>);
    goto L15(r33);
  L113():
    st pos = r43;
    nArg10 = ld nArg;
    check L114() else D25();
  D19():
    deopt 74 [sigs];
  D22():
    deopt 90 [r38];
  D25():
    deopt 102 [1.0, nArg10];
  L6():
    goto L7(i7);
  L7(i14):
    sig4 = ld sig;
    check L80() else D13();
  L11(i28, sig24, dx3):
    st sigs = dx3;
    goto L10(i28);
  L76():
    cat = ldf cat;
    check L77() else D11();
  L90():
    dr2 = tryDispatchBuiltin.0("[<-", l7, sig20);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L92() else L91(i7, sig20, dr2);
  L91(i26, sig22, l9):
    i29 = ld i;
    check L93() else D17();
  L100():
    sigs1 = force? sigs;
    checkMissing(sigs1);
    c6 = `is.object`(sigs1);
    if c6 then L101() else L102();
  L109():
    goto L14(r38);
  L114():
    nArg11 = force? nArg10;
    checkMissing(nArg11);
    r44 = `:`(1.0, nArg11);
    s1 = toForSeq(r44);
    l10 = length(s1);
    i31 = 0;
    goto L19(i31);
  D11():
    deopt 39 [i7];
  D13():
    deopt 44 [i14, sig4];
  D17():
    deopt 58 [i26, sig22, l9, sig20, i29];
  L16(dx5):
    supersList3 = ld supersList;
    check L104() else D20();
  L19(i32):
    i33 = `+`.1(i32, 1);
    c8 = `<`.1(l10, i33);
    if c8 then L115() else L24();
  L77():
    p5 = prom<V +>{
      sprintf = ldf sprintf;
      p2 = prom<V +>{
        i12 = ld i;
        i13 = force? i12;
        checkMissing(i13);
        return i13;
      };
      p3 = prom<V +>{
        sym3 = ldf length;
        base3 = ldf length in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r17):
        return r17;
      L1():
        sig2 = ld sig;
        sig3 = force? sig2;
        checkMissing(sig3);
        length3 = ldf length in base;
        r18 = dyn length3(sig3);
        goto L0(r18);
      L2():
        r16 = dyn base3(<sym sig>);
        goto L0(r16);
      };
      p4 = prom<V +>{
        nArg4 = ld nArg;
        nArg5 = force? nArg4;
        checkMissing(nArg5);
        return nArg5;
      };
      r21 = dyn sprintf(" .. method %d: length(sig) = %d < nArg = %d\n", p2, p3, p4);
      return r21;
    };
    r23 = dyn cat(p5);
    check L78() else D12();
  L80():
    sig5 = force? sig4;
    checkMissing(sig5);
    l1 = ld sigs;
    c3 = `is.object`(l1);
    if c3 then L81() else L82(i14, sig5, l1);
  L92():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(i7, sig20, dx2);
  L93():
    i30 = force? i29;
    ___1 = ldf `[<-` in base;
    r29 = dyn ___1(l7, <missing>, i30, sig20);
    goto L11(i26, sig22, r29);
  L101():
    dr4 = tryDispatchBuiltin.1("[", sigs1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L103() else L102();
  L102():
    __1 = ldf `[` in base;
    r35 = dyn __1(sigs1, 1, <missing>);
    goto L16(r35);
  D12():
    deopt 41 [i7, r23];
  D20():
    deopt 80 [supersList3];
  L8(i18, sig9, dx1):
    st sigs = dx1;
    goto L10(i18);
  L24():
    x1 = `[[`(s1, i33, NULL, TRUE);
    st i = x1;
    sym7 = ldf match;
    base7 = ldf match in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L116() else L117();
  L78():
    goto L7(i7);
  L81():
    dr = tryDispatchBuiltin.0("[<-", l1, sig5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L83() else L82(i14, sig5, dr);
  L82(i16, sig7, l3):
    sym4 = ldf seq_along;
    base4 = ldf seq_along in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L84() else L85();
  L103():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L16(dx4);
  L104():
    supersList4 = force? supersList3;
    checkMissing(supersList4);
    c7 = `is.object`(supersList4);
    if c7 then L105() else L106(supersList4);
  L115():
    colSums = ldf colSums;
    check L133() else D32();
  D32():
    deopt 134 [];
  L9(i21, sig14, l6, sig15, r26):
    i22 = ld i;
    check L87() else D15();
  L17(dx7):
    match = ldf match in base;
    r37 = dyn match(dx5, dx7, NA_INT, NULL);
    check L108() else D21();
  L20(i38, r46):
    l11 = ld pos;
    c11 = `is.object`(l11);
    if c11 then L129() else L130(i38, r46, l11);
  L83():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(i14, sig5, dx);
  L84():
    sig16 = ld sig;
    check L86() else D14();
  L85():
    r25 = dyn base4(<sym sig>);
    goto L9(i16, sig7, l3, sig5, r25);
  L105():
    dr6 = tryDispatchBuiltin.1("[[", supersList4);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L107() else L106(dr6);
  L106(supersList6):
    __2 = ldf `[[` in base;
    r36 = dyn __2(supersList6, 1);
    goto L17(r36);
  L116():
    sigs4 = ld sigs;
    check L118() else D26();
  L117():
    r45 = dyn base7(<lang `[`(sigs, i, )>, <lang `[[`(supersList, i)>);
    goto L20(i33, r45);
  L133():
    p8 = prom<V +>{
      sym8 = ldf `is.na`;
      base8 = ldf `is.na` in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r56):
      return r56;
    L1():
      pos = ld pos;
      pos1 = force? pos;
      checkMissing(pos1);
      is_na = ldf `is.na` in base;
      r57 = dyn is_na(pos1);
      goto L0(r57);
    L2():
      r55 = dyn base8(<sym pos>);
      goto L0(r55);
    };
    r59 = dyn colSums(p8);
    check L134() else D33();
  D14():
    deopt 48 [i16, sig7, l3, sig5, sig16];
  D15():
    deopt 50 [i21, sig14, l6, sig15, r26, i22];
  D21():
    deopt 88 [r37];
  D26():
    deopt 107 [i33, sigs4];
  D33():
    deopt 136 [r59];
  L23(i54, dx13):
    st pos = dx13;
    goto L19(i54);
  L86():
    sig17 = force? sig16;
    checkMissing(sig17);
    r27 = seq_along(sig17);
    goto L9(i16, sig7, l3, sig5, r27);
  L87():
    i23 = force? i22;
    ___ = ldf `[<-` in base;
    r28 = dyn ___(l6, sig15, r26, i23);
    goto L8(i21, sig14, r28);
  L107():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L17(dx6);
  L108():
    goto L15(r37);
  L118():
    sigs5 = force? sigs4;
    checkMissing(sigs5);
    c9 = `is.object`(sigs5);
    if c9 then L119() else L120(i33, sigs5);
  L129():
    dr12 = tryDispatchBuiltin.0("[<-", l11, r46);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L131() else L130(i38, r46, dr12);
  L130(i52, r51, l13):
    i55 = ld i;
    check L132() else D31();
  L134():
    r60 = `==`(r59, 0);
    st valid = r60;
    valid = ld valid;
    check L135() else D34();
  D31():
    deopt 124 [i52, r51, l13, r46, i55];
  D34():
    deopt 140 [valid];
  L21(i42, dx9):
    supersList7 = ld supersList;
    check L123() else D28();
  L119():
    dr8 = tryDispatchBuiltin.1("[", sigs5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L121() else L120(i33, dr8);
  L120(i40, sigs7):
    i43 = ld i;
    check L122() else D27();
  L131():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L23(i38, dx12);
  L132():
    i56 = force? i55;
    ___2 = ldf `[<-` in base;
    r54 = dyn ___2(l11, i56, <missing>, r46);
    goto L23(i52, r54);
  L135():
    valid1 = force? valid;
    checkMissing(valid1);
    st best = valid1;
    valid2 = ld valid;
    check L136() else D35();
  D27():
    deopt 109 [i40, sigs7, i43];
  D28():
    deopt 114 [i42, supersList7];
  D35():
    deopt 143 [valid2];
  L121():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L21(i33, dx8);
  L122():
    i44 = force? i43;
    __3 = ldf `[` in base;
    r47 = dyn __3(sigs5, i44, <missing>);
    goto L21(i40, r47);
  L123():
    supersList8 = force? supersList7;
    checkMissing(supersList8);
    c10 = `is.object`(supersList8);
    if c10 then L124() else L125(i42, supersList8);
  L136():
    valid3 = force? valid2;
    checkMissing(valid3);
    r61 = `!`(valid3);
    st dominated = r61;
    sym9 = ldf seq_len;
    base9 = ldf seq_len in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L137() else L138();
  L22(i48, dx11):
    match1 = ldf match in base;
    r49 = dyn match1(dx9, dx11, NA_INT, NULL);
    check L128() else D30();
  L25(r63):
    st seqn = r63;
    seqn = ld seqn;
    check L140() else D37();
  L124():
    dr10 = tryDispatchBuiltin.1("[[", supersList8);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L126() else L125(i42, dr10);
  L125(i46, supersList10):
    i49 = ld i;
    check L127() else D29();
  L137():
    n6 = ld n;
    check L139() else D36();
  L138():
    r62 = dyn base9(<sym n>);
    goto L25(r62);
  D29():
    deopt 116 [i46, supersList10, i49];
  D30():
    deopt 122 [i48, r49];
  D36():
    deopt 148 [n6];
  D37():
    deopt 152 [seqn];
  L126():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L22(i42, dx10);
  L127():
    i50 = force? i49;
    __4 = ldf `[[` in base;
    r48 = dyn __4(supersList10, i50);
    goto L22(i46, r48);
  L128():
    goto L20(i48, r49);
  L139():
    n7 = force? n6;
    checkMissing(n7);
    r64 = seq_len(n7);
    goto L25(r64);
  L140():
    seqn1 = force? seqn;
    checkMissing(seqn1);
    c12 = `is.object`(seqn1);
    if c12 then L141() else L142(seqn1);
  L26(dx15):
    s2 = toForSeq(dx15);
    l14 = length(s2);
    i57 = 0;
    goto L27(i57);
  L141():
    dr14 = tryDispatchBuiltin.1("[", seqn1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L143() else L142(dr14);
  L142(seqn3):
    valid4 = ld valid;
    check L144() else D38();
  D38():
    deopt 154 [seqn3, valid4];
  L27(i58):
    i59 = `+`.1(i58, 1);
    c13 = `<`.1(l14, i59);
    if c13 then L145() else L50();
  L143():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L26(dx14);
  L144():
    valid5 = force? valid4;
    __5 = ldf `[` in base;
    r65 = dyn __5(seqn3, valid5);
    goto L26(r65);
  L50():
    x2 = `[[`(s2, i59, NULL, TRUE);
    st i = x2;
    seqn4 = ld seqn;
    check L146() else D39();
  L145():
    verbose3 = ld verbose;
    check L206() else D57();
  D39():
    deopt 157 [i59, seqn4];
  D57():
    deopt 244 [verbose3];
  L146():
    seqn5 = force? seqn4;
    checkMissing(seqn5);
    c14 = `is.object`(seqn5);
    if c14 then L147() else L148(i59, seqn5);
  L206():
    verbose4 = force? verbose3;
    checkMissing(verbose4);
    c28 = `as.logical`(verbose4);
    if c28 then L207() else L51();
  L28(i65, dx17):
    c15 = `is.object`(dx17);
    if c15 then L151() else L152(i65, dx17);
  L51():
    goto L52();
  L52():
    sym14 = ldf any;
    base14 = ldf any in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L211() else L212();
  L147():
    dr16 = tryDispatchBuiltin.1("[", seqn5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L149() else L148(i59, dr16);
  L148(i63, seqn7):
    i66 = ld i;
    check L150() else D40();
  L207():
    cat1 = ldf cat;
    check L208() else D58();
  D40():
    deopt 159 [i63, seqn7, i66];
  D58():
    deopt 247 [];
  L29(i71, dx21):
    s3 = toForSeq(dx21);
    l15 = length(s3);
    i78 = 0;
    goto L31(i71, i78);
  L53(r123):
    c33 = `as.logical`(r123);
    if c33 then L215() else L54();
  L149():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L28(i59, dx16);
  L150():
    i67 = force? i66;
    checkMissing(i67);
    r66 = `-`(<missing>, i67);
    __6 = ldf `[` in base;
    r67 = dyn __6(seqn7, r66);
    goto L28(i63, r67);
  L151():
    dr18 = tryDispatchBuiltin.1("[", dx17);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L153() else L152(i65, dr18);
  L152(i69, dx19):
    valid6 = ld valid;
    check L154() else D41();
  L208():
    p15 = prom<V +>{
      sym12 = ldf any;
      base12 = ldf any in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L4() else L5();
    L0(r100):
      c29 = `as.logical`(r100);
      if c29 then L6() else L1();
    L4():
      best4 = ld best;
      best5 = force? best4;
      checkMissing(best5);
      any1 = ldf any in base;
      r101 = dyn any1(best5);
      goto L0(r101);
    L5():
      r99 = dyn base12(<sym best>);
      goto L0(r99);
    L1():
      sym13 = ldf any;
      base13 = ldf any in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L8() else L9();
    L6():
      paste = ldf paste;
      p11 = prom<V +>{
        paste1 = ldf paste;
        p10 = prom<V +>{
          format = ldf format;
          p9 = prom<V +>{
            seqn8 = ld seqn;
            seqn9 = force? seqn8;
            checkMissing(seqn9);
            c30 = `is.object`(seqn9);
            if c30 then L1() else L2(seqn9);
          L0(dx45):
            return dx45;
          L1():
            dr34 = tryDispatchBuiltin.1("[", seqn9);
            dc17 = getTryDispatchBuiltinDispatched(dr34);
            if dc17 then L3() else L2(dr34);
          L2(seqn11):
            best6 = ld best;
            best7 = force? best6;
            __13 = ldf `[` in base;
            r102 = dyn __13(seqn11, best7);
            goto L0(r102);
          L3():
            dx44 = getTryDispatchBuiltinValue(dr34);
            goto L0(dx44);
          };
          r104 = dyn format(p9);
          return r104;
        };
        r106 = dyn paste1[, collapse](p10, ",");
        return r106;
      };
      r108 = dyn paste(" have best ones", p11);
      return r108;
    L2(r110):
      c31 = `as.logical`(r110);
      if c31 then L10() else L3();
    L8():
      dominated4 = ld dominated;
      dominated5 = force? dominated4;
      checkMissing(dominated5);
      any2 = ldf any in base;
      r111 = dyn any2(dominated5);
      goto L2(r111);
    L9():
      r109 = dyn base13(<sym dominated>);
      goto L2(r109);
    L3():
      invisible.0();
      return NULL;
    L10():
      paste2 = ldf paste;
      p14 = prom<V +>{
        paste3 = ldf paste;
        p13 = prom<V +>{
          format1 = ldf format;
          p12 = prom<V +>{
            seqn12 = ld seqn;
            seqn13 = force? seqn12;
            checkMissing(seqn13);
            c32 = `is.object`(seqn13);
            if c32 then L1() else L2(seqn13);
          L0(dx47):
            return dx47;
          L1():
            dr36 = tryDispatchBuiltin.1("[", seqn13);
            dc18 = getTryDispatchBuiltinDispatched(dr36);
            if dc18 then L3() else L2(dr36);
          L2(seqn15):
            dominated6 = ld dominated;
            dominated7 = force? dominated6;
            __14 = ldf `[` in base;
            r112 = dyn __14(seqn15, dominated7);
            goto L0(r112);
          L3():
            dx46 = getTryDispatchBuiltinValue(dr36);
            goto L0(dx46);
          };
          r114 = dyn format1(p12);
          return r114;
        };
        r116 = dyn paste3[, collapse](p13, ",");
        return r116;
      };
      r118 = dyn paste2(" can eliminate dominated ones,", p14);
      return r118;
    };
    r120 = dyn cat1(p15, "\n");
    check L209() else D59();
  L211():
    best8 = ld best;
    check L213() else D60();
  L212():
    r122 = dyn base14(<sym best>);
    goto L53(r122);
  D41():
    deopt 163 [i69, dx19, valid6];
  D59():
    deopt 250 [r120];
  D60():
    deopt 255 [best8];
  L31(i79, i80):
    i81 = `+`.1(i80, 1);
    c17 = `<`.1(l15, i81);
    if c17 then L159() else L49();
  L54():
    seqn20 = ld seqn;
    check L222() else D64();
  L153():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L29(i65, dx20);
  L154():
    valid7 = force? valid6;
    checkMissing(valid7);
    c16 = `is.object`(valid7);
    if c16 then L155() else L156(i69, dx19, valid7);
  L209():
    goto L52();
  L213():
    best9 = force? best8;
    checkMissing(best9);
    any3 = ldf any in base;
    r124 = dyn any3(best9);
    check L214() else D61();
  L215():
    seqn16 = ld seqn;
    check L216() else D62();
  D61():
    deopt 258 [r124];
  D62():
    deopt 259 [seqn16];
  D64():
    deopt 264 [seqn20];
  L30(i75, dx26, dx27):
    __8 = ldf `[` in base;
    r70 = dyn __8(dx26, dx27);
    goto L29(i75, r70);
  L39(i138):
    goto L27(i138);
  L49():
    x3 = `[[`(s3, i81, NULL, TRUE);
    st j = x3;
    pos2 = ld pos;
    check L160() else D43();
  L155():
    dr20 = tryDispatchBuiltin.1("[", valid7);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L157() else L156(i69, dx19, dr20);
  L156(i73, dx23, valid9):
    i76 = ld i;
    check L158() else D42();
  L159():
    goto L39(i79);
  L214():
    goto L53(r124);
  L216():
    seqn17 = force? seqn16;
    checkMissing(seqn17);
    c34 = `is.object`(seqn17);
    if c34 then L217() else L218(seqn17);
  L222():
    seqn21 = force? seqn20;
    checkMissing(seqn21);
    c35 = `is.object`(seqn21);
    if c35 then L223() else L224(seqn21);
  D42():
    deopt 165 [i73, dx23, valid9, i76];
  D43():
    deopt 170 [i79, i81, pos2];
  L55(dx49):
    popenv;
    return dx49;
  L56(dx51):
    popenv;
    return dx51;
  L157():
    dx25 = getTryDispatchBuiltinValue(dr20);
    goto L30(i69, dx19, dx25);
  L158():
    i77 = force? i76;
    checkMissing(i77);
    r68 = `-`(<missing>, i77);
    __7 = ldf `[` in base;
    r69 = dyn __7(valid9, r68);
    goto L30(i73, dx23, r69);
  L160():
    pos3 = force? pos2;
    checkMissing(pos3);
    c18 = `is.object`(pos3);
    if c18 then L161() else L162(i79, i81, pos3);
  L217():
    dr38 = tryDispatchBuiltin.1("[", seqn17);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L219() else L218(dr38);
  L218(seqn19):
    best10 = ld best;
    check L220() else D63();
  L223():
    dr40 = tryDispatchBuiltin.1("[", seqn21);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L225() else L224(dr40);
  L224(seqn23):
    dominated8 = ld dominated;
    check L226() else D65();
  D63():
    deopt 261 [seqn19, best10];
  D65():
    deopt 266 [seqn23, dominated8];
  L32(i92, i93, dx29):
    pos6 = ld pos;
    check L165() else D45();
  L161():
    dr22 = tryDispatchBuiltin.1("[", pos3);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L163() else L162(i79, i81, dr22);
  L162(i88, i89, pos5):
    j = ld j;
    check L164() else D44();
  L219():
    dx48 = getTryDispatchBuiltinValue(dr38);
    goto L55(dx48);
  L220():
    best11 = force? best10;
    __15 = ldf `[` in base;
    r125 = dyn __15(seqn19, best11);
    goto L55(r125);
  L225():
    dx50 = getTryDispatchBuiltinValue(dr40);
    goto L56(dx50);
  L226():
    dominated9 = force? dominated8;
    checkMissing(dominated9);
    r126 = `!`(dominated9);
    __16 = ldf `[` in base;
    r127 = dyn __16(seqn23, r126);
    goto L56(r127);
  D44():
    deopt 173 [i88, i89, pos5, j];
  D45():
    deopt 176 [i92, i93, dx29, pos6];
  L163():
    dx28 = getTryDispatchBuiltinValue(dr22);
    goto L32(i79, i81, dx28);
  L164():
    j1 = force? j;
    __9 = ldf `[` in base;
    r71 = dyn __9(pos3, <missing>, j1);
    goto L32(i88, i89, r71);
  L165():
    pos7 = force? pos6;
    checkMissing(pos7);
    c19 = `is.object`(pos7);
    if c19 then L166() else L167(i92, i93, dx29, pos7);
  L33(i100, i101, dx34, dx35):
    r73 = `-`(dx34, dx35);
    st diffs = r73;
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L170() else L171();
  L166():
    dr24 = tryDispatchBuiltin.1("[", pos7);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L168() else L167(i92, i93, dx29, dr24);
  L167(i96, i97, dx31, pos9):
    i102 = ld i;
    check L169() else D46();
  D46():
    deopt 179 [i96, i97, dx31, pos9, i102];
  L34(i108, i109, r75):
    c20 = `as.logical`(r75);
    if c20 then L174() else L35();
  L168():
    dx33 = getTryDispatchBuiltinValue(dr24);
    goto L33(i92, i93, dx29, dx33);
  L169():
    i103 = force? i102;
    __10 = ldf `[` in base;
    r72 = dyn __10(pos7, <missing>, i103);
    goto L33(i96, i97, dx31, r72);
  L170():
    diffs = ld diffs;
    check L172() else D47();
  L171():
    r74 = dyn base10(<lang `<`(diffs, 0.0)>);
    goto L34(i100, i101, r74);
  D47():
    deopt 187 [i100, i101, diffs];
  L35():
    goto L41(i108, i109);
  L41(i144, i145):
    sym11 = ldf all;
    base11 = ldf all in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L188() else L189();
  L172():
    diffs1 = force? diffs;
    checkMissing(diffs1);
    r76 = `<`(diffs1, 0.0);
    any = ldf any in base;
    r77 = dyn any(r76);
    check L173() else D48();
  L174():
    l16 = ld best;
    c21 = `is.object`(l16);
    if c21 then L175() else L176(i108, i109, FALSE, l16);
  D48():
    deopt 192 [i100, i101, r77];
  L36(i120, i121, dx37):
    st best = dx37;
    dominated = ld dominated;
    check L179() else D50();
  L42(i150, i151, r87):
    c24 = `as.logical`(r87);
    if c24 then L192() else L43();
  L173():
    goto L34(i100, i101, r77);
  L175():
    dr26 = tryDispatchBuiltin.0("[<-", l16, FALSE);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L177() else L176(i108, i109, FALSE, dr26);
  L176(i116, i117, r79, l18):
    i122 = ld i;
    check L178() else D49();
  L188():
    diffs2 = ld diffs;
    check L190() else D52();
  L189():
    r86 = dyn base11(<lang `<=`(diffs, 0.0)>);
    goto L42(i144, i145, r86);
  D49():
    deopt 196 [i116, i117, r79, l18, FALSE, i122];
  D50():
    deopt 200 [i120, i121, dominated];
  D52():
    deopt 213 [i144, i145, diffs2];
  L43():
    goto L48(i150, i151);
  L48(i184, i185):
    goto L31(i184, i185);
  L177():
    dx36 = getTryDispatchBuiltinValue(dr26);
    goto L36(i108, i109, dx36);
  L178():
    i123 = force? i122;
    ___3 = ldf `[<-` in base;
    r82 = dyn ___3(l18, FALSE, i123);
    goto L36(i116, i117, r82);
  L179():
    dominated1 = force? dominated;
    checkMissing(dominated1);
    c22 = `is.object`(dominated1);
    if c22 then L180() else L181(i120, i121, dominated1);
  L190():
    diffs3 = force? diffs2;
    checkMissing(diffs3);
    r88 = `<=`(diffs3, 0.0);
    all = ldf all in base;
    r89 = dyn all(r88);
    check L191() else D53();
  L192():
    l19 = ld dominated;
    c25 = `is.object`(l19);
    if c25 then L193() else L194(i150, i151, TRUE, l19);
  D53():
    deopt 218 [i144, i145, r89];
  L37(i130, i131, dx39):
    c23 = `as.logical`(dx39);
    if c23 then L184() else L38();
  L44(i162, i163, dx41):
    st dominated = dx41;
    best = ld best;
    check L197() else D55();
  L180():
    dr28 = tryDispatchBuiltin.1("[", dominated1);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L182() else L181(i120, i121, dr28);
  L181(i126, i127, dominated3):
    i132 = ld i;
    check L183() else D51();
  L191():
    goto L42(i144, i145, r89);
  L193():
    dr30 = tryDispatchBuiltin.0("[<-", l19, TRUE);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L195() else L194(i150, i151, TRUE, dr30);
  L194(i158, i159, r91, l21):
    i164 = ld i;
    check L196() else D54();
  D51():
    deopt 202 [i126, i127, dominated3, i132];
  D54():
    deopt 222 [i158, i159, r91, l21, TRUE, i164];
  D55():
    deopt 226 [i162, i163, best];
  L38():
    goto L41(i130, i131);
  L182():
    dx38 = getTryDispatchBuiltinValue(dr28);
    goto L37(i120, i121, dx38);
  L183():
    i133 = force? i132;
    __11 = ldf `[` in base;
    r83 = dyn __11(dominated3, i133);
    goto L37(i126, i127, r83);
  L184():
    goto L39(i130);
  L195():
    dx40 = getTryDispatchBuiltinValue(dr30);
    goto L44(i150, i151, dx40);
  L196():
    i165 = force? i164;
    ___4 = ldf `[<-` in base;
    r94 = dyn ___4(l21, TRUE, i165);
    goto L44(i158, i159, r94);
  L197():
    best1 = force? best;
    checkMissing(best1);
    c26 = `is.object`(best1);
    if c26 then L198() else L199(i162, i163, best1);
  L45(i172, i173, dx43):
    r96 = `!`(dx43);
    c27 = `as.logical`(r96);
    if c27 then L202() else L46();
  L198():
    dr32 = tryDispatchBuiltin.1("[", best1);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L200() else L199(i162, i163, dr32);
  L199(i168, i169, best3):
    i174 = ld i;
    check L201() else D56();
  D56():
    deopt 228 [i168, i169, best3, i174];
  L46():
    goto L48(i172, i173);
  L200():
    dx42 = getTryDispatchBuiltinValue(dr32);
    goto L45(i162, i163, dx42);
  L201():
    i175 = force? i174;
    __12 = ldf `[` in base;
    r95 = dyn __12(best3, i175);
    goto L45(i168, i169, r95);
  L202():
    goto L39(i172);
  }
}