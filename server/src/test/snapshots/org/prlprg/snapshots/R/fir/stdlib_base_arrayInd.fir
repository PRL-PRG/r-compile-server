fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4012715982;
    st arrayInd = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner4012715982(ind, `.dim`, `.dimnames`, useNames) {
  (reg ind:*, reg _dim:*, reg _dimnames:*, reg useNames:*) -+> V { var ind:*, var `.dim`:*, var `.dimnames`:*, reg _dimnames_isMissing:L, reg _dimnames_orDefault:*, var useNames:*, reg useNames_isMissing:L, reg useNames_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ind1:*, reg ind2:V, reg length:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg _dim1:*, reg _dim2:V, reg length1:cls, reg r5:V, reg ind3:*, reg ind4:V, reg r6:V, reg wh1:*, reg wh2:V, reg _dim3:*, reg _dim4:V, reg c:L, reg r8:I, reg _dim6:V, reg dr:V, reg dc:L, reg dx:V, reg r10:I, reg dx1:V, reg __:cls, reg r11:V, reg __1:cls, reg r12:V, reg r13:V, reg useNames1:*, reg useNames2:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg _dimnames1:*, reg _dimnames2:V, reg c2:L, reg _dimnames4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __2:cls, reg r16:V, reg c3:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg ind5:*, reg ind6:V, reg __3:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg _dimnames5:*, reg _dimnames6:V, reg names:cls, reg r24:V, reg nzchar:cls, reg r25:V, reg any:cls, reg r26:V, reg c4:L, reg nd:*, reg nd1:V, reg nd2:V, reg rank:*, reg rank1:V, reg r27:V, reg c5:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg c6:cls, reg r30:V, reg paste0:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r31:V, reg r32:V, reg rank2:*, reg rank3:V, reg r33:I, reg p:p(V +), reg r35:V, reg list:cls, reg r36:V, reg r37:V, reg matrix:cls, reg ind7:*, reg ind8:V, reg p1:p(V +), reg m:*, reg m1:V, reg p2:p(V +), reg rank4:*, reg rank5:V, reg p3:p(V +), reg dnms:*, reg dnms1:V, reg p4:p(V +), reg r42:V, reg rank6:*, reg rank7:V, reg r43:V, reg c7:L, reg rank8:*, reg rank9:V, reg r44:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c8:L, reg x:V, reg denom:*, reg denom1:V, reg _dim7:*, reg _dim8:V, reg c9:L, reg i6:I, reg denom3:V, reg _dim10:V, reg dr6:V, reg dc3:L, reg dx8:V, reg i8:I, reg denom5:V, reg dx9:V, reg i9:*, reg i10:V, reg r45:V, reg __4:cls, reg r46:V, reg r47:V, reg wh3:*, reg wh4:V, reg denom6:*, reg denom7:V, reg ___:cls, reg r48:V, reg nextd1:*, reg nextd2:V, reg _dim11:*, reg _dim12:V, reg c10:L, reg i12:I, reg r50:I, reg _dim14:V, reg dr8:V, reg dc4:L, reg dx10:V, reg i14:I, reg r52:I, reg dx11:V, reg i15:*, reg i16:V, reg __5:cls, reg r53:V, reg __6:cls, reg r54:V, reg r55:V, reg l1:*, reg c11:L, reg i18:I, reg r57:V, reg l3:*, reg dr10:V, reg dc5:L, reg dx12:V, reg i20:I, reg dx13:V, reg i21:*, reg i22:V, reg ___1:cls, reg r60:V, reg l4:*, reg storage_mode__:cls, reg r61:V, reg ind9:*, reg ind10:V |
    mkenv;
    st ind = ind;
    st `.dim` = _dim;
    _dimnames_isMissing = missing.0(_dimnames);
    if _dimnames_isMissing then L0(NULL) else L0(_dimnames);
  L0(_dimnames_orDefault):
    st `.dimnames` = _dimnames_orDefault;
    useNames_isMissing = missing.0(useNames);
    if useNames_isMissing then L1(FALSE) else L1(useNames);
  L1(useNames_orDefault):
    st useNames = useNames_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L2(r1):
    st m = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L24():
    ind1 = ld ind;
    check L26() else D0();
  L25():
    r = dyn base(<sym ind>);
    goto L2(r);
  D0():
    deopt 2 [ind1];
  L3(r4):
    st rank = r4;
    ind3 = ld ind;
    check L32() else D4();
  L26():
    ind2 = force? ind1;
    checkMissing(ind2);
    length = ldf length in base;
    r2 = dyn length(ind2);
    check L27() else D1();
  L28():
    _dim1 = ld `.dim`;
    check L30() else D2();
  L29():
    r3 = dyn base1(<sym .dim>);
    goto L3(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [_dim1];
  D4():
    deopt 14 [ind3];
  L27():
    goto L2(r2);
  L30():
    _dim2 = force? _dim1;
    checkMissing(_dim2);
    length1 = ldf length in base;
    r5 = dyn length1(_dim2);
    check L31() else D3();
  L32():
    ind4 = force? ind3;
    checkMissing(ind4);
    r6 = `-`(ind4, 1);
    st wh1 = r6;
    wh1 = ld wh1;
    check L33() else D5();
  D3():
    deopt 12 [r5];
  D5():
    deopt 21 [1, wh1];
  L31():
    goto L3(r5);
  L33():
    wh2 = force? wh1;
    checkMissing(wh2);
    _dim3 = ld `.dim`;
    check L34() else D6();
  D6():
    deopt 23 [1, _dim3];
  L34():
    _dim4 = force? _dim3;
    checkMissing(_dim4);
    c = `is.object`(_dim4);
    if c then L35() else L36(1, _dim4);
  L4(r10, dx1):
    __1 = ldf `%%` in base;
    r12 = dyn __1(wh2, dx1);
    check L38() else D7();
  L35():
    dr = tryDispatchBuiltin.1("[", _dim4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(1, dr);
  L36(r8, _dim6):
    __ = ldf `[` in base;
    r11 = dyn __(_dim6, 1);
    goto L4(r8, r11);
  D7():
    deopt 29 [r10, r12];
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(1, dx);
  L38():
    r13 = `+`(r10, r12);
    st ind = r13;
    useNames1 = ld useNames;
    check L39() else D8();
  D8():
    deopt 32 [useNames1];
  L39():
    useNames2 = force? useNames1;
    checkMissing(useNames2);
    c1 = `as.logical`(useNames2);
    if c1 then L40() else L5();
  L5():
    goto L16(NULL);
  L16(r37):
    st dnms = r37;
    matrix = ldf matrix;
    check L74() else D21();
  L40():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  D21():
    deopt 82 [];
  L6(r15):
    goto L16(r15);
  L41():
    _dimnames1 = ld `.dimnames`;
    check L43() else D9();
  L42():
    r14 = dyn base2(<lang `[`(`[[`(.dimnames, 1), ind)>, <lang if(any(nzchar(`<-`(nd, names(.dimnames)))), nd, if(`==`(rank, 2), c("row", "col"), paste0("dim", seq_len(rank))))>);
    goto L6(r14);
  L74():
    p1 = prom<V +>{
      ind7 = ld ind;
      ind8 = force? ind7;
      checkMissing(ind8);
      return ind8;
    };
    p2 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    p3 = prom<V +>{
      rank4 = ld rank;
      rank5 = force? rank4;
      checkMissing(rank5);
      return rank5;
    };
    p4 = prom<V +>{
      dnms = ld dnms;
      dnms1 = force? dnms;
      checkMissing(dnms1);
      return dnms1;
    };
    r42 = dyn matrix[, nrow, ncol, dimnames](p1, p2, p3, p4);
    check L75() else D22();
  D9():
    deopt 36 [_dimnames1];
  D22():
    deopt 90 [r42];
  L43():
    _dimnames2 = force? _dimnames1;
    checkMissing(_dimnames2);
    c2 = `is.object`(_dimnames2);
    if c2 then L44() else L45(_dimnames2);
  L75():
    st ind = r42;
    rank6 = ld rank;
    check L76() else D23();
  D23():
    deopt 92 [rank6];
  L7(dx3):
    c3 = `is.object`(dx3);
    if c3 then L47() else L48(dx3);
  L44():
    dr2 = tryDispatchBuiltin.1("[[", _dimnames2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L46() else L45(dr2);
  L45(_dimnames4):
    __2 = ldf `[[` in base;
    r16 = dyn __2(_dimnames4, 1);
    goto L7(r16);
  L76():
    rank7 = force? rank6;
    checkMissing(rank7);
    r43 = `>=`(rank7, 2);
    c7 = `as.logical`(r43);
    if c7 then L77() else L17();
  L8(dx7):
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  L17():
    goto L23();
  L23():
    l4 = ld ind;
    storage_mode__ = ldf `storage.mode<-`;
    check L101() else D36();
  L46():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L47():
    dr4 = tryDispatchBuiltin.1("[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L49() else L48(dr4);
  L48(dx5):
    ind5 = ld ind;
    check L50() else D10();
  L77():
    st denom = 1;
    rank8 = ld rank;
    check L78() else D24();
  D10():
    deopt 41 [dx5, ind5];
  D24():
    deopt 100 [2, rank8];
  D36():
    deopt 148 ["integer", l4, "integer"];
  L9(r19):
    c4 = `as.logical`(r19);
    if c4 then L61() else L12();
  L49():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L8(dx6);
  L50():
    ind6 = force? ind5;
    __3 = ldf `[` in base;
    r17 = dyn __3(dx5, ind6);
    goto L8(r17);
  L51():
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  L52():
    r18 = dyn base3(<lang nzchar(`<-`(nd, names(.dimnames)))>);
    goto L9(r18);
  L78():
    rank9 = force? rank8;
    checkMissing(rank9);
    r44 = `:`(2, rank9);
    s = toForSeq(r44);
    l = length(s);
    i = 0;
    goto L18(i);
  L101():
    r61 = dyn storage_mode__(l4, NULL, "integer");
    check L102() else D37();
  D37():
    deopt 150 ["integer", r61];
  L10(r21):
    any = ldf any in base;
    r26 = dyn any(r21);
    check L60() else D14();
  L12():
    rank = ld rank;
    check L64() else D16();
  L13(nd2):
    list = ldf list in base;
    r36 = dyn list(dx7, nd2);
    check L72() else D20();
  L18(i1):
    i2 = `+`.1(i1, 1);
    c8 = `<`.1(l, i2);
    if c8 then L79() else L22();
  L53():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L55() else L56();
  L54():
    r20 = dyn base4(<lang `<-`(nd, names(.dimnames))>);
    goto L10(r20);
  L61():
    nd = ld nd;
    check L62() else D15();
  L102():
    st ind = r61;
    ind9 = ld ind;
    check L103() else D38();
  D14():
    deopt 58 [r26];
  D15():
    deopt 59 [nd];
  D16():
    deopt 61 [rank];
  D20():
    deopt 77 [r36];
  D38():
    deopt 152 [ind9];
  L11(r23):
    st nd = r23;
    nzchar = ldf nzchar in base;
    r25 = dyn nzchar(r23);
    check L59() else D13();
  L22():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    denom = ld denom;
    check L80() else D25();
  L55():
    _dimnames5 = ld `.dimnames`;
    check L57() else D11();
  L56():
    r22 = dyn base5(<sym .dimnames>);
    goto L11(r22);
  L60():
    goto L9(r26);
  L62():
    nd1 = force? nd;
    checkMissing(nd1);
    goto L13(nd1);
  L64():
    rank1 = force? rank;
    checkMissing(rank1);
    r27 = `==`(rank1, 2);
    c5 = `as.logical`(r27);
    if c5 then L65() else L14();
  L72():
    goto L6(r36);
  L79():
    goto L23();
  L103():
    ind10 = force? ind9;
    checkMissing(ind10);
    popenv;
    return ind10;
  D11():
    deopt 50 [_dimnames5];
  D13():
    deopt 56 [r25];
  D25():
    deopt 103 [i2, denom];
  L14():
    paste0 = ldf paste0;
    check L70() else D18();
  L57():
    _dimnames6 = force? _dimnames5;
    checkMissing(_dimnames6);
    names = ldf names in base;
    r24 = dyn names(_dimnames6);
    check L58() else D12();
  L59():
    goto L10(r25);
  L65():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L66() else L67();
  L80():
    denom1 = force? denom;
    checkMissing(denom1);
    _dim7 = ld `.dim`;
    check L81() else D26();
  D12():
    deopt 53 [r24];
  D18():
    deopt 72 [];
  D26():
    deopt 104 [i2, denom1, _dim7];
  L15(r29):
    goto L13(r29);
  L58():
    goto L11(r24);
  L66():
    c6 = ldf c in base;
    r30 = dyn c6("row", "col");
    check L68() else D17();
  L67():
    r28 = dyn base6("row", "col");
    goto L15(r28);
  L70():
    p = prom<V +>{
      sym7 = ldf seq_len;
      base7 = ldf seq_len in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      rank2 = ld rank;
      rank3 = force? rank2;
      checkMissing(rank3);
      r33 = seq_len(rank3);
      goto L0(r33);
    L2():
      r31 = dyn base7(<sym rank>);
      goto L0(r31);
    };
    r35 = dyn paste0("dim", p);
    check L71() else D19();
  L81():
    _dim8 = force? _dim7;
    checkMissing(_dim8);
    c9 = `is.object`(_dim8);
    if c9 then L82() else L83(i2, denom1, _dim8);
  D17():
    deopt 70 [r30];
  D19():
    deopt 75 [r35];
  L19(i8, denom5, dx9):
    r47 = `*`(denom5, dx9);
    st denom = r47;
    wh3 = ld wh1;
    check L86() else D28();
  L68():
    goto L15(r30);
  L71():
    goto L13(r35);
  L82():
    dr6 = tryDispatchBuiltin.1("[", _dim8);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L84() else L83(i2, denom1, dr6);
  L83(i6, denom3, _dim10):
    i9 = ld i;
    check L85() else D27();
  D27():
    deopt 106 [i6, denom3, _dim10, i9];
  D28():
    deopt 114 [i8, wh3];
  L84():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L19(i2, denom1, dx8);
  L85():
    i10 = force? i9;
    checkMissing(i10);
    r45 = `-`(i10, 1);
    __4 = ldf `[` in base;
    r46 = dyn __4(_dim10, r45);
    goto L19(i6, denom3, r46);
  L86():
    wh4 = force? wh3;
    checkMissing(wh4);
    denom6 = ld denom;
    check L87() else D29();
  D29():
    deopt 116 [i8, denom6];
  L87():
    denom7 = force? denom6;
    checkMissing(denom7);
    ___ = ldf `%/%` in base;
    r48 = dyn ___(wh4, denom7);
    check L88() else D30();
  D30():
    deopt 119 [i8, r48];
  L88():
    st nextd1 = r48;
    nextd1 = ld nextd1;
    check L89() else D31();
  D31():
    deopt 123 [i8, 1, nextd1];
  L89():
    nextd2 = force? nextd1;
    checkMissing(nextd2);
    _dim11 = ld `.dim`;
    check L90() else D32();
  D32():
    deopt 125 [i8, 1, _dim11];
  L90():
    _dim12 = force? _dim11;
    checkMissing(_dim12);
    c10 = `is.object`(_dim12);
    if c10 then L91() else L92(i8, 1, _dim12);
  L20(i14, r52, dx11):
    __6 = ldf `%%` in base;
    r54 = dyn __6(nextd2, dx11);
    check L95() else D34();
  L91():
    dr8 = tryDispatchBuiltin.1("[", _dim12);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L93() else L92(i8, 1, dr8);
  L92(i12, r50, _dim14):
    i15 = ld i;
    check L94() else D33();
  D33():
    deopt 127 [i12, r50, _dim14, i15];
  D34():
    deopt 131 [i14, r52, r54];
  L93():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L20(i8, 1, dx10);
  L94():
    i16 = force? i15;
    __5 = ldf `[` in base;
    r53 = dyn __5(_dim14, i16);
    goto L20(i12, r50, r53);
  L95():
    r55 = `+`(r52, r54);
    l1 = ld ind;
    c11 = `is.object`(l1);
    if c11 then L96() else L97(i14, r55, l1);
  L21(i20, dx13):
    st ind = dx13;
    goto L18(i20);
  L96():
    dr10 = tryDispatchBuiltin.0("[<-", l1, r55);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L98() else L97(i14, r55, dr10);
  L97(i18, r57, l3):
    i21 = ld i;
    check L99() else D35();
  D35():
    deopt 135 [i18, r57, l3, r55, i21];
  L98():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L21(i14, dx12);
  L99():
    i22 = force? i21;
    ___1 = ldf `[<-` in base;
    r60 = dyn ___1(l1, <missing>, i22, r55);
    goto L21(i18, r60);
  }
}