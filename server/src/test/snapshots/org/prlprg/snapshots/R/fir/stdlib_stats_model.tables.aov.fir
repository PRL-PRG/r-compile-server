fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2086378571;
    st `model.tables.aov` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2086378571(x, type, se, cterms, `...`) {
  (reg x:*, reg type:*, reg se:*, reg cterms:*, reg ddd:dots) -+> V { var x:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var se:*, reg se_isMissing:L, reg se_orDefault:*, var cterms:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg c:L, reg stop:cls, reg r3:V, reg match_arg:cls, reg type1:*, reg type2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg type3:*, reg type4:V, reg r11:V, reg c2:L, reg stop1:cls, reg gettextf:cls, reg type5:*, reg type6:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg r15:V, reg proj:cls, reg x3:*, reg x4:V, reg p4:p(V +), reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r21:V, reg c4:V, reg c5:L, reg stop2:cls, reg r22:V, reg model_frame:cls, reg x9:*, reg x10:V, reg p5:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg prjs:*, reg prjs1:V, reg attr:cls, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg factors:*, reg factors1:V, reg names:cls, reg r31:V, reg setNames:cls, reg as_list:cls, reg nf:*, reg nf1:V, reg p6:p(V +), reg r33:V, reg p7:p(V +), reg nf2:*, reg nf3:V, reg p8:p(V +), reg r36:V, reg factors2:*, reg factors3:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg prjs2:*, reg prjs3:V, reg attr1:cls, reg r39:V, reg colnames:cls, reg t_factor:*, reg t_factor1:V, reg p9:p(V +), reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg vars:*, reg vars1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg dn_proj:*, reg dn_proj1:V, reg names1:cls, reg r46:V, reg match:cls, reg r47:V, reg which:*, reg which1:V, reg c6:L, reg which3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg which6:V, reg r49:V, reg which7:*, reg which8:V, reg is_na:cls, reg r50:V, reg r51:V, reg __:cls, reg r52:V, reg dn_proj2:*, reg dn_proj3:V, reg c7:L, reg dn_proj5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg which9:*, reg which10:V, reg __1:cls, reg r53:V, reg m_factors:*, reg m_factors1:V, reg c8:L, reg m_factors3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg which11:*, reg which12:V, reg __2:cls, reg r54:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r55:V, reg r56:V, reg missing:cls, reg r57:V, reg r58:V, reg c9:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r59:V, reg r60:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r61:V, reg r62:V, reg cterms1:*, reg cterms2:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r63:V, reg r64:V, reg factors4:*, reg factors5:V, reg names2:cls, reg r65:V, reg match1:cls, reg r66:V, reg anyNA:cls, reg r67:V, reg c10:L, reg stop3:cls, reg r68:V, reg dn_proj6:*, reg dn_proj7:V, reg c11:L, reg dn_proj9:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg cterms3:*, reg cterms4:V, reg __3:cls, reg r70:V, reg m_factors4:*, reg m_factors5:V, reg c12:L, reg m_factors7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg cterms5:*, reg cterms6:V, reg __4:cls, reg r71:V, reg type7:*, reg type8:V, reg r72:V, reg c13:L, reg lapply:cls, reg dn_proj10:*, reg dn_proj11:V, reg p10:p(V +), reg r74:cls, reg p11:p(V +), reg t_factor2:*, reg t_factor3:V, reg p12:p(V +), reg vars2:*, reg vars3:V, reg p13:p(V +), reg r78:V, reg make_tables_aovproj:cls, reg dn_proj12:*, reg dn_proj13:V, reg p14:p(V +), reg m_factors8:*, reg m_factors9:V, reg p15:p(V +), reg prjs4:*, reg prjs5:V, reg p16:p(V +), reg mf:*, reg mf1:V, reg p17:p(V +), reg r84:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r85:V, reg r86:V, reg tables:*, reg tables1:V, reg names3:cls, reg r87:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c14:L, reg x11:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r88:V, reg i7:I, reg r89:V, reg n:*, reg n1:V, reg replications:cls, reg paste:cls, reg xx:*, reg xx1:V, reg p18:p(V +), reg r91:V, reg p19:p(V +), reg mf2:*, reg mf3:V, reg p20:p(V +), reg r94:V, reg c15:cls, reg r95:V, reg se1:*, reg se2:V, reg c16:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r96:V, reg r97:V, reg n2:*, reg n3:V, reg is_list:cls, reg r98:V, reg c17:L, reg message:cls, reg r99:V, reg r100:V, reg se_aov:cls, reg x12:*, reg x13:V, reg p21:p(V +), reg n4:*, reg n5:V, reg p22:p(V +), reg type9:*, reg type10:V, reg p23:p(V +), reg r104:V, reg type11:*, reg type12:V, reg r106:V, reg c18:L, reg c20:V, reg _in_:cls, reg colnames1:cls, reg prjs6:*, reg prjs7:V, reg p24:p(V +), reg r108:V, reg p25:p(V +), reg r110:V, reg c21:L, reg c22:V, reg c24:L, reg mean:cls, reg prjs8:*, reg prjs9:V, reg c25:L, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg __5:cls, reg r111:V, reg p26:p(V +), reg r113:V, reg l1:*, reg class__:cls, reg r114:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r115:V, reg r116:V, reg gmtable:*, reg gmtable1:V, reg tables2:*, reg tables3:V, reg c26:cls, reg r117:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r119:V, reg r120:V, reg tables4:*, reg tables5:V, reg n6:*, reg n7:V, reg list:cls, reg r121:V, reg se3:*, reg se4:V, reg c27:L, reg se_tables:*, reg se_tables1:V, reg l2:*, reg c28:L, reg se_tables3:V, reg l4:*, reg dr14:V, reg dc7:L, reg dx15:V, reg se_tables5:V, reg dx16:V, reg r122:V, reg type13:*, reg type14:V, reg l5:*, reg attr__:cls, reg r123:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r124:V, reg r125:V, reg c29:cls, reg r126:V, reg l6:*, reg class__1:cls, reg r127:V, reg result:*, reg result1:V |
    mkenv;
    st x = x;
    type_isMissing = missing.0(type);
    if type_isMissing then L0("effects") else L0(type);
  L0(type_orDefault):
    st type = type_orDefault;
    se_isMissing = missing.0(se);
    if se_isMissing then L1(FALSE) else L1(se);
  L1(se_orDefault):
    st se = se_orDefault;
    st cterms = cterms;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L48() else L49();
  L2(r1):
    c = `as.logical`(r1);
    if c then L52() else L3();
  L48():
    x1 = ld x;
    check L50() else D0();
  L49():
    r = dyn base(<sym x>, "maov");
    goto L2(r);
  D0():
    deopt 2 [x1];
  L3():
    goto L4();
  L4():
    match_arg = ldf `match.arg`;
    check L56() else D4();
  L50():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "maov", FALSE);
    check L51() else D1();
  L52():
    stop = ldf stop;
    check L53() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 15 [];
  L51():
    goto L2(r2);
  L53():
    r3 = dyn stop("'model.tables' is not implemented for multiple responses");
    check L54() else D3();
  L56():
    p = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c1 = ldf c in base;
      r8 = dyn c1("effects", "means", "residuals");
      goto L0(r8);
    L2():
      r6 = dyn base1("effects", "means", "residuals");
      goto L0(r6);
    };
    r10 = dyn match_arg(p, p1);
    check L57() else D5();
  D3():
    deopt 11 [r3];
  D5():
    deopt 18 [r10];
  L54():
    goto L4();
  L57():
    st type = r10;
    type3 = ld type;
    check L58() else D6();
  D6():
    deopt 20 [type3];
  L58():
    type4 = force? type3;
    checkMissing(type4);
    r11 = `==`(type4, "residuals");
    c2 = `as.logical`(r11);
    if c2 then L59() else L5();
  L5():
    goto L6();
  L6():
    proj = ldf proj;
    check L63() else D9();
  L59():
    stop1 = ldf stop;
    check L60() else D7();
  D7():
    deopt 25 [];
  D9():
    deopt 33 [];
  L60():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        type5 = ld type;
        type6 = force? type5;
        checkMissing(type6);
        return type6;
      };
      r13 = dyn gettextf("type '%s' is not implemented yet", p2);
      return r13;
    };
    r15 = dyn stop1[, domain](p3, NA_LGL);
    check L61() else D8();
  L63():
    p4 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r18 = dyn proj[, `unweighted.scale`](p4, TRUE);
    check L64() else D10();
  D8():
    deopt 29 [r15];
  D10():
    deopt 37 [r18];
  L61():
    goto L6();
  L64():
    st prjs = r18;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L65() else L66();
  L7(r20):
    c5 = `as.logical`(r20);
    if c5 then L72() else L8();
  L65():
    x5 = ld x;
    check L67() else D11();
  L66():
    r19 = dyn base2(<lang `$`(x, call)>);
    goto L7(r19);
  D11():
    deopt 40 [x5];
  L8():
    goto L9();
  L9():
    model_frame = ldf `model.frame`;
    check L76() else D14();
  L67():
    x6 = force? x5;
    checkMissing(x6);
    c3 = `is.object`(x6);
    if c3 then L69() else L70(x6);
  L72():
    stop2 = ldf stop;
    check L73() else D12();
  D12():
    deopt 45 [];
  D14():
    deopt 51 [];
  L68(dx1):
    c4 = `==`(dx1, NULL);
    goto L7(c4);
  L69():
    dr = tryDispatchBuiltin.1("$", x6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L71() else L70(dr);
  L70(x8):
    r21 = `$`(x8, <sym call>);
    goto L68(r21);
  L73():
    r22 = dyn stop2("this fit does not inherit from \"lm\"");
    check L74() else D13();
  L76():
    p5 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r25 = dyn model_frame(p5);
    check L77() else D15();
  D13():
    deopt 47 [r22];
  D15():
    deopt 53 [r25];
  L71():
    dx = getTryDispatchBuiltinValue(dr);
    goto L68(dx);
  L74():
    goto L9();
  L77():
    st mf = r25;
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L78() else L79();
  L10(r27):
    st factors = r27;
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L82() else L83();
  L78():
    prjs = ld prjs;
    check L80() else D16();
  L79():
    r26 = dyn base3(<sym prjs>, "factors");
    goto L10(r26);
  D16():
    deopt 57 [prjs];
  L11(r30):
    st nf = r30;
    setNames = ldf setNames;
    check L86() else D20();
  L80():
    prjs1 = force? prjs;
    checkMissing(prjs1);
    attr = ldf attr in base;
    r28 = dyn attr(prjs1, "factors");
    check L81() else D17();
  L82():
    factors = ld factors;
    check L84() else D18();
  L83():
    r29 = dyn base4(<sym factors>);
    goto L11(r29);
  D17():
    deopt 61 [r28];
  D18():
    deopt 65 [factors];
  D20():
    deopt 71 [];
  L81():
    goto L10(r28);
  L84():
    factors1 = force? factors;
    checkMissing(factors1);
    names = ldf names in base;
    r31 = dyn names(factors1);
    check L85() else D19();
  L86():
    p7 = prom<V +>{
      as_list = ldf `as.list`;
      p6 = prom<V +>{
        nf = ld nf;
        nf1 = force? nf;
        checkMissing(nf1);
        return nf1;
      };
      r33 = dyn as_list(p6);
      return r33;
    };
    p8 = prom<V +>{
      nf2 = ld nf;
      nf3 = force? nf2;
      checkMissing(nf3);
      return nf3;
    };
    r36 = dyn setNames(p7, p8);
    check L87() else D21();
  D19():
    deopt 68 [r31];
  D21():
    deopt 74 [r36];
  L85():
    goto L11(r31);
  L87():
    st `dn.proj` = r36;
    factors2 = ld factors;
    check L88() else D22();
  D22():
    deopt 76 [factors2];
  L88():
    factors3 = force? factors2;
    checkMissing(factors3);
    st `m.factors` = factors3;
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L89() else L90();
  L12(r38):
    st `t.factor` = r38;
    colnames = ldf colnames;
    check L93() else D25();
  L89():
    prjs2 = ld prjs;
    check L91() else D23();
  L90():
    r37 = dyn base5(<sym prjs>, "t.factor");
    goto L12(r37);
  D23():
    deopt 81 [prjs2];
  D25():
    deopt 88 [];
  L91():
    prjs3 = force? prjs2;
    checkMissing(prjs3);
    attr1 = ldf attr in base;
    r39 = dyn attr1(prjs3, "t.factor");
    check L92() else D24();
  L93():
    p9 = prom<V +>{
      t_factor = ld `t.factor`;
      t_factor1 = force? t_factor;
      checkMissing(t_factor1);
      return t_factor1;
    };
    r41 = dyn colnames(p9);
    check L94() else D26();
  D24():
    deopt 85 [r39];
  D26():
    deopt 90 [r41];
  L92():
    goto L12(r39);
  L94():
    st vars = r41;
    sym6 = ldf match;
    base6 = ldf match in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L95() else L96();
  L13(r43):
    st which = r43;
    which = ld which;
    check L103() else D31();
  L95():
    vars = ld vars;
    check L97() else D27();
  L96():
    r42 = dyn base6(<sym vars>, <lang names(dn.proj)>);
    goto L13(r42);
  D27():
    deopt 94 [vars];
  D31():
    deopt 107 [which];
  L97():
    vars1 = force? vars;
    checkMissing(vars1);
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L98() else L99();
  L103():
    which1 = force? which;
    checkMissing(which1);
    c6 = `is.object`(which1);
    if c6 then L104() else L105(which1);
  L14(r45):
    match = ldf match in base;
    r47 = dyn match(vars1, r45, NA_INT, NULL);
    check L102() else D30();
  L15(dx3):
    st which = dx3;
    dn_proj2 = ld `dn.proj`;
    check L111() else D34();
  L98():
    dn_proj = ld `dn.proj`;
    check L100() else D28();
  L99():
    r44 = dyn base7(<sym dn.proj>);
    goto L14(r44);
  L104():
    dr2 = tryDispatchBuiltin.1("[", which1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L106() else L105(dr2);
  L105(which3):
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L107() else L108();
  D28():
    deopt 98 [dn_proj];
  D30():
    deopt 105 [r47];
  D34():
    deopt 118 [dn_proj2];
  L16(which6, r49):
    r51 = `!`(r49);
    __ = ldf `[` in base;
    r52 = dyn __(which6, r51);
    goto L15(r52);
  L100():
    dn_proj1 = force? dn_proj;
    checkMissing(dn_proj1);
    names1 = ldf names in base;
    r46 = dyn names1(dn_proj1);
    check L101() else D29();
  L102():
    goto L13(r47);
  L106():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx2);
  L107():
    which7 = ld which;
    check L109() else D32();
  L108():
    r48 = dyn base8(<sym which>);
    goto L16(which3, r48);
  L111():
    dn_proj3 = force? dn_proj2;
    checkMissing(dn_proj3);
    c7 = `is.object`(dn_proj3);
    if c7 then L112() else L113(dn_proj3);
  D29():
    deopt 101 [r46];
  D32():
    deopt 111 [which3, which7];
  L17(dx5):
    st `dn.proj` = dx5;
    m_factors = ld `m.factors`;
    check L116() else D36();
  L101():
    goto L14(r46);
  L109():
    which8 = force? which7;
    checkMissing(which8);
    is_na = ldf `is.na` in base;
    r50 = dyn is_na(which8);
    check L110() else D33();
  L112():
    dr4 = tryDispatchBuiltin.1("[", dn_proj3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L114() else L113(dr4);
  L113(dn_proj5):
    which9 = ld which;
    check L115() else D35();
  D33():
    deopt 114 [which3, r50];
  D35():
    deopt 120 [dn_proj5, which9];
  D36():
    deopt 124 [m_factors];
  L110():
    goto L16(which3, r50);
  L114():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L17(dx4);
  L115():
    which10 = force? which9;
    __1 = ldf `[` in base;
    r53 = dyn __1(dn_proj5, which10);
    goto L17(r53);
  L116():
    m_factors1 = force? m_factors;
    checkMissing(m_factors1);
    c8 = `is.object`(m_factors1);
    if c8 then L117() else L118(m_factors1);
  L18(dx7):
    st `m.factors` = dx7;
    sym9 = ldf missing;
    base9 = ldf missing in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L121() else L122();
  L117():
    dr6 = tryDispatchBuiltin.1("[", m_factors1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L119() else L118(dr6);
  L118(m_factors3):
    which11 = ld which;
    check L120() else D37();
  D37():
    deopt 126 [m_factors3, which11];
  L19(r56):
    r58 = `!`(r56);
    c9 = `as.logical`(r58);
    if c9 then L123() else L20();
  L119():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L18(dx6);
  L120():
    which12 = force? which11;
    __2 = ldf `[` in base;
    r54 = dyn __2(m_factors3, which12);
    goto L18(r54);
  L121():
    missing = ldf missing in base;
    r57 = dyn missing(<sym cterms>);
    goto L19(r57);
  L122():
    r55 = dyn base9(<sym cterms>);
    goto L19(r55);
  L20():
    goto L28();
  L28():
    type7 = ld type;
    check L150() else D49();
  L123():
    sym10 = ldf anyNA;
    base10 = ldf anyNA in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L124() else L125();
  D49():
    deopt 172 [type7];
  L21(r60):
    c10 = `as.logical`(r60);
    if c10 then L135() else L24();
  L124():
    sym11 = ldf match;
    base11 = ldf match in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L126() else L127();
  L125():
    r59 = dyn base10(<lang match(cterms, names(factors))>);
    goto L21(r59);
  L150():
    type8 = force? type7;
    checkMissing(type8);
    r72 = `==`(type8, "means");
    c13 = `as.logical`(r72);
    if c13 then L151() else L29();
  L22(r62):
    anyNA = ldf anyNA in base;
    r67 = dyn anyNA(r62);
    check L134() else D42();
  L24():
    goto L25();
  L25():
    dn_proj6 = ld `dn.proj`;
    check L139() else D45();
  L29():
    goto L30();
  L30():
    make_tables_aovproj = ldf `make.tables.aovproj`;
    check L155() else D52();
  L126():
    cterms1 = ld cterms;
    check L128() else D38();
  L127():
    r61 = dyn base11(<sym cterms>, <lang names(factors)>);
    goto L22(r61);
  L135():
    stop3 = ldf stop;
    check L136() else D43();
  L151():
    lapply = ldf lapply;
    check L152() else D50();
  D38():
    deopt 138 [cterms1];
  D42():
    deopt 151 [r67];
  D43():
    deopt 153 [];
  D45():
    deopt 158 [dn_proj6];
  D50():
    deopt 177 [];
  D52():
    deopt 187 [];
  L128():
    cterms2 = force? cterms1;
    checkMissing(cterms2);
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L129() else L130();
  L134():
    goto L21(r67);
  L136():
    r68 = dyn stop3("'cterms' argument must match terms in model object");
    check L137() else D44();
  L139():
    dn_proj7 = force? dn_proj6;
    checkMissing(dn_proj7);
    c11 = `is.object`(dn_proj7);
    if c11 then L140() else L141(dn_proj7);
  L152():
    p10 = prom<V +>{
      dn_proj10 = ld `dn.proj`;
      dn_proj11 = force? dn_proj10;
      checkMissing(dn_proj11);
      return dn_proj11;
    };
    p11 = prom<V +>{
      r74 = clos inner843450816;
      return r74;
    };
    p12 = prom<V +>{
      t_factor2 = ld `t.factor`;
      t_factor3 = force? t_factor2;
      checkMissing(t_factor3);
      return t_factor3;
    };
    p13 = prom<V +>{
      vars2 = ld vars;
      vars3 = force? vars2;
      checkMissing(vars3);
      return vars3;
    };
    r78 = dyn lapply(p10, p11, p12, p13);
    check L153() else D51();
  L155():
    p14 = prom<V +>{
      dn_proj12 = ld `dn.proj`;
      dn_proj13 = force? dn_proj12;
      checkMissing(dn_proj13);
      return dn_proj13;
    };
    p15 = prom<V +>{
      m_factors8 = ld `m.factors`;
      m_factors9 = force? m_factors8;
      checkMissing(m_factors9);
      return m_factors9;
    };
    p16 = prom<V +>{
      prjs4 = ld prjs;
      prjs5 = force? prjs4;
      checkMissing(prjs5);
      return prjs5;
    };
    p17 = prom<V +>{
      mf = ld mf;
      mf1 = force? mf;
      checkMissing(mf1);
      return mf1;
    };
    r84 = dyn make_tables_aovproj(p14, p15, p16, p17);
    check L156() else D53();
  D44():
    deopt 155 [r68];
  D51():
    deopt 182 [r78];
  D53():
    deopt 192 [r84];
  L23(r64):
    match1 = ldf match in base;
    r66 = dyn match1(cterms2, r64, NA_INT, NULL);
    check L133() else D41();
  L26(dx9):
    st `dn.proj` = dx9;
    m_factors4 = ld `m.factors`;
    check L144() else D47();
  L129():
    factors4 = ld factors;
    check L131() else D39();
  L130():
    r63 = dyn base12(<sym factors>);
    goto L23(r63);
  L137():
    goto L25();
  L140():
    dr8 = tryDispatchBuiltin.1("[", dn_proj7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L142() else L141(dr8);
  L141(dn_proj9):
    cterms3 = ld cterms;
    check L143() else D46();
  L153():
    st `dn.proj` = r78;
    goto L30();
  L156():
    st tables = r84;
    st n = NULL;
    sym13 = ldf names;
    base13 = ldf names in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L157() else L158();
  D39():
    deopt 142 [factors4];
  D41():
    deopt 149 [r66];
  D46():
    deopt 160 [dn_proj9, cterms3];
  D47():
    deopt 164 [m_factors4];
  L31(r86):
    s = toForSeq(r86);
    l = length(s);
    i = 0;
    goto L32(i);
  L131():
    factors5 = force? factors4;
    checkMissing(factors5);
    names2 = ldf names in base;
    r65 = dyn names2(factors5);
    check L132() else D40();
  L133():
    goto L22(r66);
  L142():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L26(dx8);
  L143():
    cterms4 = force? cterms3;
    __3 = ldf `[` in base;
    r70 = dyn __3(dn_proj9, cterms4);
    goto L26(r70);
  L144():
    m_factors5 = force? m_factors4;
    checkMissing(m_factors5);
    c12 = `is.object`(m_factors5);
    if c12 then L145() else L146(m_factors5);
  L157():
    tables = ld tables;
    check L159() else D54();
  L158():
    r85 = dyn base13(<sym tables>);
    goto L31(r85);
  D40():
    deopt 145 [r65];
  D54():
    deopt 199 [tables];
  L27(dx11):
    st `m.factors` = dx11;
    goto L28();
  L32(i1):
    i2 = `+`.1(i1, 1);
    c14 = `<`.1(l, i2);
    if c14 then L161() else L34();
  L132():
    goto L23(r65);
  L145():
    dr10 = tryDispatchBuiltin.1("[", m_factors5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L147() else L146(dr10);
  L146(m_factors7):
    cterms5 = ld cterms;
    check L148() else D48();
  L159():
    tables1 = force? tables;
    checkMissing(tables1);
    names3 = ldf names in base;
    r87 = dyn names3(tables1);
    check L160() else D55();
  D48():
    deopt 166 [m_factors7, cterms5];
  D55():
    deopt 202 [r87];
  L34():
    x11 = `[[`(s, i2, NULL, TRUE);
    st xx = x11;
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L162() else L163();
  L147():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L27(dx10);
  L148():
    cterms6 = force? cterms5;
    __4 = ldf `[` in base;
    r71 = dyn __4(m_factors7, cterms6);
    goto L27(r71);
  L160():
    goto L31(r87);
  L161():
    se1 = ld se;
    check L168() else D60();
  D60():
    deopt 219 [se1];
  L33(i7, r89):
    st n = r89;
    goto L32(i7);
  L162():
    n = ld n;
    check L164() else D56();
  L163():
    r88 = dyn base14(<sym n>, <lang replications(paste("~", xx), data=mf)>);
    goto L33(i2, r88);
  L168():
    se2 = force? se1;
    checkMissing(se2);
    c16 = `as.logical`(se2);
    if c16 then L169() else L35();
  D56():
    deopt 205 [i2, n];
  L35():
    goto L39();
  L39():
    type11 = ld type;
    check L181() else D67();
  L164():
    n1 = force? n;
    checkMissing(n1);
    replications = ldf replications;
    check L165() else D57();
  L169():
    sym15 = ldf `is.list`;
    base15 = ldf `is.list` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L170() else L171();
  D57():
    deopt 208 [i2];
  D67():
    deopt 244 [type11];
  L36(r97):
    c17 = `as.logical`(r97);
    if c17 then L174() else L37();
  L165():
    p19 = prom<V +>{
      paste = ldf paste;
      p18 = prom<V +>{
        xx = ld xx;
        xx1 = force? xx;
        checkMissing(xx1);
        return xx1;
      };
      r91 = dyn paste("~", p18);
      return r91;
    };
    p20 = prom<V +>{
      mf2 = ld mf;
      mf3 = force? mf2;
      checkMissing(mf3);
      return mf3;
    };
    r94 = dyn replications[, data](p19, p20);
    check L166() else D58();
  L170():
    n2 = ld n;
    check L172() else D61();
  L171():
    r96 = dyn base15(<sym n>);
    goto L36(r96);
  L181():
    type12 = force? type11;
    checkMissing(type12);
    r106 = `==`(type12, "means");
    c18 = `as.logical`(r106);
    if c18 then L182() else L40(c18);
  D58():
    deopt 212 [i2, r94];
  D61():
    deopt 223 [n2];
  L37():
    se_aov = ldf `se.aov`;
    check L178() else D65();
  L38(r100):
    goto L39();
  L40(c20):
    c24 = `as.logical`(c20);
    if c24 then L186() else L41();
  L166():
    c15 = ldf c in base;
    r95 = dyn c15(n1, r94);
    check L167() else D59();
  L172():
    n3 = force? n2;
    checkMissing(n3);
    is_list = ldf `is.list` in base;
    r98 = dyn is_list(n3);
    check L173() else D62();
  L174():
    message = ldf message;
    check L175() else D63();
  L182():
    _in_ = ldf `%in%`;
    check L183() else D68();
  D59():
    deopt 214 [i2, r95];
  D62():
    deopt 226 [r98];
  D63():
    deopt 228 [];
  D65():
    deopt 235 [];
  D68():
    deopt 249 [c18];
  L41():
    goto L43();
  L43():
    sym17 = ldf list;
    base17 = ldf list in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L197() else L198();
  L167():
    goto L33(i2, r95);
  L173():
    goto L36(r98);
  L175():
    r99 = dyn message("Design is unbalanced - use se.contrast() for se's");
    check L176() else D64();
  L178():
    p21 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    p22 = prom<V +>{
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      return n5;
    };
    p23 = prom<V +>{
      type9 = ld type;
      type10 = force? type9;
      checkMissing(type10);
      return type10;
    };
    r104 = dyn se_aov[, , type](p21, p22, p23);
    check L179() else D66();
  L183():
    p25 = prom<V +>{
      colnames1 = ldf colnames;
      p24 = prom<V +>{
        prjs6 = ld prjs;
        prjs7 = force? prjs6;
        checkMissing(prjs7);
        return prjs7;
      };
      r108 = dyn colnames1(p24);
      return r108;
    };
    r110 = dyn _in_("(Intercept)", p25);
    check L184() else D69();
  L186():
    mean = ldf mean;
    check L187() else D70();
  D64():
    deopt 230 [r99];
  D66():
    deopt 240 [r104];
  D69():
    deopt 252 [c18, r110];
  D70():
    deopt 255 [];
  L44(r120):
    st result = r120;
    se3 = ld se;
    check L202() else D80();
  L176():
    st se = FALSE;
    goto L38(FALSE);
  L179():
    st `se.tables` = r104;
    goto L38(r104);
  L184():
    c21 = `as.logical`(r110);
    c22 = `&&`(c18, c21);
    goto L40(c22);
  L187():
    p26 = prom<V +>{
      prjs8 = ld prjs;
      prjs9 = force? prjs8;
      checkMissing(prjs9);
      c25 = `is.object`(prjs9);
      if c25 then L1() else L2();
    L0(dx14):
      return dx14;
    L1():
      dr12 = tryDispatchBuiltin.1("[", prjs9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      __5 = ldf `[` in base;
      r111 = dyn __5(prjs9, <missing>, "(Intercept)");
      goto L0(r111);
    L3():
      dx13 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx13);
    };
    r113 = dyn mean(p26);
    check L188() else D71();
  L197():
    tables4 = ld tables;
    check L199() else D77();
  L198():
    r119 = dyn base17[tables, n](<sym tables>, <sym n>);
    goto L44(r119);
  D71():
    deopt 257 [r113];
  D77():
    deopt 280 [tables4];
  D80():
    deopt 289 [se3];
  L188():
    st gmtable = r113;
    l1 = ld gmtable;
    class__ = ldf `class<-`;
    check L189() else D72();
  L199():
    tables5 = force? tables4;
    checkMissing(tables5);
    n6 = ld n;
    check L200() else D78();
  L202():
    se4 = force? se3;
    checkMissing(se4);
    c27 = `as.logical`(se4);
    if c27 then L203() else L45();
  D72():
    deopt 262 ["mtable", l1, "mtable"];
  D78():
    deopt 283 [n6];
  L45():
    goto L46();
  L46():
    type13 = ld type;
    check L210() else D82();
  L189():
    r114 = dyn class__(l1, NULL, "mtable");
    check L190() else D73();
  L200():
    n7 = force? n6;
    checkMissing(n7);
    list = ldf list in base;
    r121 = dyn list(tables5, n7);
    check L201() else D79();
  L203():
    se_tables = ld `se.tables`;
    check L204() else D81();
  D73():
    deopt 264 ["mtable", r114];
  D79():
    deopt 287 [r121];
  D81():
    deopt 291 [se_tables];
  D82():
    deopt 298 [type13];
  L190():
    st gmtable = r114;
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L191() else L192();
  L201():
    goto L44(r121);
  L204():
    se_tables1 = force? se_tables;
    checkMissing(se_tables1);
    l2 = ld result;
    c28 = `is.object`(l2);
    if c28 then L206() else L207(se_tables1, l2);
  L210():
    type14 = force? type13;
    checkMissing(type14);
    l5 = ld result;
    attr__ = ldf `attr<-`;
    check L211() else D83();
  D83():
    deopt 301 [type14, l5, type14];
  L42(r116):
    st tables = r116;
    goto L43();
  L191():
    gmtable = ld gmtable;
    check L193() else D74();
  L192():
    r115 = dyn base16[`Grand mean`, ](<sym gmtable>, <sym tables>);
    goto L42(r115);
  L205(se_tables5, dx16):
    st result = dx16;
    goto L46();
  L206():
    dr14 = tryDispatchBuiltin.0("$<-", l2, se_tables1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L208() else L207(se_tables1, dr14);
  L207(se_tables3, l4):
    r122 = `$<-`(l4, <sym se>, se_tables1);
    goto L205(se_tables3, r122);
  L211():
    r123 = dyn attr__(l5, NULL, "type", type14);
    check L212() else D84();
  D74():
    deopt 268 [gmtable];
  D84():
    deopt 304 [type14, r123];
  L193():
    gmtable1 = force? gmtable;
    checkMissing(gmtable1);
    tables2 = ld tables;
    check L194() else D75();
  L208():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L205(se_tables1, dx15);
  L212():
    st result = r123;
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L213() else L214();
  D75():
    deopt 271 [tables2];
  L47(r125):
    l6 = ld result;
    class__1 = ldf `class<-`;
    check L216() else D86();
  L194():
    tables3 = force? tables2;
    checkMissing(tables3);
    c26 = ldf c in base;
    r117 = dyn c26(gmtable1, tables3);
    check L195() else D76();
  L213():
    c29 = ldf c in base;
    r126 = dyn c29("tables_aov", "list.of");
    check L215() else D85();
  L214():
    r124 = dyn base18("tables_aov", "list.of");
    goto L47(r124);
  D76():
    deopt 274 [r117];
  D85():
    deopt 311 [r126];
  D86():
    deopt 313 [r125, l6, r125];
  L195():
    goto L42(r117);
  L215():
    goto L47(r126);
  L216():
    r127 = dyn class__1(l6, NULL, r125);
    check L217() else D87();
  D87():
    deopt 315 [r125, r127];
  L217():
    st result = r127;
    result = ld result;
    check L218() else D88();
  D88():
    deopt 317 [result];
  L218():
    result1 = force? result;
    checkMissing(result1);
    popenv;
    return result1;
  }
}
fun inner843450816(x, mat, vn) {
  (reg x:*, reg mat:*, reg vn:*) -+> V { var x:*, var mat:*, var vn:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg vn1:*, reg vn2:V, reg c:L, reg vn4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg t:cls, reg mat1:*, reg mat2:V, reg p:p(V +), reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg vn7:V, reg r5:V, reg mat3:*, reg mat4:V, reg c1:L, reg vn9:V, reg mat6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg vn11:V, reg dx3:V, reg x1:*, reg x2:V, reg __:cls, reg r6:V, reg as_logical:cls, reg r7:V, reg r8:V, reg ___:cls, reg r9:V, reg r10:V, reg __1:cls, reg r11:V, reg c2:cls, reg r12:V |
    mkenv;
    st x = x;
    st mat = mat;
    st vn = vn;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    popenv;
    return r1;
  L4():
    vn1 = ld vn;
    check L6() else D0();
  L5():
    r = dyn base("(Intercept)", <lang `[`(vn, `==`(`(`(`%*%`(t(mat), `(`(`-`(as.logical(`[`(mat, , x)), 1.0)))), 0.0))>);
    goto L0(r);
  D0():
    deopt 3 [vn1];
  L6():
    vn2 = force? vn1;
    checkMissing(vn2);
    c = `is.object`(vn2);
    if c then L7() else L8(vn2);
  L1(dx1):
    c2 = ldf c in base;
    r12 = dyn c2("(Intercept)", dx1);
    check L21() else D7();
  L7():
    dr = tryDispatchBuiltin.1("[", vn2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(vn4):
    t = ldf t;
    check L10() else D1();
  D1():
    deopt 7 [vn4];
  D7():
    deopt 29 [r12];
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L10():
    p = prom<V +>{
      mat1 = ld mat;
      mat2 = force? mat1;
      checkMissing(mat2);
      return mat2;
    };
    r3 = dyn t(p);
    check L11() else D2();
  L21():
    goto L0(r12);
  D2():
    deopt 9 [vn4, r3];
  L11():
    sym1 = ldf `as.logical`;
    base1 = ldf `as.logical` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L2(vn7, r5):
    r8 = `-`(r5, 1.0);
    ___ = ldf `%*%` in base;
    r9 = dyn ___(r3, r8);
    check L20() else D6();
  L12():
    mat3 = ld mat;
    check L14() else D3();
  L13():
    r4 = dyn base1(<lang `[`(mat, , x)>);
    goto L2(vn4, r4);
  D3():
    deopt 12 [vn4, mat3];
  D6():
    deopt 24 [vn7, r9];
  L14():
    mat4 = force? mat3;
    checkMissing(mat4);
    c1 = `is.object`(mat4);
    if c1 then L15() else L16(vn4, mat4);
  L20():
    r10 = `==`(r9, 0.0);
    __1 = ldf `[` in base;
    r11 = dyn __1(vn7, r10);
    goto L1(r11);
  L3(vn11, dx3):
    as_logical = ldf `as.logical` in base;
    r7 = dyn as_logical(dx3);
    check L19() else D5();
  L15():
    dr2 = tryDispatchBuiltin.1("[", mat4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L17() else L16(vn4, dr2);
  L16(vn9, mat6):
    x1 = ld x;
    check L18() else D4();
  D4():
    deopt 15 [vn9, mat6, x1];
  D5():
    deopt 20 [vn11, r7];
  L17():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(vn4, dx2);
  L18():
    x2 = force? x1;
    __ = ldf `[` in base;
    r6 = dyn __(mat4, <missing>, x2);
    goto L3(vn9, r6);
  L19():
    goto L2(vn11, r7);
  }
}