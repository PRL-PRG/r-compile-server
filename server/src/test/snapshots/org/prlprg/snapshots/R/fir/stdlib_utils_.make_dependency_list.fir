fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner364037032;
    st `.make_dependency_list` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner364037032(pkgs, available, dependencies, recursive) {
  (reg pkgs:*, reg available:*, reg dependencies:*, reg recursive:*) -+> V { var pkgs:*, var available:*, var dependencies:*, reg dependencies_isMissing:L, reg dependencies_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg pkgs1:*, reg pkgs2:V, reg length:cls, reg r6:V, reg r7:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg available1:*, reg available2:V, reg c2:V, reg c3:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg p2:p(V +), reg r16:V, reg available3:*, reg available4:V, reg c4:L, reg available6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pkgs3:*, reg pkgs4:V, reg dependencies1:*, reg dependencies2:V, reg __:cls, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg pkgs5:*, reg pkgs6:V, reg length1:cls, reg r23:V, reg vector:cls, reg r24:V, reg pkgs7:*, reg pkgs8:V, reg l:*, reg names__:cls, reg r25:V, reg recursive1:*, reg recursive2:V, reg c5:L, reg row_names:cls, reg available7:*, reg available8:V, reg p3:p(V +), reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg known:*, reg known1:V, reg length2:cls, reg r32:V, reg vector1:cls, reg r33:V, reg known2:*, reg known3:V, reg l1:*, reg names__1:cls, reg r34:V, reg available9:*, reg available10:V, reg c6:L, reg available12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg dependencies3:*, reg dependencies4:V, reg __1:cls, reg r35:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg known4:*, reg known5:V, reg r38:I, reg s:V, reg l2:I, reg i:I, reg i1:I, reg i2:I, reg c7:L, reg x:V, reg _clean_up_dependencies:cls, reg info2:*, reg info3:V, reg c8:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i5:*, reg i6:V, reg __2:cls, reg r39:V, reg p4:p(V +), reg r41:V, reg l3:*, reg c9:L, reg i8:I, reg r43:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i10:I, reg dx7:V, reg i11:*, reg i12:V, reg ____:cls, reg r46:V, reg pkgs9:*, reg pkgs10:V, reg s1:V, reg l6:I, reg i13:I, reg i14:I, reg i15:I, reg c10:L, reg x1:V, reg xx:*, reg xx1:V, reg c11:L, reg i19:I, reg xx3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i21:I, reg dx9:V, reg i22:*, reg i23:V, reg __3:cls, reg r47:V, reg p5:*, reg p6:V, reg c12:L, reg i25:I, reg p8:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i27:I, reg dx11:V, reg _in_:cls, reg p9:*, reg p10:V, reg p11:p(V +), reg known6:*, reg known7:V, reg p12:p(V +), reg r50:V, reg __4:cls, reg r51:V, reg p13:*, reg p14:V, reg i28:I, reg unlist:cls, reg xx4:*, reg xx5:V, reg c13:L, reg xx7:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg p15:*, reg p16:V, reg __5:cls, reg r52:V, reg p17:p(V +), reg r54:V, reg extra:*, reg extra1:V, reg c14:L, reg i30:I, reg extra3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i32:I, reg dx15:V, reg extra4:*, reg extra5:V, reg i33:*, reg i34:V, reg r55:V, reg __6:cls, reg r56:V, reg extra6:*, reg extra7:V, reg c15:L, reg i36:I, reg extra9:V, reg dr16:V, reg dc8:L, reg dx16:V, reg i38:I, reg dx17:V, reg _in_1:cls, reg extra10:*, reg extra11:V, reg p18:p(V +), reg known8:*, reg known9:V, reg p19:p(V +), reg r59:V, reg __7:cls, reg r60:V, reg unique:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r61:V, reg r62:V, reg p20:*, reg p21:V, reg extra12:*, reg extra13:V, reg c16:cls, reg r63:V, reg p22:p(V +), reg r65:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r66:V, reg i41:I, reg r67:V, reg deps:*, reg deps1:V, reg length3:cls, reg r68:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r71:V, reg i44:I, reg r72:V, reg r73:V, reg p23:*, reg p24:V, reg length4:cls, reg r74:V, reg r75:V, reg c17:L, reg deps2:*, reg deps3:V, reg c18:L, reg i51:I, reg deps5:V, reg dr18:V, reg dc9:L, reg dx18:V, reg i53:I, reg dx19:V, reg _in_2:cls, reg deps6:*, reg deps7:V, reg p25:p(V +), reg p26:*, reg p27:V, reg p28:p(V +), reg r79:V, reg r80:V, reg __8:cls, reg r81:V, reg deps8:*, reg deps9:V, reg p29:*, reg p30:V, reg l7:*, reg c19:L, reg i55:I, reg p32:V, reg l9:*, reg dr20:V, reg dc10:L, reg dx20:V, reg i57:I, reg dx21:V, reg i58:*, reg i59:V, reg ____1:cls, reg r82:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r83:V, reg r84:V, reg pkgs11:*, reg pkgs12:V, reg r85:I, reg s2:V, reg l10:I, reg i61:I, reg i62:I, reg i63:I, reg c20:L, reg x2:V, reg _clean_up_dependencies1:cls, reg info6:*, reg info7:V, reg c21:L, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg i66:*, reg i67:V, reg __9:cls, reg r86:V, reg p35:p(V +), reg r88:V, reg l11:*, reg c22:L, reg i69:I, reg r90:V, reg l13:*, reg dr24:V, reg dc12:L, reg dx24:V, reg i71:I, reg dx25:V, reg i72:*, reg i73:V, reg ____2:cls, reg r93:V, reg x3:*, reg x4:V |
    mkenv;
    st pkgs = pkgs;
    st available = available;
    dependencies_isMissing = missing.0(dependencies);
    if dependencies_isMissing then L0() else L1(dependencies);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("Depends", "Imports", "LinkingTo");
      goto L0(r2);
    L2():
      r = dyn base("Depends", "Imports", "LinkingTo");
      goto L0(r);
    };
    goto L1(p);
  L1(dependencies_orDefault):
    st dependencies = dependencies_orDefault;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L2(FALSE) else L2(recursive);
  L2(recursive_orDefault):
    st recursive = recursive_orDefault;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L3(r5):
    r7 = `!`(r5);
    c1 = `as.logical`(r7);
    if c1 then L43() else L4();
  L39():
    pkgs1 = ld pkgs;
    check L41() else D0();
  L40():
    r4 = dyn base1(<sym pkgs>);
    goto L3(r4);
  D0():
    deopt 2 [pkgs1];
  L4():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L41():
    pkgs2 = force? pkgs1;
    checkMissing(pkgs2);
    length = ldf length in base;
    r6 = dyn length(pkgs2);
    check L42() else D1();
  L43():
    popenv;
    return NULL;
  D1():
    deopt 5 [r6];
  L6(r11):
    c3 = `as.logical`(r11);
    if c3 then L49() else L7();
  L42():
    goto L3(r6);
  L46():
    available1 = ld available;
    check L48() else D2();
  L47():
    r10 = dyn base2(<sym available>);
    goto L6(r10);
  D2():
    deopt 13 [available1];
  L7():
    goto L8();
  L8():
    available3 = ld available;
    check L53() else D5();
  L48():
    available2 = force? available1;
    checkMissing(available2);
    c2 = `==`(available2, NULL);
    goto L6(c2);
  L49():
    stop = ldf stop;
    check L50() else D3();
  D3():
    deopt 17 [];
  D5():
    deopt 24 [available3];
  L50():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        sQuote = ldf sQuote;
        r12 = dyn sQuote("available");
        return r12;
      };
      r14 = dyn gettextf("%s must be supplied", p1);
      return r14;
    };
    r16 = dyn stop[, domain](p2, NA_LGL);
    check L51() else D4();
  L53():
    available4 = force? available3;
    checkMissing(available4);
    c4 = `is.object`(available4);
    if c4 then L54() else L55(available4);
  D4():
    deopt 21 [r16];
  L9(dx1):
    st info = dx1;
    sym3 = ldf vector;
    base3 = ldf vector in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  L51():
    goto L8();
  L54():
    dr = tryDispatchBuiltin.1("[", available4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L56() else L55(dr);
  L55(available6):
    pkgs3 = ld pkgs;
    check L57() else D6();
  D6():
    deopt 26 [available6, pkgs3];
  L10(r20):
    st x = r20;
    pkgs7 = ld pkgs;
    check L66() else D11();
  L56():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L57():
    pkgs4 = force? pkgs3;
    dependencies1 = ld dependencies;
    check L58() else D7();
  L59():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L61() else L62();
  L60():
    r19 = dyn base3("list", <lang length(pkgs)>);
    goto L10(r19);
  D7():
    deopt 28 [available6, dependencies1];
  D11():
    deopt 47 [pkgs7];
  L11(r22):
    vector = ldf vector in base;
    r24 = dyn vector("list", r22);
    check L65() else D10();
  L58():
    dependencies2 = force? dependencies1;
    __ = ldf `[` in base;
    r18 = dyn __(available4, pkgs4, dependencies2, FALSE);
    goto L9(r18);
  L61():
    pkgs5 = ld pkgs;
    check L63() else D8();
  L62():
    r21 = dyn base4(<sym pkgs>);
    goto L11(r21);
  L66():
    pkgs8 = force? pkgs7;
    checkMissing(pkgs8);
    l = ld x;
    names__ = ldf `names<-`;
    check L67() else D12();
  D8():
    deopt 40 [pkgs5];
  D10():
    deopt 45 [r24];
  D12():
    deopt 50 [pkgs8, l, pkgs8];
  L63():
    pkgs6 = force? pkgs5;
    checkMissing(pkgs6);
    length1 = ldf length in base;
    r23 = dyn length1(pkgs6);
    check L64() else D9();
  L65():
    goto L10(r24);
  L67():
    r25 = dyn names__(l, NULL, pkgs8);
    check L68() else D13();
  D9():
    deopt 43 [r23];
  D13():
    deopt 52 [pkgs8, r25];
  L64():
    goto L11(r23);
  L68():
    st x = r25;
    recursive1 = ld recursive;
    check L69() else D14();
  D14():
    deopt 54 [recursive1];
  L69():
    recursive2 = force? recursive1;
    checkMissing(recursive2);
    c5 = `as.logical`(recursive2);
    if c5 then L70() else L12();
  L12():
    sym11 = ldf seq_along;
    base11 = ldf seq_along in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L153() else L154();
  L34():
    x3 = ld x;
    check L163() else D60();
  L70():
    row_names = ldf `row.names`;
    check L71() else D15();
  D15():
    deopt 57 [];
  D60():
    deopt 211 [x3];
  L35(r84):
    s2 = toForSeq(r84);
    l10 = length(s2);
    i61 = 0;
    goto L36(i61);
  L71():
    p3 = prom<V +>{
      available7 = ld available;
      available8 = force? available7;
      checkMissing(available8);
      return available8;
    };
    r27 = dyn row_names(p3);
    check L72() else D16();
  L153():
    pkgs11 = ld pkgs;
    check L155() else D56();
  L154():
    r83 = dyn base11(<sym pkgs>);
    goto L35(r83);
  L163():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  D16():
    deopt 59 [r27];
  D56():
    deopt 196 [pkgs11];
  L36(i62):
    i63 = `+`.1(i62, 1);
    c20 = `<`.1(l10, i63);
    if c20 then L156() else L38();
  L72():
    st known = r27;
    sym5 = ldf vector;
    base5 = ldf vector in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L73() else L74();
  L155():
    pkgs12 = force? pkgs11;
    checkMissing(pkgs12);
    r85 = seq_along(pkgs12);
    goto L35(r85);
  L13(r29):
    st xx = r29;
    known2 = ld known;
    check L80() else D20();
  L38():
    x2 = `[[`(s2, i63, NULL, TRUE);
    st i = x2;
    _clean_up_dependencies1 = ldf `.clean_up_dependencies`;
    check L157() else D57();
  L73():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L75() else L76();
  L74():
    r28 = dyn base5("list", <lang length(known)>);
    goto L13(r28);
  L156():
    goto L34();
  D20():
    deopt 73 [known2];
  D57():
    deopt 200 [i63];
  L14(r31):
    vector1 = ldf vector in base;
    r33 = dyn vector1("list", r31);
    check L79() else D19();
  L75():
    known = ld known;
    check L77() else D17();
  L76():
    r30 = dyn base6(<sym known>);
    goto L14(r30);
  L80():
    known3 = force? known2;
    checkMissing(known3);
    l1 = ld xx;
    names__1 = ldf `names<-`;
    check L81() else D21();
  L157():
    p35 = prom<V +>{
      info6 = ld info;
      info7 = force? info6;
      checkMissing(info7);
      c21 = `is.object`(info7);
      if c21 then L1() else L2();
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("[", info7);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2();
    L2():
      i66 = ld i;
      i67 = force? i66;
      __9 = ldf `[` in base;
      r86 = dyn __9(info7, i67, <missing>);
      goto L0(r86);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    r88 = dyn _clean_up_dependencies1(p35);
    check L158() else D58();
  D17():
    deopt 66 [known];
  D19():
    deopt 71 [r33];
  D21():
    deopt 76 [known3, l1, known3];
  D58():
    deopt 202 [i63, r88];
  L77():
    known1 = force? known;
    checkMissing(known1);
    length2 = ldf length in base;
    r32 = dyn length2(known1);
    check L78() else D18();
  L79():
    goto L13(r33);
  L81():
    r34 = dyn names__1(l1, NULL, known3);
    check L82() else D22();
  L158():
    l11 = ld x;
    c22 = `is.object`(l11);
    if c22 then L159() else L160(i63, r88, l11);
  D18():
    deopt 69 [r32];
  D22():
    deopt 78 [known3, r34];
  L37(i71, dx25):
    st x = dx25;
    goto L36(i71);
  L78():
    goto L14(r32);
  L82():
    st xx = r34;
    available9 = ld available;
    check L83() else D23();
  L159():
    dr24 = tryDispatchBuiltin.0("[[<-", l11, r88);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L161() else L160(i63, r88, dr24);
  L160(i69, r90, l13):
    i72 = ld i;
    check L162() else D59();
  D23():
    deopt 80 [available9];
  D59():
    deopt 204 [i69, r90, l13, r88, i72];
  L83():
    available10 = force? available9;
    checkMissing(available10);
    c6 = `is.object`(available10);
    if c6 then L84() else L85(available10);
  L161():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L37(i63, dx24);
  L162():
    i73 = force? i72;
    ____2 = ldf `[[<-` in base;
    r93 = dyn ____2(l13, r88, i73);
    goto L37(i69, r93);
  L15(dx3):
    st info2 = dx3;
    sym7 = ldf seq_along;
    base7 = ldf seq_along in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L88() else L89();
  L84():
    dr2 = tryDispatchBuiltin.1("[", available10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L86() else L85(dr2);
  L85(available12):
    dependencies3 = ld dependencies;
    check L87() else D24();
  D24():
    deopt 83 [available12, dependencies3];
  L16(r37):
    s = toForSeq(r37);
    l2 = length(s);
    i = 0;
    goto L17(i);
  L86():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx2);
  L87():
    dependencies4 = force? dependencies3;
    __1 = ldf `[` in base;
    r35 = dyn __1(available10, <missing>, dependencies4, FALSE);
    goto L15(r35);
  L88():
    known4 = ld known;
    check L90() else D25();
  L89():
    r36 = dyn base7(<sym known>);
    goto L16(r36);
  D25():
    deopt 91 [known4];
  L17(i1):
    i2 = `+`.1(i1, 1);
    c7 = `<`.1(l2, i2);
    if c7 then L91() else L19();
  L90():
    known5 = force? known4;
    checkMissing(known5);
    r38 = seq_along(known5);
    goto L16(r38);
  L19():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    _clean_up_dependencies = ldf `.clean_up_dependencies`;
    check L92() else D26();
  L91():
    pkgs9 = ld pkgs;
    check L98() else D29();
  D26():
    deopt 95 [i2];
  D29():
    deopt 106 [pkgs9];
  L92():
    p4 = prom<V +>{
      info2 = ld info2;
      info3 = force? info2;
      checkMissing(info3);
      c8 = `is.object`(info3);
      if c8 then L1() else L2();
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", info3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2();
    L2():
      i5 = ld i;
      i6 = force? i5;
      __2 = ldf `[` in base;
      r39 = dyn __2(info3, i6, <missing>);
      goto L0(r39);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r41 = dyn _clean_up_dependencies(p4);
    check L93() else D27();
  L98():
    pkgs10 = force? pkgs9;
    checkMissing(pkgs10);
    s1 = toForSeq(pkgs10);
    l6 = length(s1);
    i13 = 0;
    goto L20(i13);
  D27():
    deopt 97 [i2, r41];
  L20(i14):
    i15 = `+`.1(i14, 1);
    c10 = `<`.1(l6, i15);
    if c10 then L99() else L33();
  L93():
    l3 = ld xx;
    c9 = `is.object`(l3);
    if c9 then L94() else L95(i2, r41, l3);
  L18(i10, dx7):
    st xx = dx7;
    goto L17(i10);
  L33():
    x1 = `[[`(s1, i15, NULL, TRUE);
    st i = x1;
    xx = ld xx;
    check L100() else D30();
  L94():
    dr6 = tryDispatchBuiltin.0("[[<-", l3, r41);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L96() else L95(i2, r41, dr6);
  L95(i8, r43, l5):
    i11 = ld i;
    check L97() else D28();
  L99():
    goto L34();
  D28():
    deopt 99 [i8, r43, l5, r41, i11];
  D30():
    deopt 108 [i15, xx];
  L96():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L18(i2, dx6);
  L97():
    i12 = force? i11;
    ____ = ldf `[[<-` in base;
    r46 = dyn ____(l5, r41, i12);
    goto L18(i8, r46);
  L100():
    xx1 = force? xx;
    checkMissing(xx1);
    c11 = `is.object`(xx1);
    if c11 then L101() else L102(i15, xx1);
  L21(i21, dx9):
    st p = dx9;
    p5 = ld p;
    check L105() else D32();
  L101():
    dr8 = tryDispatchBuiltin.1("[[", xx1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L103() else L102(i15, dr8);
  L102(i19, xx3):
    i22 = ld i;
    check L104() else D31();
  D31():
    deopt 110 [i19, xx3, i22];
  D32():
    deopt 114 [i21, p5];
  L103():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L21(i15, dx8);
  L104():
    i23 = force? i22;
    __3 = ldf `[[` in base;
    r47 = dyn __3(xx3, i23);
    goto L21(i19, r47);
  L105():
    p6 = force? p5;
    checkMissing(p6);
    c12 = `is.object`(p6);
    if c12 then L106() else L107(i21, p6);
  L22(i27, dx11):
    st p = dx11;
    p13 = ld p;
    check L111() else D35();
  L106():
    dr10 = tryDispatchBuiltin.1("[", p6);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L108() else L107(i21, dr10);
  L107(i25, p8):
    _in_ = ldf `%in%`;
    check L109() else D33();
  D33():
    deopt 117 [i25, p8];
  D35():
    deopt 123 [i27, p13];
  L108():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L22(i21, dx10);
  L109():
    p11 = prom<V +>{
      p9 = ld p;
      p10 = force? p9;
      checkMissing(p10);
      return p10;
    };
    p12 = prom<V +>{
      known6 = ld known;
      known7 = force? known6;
      checkMissing(known7);
      return known7;
    };
    r50 = dyn _in_(p11, p12);
    check L110() else D34();
  L111():
    p14 = force? p13;
    checkMissing(p14);
    st p1 = p14;
    goto L31(i27);
  D34():
    deopt 120 [i25, p8, r50];
  L31(i28):
    unlist = ldf unlist;
    check L112() else D36();
  L110():
    __4 = ldf `[` in base;
    r51 = dyn __4(p8, r50);
    goto L22(i25, r51);
  D36():
    deopt 127 [i28];
  L112():
    p17 = prom<V +>{
      xx4 = ld xx;
      xx5 = force? xx4;
      checkMissing(xx5);
      c13 = `is.object`(xx5);
      if c13 then L1() else L2(xx5);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", xx5);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(xx7):
      p15 = ld p1;
      p16 = force? p15;
      __5 = ldf `[` in base;
      r52 = dyn __5(xx7, p16);
      goto L0(r52);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r54 = dyn unlist(p17);
    check L113() else D37();
  D37():
    deopt 129 [i28, r54];
  L113():
    st extra = r54;
    extra = ld extra;
    check L114() else D38();
  D38():
    deopt 131 [i28, extra];
  L114():
    extra1 = force? extra;
    checkMissing(extra1);
    c14 = `is.object`(extra1);
    if c14 then L115() else L116(i28, extra1);
  L23(i32, dx15):
    st extra = dx15;
    extra6 = ld extra;
    check L120() else D41();
  L115():
    dr14 = tryDispatchBuiltin.1("[", extra1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L117() else L116(i28, dr14);
  L116(i30, extra3):
    extra4 = ld extra;
    check L118() else D39();
  D39():
    deopt 133 [i30, extra3, extra4];
  D41():
    deopt 139 [i32, extra6];
  L117():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L23(i28, dx14);
  L118():
    extra5 = force? extra4;
    checkMissing(extra5);
    i33 = ld i;
    check L119() else D40();
  L120():
    extra7 = force? extra6;
    checkMissing(extra7);
    c15 = `is.object`(extra7);
    if c15 then L121() else L122(i32, extra7);
  D40():
    deopt 134 [i30, extra3, extra5, i33];
  L24(i38, dx17):
    st extra = dx17;
    unique = ldf unique;
    check L126() else D44();
  L119():
    i34 = force? i33;
    checkMissing(i34);
    r55 = `!=`(extra5, i34);
    __6 = ldf `[` in base;
    r56 = dyn __6(extra3, r55);
    goto L23(i30, r56);
  L121():
    dr16 = tryDispatchBuiltin.1("[", extra7);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L123() else L122(i32, dr16);
  L122(i36, extra9):
    _in_1 = ldf `%in%`;
    check L124() else D42();
  D42():
    deopt 142 [i36, extra9];
  D44():
    deopt 149 [i38];
  L123():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L24(i32, dx16);
  L124():
    p18 = prom<V +>{
      extra10 = ld extra;
      extra11 = force? extra10;
      checkMissing(extra11);
      return extra11;
    };
    p19 = prom<V +>{
      known8 = ld known;
      known9 = force? known8;
      checkMissing(known9);
      return known9;
    };
    r59 = dyn _in_1(p18, p19);
    check L125() else D43();
  L126():
    p22 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r62):
      return r62;
    L1():
      p20 = ld p;
      p21 = force? p20;
      checkMissing(p21);
      extra12 = ld extra;
      extra13 = force? extra12;
      checkMissing(extra13);
      c16 = ldf c in base;
      r63 = dyn c16(p21, extra13);
      goto L0(r63);
    L2():
      r61 = dyn base8(<sym p>, <sym extra>);
      goto L0(r61);
    };
    r65 = dyn unique(p22);
    check L127() else D45();
  D43():
    deopt 145 [i36, extra9, r59];
  D45():
    deopt 151 [i38, r65];
  L125():
    __7 = ldf `[` in base;
    r60 = dyn __7(extra9, r59);
    goto L24(i36, r60);
  L127():
    st deps = r65;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L128() else L129();
  L25(i41, r67):
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L132() else L133();
  L128():
    deps = ld deps;
    check L130() else D46();
  L129():
    r66 = dyn base9(<sym deps>);
    goto L25(i38, r66);
  D46():
    deopt 155 [i38, deps];
  L26(i44, r72, r73):
    r75 = `<=`(r72, r73);
    c17 = `as.logical`(r75);
    if c17 then L136() else L27();
  L130():
    deps1 = force? deps;
    checkMissing(deps1);
    length3 = ldf length in base;
    r68 = dyn length3(deps1);
    check L131() else D47();
  L132():
    p23 = ld p;
    check L134() else D48();
  L133():
    r71 = dyn base10(<sym p>);
    goto L26(i41, r67, r71);
  D47():
    deopt 158 [i38, r68];
  D48():
    deopt 160 [i41, r67, p23];
  L27():
    deps2 = ld deps;
    check L139() else D50();
  L131():
    goto L25(i38, r68);
  L134():
    p24 = force? p23;
    checkMissing(p24);
    length4 = ldf length in base;
    r74 = dyn length4(p24);
    check L135() else D49();
  L136():
    p29 = ld p;
    check L147() else D54();
  D49():
    deopt 163 [i41, r67, r74];
  D50():
    deopt 169 [i44, deps2];
  D54():
    deopt 185 [i44, p29];
  L135():
    goto L26(i41, r67, r74);
  L139():
    deps3 = force? deps2;
    checkMissing(deps3);
    c18 = `is.object`(deps3);
    if c18 then L140() else L141(i44, deps3);
  L147():
    p30 = force? p29;
    checkMissing(p30);
    l7 = ld x;
    c19 = `is.object`(l7);
    if c19 then L148() else L149(i44, p30, l7);
  L30(i53, dx19):
    st p1 = dx19;
    deps8 = ld deps;
    check L145() else D53();
  L32(i57, dx21):
    st x = dx21;
    goto L20(i57);
  L140():
    dr18 = tryDispatchBuiltin.1("[", deps3);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L142() else L141(i44, dr18);
  L141(i51, deps5):
    _in_2 = ldf `%in%`;
    check L143() else D51();
  L148():
    dr20 = tryDispatchBuiltin.0("[[<-", l7, p30);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L150() else L149(i44, p30, dr20);
  L149(i55, p32, l9):
    i58 = ld i;
    check L151() else D55();
  D51():
    deopt 172 [i51, deps5];
  D53():
    deopt 179 [i53, deps8];
  D55():
    deopt 188 [i55, p32, l9, p30, i58];
  L142():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L30(i44, dx18);
  L143():
    p25 = prom<V +>{
      deps6 = ld deps;
      deps7 = force? deps6;
      checkMissing(deps7);
      return deps7;
    };
    p28 = prom<V +>{
      p26 = ld p;
      p27 = force? p26;
      checkMissing(p27);
      return p27;
    };
    r79 = dyn _in_2(p25, p28);
    check L144() else D52();
  L145():
    deps9 = force? deps8;
    checkMissing(deps9);
    st p = deps9;
    goto L31(i53);
  L150():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L32(i44, dx20);
  L151():
    i59 = force? i58;
    ____1 = ldf `[[<-` in base;
    r82 = dyn ____1(l9, p30, i59);
    goto L32(i55, r82);
  D52():
    deopt 175 [i51, deps5, r79];
  L144():
    r80 = `!`(r79);
    __8 = ldf `[` in base;
    r81 = dyn __8(deps5, r80);
    goto L30(i51, r81);
  }
}