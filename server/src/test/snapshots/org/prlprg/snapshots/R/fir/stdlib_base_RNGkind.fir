fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1790894954;
    st RNGkind = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1790894954(kind, `normal.kind`, `sample.kind`) {
  (reg kind:*, reg normal_kind:*, reg sample_kind:*) -+> V { var kind:*, reg kind_isMissing:L, reg kind_orDefault:*, var `normal.kind`:*, reg normal_kind_isMissing:L, reg normal_kind_orDefault:*, var `sample.kind`:*, reg sample_kind_isMissing:L, reg sample_kind_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c1:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg c2:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg kind1:*, reg kind2:V, reg length:cls, reg r11:V, reg r12:V, reg do_set:*, reg do_set1:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg kind3:*, reg kind4:V, reg c4:L, reg r15:V, reg c5:L, reg c6:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r16:V, reg c10:L, reg r17:V, reg kind5:*, reg kind6:V, reg length1:cls, reg r18:V, reg r19:V, reg c11:L, reg c12:V, reg c14:L, reg stop:cls, reg r20:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg pmatch:cls, reg kind7:*, reg kind8:V, reg p:p(V +), reg kinds:*, reg kinds1:V, reg p1:p(V +), reg r26:V, reg r27:V, reg is_na:cls, reg r28:V, reg c15:L, reg stop1:cls, reg gettextf:cls, reg kind9:*, reg kind10:V, reg p2:p(V +), reg r30:V, reg p3:p(V +), reg r32:V, reg i_knd:*, reg i_knd1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg i_knd4:V, reg r35:V, reg kinds2:*, reg kinds3:V, reg length2:cls, reg r36:V, reg r37:V, reg r38:V, reg c16:L, reg r39:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg r42:V, reg normal_kind1:*, reg normal_kind2:V, reg c17:V, reg r43:V, reg c18:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r44:V, reg r45:V, reg normal_kind3:*, reg normal_kind4:V, reg c19:L, reg r46:V, reg c20:L, reg c21:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r47:V, reg c25:L, reg r48:V, reg normal_kind5:*, reg normal_kind6:V, reg length3:cls, reg r49:V, reg r50:V, reg c26:L, reg c27:V, reg c29:L, reg stop2:cls, reg r51:V, reg pmatch1:cls, reg normal_kind7:*, reg normal_kind8:V, reg p4:p(V +), reg n_kinds:*, reg n_kinds1:V, reg p5:p(V +), reg r55:V, reg r56:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r57:V, reg r58:V, reg normal_kind9:*, reg normal_kind10:V, reg is_na1:cls, reg r59:V, reg c30:L, reg stop3:cls, reg gettextf1:cls, reg normal_kind11:*, reg normal_kind12:V, reg p6:p(V +), reg r61:V, reg p7:p(V +), reg r63:V, reg normal_kind13:*, reg normal_kind14:V, reg r65:V, reg c31:L, reg warning:cls, reg r66:V, reg normal_kind15:*, reg normal_kind16:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r68:V, reg normal_kind19:V, reg r69:V, reg n_kinds2:*, reg n_kinds3:V, reg length4:cls, reg r70:V, reg r71:V, reg r72:V, reg c32:L, reg r73:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r75:V, reg r76:V, reg sample_kind1:*, reg sample_kind2:V, reg c33:V, reg r77:V, reg c34:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r78:V, reg r79:V, reg sample_kind3:*, reg sample_kind4:V, reg c35:L, reg r80:V, reg c36:L, reg c37:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r81:V, reg c41:L, reg r82:V, reg sample_kind5:*, reg sample_kind6:V, reg length5:cls, reg r83:V, reg r84:V, reg c42:L, reg c43:V, reg c45:L, reg stop4:cls, reg r85:V, reg pmatch2:cls, reg sample_kind7:*, reg sample_kind8:V, reg p8:p(V +), reg s_kinds:*, reg s_kinds1:V, reg p9:p(V +), reg r89:V, reg r90:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r91:V, reg r92:V, reg sample_kind9:*, reg sample_kind10:V, reg is_na2:cls, reg r93:V, reg c46:L, reg stop5:cls, reg gettextf2:cls, reg sample_kind11:*, reg sample_kind12:V, reg p10:p(V +), reg r95:V, reg p11:p(V +), reg r97:V, reg sample_kind13:*, reg sample_kind14:V, reg r99:V, reg c47:L, reg warning1:cls, reg r100:V, reg sample_kind15:*, reg sample_kind16:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r102:V, reg sample_kind19:V, reg r103:V, reg s_kinds2:*, reg s_kinds3:V, reg length6:cls, reg r104:V, reg r105:V, reg r106:V, reg c48:L, reg r107:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r111:V, reg r112:I, reg r113:V, reg i_knd5:*, reg i_knd6:V, reg normal_kind20:*, reg normal_kind21:V, reg sample_kind20:*, reg sample_kind21:V, reg RNGkind:cls, reg r114:V, reg r115:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r116:V, reg r117:V, reg kinds4:*, reg kinds5:V, reg c49:L, reg kinds7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r118:*, reg r119:V, reg c50:L, reg kinds9:V, reg r121:V, reg dr2:V, reg dc1:L, reg dx2:V, reg kinds11:V, reg dx3:V, reg __:cls, reg r122:V, reg __1:cls, reg r123:V, reg n_kinds4:*, reg n_kinds5:V, reg c51:L, reg n_kinds7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r124:*, reg r125:V, reg c52:L, reg n_kinds9:V, reg r127:V, reg dr6:V, reg dc3:L, reg dx6:V, reg n_kinds11:V, reg dx7:V, reg __2:cls, reg r128:V, reg __3:cls, reg r129:V, reg s_kinds4:*, reg s_kinds5:V, reg c53:L, reg s_kinds7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r130:*, reg r131:V, reg c54:L, reg s_kinds9:V, reg r133:V, reg dr10:V, reg dc5:L, reg dx10:V, reg s_kinds11:V, reg dx11:V, reg __4:cls, reg r134:V, reg __5:cls, reg r135:V, reg c55:cls, reg r136:V, reg do_set2:*, reg do_set3:V, reg c56:L, reg c57:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r137:V, reg c61:L, reg r138:V, reg normal_kind22:*, reg normal_kind23:V, reg c62:V, reg r139:V, reg c63:L, reg c64:V, reg c66:L, reg c67:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r140:V, reg c71:L, reg r141:V, reg sample_kind22:*, reg sample_kind23:V, reg c72:V, reg r142:V, reg c73:L, reg c74:V, reg c76:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r143:V, reg r144:V, reg r145:*, reg r146:V, reg invisible:cls, reg r147:V, reg r148:*, reg r149:V |
    mkenv;
    kind_isMissing = missing.0(kind);
    if kind_isMissing then L0(NULL) else L0(kind);
  L0(kind_orDefault):
    st kind = kind_orDefault;
    normal_kind_isMissing = missing.0(normal_kind);
    if normal_kind_isMissing then L1(NULL) else L1(normal_kind);
  L1(normal_kind_orDefault):
    st `normal.kind` = normal_kind_orDefault;
    sample_kind_isMissing = missing.0(sample_kind);
    if sample_kind_isMissing then L2(NULL) else L2(sample_kind);
  L2(sample_kind_orDefault):
    st `sample.kind` = sample_kind_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L66() else L67();
  L3(r1):
    st kinds = r1;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L69() else L70();
  L66():
    c = ldf c in base;
    r2 = dyn c("Wichmann-Hill", "Marsaglia-Multicarry", "Super-Duper", "Mersenne-Twister", "Knuth-TAOCP", "user-supplied", "Knuth-TAOCP-2002", "L'Ecuyer-CMRG", "default");
    check L68() else D0();
  L67():
    r = dyn base("Wichmann-Hill", "Marsaglia-Multicarry", "Super-Duper", "Mersenne-Twister", "Knuth-TAOCP", "user-supplied", "Knuth-TAOCP-2002", "L'Ecuyer-CMRG", "default");
    goto L3(r);
  D0():
    deopt 12 [r2];
  L4(r4):
    st `n.kinds` = r4;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L72() else L73();
  L68():
    goto L3(r2);
  L69():
    c1 = ldf c in base;
    r5 = dyn c1("Buggy Kinderman-Ramage", "Ahrens-Dieter", "Box-Muller", "user-supplied", "Inversion", "Kinderman-Ramage", "default");
    check L71() else D1();
  L70():
    r3 = dyn base1("Buggy Kinderman-Ramage", "Ahrens-Dieter", "Box-Muller", "user-supplied", "Inversion", "Kinderman-Ramage", "default");
    goto L4(r3);
  D1():
    deopt 24 [r5];
  L5(r7):
    st `s.kinds` = r7;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L75() else L76();
  L71():
    goto L4(r5);
  L72():
    c2 = ldf c in base;
    r8 = dyn c2("Rounding", "Rejection", "default");
    check L74() else D2();
  L73():
    r6 = dyn base2("Rounding", "Rejection", "default");
    goto L5(r6);
  D2():
    deopt 32 [r8];
  L6(r10):
    r12 = `>`(r10, 0);
    st `do.set` = r12;
    do_set = ld `do.set`;
    check L79() else D5();
  L74():
    goto L5(r8);
  L75():
    kind1 = ld kind;
    check L77() else D3();
  L76():
    r9 = dyn base3(<sym kind>);
    goto L6(r9);
  D3():
    deopt 36 [kind1];
  D5():
    deopt 43 [do_set];
  L77():
    kind2 = force? kind1;
    checkMissing(kind2);
    length = ldf length in base;
    r11 = dyn length(kind2);
    check L78() else D4();
  L79():
    do_set1 = force? do_set;
    checkMissing(do_set1);
    c3 = `as.logical`(do_set1);
    if c3 then L80() else L7();
  D4():
    deopt 39 [r11];
  L7():
    st `i.knd` = NULL;
    goto L19();
  L19():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L111() else L112();
  L78():
    goto L6(r11);
  L80():
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L81() else L82();
  L8(r14):
    r15 = `!`(r14);
    c5 = `as.logical`(r15);
    if c5 then L9(c5) else L84();
  L20(r42):
    r43 = `!`(r42);
    c18 = `as.logical`(r43);
    if c18 then L114() else L21();
  L81():
    kind3 = ld kind;
    check L83() else D6();
  L82():
    r13 = dyn base4(<sym kind>);
    goto L8(r13);
  L111():
    normal_kind1 = ld `normal.kind`;
    check L113() else D19();
  L112():
    r41 = dyn base8(<sym normal.kind>);
    goto L20(r41);
  D6():
    deopt 46 [kind3];
  D19():
    deopt 104 [normal_kind1];
  L9(c6):
    c14 = `as.logical`(c6);
    if c14 then L90() else L11();
  L21():
    goto L35();
  L35():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L151() else L152();
  L83():
    kind4 = force? kind3;
    checkMissing(kind4);
    c4 = `is.character`(kind4);
    goto L8(c4);
  L84():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L85() else L86();
  L113():
    normal_kind2 = force? normal_kind1;
    checkMissing(normal_kind2);
    c17 = `==`(normal_kind2, NULL);
    goto L20(c17);
  L114():
    sym9 = ldf `is.character`;
    base9 = ldf `is.character` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L115() else L116();
  L10(c10, r17):
    r19 = `>`(r17, 1);
    c11 = `as.logical`(r19);
    c12 = `||`(c10, c11);
    goto L9(c12);
  L11():
    goto L12();
  L12():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L94() else L95();
  L22(r45):
    r46 = `!`(r45);
    c20 = `as.logical`(r46);
    if c20 then L23(c20) else L118();
  L36(r76):
    r77 = `!`(r76);
    c34 = `as.logical`(r77);
    if c34 then L154() else L37();
  L85():
    kind5 = ld kind;
    check L87() else D7();
  L86():
    r16 = dyn base5(<sym kind>);
    goto L10(c5, r16);
  L90():
    stop = ldf stop;
    check L91() else D9();
  L115():
    normal_kind3 = ld `normal.kind`;
    check L117() else D20();
  L116():
    r44 = dyn base9(<sym normal.kind>);
    goto L22(r44);
  L151():
    sample_kind1 = ld `sample.kind`;
    check L153() else D37();
  L152():
    r75 = dyn base13(<sym sample.kind>);
    goto L36(r75);
  D7():
    deopt 52 [c5, kind5];
  D9():
    deopt 60 [];
  D20():
    deopt 109 [normal_kind3];
  D37():
    deopt 180 [sample_kind1];
  L13(r23):
    c15 = `as.logical`(r23);
    if c15 then L99() else L14();
  L23(c21):
    c29 = `as.logical`(c21);
    if c29 then L124() else L25();
  L37():
    goto L51();
  L51():
    sym18 = ldf `.Internal`;
    base18 = ldf `.Internal` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L191() else L192();
  L87():
    kind6 = force? kind5;
    checkMissing(kind6);
    length1 = ldf length in base;
    r18 = dyn length1(kind6);
    check L88() else D8();
  L91():
    r20 = dyn stop("'kind' must be a character string of length 1 (RNG to be used).");
    check L92() else D10();
  L94():
    pmatch = ldf pmatch;
    check L96() else D11();
  L95():
    r22 = dyn base6(<lang `<-`(i.knd, `-`(pmatch(kind, kinds), 1))>);
    goto L13(r22);
  L117():
    normal_kind4 = force? normal_kind3;
    checkMissing(normal_kind4);
    c19 = `is.character`(normal_kind4);
    goto L22(c19);
  L118():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L119() else L120();
  L153():
    sample_kind2 = force? sample_kind1;
    checkMissing(sample_kind2);
    c33 = `==`(sample_kind2, NULL);
    goto L36(c33);
  L154():
    sym14 = ldf `is.character`;
    base14 = ldf `is.character` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L155() else L156();
  D8():
    deopt 55 [c5, r18];
  D10():
    deopt 62 [r20];
  D11():
    deopt 68 [];
  L14():
    goto L15();
  L15():
    i_knd = ld `i.knd`;
    check L103() else D16();
  L24(c25, r48):
    r50 = `!=`(r48, 1);
    c26 = `as.logical`(r50);
    c27 = `||`(c25, c26);
    goto L23(c27);
  L25():
    goto L26();
  L26():
    pmatch1 = ldf pmatch;
    check L128() else D25();
  L38(r79):
    r80 = `!`(r79);
    c36 = `as.logical`(r80);
    if c36 then L39(c36) else L158();
  L52(r112, r113):
    r115 = `+`(r112, r113);
    st r = r115;
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L197() else L198();
  L88():
    goto L10(c5, r18);
  L92():
    goto L12();
  L96():
    p = prom<V +>{
      kind7 = ld kind;
      kind8 = force? kind7;
      checkMissing(kind8);
      return kind8;
    };
    p1 = prom<V +>{
      kinds = ld kinds;
      kinds1 = force? kinds;
      checkMissing(kinds1);
      return kinds1;
    };
    r26 = dyn pmatch(p, p1);
    check L97() else D12();
  L99():
    stop1 = ldf stop;
    check L100() else D14();
  L119():
    normal_kind5 = ld `normal.kind`;
    check L121() else D21();
  L120():
    r47 = dyn base10(<sym normal.kind>);
    goto L24(c20, r47);
  L124():
    stop2 = ldf stop;
    check L125() else D23();
  L155():
    sample_kind3 = ld `sample.kind`;
    check L157() else D38();
  L156():
    r78 = dyn base14(<sym sample.kind>);
    goto L38(r78);
  L191():
    i_knd5 = ld `i.knd`;
    check L193() else D55();
  L192():
    r111 = dyn base18(<lang RNGkind(i.knd, normal.kind, sample.kind)>);
    goto L52(1, r111);
  D12():
    deopt 71 [r26];
  D14():
    deopt 78 [];
  D16():
    deopt 85 [i_knd];
  D21():
    deopt 115 [c20, normal_kind5];
  D23():
    deopt 123 [];
  D25():
    deopt 129 [];
  D38():
    deopt 185 [sample_kind3];
  D55():
    deopt 258 [1, i_knd5];
  L39(c37):
    c45 = `as.logical`(c37);
    if c45 then L164() else L41();
  L53(r117):
    st r = r117;
    do_set2 = ld `do.set`;
    check L224() else D66();
  L97():
    r27 = `-`(r26, 1);
    st `i.knd` = r27;
    is_na = ldf `is.na` in base;
    r28 = dyn is_na(r27);
    check L98() else D13();
  L100():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        kind9 = ld kind;
        kind10 = force? kind9;
        checkMissing(kind10);
        return kind10;
      };
      r30 = dyn gettextf("'%s' is not a valid abbreviation of an RNG", p2);
      return r30;
    };
    r32 = dyn stop1[, domain](p3, NA_LGL);
    check L101() else D15();
  L103():
    i_knd1 = force? i_knd;
    checkMissing(i_knd1);
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L104() else L105();
  L121():
    normal_kind6 = force? normal_kind5;
    checkMissing(normal_kind6);
    length3 = ldf length in base;
    r49 = dyn length3(normal_kind6);
    check L122() else D22();
  L125():
    r51 = dyn stop2("'normal.kind' must be a character string of length 1");
    check L126() else D24();
  L128():
    p4 = prom<V +>{
      normal_kind7 = ld `normal.kind`;
      normal_kind8 = force? normal_kind7;
      checkMissing(normal_kind8);
      return normal_kind8;
    };
    p5 = prom<V +>{
      n_kinds = ld `n.kinds`;
      n_kinds1 = force? n_kinds;
      checkMissing(n_kinds1);
      return n_kinds1;
    };
    r55 = dyn pmatch1(p4, p5);
    check L129() else D26();
  L157():
    sample_kind4 = force? sample_kind3;
    checkMissing(sample_kind4);
    c35 = `is.character`(sample_kind4);
    goto L38(c35);
  L158():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L159() else L160();
  L193():
    i_knd6 = force? i_knd5;
    checkMissing(i_knd6);
    normal_kind20 = ld `normal.kind`;
    check L194() else D56();
  L197():
    kinds4 = ld kinds;
    check L199() else D59();
  L198():
    r116 = dyn base19(<lang `[`(kinds, `[`(r, 1))>, <lang `[`(n.kinds, `[`(r, 2))>, <lang `[`(s.kinds, `[`(r, 3))>);
    goto L53(r116);
  D13():
    deopt 76 [r28];
  D15():
    deopt 82 [r32];
  D22():
    deopt 118 [c20, r49];
  D24():
    deopt 125 [r51];
  D26():
    deopt 132 [r55];
  D56():
    deopt 260 [1, normal_kind20];
  D59():
    deopt 270 [kinds4];
  D66():
    deopt 297 [do_set2];
  L16(i_knd4, r35):
    r37 = `-`(r35, 1);
    r38 = `==`(i_knd4, r37);
    c16 = `as.logical`(r38);
    if c16 then L108() else L17();
  L40(c41, r82):
    r84 = `!=`(r82, 1);
    c42 = `as.logical`(r84);
    c43 = `||`(c41, c42);
    goto L39(c43);
  L41():
    goto L42();
  L42():
    pmatch2 = ldf pmatch;
    check L168() else D43();
  L98():
    goto L13(r28);
  L101():
    goto L15();
  L104():
    kinds2 = ld kinds;
    check L106() else D17();
  L105():
    r34 = dyn base7(<sym kinds>);
    goto L16(i_knd1, r34);
  L122():
    goto L24(c20, r49);
  L126():
    goto L26();
  L129():
    r56 = `-`(r55, 1);
    st `normal.kind` = r56;
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L130() else L131();
  L159():
    sample_kind5 = ld `sample.kind`;
    check L161() else D39();
  L160():
    r81 = dyn base15(<sym sample.kind>);
    goto L40(c36, r81);
  L164():
    stop4 = ldf stop;
    check L165() else D41();
  L194():
    normal_kind21 = force? normal_kind20;
    checkMissing(normal_kind21);
    sample_kind20 = ld `sample.kind`;
    check L195() else D57();
  L199():
    kinds5 = force? kinds4;
    checkMissing(kinds5);
    c49 = `is.object`(kinds5);
    if c49 then L200() else L201(kinds5);
  L224():
    do_set3 = force? do_set2;
    checkMissing(do_set3);
    c56 = `as.logical`(do_set3);
    if c56 then L60(c56) else L225();
  D17():
    deopt 88 [i_knd1, kinds2];
  D39():
    deopt 191 [c36, sample_kind5];
  D41():
    deopt 199 [];
  D43():
    deopt 205 [];
  D57():
    deopt 262 [1, sample_kind20];
  L17():
    goto L18(NULL);
  L18(r39):
    goto L19();
  L27(r58):
    c30 = `as.logical`(r58);
    if c30 then L134() else L28();
  L54(dx1):
    n_kinds4 = ld `n.kinds`;
    check L207() else D61();
  L60(c57):
    c66 = `as.logical`(c57);
    if c66 then L62(c66) else L230();
  L106():
    kinds3 = force? kinds2;
    checkMissing(kinds3);
    length2 = ldf length in base;
    r36 = dyn length2(kinds3);
    check L107() else D18();
  L108():
    st `i.knd` = -1;
    goto L18(-1);
  L130():
    normal_kind9 = ld `normal.kind`;
    check L132() else D27();
  L131():
    r57 = dyn base11(<sym normal.kind>);
    goto L27(r57);
  L161():
    sample_kind6 = force? sample_kind5;
    checkMissing(sample_kind6);
    length5 = ldf length in base;
    r83 = dyn length5(sample_kind6);
    check L162() else D40();
  L165():
    r85 = dyn stop4("'sample.kind' must be a character string of length 1");
    check L166() else D42();
  L168():
    p8 = prom<V +>{
      sample_kind7 = ld `sample.kind`;
      sample_kind8 = force? sample_kind7;
      checkMissing(sample_kind8);
      return sample_kind8;
    };
    p9 = prom<V +>{
      s_kinds = ld `s.kinds`;
      s_kinds1 = force? s_kinds;
      checkMissing(s_kinds1);
      return s_kinds1;
    };
    r89 = dyn pmatch2(p8, p9);
    check L169() else D44();
  L195():
    sample_kind21 = force? sample_kind20;
    checkMissing(sample_kind21);
    RNGkind = ldf RNGkind in base;
    r114 = dyn RNGkind(i_knd6, normal_kind21, sample_kind21);
    check L196() else D58();
  L200():
    dr = tryDispatchBuiltin.1("[", kinds5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L202() else L201(dr);
  L201(kinds7):
    r118 = ld r;
    check L203() else D60();
  L225():
    sym20 = ldf `is.null`;
    base20 = ldf `is.null` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L226() else L227();
  D18():
    deopt 91 [i_knd1, r36];
  D27():
    deopt 138 [normal_kind9];
  D40():
    deopt 194 [c36, r83];
  D42():
    deopt 201 [r85];
  D44():
    deopt 208 [r89];
  D58():
    deopt 265 [1, r114];
  D60():
    deopt 272 [kinds7, r118];
  D61():
    deopt 278 [n_kinds4];
  L28():
    goto L29();
  L29():
    normal_kind13 = ld `normal.kind`;
    check L138() else D31();
  L61(c61, r138):
    r139 = `!`(r138);
    c63 = `as.logical`(r139);
    c64 = `||`(c61, c63);
    goto L60(c64);
  L62(c67):
    c76 = `as.logical`(c67);
    if c76 then L235() else L64();
  L107():
    goto L16(i_knd1, r36);
  L132():
    normal_kind10 = force? normal_kind9;
    checkMissing(normal_kind10);
    is_na1 = ldf `is.na` in base;
    r59 = dyn is_na1(normal_kind10);
    check L133() else D28();
  L134():
    stop3 = ldf stop;
    check L135() else D29();
  L162():
    goto L40(c36, r83);
  L166():
    goto L42();
  L169():
    r90 = `-`(r89, 1);
    st `sample.kind` = r90;
    sym16 = ldf `is.na`;
    base16 = ldf `is.na` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L170() else L171();
  L196():
    goto L52(1, r114);
  L202():
    dx = getTryDispatchBuiltinValue(dr);
    goto L54(dx);
  L203():
    r119 = force? r118;
    checkMissing(r119);
    c50 = `is.object`(r119);
    if c50 then L204() else L205(kinds7, r119);
  L207():
    n_kinds5 = force? n_kinds4;
    checkMissing(n_kinds5);
    c51 = `is.object`(n_kinds5);
    if c51 then L208() else L209(n_kinds5);
  L226():
    normal_kind22 = ld `normal.kind`;
    check L228() else D67();
  L227():
    r137 = dyn base20(<sym normal.kind>);
    goto L61(c56, r137);
  L230():
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L231() else L232();
  D28():
    deopt 141 [r59];
  D29():
    deopt 143 [];
  D31():
    deopt 150 [normal_kind13];
  D67():
    deopt 300 [c56, normal_kind22];
  L43(r92):
    c46 = `as.logical`(r92);
    if c46 then L174() else L44();
  L55(kinds11, dx3):
    __1 = ldf `[` in base;
    r123 = dyn __1(kinds11, dx3);
    goto L54(r123);
  L56(dx5):
    s_kinds4 = ld `s.kinds`;
    check L215() else D63();
  L63(c71, r141):
    r142 = `!`(r141);
    c73 = `as.logical`(r142);
    c74 = `||`(c71, c73);
    goto L62(c74);
  L64():
    r148 = ld r;
    check L241() else D71();
  L133():
    goto L27(r59);
  L135():
    p7 = prom<V +>{
      gettextf1 = ldf gettextf;
      p6 = prom<V +>{
        normal_kind11 = ld `normal.kind`;
        normal_kind12 = force? normal_kind11;
        checkMissing(normal_kind12);
        return normal_kind12;
      };
      r61 = dyn gettextf1("'%s' is not a valid choice", p6);
      return r61;
    };
    r63 = dyn stop3[, domain](p7, NA_LGL);
    check L136() else D30();
  L138():
    normal_kind14 = force? normal_kind13;
    checkMissing(normal_kind14);
    r65 = `==`(normal_kind14, 0);
    c31 = `as.logical`(r65);
    if c31 then L139() else L30();
  L170():
    sample_kind9 = ld `sample.kind`;
    check L172() else D45();
  L171():
    r91 = dyn base16(<sym sample.kind>);
    goto L43(r91);
  L204():
    dr2 = tryDispatchBuiltin.1("[", r119);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L206() else L205(kinds7, dr2);
  L205(kinds9, r121):
    __ = ldf `[` in base;
    r122 = dyn __(r121, 1);
    goto L55(kinds9, r122);
  L208():
    dr4 = tryDispatchBuiltin.1("[", n_kinds5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L210() else L209(dr4);
  L209(n_kinds7):
    r124 = ld r;
    check L211() else D62();
  L228():
    normal_kind23 = force? normal_kind22;
    checkMissing(normal_kind23);
    c62 = `==`(normal_kind23, NULL);
    goto L61(c56, c62);
  L231():
    sample_kind22 = ld `sample.kind`;
    check L233() else D68();
  L232():
    r140 = dyn base21(<sym sample.kind>);
    goto L63(c66, r140);
  L235():
    sym22 = ldf invisible;
    base22 = ldf invisible in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L236() else L237();
  D30():
    deopt 147 [r63];
  D45():
    deopt 214 [sample_kind9];
  D62():
    deopt 280 [n_kinds7, r124];
  D63():
    deopt 286 [s_kinds4];
  D68():
    deopt 306 [c66, sample_kind22];
  D71():
    deopt 317 [r148];
  L30():
    goto L31();
  L31():
    normal_kind15 = ld `normal.kind`;
    check L143() else D34();
  L44():
    goto L45();
  L45():
    sample_kind13 = ld `sample.kind`;
    check L178() else D49();
  L65(r144):
    popenv;
    return r144;
  L136():
    goto L29();
  L139():
    warning = ldf warning;
    check L140() else D32();
  L172():
    sample_kind10 = force? sample_kind9;
    checkMissing(sample_kind10);
    is_na2 = ldf `is.na` in base;
    r93 = dyn is_na2(sample_kind10);
    check L173() else D46();
  L174():
    stop5 = ldf stop;
    check L175() else D47();
  L206():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L55(kinds7, dx2);
  L210():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L56(dx4);
  L211():
    r125 = force? r124;
    checkMissing(r125);
    c52 = `is.object`(r125);
    if c52 then L212() else L213(n_kinds7, r125);
  L215():
    s_kinds5 = force? s_kinds4;
    checkMissing(s_kinds5);
    c53 = `is.object`(s_kinds5);
    if c53 then L216() else L217(s_kinds5);
  L233():
    sample_kind23 = force? sample_kind22;
    checkMissing(sample_kind23);
    c72 = `==`(sample_kind23, NULL);
    goto L63(c66, c72);
  L236():
    r145 = ld r;
    check L238() else D69();
  L237():
    r143 = dyn base22(<sym r>);
    goto L65(r143);
  L241():
    r149 = force? r148;
    checkMissing(r149);
    popenv;
    return r149;
  D32():
    deopt 155 [];
  D34():
    deopt 162 [normal_kind15];
  D46():
    deopt 217 [r93];
  D47():
    deopt 219 [];
  D49():
    deopt 226 [sample_kind13];
  D69():
    deopt 313 [r145];
  L57(n_kinds11, dx7):
    __3 = ldf `[` in base;
    r129 = dyn __3(n_kinds11, dx7);
    goto L56(r129);
  L58(dx9):
    c55 = ldf c in base;
    r136 = dyn c55(dx1, dx5, dx9);
    check L223() else D65();
  L140():
    r66 = dyn warning[, domain]("buggy version of Kinderman-Ramage generator used", NA_LGL);
    check L141() else D33();
  L143():
    normal_kind16 = force? normal_kind15;
    checkMissing(normal_kind16);
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L144() else L145();
  L173():
    goto L43(r93);
  L175():
    p11 = prom<V +>{
      gettextf2 = ldf gettextf;
      p10 = prom<V +>{
        sample_kind11 = ld `sample.kind`;
        sample_kind12 = force? sample_kind11;
        checkMissing(sample_kind12);
        return sample_kind12;
      };
      r95 = dyn gettextf2("'%s' is not a valid choice", p10);
      return r95;
    };
    r97 = dyn stop5[, domain](p11, NA_LGL);
    check L176() else D48();
  L178():
    sample_kind14 = force? sample_kind13;
    checkMissing(sample_kind14);
    r99 = `==`(sample_kind14, 0);
    c47 = `as.logical`(r99);
    if c47 then L179() else L46();
  L212():
    dr6 = tryDispatchBuiltin.1("[", r125);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L214() else L213(n_kinds7, dr6);
  L213(n_kinds9, r127):
    __2 = ldf `[` in base;
    r128 = dyn __2(r127, 2);
    goto L57(n_kinds9, r128);
  L216():
    dr8 = tryDispatchBuiltin.1("[", s_kinds5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L218() else L217(dr8);
  L217(s_kinds7):
    r130 = ld r;
    check L219() else D64();
  L238():
    r146 = force? r145;
    checkMissing(r146);
    invisible = ldf invisible in base;
    r147 = dyn invisible(r146);
    check L239() else D70();
  D33():
    deopt 159 [r66];
  D48():
    deopt 223 [r97];
  D64():
    deopt 288 [s_kinds7, r130];
  D65():
    deopt 295 [r136];
  D70():
    deopt 316 [r147];
  L32(normal_kind19, r69):
    r71 = `-`(r69, 1);
    r72 = `==`(normal_kind19, r71);
    c32 = `as.logical`(r72);
    if c32 then L148() else L33();
  L46():
    goto L47();
  L47():
    sample_kind15 = ld `sample.kind`;
    check L183() else D52();
  L141():
    goto L31();
  L144():
    n_kinds2 = ld `n.kinds`;
    check L146() else D35();
  L145():
    r68 = dyn base12(<sym n.kinds>);
    goto L32(normal_kind16, r68);
  L176():
    goto L45();
  L179():
    warning1 = ldf warning;
    check L180() else D50();
  L214():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L57(n_kinds7, dx6);
  L218():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L58(dx8);
  L219():
    r131 = force? r130;
    checkMissing(r131);
    c54 = `is.object`(r131);
    if c54 then L220() else L221(s_kinds7, r131);
  L223():
    goto L53(r136);
  L239():
    goto L65(r147);
  D35():
    deopt 165 [normal_kind16, n_kinds2];
  D50():
    deopt 231 [];
  D52():
    deopt 238 [sample_kind15];
  L33():
    goto L34(NULL);
  L34(r73):
    goto L35();
  L59(s_kinds11, dx11):
    __5 = ldf `[` in base;
    r135 = dyn __5(s_kinds11, dx11);
    goto L58(r135);
  L146():
    n_kinds3 = force? n_kinds2;
    checkMissing(n_kinds3);
    length4 = ldf length in base;
    r70 = dyn length4(n_kinds3);
    check L147() else D36();
  L148():
    st `normal.kind` = -1;
    goto L34(-1);
  L180():
    r100 = dyn warning1[, domain]("non-uniform 'Rounding' sampler used", NA_LGL);
    check L181() else D51();
  L183():
    sample_kind16 = force? sample_kind15;
    checkMissing(sample_kind16);
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L184() else L185();
  L220():
    dr10 = tryDispatchBuiltin.1("[", r131);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L222() else L221(s_kinds7, dr10);
  L221(s_kinds9, r133):
    __4 = ldf `[` in base;
    r134 = dyn __4(r133, 3);
    goto L59(s_kinds9, r134);
  D36():
    deopt 168 [normal_kind16, r70];
  D51():
    deopt 235 [r100];
  L48(sample_kind19, r103):
    r105 = `-`(r103, 1);
    r106 = `==`(sample_kind19, r105);
    c48 = `as.logical`(r106);
    if c48 then L188() else L49();
  L147():
    goto L32(normal_kind16, r70);
  L181():
    goto L47();
  L184():
    s_kinds2 = ld `s.kinds`;
    check L186() else D53();
  L185():
    r102 = dyn base17(<sym s.kinds>);
    goto L48(sample_kind16, r102);
  L222():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L59(s_kinds7, dx10);
  D53():
    deopt 241 [sample_kind16, s_kinds2];
  L49():
    goto L50(NULL);
  L50(r107):
    goto L51();
  L186():
    s_kinds3 = force? s_kinds2;
    checkMissing(s_kinds3);
    length6 = ldf length in base;
    r104 = dyn length6(s_kinds3);
    check L187() else D54();
  L188():
    st `sample.kind` = -1;
    goto L50(-1);
  D54():
    deopt 244 [sample_kind16, r104];
  L187():
    goto L48(sample_kind16, r104);
  }
}