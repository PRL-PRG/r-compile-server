fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner77913637;
    st `set.seed` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner77913637(seed, kind, `normal.kind`, `sample.kind`) {
  (reg seed:*, reg kind:*, reg normal_kind:*, reg sample_kind:*) -+> V { var seed:*, var kind:*, reg kind_isMissing:L, reg kind_orDefault:*, var `normal.kind`:*, reg normal_kind_isMissing:L, reg normal_kind_orDefault:*, var `sample.kind`:*, reg sample_kind_isMissing:L, reg sample_kind_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c1:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg c2:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg kind1:*, reg kind2:V, reg length:cls, reg r11:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg r13:V, reg kind3:*, reg kind4:V, reg c4:L, reg r14:V, reg c5:L, reg c6:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r15:V, reg c10:L, reg r16:V, reg kind5:*, reg kind6:V, reg length1:cls, reg r17:V, reg r18:V, reg c11:L, reg c12:V, reg c14:L, reg stop:cls, reg r19:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r21:V, reg r22:V, reg pmatch:cls, reg kind7:*, reg kind8:V, reg p:p(V +), reg kinds:*, reg kinds1:V, reg p1:p(V +), reg r25:V, reg r26:V, reg is_na:cls, reg r27:V, reg c15:L, reg stop1:cls, reg gettextf:cls, reg kind9:*, reg kind10:V, reg p2:p(V +), reg r29:V, reg p3:p(V +), reg r31:V, reg i_knd:*, reg i_knd1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg i_knd4:V, reg r34:V, reg kinds2:*, reg kinds3:V, reg length2:cls, reg r35:V, reg r36:V, reg r37:V, reg c16:L, reg r38:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r40:V, reg r41:V, reg normal_kind1:*, reg normal_kind2:V, reg c17:V, reg r42:V, reg c18:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg r44:V, reg normal_kind3:*, reg normal_kind4:V, reg c19:L, reg r45:V, reg c20:L, reg c21:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r46:V, reg c25:L, reg r47:V, reg normal_kind5:*, reg normal_kind6:V, reg length3:cls, reg r48:V, reg r49:V, reg c26:L, reg c27:V, reg c29:L, reg stop2:cls, reg r50:V, reg pmatch1:cls, reg normal_kind7:*, reg normal_kind8:V, reg p4:p(V +), reg n_kinds:*, reg n_kinds1:V, reg p5:p(V +), reg r54:V, reg r55:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r56:V, reg r57:V, reg normal_kind9:*, reg normal_kind10:V, reg is_na1:cls, reg r58:V, reg c30:L, reg stop3:cls, reg gettextf1:cls, reg normal_kind11:*, reg normal_kind12:V, reg p6:p(V +), reg r60:V, reg p7:p(V +), reg r62:V, reg normal_kind13:*, reg normal_kind14:V, reg r64:V, reg c31:L, reg stop4:cls, reg r65:V, reg normal_kind15:*, reg normal_kind16:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r67:V, reg normal_kind19:V, reg r68:V, reg n_kinds2:*, reg n_kinds3:V, reg length4:cls, reg r69:V, reg r70:V, reg r71:V, reg c32:L, reg r72:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r74:V, reg r75:V, reg sample_kind1:*, reg sample_kind2:V, reg c33:V, reg r76:V, reg c34:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r77:V, reg r78:V, reg sample_kind3:*, reg sample_kind4:V, reg c35:L, reg r79:V, reg c36:L, reg c37:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r80:V, reg c41:L, reg r81:V, reg sample_kind5:*, reg sample_kind6:V, reg length5:cls, reg r82:V, reg r83:V, reg c42:L, reg c43:V, reg c45:L, reg stop5:cls, reg r84:V, reg pmatch2:cls, reg sample_kind7:*, reg sample_kind8:V, reg p8:p(V +), reg s_kinds:*, reg s_kinds1:V, reg p9:p(V +), reg r88:V, reg r89:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r90:V, reg r91:V, reg sample_kind9:*, reg sample_kind10:V, reg is_na2:cls, reg r92:V, reg c46:L, reg stop6:cls, reg gettextf2:cls, reg sample_kind11:*, reg sample_kind12:V, reg p10:p(V +), reg r94:V, reg p11:p(V +), reg r96:V, reg sample_kind13:*, reg sample_kind14:V, reg r98:V, reg c47:L, reg warning:cls, reg r99:V, reg sample_kind15:*, reg sample_kind16:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r101:V, reg sample_kind19:V, reg r102:V, reg s_kinds2:*, reg s_kinds3:V, reg length6:cls, reg r103:V, reg r104:V, reg r105:V, reg c48:L, reg r106:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r108:V, reg r109:V, reg seed1:*, reg seed2:V, reg i_knd5:*, reg i_knd6:V, reg normal_kind20:*, reg normal_kind21:V, reg sample_kind20:*, reg sample_kind21:V, reg set_seed:cls, reg r110:V |
    mkenv;
    st seed = seed;
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
    if guard then L53() else L54();
  L3(r1):
    st kinds = r1;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L56() else L57();
  L53():
    c = ldf c in base;
    r2 = dyn c("Wichmann-Hill", "Marsaglia-Multicarry", "Super-Duper", "Mersenne-Twister", "Knuth-TAOCP", "user-supplied", "Knuth-TAOCP-2002", "L'Ecuyer-CMRG", "default");
    check L55() else D0();
  L54():
    r = dyn base("Wichmann-Hill", "Marsaglia-Multicarry", "Super-Duper", "Mersenne-Twister", "Knuth-TAOCP", "user-supplied", "Knuth-TAOCP-2002", "L'Ecuyer-CMRG", "default");
    goto L3(r);
  D0():
    deopt 12 [r2];
  L4(r4):
    st `n.kinds` = r4;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L59() else L60();
  L55():
    goto L3(r2);
  L56():
    c1 = ldf c in base;
    r5 = dyn c1("Buggy Kinderman-Ramage", "Ahrens-Dieter", "Box-Muller", "user-supplied", "Inversion", "Kinderman-Ramage", "default");
    check L58() else D1();
  L57():
    r3 = dyn base1("Buggy Kinderman-Ramage", "Ahrens-Dieter", "Box-Muller", "user-supplied", "Inversion", "Kinderman-Ramage", "default");
    goto L4(r3);
  D1():
    deopt 24 [r5];
  L5(r7):
    st `s.kinds` = r7;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L62() else L63();
  L58():
    goto L4(r5);
  L59():
    c2 = ldf c in base;
    r8 = dyn c2("Rounding", "Rejection", "default");
    check L61() else D2();
  L60():
    r6 = dyn base2("Rounding", "Rejection", "default");
    goto L5(r6);
  D2():
    deopt 32 [r8];
  L6(r10):
    c3 = `as.logical`(r10);
    if c3 then L66() else L7();
  L61():
    goto L5(r8);
  L62():
    kind1 = ld kind;
    check L64() else D3();
  L63():
    r9 = dyn base3(<sym kind>);
    goto L6(r9);
  D3():
    deopt 36 [kind1];
  L7():
    st `i.knd` = NULL;
    goto L19();
  L19():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L97() else L98();
  L64():
    kind2 = force? kind1;
    checkMissing(kind2);
    length = ldf length in base;
    r11 = dyn length(kind2);
    check L65() else D4();
  L66():
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L67() else L68();
  D4():
    deopt 39 [r11];
  L8(r13):
    r14 = `!`(r13);
    c5 = `as.logical`(r14);
    if c5 then L9(c5) else L70();
  L20(r41):
    r42 = `!`(r41);
    c18 = `as.logical`(r42);
    if c18 then L100() else L21();
  L65():
    goto L6(r11);
  L67():
    kind3 = ld kind;
    check L69() else D5();
  L68():
    r12 = dyn base4(<sym kind>);
    goto L8(r12);
  L97():
    normal_kind1 = ld `normal.kind`;
    check L99() else D18();
  L98():
    r40 = dyn base8(<sym normal.kind>);
    goto L20(r40);
  D5():
    deopt 41 [kind3];
  D18():
    deopt 99 [normal_kind1];
  L9(c6):
    c14 = `as.logical`(c6);
    if c14 then L76() else L11();
  L21():
    goto L35();
  L35():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L137() else L138();
  L69():
    kind4 = force? kind3;
    checkMissing(kind4);
    c4 = `is.character`(kind4);
    goto L8(c4);
  L70():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L71() else L72();
  L99():
    normal_kind2 = force? normal_kind1;
    checkMissing(normal_kind2);
    c17 = `==`(normal_kind2, NULL);
    goto L20(c17);
  L100():
    sym9 = ldf `is.character`;
    base9 = ldf `is.character` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L101() else L102();
  L10(c10, r16):
    r18 = `>`(r16, 1);
    c11 = `as.logical`(r18);
    c12 = `||`(c10, c11);
    goto L9(c12);
  L11():
    goto L12();
  L12():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L80() else L81();
  L22(r44):
    r45 = `!`(r44);
    c20 = `as.logical`(r45);
    if c20 then L23(c20) else L104();
  L36(r75):
    r76 = `!`(r75);
    c34 = `as.logical`(r76);
    if c34 then L140() else L37();
  L71():
    kind5 = ld kind;
    check L73() else D6();
  L72():
    r15 = dyn base5(<sym kind>);
    goto L10(c5, r15);
  L76():
    stop = ldf stop;
    check L77() else D8();
  L101():
    normal_kind3 = ld `normal.kind`;
    check L103() else D19();
  L102():
    r43 = dyn base9(<sym normal.kind>);
    goto L22(r43);
  L137():
    sample_kind1 = ld `sample.kind`;
    check L139() else D36();
  L138():
    r74 = dyn base13(<sym sample.kind>);
    goto L36(r74);
  D6():
    deopt 47 [c5, kind5];
  D8():
    deopt 55 [];
  D19():
    deopt 104 [normal_kind3];
  D36():
    deopt 175 [sample_kind1];
  L13(r22):
    c15 = `as.logical`(r22);
    if c15 then L85() else L14();
  L23(c21):
    c29 = `as.logical`(c21);
    if c29 then L110() else L25();
  L37():
    goto L51();
  L51():
    sym18 = ldf `.Internal`;
    base18 = ldf `.Internal` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L177() else L178();
  L73():
    kind6 = force? kind5;
    checkMissing(kind6);
    length1 = ldf length in base;
    r17 = dyn length1(kind6);
    check L74() else D7();
  L77():
    r19 = dyn stop("'kind' must be a character string of length 1 (RNG to be used).");
    check L78() else D9();
  L80():
    pmatch = ldf pmatch;
    check L82() else D10();
  L81():
    r21 = dyn base6(<lang `<-`(i.knd, `-`(pmatch(kind, kinds), 1))>);
    goto L13(r21);
  L103():
    normal_kind4 = force? normal_kind3;
    checkMissing(normal_kind4);
    c19 = `is.character`(normal_kind4);
    goto L22(c19);
  L104():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L105() else L106();
  L139():
    sample_kind2 = force? sample_kind1;
    checkMissing(sample_kind2);
    c33 = `==`(sample_kind2, NULL);
    goto L36(c33);
  L140():
    sym14 = ldf `is.character`;
    base14 = ldf `is.character` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L141() else L142();
  D7():
    deopt 50 [c5, r17];
  D9():
    deopt 57 [r19];
  D10():
    deopt 63 [];
  L14():
    goto L15();
  L15():
    i_knd = ld `i.knd`;
    check L89() else D15();
  L24(c25, r47):
    r49 = `!=`(r47, 1);
    c26 = `as.logical`(r49);
    c27 = `||`(c25, c26);
    goto L23(c27);
  L25():
    goto L26();
  L26():
    pmatch1 = ldf pmatch;
    check L114() else D24();
  L38(r78):
    r79 = `!`(r78);
    c36 = `as.logical`(r79);
    if c36 then L39(c36) else L144();
  L52(r109):
    popenv;
    return r109;
  L74():
    goto L10(c5, r17);
  L78():
    goto L12();
  L82():
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
    r25 = dyn pmatch(p, p1);
    check L83() else D11();
  L85():
    stop1 = ldf stop;
    check L86() else D13();
  L105():
    normal_kind5 = ld `normal.kind`;
    check L107() else D20();
  L106():
    r46 = dyn base10(<sym normal.kind>);
    goto L24(c20, r46);
  L110():
    stop2 = ldf stop;
    check L111() else D22();
  L141():
    sample_kind3 = ld `sample.kind`;
    check L143() else D37();
  L142():
    r77 = dyn base14(<sym sample.kind>);
    goto L38(r77);
  L177():
    seed1 = ld seed;
    check L179() else D54();
  L178():
    r108 = dyn base18(<lang set.seed(seed, i.knd, normal.kind, sample.kind)>);
    goto L52(r108);
  D11():
    deopt 66 [r25];
  D13():
    deopt 73 [];
  D15():
    deopt 80 [i_knd];
  D20():
    deopt 110 [c20, normal_kind5];
  D22():
    deopt 118 [];
  D24():
    deopt 124 [];
  D37():
    deopt 180 [sample_kind3];
  D54():
    deopt 252 [seed1];
  L39(c37):
    c45 = `as.logical`(c37);
    if c45 then L150() else L41();
  L83():
    r26 = `-`(r25, 1);
    st `i.knd` = r26;
    is_na = ldf `is.na` in base;
    r27 = dyn is_na(r26);
    check L84() else D12();
  L86():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        kind9 = ld kind;
        kind10 = force? kind9;
        checkMissing(kind10);
        return kind10;
      };
      r29 = dyn gettextf("'%s' is not a valid abbreviation of an RNG", p2);
      return r29;
    };
    r31 = dyn stop1[, domain](p3, NA_LGL);
    check L87() else D14();
  L89():
    i_knd1 = force? i_knd;
    checkMissing(i_knd1);
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L90() else L91();
  L107():
    normal_kind6 = force? normal_kind5;
    checkMissing(normal_kind6);
    length3 = ldf length in base;
    r48 = dyn length3(normal_kind6);
    check L108() else D21();
  L111():
    r50 = dyn stop2("'normal.kind' must be a character string of length 1");
    check L112() else D23();
  L114():
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
    r54 = dyn pmatch1(p4, p5);
    check L115() else D25();
  L143():
    sample_kind4 = force? sample_kind3;
    checkMissing(sample_kind4);
    c35 = `is.character`(sample_kind4);
    goto L38(c35);
  L144():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L145() else L146();
  L179():
    seed2 = force? seed1;
    checkMissing(seed2);
    i_knd5 = ld `i.knd`;
    check L180() else D55();
  D12():
    deopt 71 [r27];
  D14():
    deopt 77 [r31];
  D21():
    deopt 113 [c20, r48];
  D23():
    deopt 120 [r50];
  D25():
    deopt 127 [r54];
  D55():
    deopt 254 [i_knd5];
  L16(i_knd4, r34):
    r36 = `-`(r34, 1);
    r37 = `==`(i_knd4, r36);
    c16 = `as.logical`(r37);
    if c16 then L94() else L17();
  L40(c41, r81):
    r83 = `!=`(r81, 1);
    c42 = `as.logical`(r83);
    c43 = `||`(c41, c42);
    goto L39(c43);
  L41():
    goto L42();
  L42():
    pmatch2 = ldf pmatch;
    check L154() else D42();
  L84():
    goto L13(r27);
  L87():
    goto L15();
  L90():
    kinds2 = ld kinds;
    check L92() else D16();
  L91():
    r33 = dyn base7(<sym kinds>);
    goto L16(i_knd1, r33);
  L108():
    goto L24(c20, r48);
  L112():
    goto L26();
  L115():
    r55 = `-`(r54, 1);
    st `normal.kind` = r55;
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L116() else L117();
  L145():
    sample_kind5 = ld `sample.kind`;
    check L147() else D38();
  L146():
    r80 = dyn base15(<sym sample.kind>);
    goto L40(c36, r80);
  L150():
    stop5 = ldf stop;
    check L151() else D40();
  L180():
    i_knd6 = force? i_knd5;
    checkMissing(i_knd6);
    normal_kind20 = ld `normal.kind`;
    check L181() else D56();
  D16():
    deopt 83 [i_knd1, kinds2];
  D38():
    deopt 186 [c36, sample_kind5];
  D40():
    deopt 194 [];
  D42():
    deopt 200 [];
  D56():
    deopt 256 [normal_kind20];
  L17():
    goto L18(NULL);
  L18(r38):
    goto L19();
  L27(r57):
    c30 = `as.logical`(r57);
    if c30 then L120() else L28();
  L92():
    kinds3 = force? kinds2;
    checkMissing(kinds3);
    length2 = ldf length in base;
    r35 = dyn length2(kinds3);
    check L93() else D17();
  L94():
    st `i.knd` = -1;
    goto L18(-1);
  L116():
    normal_kind9 = ld `normal.kind`;
    check L118() else D26();
  L117():
    r56 = dyn base11(<sym normal.kind>);
    goto L27(r56);
  L147():
    sample_kind6 = force? sample_kind5;
    checkMissing(sample_kind6);
    length5 = ldf length in base;
    r82 = dyn length5(sample_kind6);
    check L148() else D39();
  L151():
    r84 = dyn stop5("'sample.kind' must be a character string of length 1");
    check L152() else D41();
  L154():
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
    r88 = dyn pmatch2(p8, p9);
    check L155() else D43();
  L181():
    normal_kind21 = force? normal_kind20;
    checkMissing(normal_kind21);
    sample_kind20 = ld `sample.kind`;
    check L182() else D57();
  D17():
    deopt 86 [i_knd1, r35];
  D26():
    deopt 133 [normal_kind9];
  D39():
    deopt 189 [c36, r82];
  D41():
    deopt 196 [r84];
  D43():
    deopt 203 [r88];
  D57():
    deopt 258 [sample_kind20];
  L28():
    goto L29();
  L29():
    normal_kind13 = ld `normal.kind`;
    check L124() else D30();
  L93():
    goto L16(i_knd1, r35);
  L118():
    normal_kind10 = force? normal_kind9;
    checkMissing(normal_kind10);
    is_na1 = ldf `is.na` in base;
    r58 = dyn is_na1(normal_kind10);
    check L119() else D27();
  L120():
    stop3 = ldf stop;
    check L121() else D28();
  L148():
    goto L40(c36, r82);
  L152():
    goto L42();
  L155():
    r89 = `-`(r88, 1);
    st `sample.kind` = r89;
    sym16 = ldf `is.na`;
    base16 = ldf `is.na` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L156() else L157();
  L182():
    sample_kind21 = force? sample_kind20;
    checkMissing(sample_kind21);
    set_seed = ldf `set.seed` in base;
    r110 = dyn set_seed(seed2, i_knd6, normal_kind21, sample_kind21);
    check L183() else D58();
  D27():
    deopt 136 [r58];
  D28():
    deopt 138 [];
  D30():
    deopt 145 [normal_kind13];
  D58():
    deopt 261 [r110];
  L43(r91):
    c46 = `as.logical`(r91);
    if c46 then L160() else L44();
  L119():
    goto L27(r58);
  L121():
    p7 = prom<V +>{
      gettextf1 = ldf gettextf;
      p6 = prom<V +>{
        normal_kind11 = ld `normal.kind`;
        normal_kind12 = force? normal_kind11;
        checkMissing(normal_kind12);
        return normal_kind12;
      };
      r60 = dyn gettextf1("'%s' is not a valid choice", p6);
      return r60;
    };
    r62 = dyn stop3[, domain](p7, NA_LGL);
    check L122() else D29();
  L124():
    normal_kind14 = force? normal_kind13;
    checkMissing(normal_kind14);
    r64 = `==`(normal_kind14, 0);
    c31 = `as.logical`(r64);
    if c31 then L125() else L30();
  L156():
    sample_kind9 = ld `sample.kind`;
    check L158() else D44();
  L157():
    r90 = dyn base16(<sym sample.kind>);
    goto L43(r90);
  L183():
    goto L52(r110);
  D29():
    deopt 142 [r62];
  D44():
    deopt 209 [sample_kind9];
  L30():
    goto L31();
  L31():
    normal_kind15 = ld `normal.kind`;
    check L129() else D33();
  L44():
    goto L45();
  L45():
    sample_kind13 = ld `sample.kind`;
    check L164() else D48();
  L122():
    goto L29();
  L125():
    stop4 = ldf stop;
    check L126() else D31();
  L158():
    sample_kind10 = force? sample_kind9;
    checkMissing(sample_kind10);
    is_na2 = ldf `is.na` in base;
    r92 = dyn is_na2(sample_kind10);
    check L159() else D45();
  L160():
    stop6 = ldf stop;
    check L161() else D46();
  D31():
    deopt 150 [];
  D33():
    deopt 157 [normal_kind15];
  D45():
    deopt 212 [r92];
  D46():
    deopt 214 [];
  D48():
    deopt 221 [sample_kind13];
  L126():
    r65 = dyn stop4[, domain]("buggy version of Kinderman-Ramage generator is not allowed", NA_LGL);
    check L127() else D32();
  L129():
    normal_kind16 = force? normal_kind15;
    checkMissing(normal_kind16);
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L130() else L131();
  L159():
    goto L43(r92);
  L161():
    p11 = prom<V +>{
      gettextf2 = ldf gettextf;
      p10 = prom<V +>{
        sample_kind11 = ld `sample.kind`;
        sample_kind12 = force? sample_kind11;
        checkMissing(sample_kind12);
        return sample_kind12;
      };
      r94 = dyn gettextf2("'%s' is not a valid choice", p10);
      return r94;
    };
    r96 = dyn stop6[, domain](p11, NA_LGL);
    check L162() else D47();
  L164():
    sample_kind14 = force? sample_kind13;
    checkMissing(sample_kind14);
    r98 = `==`(sample_kind14, 0);
    c47 = `as.logical`(r98);
    if c47 then L165() else L46();
  D32():
    deopt 154 [r65];
  D47():
    deopt 218 [r96];
  L32(normal_kind19, r68):
    r70 = `-`(r68, 1);
    r71 = `==`(normal_kind19, r70);
    c32 = `as.logical`(r71);
    if c32 then L134() else L33();
  L46():
    goto L47();
  L47():
    sample_kind15 = ld `sample.kind`;
    check L169() else D51();
  L127():
    goto L31();
  L130():
    n_kinds2 = ld `n.kinds`;
    check L132() else D34();
  L131():
    r67 = dyn base12(<sym n.kinds>);
    goto L32(normal_kind16, r67);
  L162():
    goto L45();
  L165():
    warning = ldf warning;
    check L166() else D49();
  D34():
    deopt 160 [normal_kind16, n_kinds2];
  D49():
    deopt 226 [];
  D51():
    deopt 233 [sample_kind15];
  L33():
    goto L34(NULL);
  L34(r72):
    goto L35();
  L132():
    n_kinds3 = force? n_kinds2;
    checkMissing(n_kinds3);
    length4 = ldf length in base;
    r69 = dyn length4(n_kinds3);
    check L133() else D35();
  L134():
    st `normal.kind` = -1;
    goto L34(-1);
  L166():
    r99 = dyn warning[, domain]("non-uniform 'Rounding' sampler used", NA_LGL);
    check L167() else D50();
  L169():
    sample_kind16 = force? sample_kind15;
    checkMissing(sample_kind16);
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L170() else L171();
  D35():
    deopt 163 [normal_kind16, r69];
  D50():
    deopt 230 [r99];
  L48(sample_kind19, r102):
    r104 = `-`(r102, 1);
    r105 = `==`(sample_kind19, r104);
    c48 = `as.logical`(r105);
    if c48 then L174() else L49();
  L133():
    goto L32(normal_kind16, r69);
  L167():
    goto L47();
  L170():
    s_kinds2 = ld `s.kinds`;
    check L172() else D52();
  L171():
    r101 = dyn base17(<sym s.kinds>);
    goto L48(sample_kind16, r101);
  D52():
    deopt 236 [sample_kind16, s_kinds2];
  L49():
    goto L50(NULL);
  L50(r106):
    goto L51();
  L172():
    s_kinds3 = force? s_kinds2;
    checkMissing(s_kinds3);
    length6 = ldf length in base;
    r103 = dyn length6(s_kinds3);
    check L173() else D53();
  L174():
    st `sample.kind` = -1;
    goto L50(-1);
  D53():
    deopt 239 [sample_kind16, r103];
  L173():
    goto L48(sample_kind16, r103);
  }
}