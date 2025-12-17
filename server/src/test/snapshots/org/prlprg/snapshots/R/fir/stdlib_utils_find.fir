fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner208996897;
    st find = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner208996897(what, mode, numeric, `simple.words`) {
  (reg what:*, reg mode:*, reg numeric:*, reg simple_words:*) -+> V { var what:*, var mode:*, reg mode_isMissing:L, reg mode_orDefault:*, var numeric:*, reg numeric_isMissing:L, reg numeric_orDefault:*, var `simple.words`:*, reg simple_words_isMissing:L, reg simple_words_orDefault:*, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg what1:*, reg what2:V, reg c:L, reg p:p(V +), reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg what3:*, reg what4:V, reg length:cls, reg r6:V, reg r7:V, reg c1:L, reg warning:cls, reg r8:V, reg what5:*, reg what6:V, reg c2:L, reg what8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg search:cls, reg r12:V, reg length1:cls, reg r13:V, reg logical:cls, reg len_s:*, reg len_s1:V, reg p1:p(V +), reg r15:V, reg mode1:*, reg mode2:V, reg r16:V, reg len_s2:*, reg len_s3:V, reg r17:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg simple_words1:*, reg simple_words2:V, reg c4:L, reg _in_:cls, reg what9:*, reg what10:V, reg p2:p(V +), reg ls:cls, reg i7:*, reg i8:V, reg p3:p(V +), reg r20:V, reg p4:p(V +), reg r22:V, reg found:*, reg found1:V, reg c5:L, reg i10:I, reg c7:V, reg check_mode:*, reg check_mode1:V, reg c8:L, reg c9:V, reg c11:L, reg exists:cls, reg what11:*, reg what12:V, reg p5:p(V +), reg i14:*, reg i15:V, reg p6:p(V +), reg mode3:*, reg mode4:V, reg p7:p(V +), reg r26:V, reg i16:I, reg found2:*, reg found3:V, reg l1:*, reg c12:L, reg i18:I, reg found5:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx3:V, reg i20:I, reg found7:V, reg dx4:V, reg i21:*, reg i22:V, reg ___:cls, reg r28:V, reg i23:I, reg ls1:cls, reg i24:*, reg i25:V, reg p8:p(V +), reg what13:*, reg what14:V, reg p9:p(V +), reg r31:V, reg grep:cls, reg li:*, reg li1:V, reg p10:p(V +), reg r33:V, reg sp:*, reg sp1:V, reg c13:L, reg i27:I, reg sp3:V, reg dr4:V, reg dc2:L, reg dx5:V, reg i29:I, reg dx6:V, reg i30:*, reg i31:V, reg __1:cls, reg r34:V, reg r35:V, reg c14:L, reg li2:*, reg li3:V, reg c15:L, reg i35:I, reg li5:V, reg dr6:V, reg dc3:L, reg dx7:V, reg i37:I, reg dx8:V, reg _in_1:cls, reg li6:*, reg li7:V, reg p11:p(V +), reg _dot_internals:*, reg _dot_internals1:V, reg p12:p(V +), reg r38:V, reg r39:V, reg __2:cls, reg r40:V, reg i38:I, reg sym3:cls, reg base3:cls, reg guard3:L, reg r41:V, reg i41:I, reg r42:V, reg li8:*, reg li9:V, reg length2:cls, reg r43:V, reg ll:*, reg ll1:V, reg r44:V, reg c16:L, reg i43:I, reg c18:V, reg check_mode2:*, reg check_mode3:V, reg c19:L, reg c20:V, reg c22:L, reg vapply:cls, reg li10:*, reg li11:V, reg p13:p(V +), reg exists1:*, reg exists2:V, reg p14:p(V +), reg i47:*, reg i48:V, reg p15:p(V +), reg mode5:*, reg mode6:V, reg p16:p(V +), reg r49:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r50:V, reg i51:I, reg r51:V, reg mode_ok:*, reg mode_ok1:V, reg sum:cls, reg r52:V, reg ll2:*, reg ll3:V, reg r53:V, reg c23:L, reg warning1:cls, reg sprintf:cls, reg ngettext:cls, reg ll4:*, reg ll5:V, reg p17:p(V +), reg r55:V, reg p18:p(V +), reg ll6:*, reg ll7:V, reg p19:p(V +), reg sp4:*, reg sp5:V, reg c24:L, reg sp7:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg i54:*, reg i55:V, reg __3:cls, reg r58:V, reg p20:p(V +), reg r60:V, reg p21:p(V +), reg r62:V, reg i56:I, reg r63:V, reg i57:I, reg ll8:*, reg ll9:V, reg r65:V, reg l4:*, reg c25:L, reg i59:I, reg r67:V, reg l6:*, reg dr10:V, reg dc5:L, reg dx12:V, reg i61:I, reg r69:V, reg dx13:V, reg i62:*, reg i63:V, reg ___1:cls, reg r70:V, reg numeric1:*, reg numeric2:V, reg c26:L, reg structure:cls, reg which:cls, reg ind:*, reg ind1:V, reg p22:p(V +), reg r72:V, reg p23:p(V +), reg sp8:*, reg sp9:V, reg c27:L, reg sp11:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg ind2:*, reg ind3:V, reg __4:cls, reg r74:V, reg p24:p(V +), reg r76:V, reg sp12:*, reg sp13:V, reg c28:L, reg sp15:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg ind4:*, reg ind5:V, reg __5:cls, reg r77:V |
    mkenv;
    st what = what;
    mode_isMissing = missing.0(mode);
    if mode_isMissing then L0("any") else L0(mode);
  L0(mode_orDefault):
    st mode = mode_orDefault;
    numeric_isMissing = missing.0(numeric);
    if numeric_isMissing then L1(FALSE) else L1(numeric);
  L1(numeric_orDefault):
    st numeric = numeric_orDefault;
    simple_words_isMissing = missing.0(simple_words);
    if simple_words_isMissing then L2(TRUE) else L2(simple_words);
  L2(simple_words_orDefault):
    st `simple.words` = simple_words_orDefault;
    stopifnot = ldf stopifnot;
    check L30() else D0();
  D0():
    deopt 1 [];
  L30():
    p = prom<V +>{
      sym = ldf `is.character`;
      base = ldf `is.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      c = `is.character`(what2);
      goto L0(c);
    L2():
      r = dyn base(<sym what>);
      goto L0(r);
    };
    r3 = dyn stopifnot(p);
    check L31() else D1();
  D1():
    deopt 3 [r3];
  L31():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L3(r5):
    r7 = `>`(r5, 1);
    c1 = `as.logical`(r7);
    if c1 then L36() else L4();
  L32():
    what3 = ld what;
    check L34() else D2();
  L33():
    r4 = dyn base1(<sym what>);
    goto L3(r4);
  D2():
    deopt 6 [what3];
  L4():
    goto L6();
  L6():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L44() else L45();
  L34():
    what4 = force? what3;
    checkMissing(what4);
    length = ldf length in base;
    r6 = dyn length(what4);
    check L35() else D3();
  L36():
    warning = ldf warning;
    check L37() else D4();
  D3():
    deopt 9 [r6];
  D4():
    deopt 13 [];
  L7(r11):
    st `len.s` = r11;
    logical = ldf logical;
    check L49() else D10();
  L35():
    goto L3(r6);
  L37():
    r8 = dyn warning("elements of 'what' after the first will be ignored");
    check L38() else D5();
  L44():
    search = ldf search;
    check L46() else D7();
  L45():
    r10 = dyn base2(<lang `<-`(sp, search())>);
    goto L7(r10);
  D5():
    deopt 15 [r8];
  D7():
    deopt 27 [];
  D10():
    deopt 34 [];
  L38():
    what5 = ld what;
    check L39() else D6();
  L46():
    r12 = dyn search();
    check L47() else D8();
  L49():
    p1 = prom<V +>{
      len_s = ld `len.s`;
      len_s1 = force? len_s;
      checkMissing(len_s1);
      return len_s1;
    };
    r15 = dyn logical(p1);
    check L50() else D11();
  D6():
    deopt 16 [what5];
  D8():
    deopt 28 [r12];
  D11():
    deopt 36 [r15];
  L39():
    what6 = force? what5;
    checkMissing(what6);
    c2 = `is.object`(what6);
    if c2 then L40() else L41(what6);
  L47():
    st sp = r12;
    length1 = ldf length in base;
    r13 = dyn length1(r12);
    check L48() else D9();
  L50():
    st ind = r15;
    mode1 = ld mode;
    check L51() else D12();
  D9():
    deopt 31 [r13];
  D12():
    deopt 38 [mode1];
  L5(dx1):
    st what = dx1;
    goto L6();
  L40():
    dr = tryDispatchBuiltin.1("[", what6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L42() else L41(dr);
  L41(what8):
    __ = ldf `[` in base;
    r9 = dyn __(what8, 1);
    goto L5(r9);
  L48():
    goto L7(r13);
  L51():
    mode2 = force? mode1;
    checkMissing(mode2);
    r16 = `!=`(mode2, "any");
    st `check.mode` = r16;
    len_s2 = ld `len.s`;
    check L52() else D13();
  D13():
    deopt 44 [1, len_s2];
  L42():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L52():
    len_s3 = force? len_s2;
    checkMissing(len_s3);
    r17 = `:`(1, len_s3);
    s = toForSeq(r17);
    l = length(s);
    i = 0;
    goto L8(i);
  L8(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L53() else L27();
  L27():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    simple_words1 = ld `simple.words`;
    check L54() else D14();
  L53():
    numeric1 = ld numeric;
    check L115() else D45();
  D14():
    deopt 47 [i2, simple_words1];
  D45():
    deopt 179 [numeric1];
  L54():
    simple_words2 = force? simple_words1;
    checkMissing(simple_words2);
    c4 = `as.logical`(simple_words2);
    if c4 then L55() else L9();
  L115():
    numeric2 = force? numeric1;
    checkMissing(numeric2);
    c26 = `as.logical`(numeric2);
    if c26 then L116() else L28();
  L9():
    ls1 = ldf ls;
    check L72() else D23();
  L14(i23):
    goto L8(i23);
  L28():
    sp12 = ld sp;
    check L120() else D48();
  L55():
    _in_ = ldf `%in%`;
    check L56() else D15();
  L116():
    structure = ldf structure;
    check L117() else D46();
  D15():
    deopt 50 [i2];
  D23():
    deopt 81 [i2];
  D46():
    deopt 182 [];
  D48():
    deopt 187 [sp12];
  L56():
    p2 = prom<V +>{
      what9 = ld what;
      what10 = force? what9;
      checkMissing(what10);
      return what10;
    };
    p4 = prom<V +>{
      ls = ldf ls;
      p3 = prom<V +>{
        i7 = ld i;
        i8 = force? i7;
        checkMissing(i8);
        return i8;
      };
      r20 = dyn ls[pos, `all.names`](p3, TRUE);
      return r20;
    };
    r22 = dyn _in_(p2, p4);
    check L57() else D16();
  L72():
    p8 = prom<V +>{
      i24 = ld i;
      i25 = force? i24;
      checkMissing(i25);
      return i25;
    };
    p9 = prom<V +>{
      what13 = ld what;
      what14 = force? what13;
      checkMissing(what14);
      return what14;
    };
    r31 = dyn ls1[pos, pattern, `all.names`](p8, p9, TRUE);
    check L73() else D24();
  L117():
    p23 = prom<V +>{
      which = ldf which;
      p22 = prom<V +>{
        ind = ld ind;
        ind1 = force? ind;
        checkMissing(ind1);
        return ind1;
      };
      r72 = dyn which(p22);
      return r72;
    };
    p24 = prom<V +>{
      sp8 = ld sp;
      sp9 = force? sp8;
      checkMissing(sp9);
      c27 = `is.object`(sp9);
      if c27 then L1() else L2(sp9);
    L0(dx15):
      return dx15;
    L1():
      dr12 = tryDispatchBuiltin.1("[", sp9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(sp11):
      ind2 = ld ind;
      ind3 = force? ind2;
      __4 = ldf `[` in base;
      r74 = dyn __4(sp11, ind3);
      goto L0(r74);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx14);
    };
    r76 = dyn structure[, names](p23, p24);
    check L118() else D47();
  L120():
    sp13 = force? sp12;
    checkMissing(sp13);
    c28 = `is.object`(sp13);
    if c28 then L121() else L122(sp13);
  D16():
    deopt 53 [i2, r22];
  D24():
    deopt 88 [i2, r31];
  D47():
    deopt 186 [r76];
  L29(dx17):
    popenv;
    return dx17;
  L57():
    st found = r22;
    found = ld found;
    check L58() else D17();
  L73():
    st li = r31;
    grep = ldf grep;
    check L74() else D25();
  L118():
    popenv;
    return r76;
  L121():
    dr14 = tryDispatchBuiltin.1("[", sp13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L123() else L122(dr14);
  L122(sp15):
    ind4 = ld ind;
    check L124() else D49();
  D17():
    deopt 55 [i2, found];
  D25():
    deopt 91 [i2];
  D49():
    deopt 189 [sp15, ind4];
  L58():
    found1 = force? found;
    checkMissing(found1);
    c5 = `as.logical`(found1);
    if c5 then L59() else L10(i2, c5);
  L74():
    p10 = prom<V +>{
      li = ld li;
      li1 = force? li;
      checkMissing(li1);
      return li1;
    };
    r33 = dyn grep[, , invert, value]("^[.](__|C_|F_)", p10, TRUE, TRUE);
    check L75() else D26();
  L123():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L29(dx16);
  L124():
    ind5 = force? ind4;
    __5 = ldf `[` in base;
    r77 = dyn __5(sp15, ind5);
    goto L29(r77);
  D26():
    deopt 98 [i2, r33];
  L10(i10, c7):
    c11 = `as.logical`(c7);
    if c11 then L62() else L11();
  L59():
    check_mode = ld `check.mode`;
    check L60() else D18();
  L75():
    st li = r33;
    sp = ld sp;
    check L76() else D27();
  D18():
    deopt 57 [i2, c5, check_mode];
  D27():
    deopt 100 [i2, sp];
  L11():
    goto L12(i10);
  L12(i16):
    found2 = ld found;
    check L66() else D21();
  L60():
    check_mode1 = force? check_mode;
    checkMissing(check_mode1);
    c8 = `as.logical`(check_mode1);
    c9 = `&&`(c5, c8);
    goto L10(i2, c9);
  L62():
    exists = ldf exists;
    check L63() else D19();
  L76():
    sp1 = force? sp;
    checkMissing(sp1);
    c13 = `is.object`(sp1);
    if c13 then L77() else L78(i2, sp1);
  D19():
    deopt 61 [i10];
  D21():
    deopt 73 [i16, found2];
  L15(i29, dx6):
    r35 = `==`(dx6, "package:base");
    c14 = `as.logical`(r35);
    if c14 then L81() else L16();
  L63():
    p5 = prom<V +>{
      what11 = ld what;
      what12 = force? what11;
      checkMissing(what12);
      return what12;
    };
    p6 = prom<V +>{
      i14 = ld i;
      i15 = force? i14;
      checkMissing(i15);
      return i15;
    };
    p7 = prom<V +>{
      mode3 = ld mode;
      mode4 = force? mode3;
      checkMissing(mode4);
      return mode4;
    };
    r26 = dyn exists[, where, mode, inherits](p5, p6, p7, FALSE);
    check L64() else D20();
  L66():
    found3 = force? found2;
    checkMissing(found3);
    l1 = ld ind;
    c12 = `is.object`(l1);
    if c12 then L67() else L68(i16, found3, l1);
  L77():
    dr4 = tryDispatchBuiltin.1("[", sp1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L79() else L78(i2, dr4);
  L78(i27, sp3):
    i30 = ld i;
    check L80() else D28();
  D20():
    deopt 69 [i10, r26];
  D28():
    deopt 102 [i27, sp3, i30];
  L13(i20, found7, dx4):
    st ind = dx4;
    goto L14(i20);
  L16():
    goto L18(i29);
  L18(i38):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L89() else L90();
  L64():
    st found = r26;
    goto L12(i10);
  L67():
    dr2 = tryDispatchBuiltin.0("[<-", l1, found3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L69() else L68(i16, found3, dr2);
  L68(i18, found5, l3):
    i21 = ld i;
    check L70() else D22();
  L79():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L15(i2, dx5);
  L80():
    i31 = force? i30;
    __1 = ldf `[` in base;
    r34 = dyn __1(sp3, i31);
    goto L15(i27, r34);
  L81():
    li2 = ld li;
    check L82() else D29();
  D22():
    deopt 76 [i18, found5, l3, found3, i21];
  D29():
    deopt 107 [i29, li2];
  L19(i41, r42):
    st ll = r42;
    ll = ld ll;
    check L93() else D34();
  L69():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L13(i16, found3, dx3);
  L70():
    i22 = force? i21;
    ___ = ldf `[<-` in base;
    r28 = dyn ___(l3, found3, i22);
    goto L13(i18, found5, r28);
  L82():
    li3 = force? li2;
    checkMissing(li3);
    c15 = `is.object`(li3);
    if c15 then L83() else L84(i29, li3);
  L89():
    li8 = ld li;
    check L91() else D32();
  L90():
    r41 = dyn base3(<sym li>);
    goto L19(i38, r41);
  D32():
    deopt 121 [i38, li8];
  D34():
    deopt 126 [i41, ll];
  L17(i37, dx8):
    st li = dx8;
    goto L18(i37);
  L83():
    dr6 = tryDispatchBuiltin.1("[", li3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L85() else L84(i29, dr6);
  L84(i35, li5):
    _in_1 = ldf `%in%`;
    check L86() else D30();
  L91():
    li9 = force? li8;
    checkMissing(li9);
    length2 = ldf length in base;
    r43 = dyn length2(li9);
    check L92() else D33();
  L93():
    ll1 = force? ll;
    checkMissing(ll1);
    r44 = `>`(ll1, 0.0);
    c16 = `as.logical`(r44);
    if c16 then L94() else L20(i41, c16);
  D30():
    deopt 110 [i35, li5];
  D33():
    deopt 124 [i38, r43];
  L20(i43, c18):
    c22 = `as.logical`(c18);
    if c22 then L97() else L21();
  L85():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L17(i29, dx7);
  L86():
    p11 = prom<V +>{
      li6 = ld li;
      li7 = force? li6;
      checkMissing(li7);
      return li7;
    };
    p12 = prom<V +>{
      _dot_internals = ld `.dot_internals`;
      _dot_internals1 = force? _dot_internals;
      checkMissing(_dot_internals1);
      return _dot_internals1;
    };
    r38 = dyn _in_1(p11, p12);
    check L87() else D31();
  L92():
    goto L19(i38, r43);
  L94():
    check_mode2 = ld `check.mode`;
    check L95() else D35();
  D31():
    deopt 113 [i35, li5, r38];
  D35():
    deopt 130 [i41, c16, check_mode2];
  L21():
    goto L25(i43);
  L25(i57):
    ll8 = ld ll;
    check L110() else D43();
  L87():
    r39 = `!`(r38);
    __2 = ldf `[` in base;
    r40 = dyn __2(li5, r39);
    goto L17(i35, r40);
  L95():
    check_mode3 = force? check_mode2;
    checkMissing(check_mode3);
    c19 = `as.logical`(check_mode3);
    c20 = `&&`(c16, c19);
    goto L20(i41, c20);
  L97():
    vapply = ldf vapply;
    check L98() else D36();
  D36():
    deopt 134 [i43];
  D43():
    deopt 167 [i57, ll8];
  L98():
    p13 = prom<V +>{
      li10 = ld li;
      li11 = force? li10;
      checkMissing(li11);
      return li11;
    };
    p14 = prom<V +>{
      exists1 = ld exists;
      exists2 = force? exists1;
      checkMissing(exists2);
      return exists2;
    };
    p15 = prom<V +>{
      i47 = ld i;
      i48 = force? i47;
      checkMissing(i48);
      return i48;
    };
    p16 = prom<V +>{
      mode5 = ld mode;
      mode6 = force? mode5;
      checkMissing(mode6);
      return mode6;
    };
    r49 = dyn vapply[, , , where, mode, inherits](p13, p14, NA_LGL, p15, p16, FALSE);
    check L99() else D37();
  L110():
    ll9 = force? ll8;
    checkMissing(ll9);
    r65 = `>`(ll9, 0);
    l4 = ld ind;
    c25 = `is.object`(l4);
    if c25 then L111() else L112(i57, r65, l4);
  D37():
    deopt 144 [i43, r49];
  L26(i61, r69, dx13):
    st ind = dx13;
    goto L14(i61);
  L99():
    st `mode.ok` = r49;
    sym4 = ldf sum;
    base4 = ldf sum in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L100() else L101();
  L111():
    dr10 = tryDispatchBuiltin.0("[<-", l4, r65);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L113() else L112(i57, r65, dr10);
  L112(i59, r67, l6):
    i62 = ld i;
    check L114() else D44();
  D44():
    deopt 172 [i59, r67, l6, r65, i62];
  L22(i51, r51):
    st ll = r51;
    ll2 = ld ll;
    check L104() else D40();
  L100():
    mode_ok = ld `mode.ok`;
    check L102() else D38();
  L101():
    r50 = dyn base4(<sym mode.ok>);
    goto L22(i43, r50);
  L113():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L26(i57, r65, dx12);
  L114():
    i63 = force? i62;
    ___1 = ldf `[<-` in base;
    r70 = dyn ___1(l6, r65, i63);
    goto L26(i59, r67, r70);
  D38():
    deopt 148 [i43, mode_ok];
  D40():
    deopt 153 [i51, ll2];
  L102():
    mode_ok1 = force? mode_ok;
    checkMissing(mode_ok1);
    sum = ldf sum in base;
    r52 = dyn sum(mode_ok1);
    check L103() else D39();
  L104():
    ll3 = force? ll2;
    checkMissing(ll3);
    r53 = `>=`(ll3, 2.0);
    c23 = `as.logical`(r53);
    if c23 then L105() else L23();
  D39():
    deopt 151 [i43, r52];
  L23():
    goto L24(i51, NULL);
  L24(i56, r63):
    goto L25(i56);
  L103():
    goto L22(i43, r52);
  L105():
    warning1 = ldf warning;
    check L106() else D41();
  D41():
    deopt 158 [i51];
  L106():
    p21 = prom<V +>{
      sprintf = ldf sprintf;
      p18 = prom<V +>{
        ngettext = ldf ngettext;
        p17 = prom<V +>{
          ll4 = ld ll;
          ll5 = force? ll4;
          checkMissing(ll5);
          return ll5;
        };
        r55 = dyn ngettext(p17, "%d occurrence in %s", "%d occurrences in %s");
        return r55;
      };
      p19 = prom<V +>{
        ll6 = ld ll;
        ll7 = force? ll6;
        checkMissing(ll7);
        return ll7;
      };
      p20 = prom<V +>{
        sp4 = ld sp;
        sp5 = force? sp4;
        checkMissing(sp5);
        c24 = `is.object`(sp5);
        if c24 then L1() else L2(sp5);
      L0(dx11):
        return dx11;
      L1():
        dr8 = tryDispatchBuiltin.1("[", sp5);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(sp7):
        i54 = ld i;
        i55 = force? i54;
        __3 = ldf `[` in base;
        r58 = dyn __3(sp7, i55);
        goto L0(r58);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx10);
      };
      r60 = dyn sprintf(p18, p19, p20);
      return r60;
    };
    r62 = dyn warning1[, domain](p21, NA_LGL);
    check L107() else D42();
  D42():
    deopt 162 [i51, r62];
  L107():
    goto L24(i51, r62);
  }
}