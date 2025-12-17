fun main() {
  () -+> V { reg r:cls, reg grep:cls, reg letters:*, reg letters1:V, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg grep1:cls, reg txt:*, reg txt1:V, reg p1:p(V +), reg r9:V, reg length:cls, reg r10:V, reg c1:L, reg cat:cls, reg txt2:*, reg txt3:V, reg p2:p(V +), reg r12:V, reg i:*, reg i1:V, reg txt4:*, reg txt5:V, reg c2:L, reg txt7:V, reg dr:V, reg dc:L, reg dx:V, reg i2:*, reg i3:V, reg __:cls, reg r14:V, reg gsub:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg c3:cls, reg r18:V, reg grep2:cls, reg txt8:*, reg txt9:V, reg p3:p(V +), reg r20:V, reg stopifnot:cls, reg txt10:*, reg txt11:V, reg c4:L, reg txt13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i4:*, reg i5:V, reg __1:cls, reg r21:V, reg grep3:cls, reg txt14:*, reg txt15:V, reg p4:p(V +), reg r23:V, reg r24:V, reg p5:p(V +), reg r26:V, reg sub:cls, reg txt16:*, reg txt17:V, reg p6:p(V +), reg r28:V, reg txt18:*, reg txt19:V, reg c5:L, reg txt21:V, reg dr4:V, reg dc2:L, reg dx4:V, reg ot:*, reg ot1:V, reg gsub1:cls, reg txt22:*, reg txt23:V, reg p7:p(V +), reg r30:V, reg r31:V, reg __2:cls, reg r32:V, reg grep4:cls, reg txt24:*, reg txt25:V, reg p8:p(V +), reg r34:V, reg grep5:cls, reg txt26:*, reg txt27:V, reg p9:p(V +), reg r36:V, reg setdiff:cls, reg b:*, reg b1:V, reg p10:p(V +), reg a:*, reg a1:V, reg p11:p(V +), reg r39:V, reg txt28:*, reg txt29:V, reg c6:L, reg txt31:V, reg dr6:V, reg dc3:L, reg dx6:V, reg gsub2:cls, reg txt32:*, reg txt33:V, reg p12:p(V +), reg r41:V, reg gsub3:cls, reg txt34:*, reg txt35:V, reg p13:p(V +), reg r43:V, reg r44:V, reg __3:cls, reg r45:V, reg regexpr:cls, reg txt36:*, reg txt37:V, reg p14:p(V +), reg r47:V, reg gregexpr:cls, reg txt38:*, reg txt39:V, reg p15:p(V +), reg r49:V, reg r50:cls, reg findArgs:cls, reg r51:V, reg sub1:cls, reg str:*, reg str1:V, reg p16:p(V +), reg r53:V, reg sub2:cls, reg str2:*, reg str3:V, reg p17:p(V +), reg r55:V, reg sub3:cls, reg str4:*, reg str5:V, reg p18:p(V +), reg r57:V, reg gsub4:cls, reg txt40:*, reg txt41:V, reg p19:p(V +), reg r59:V, reg gsub5:cls, reg txt42:*, reg txt43:V, reg p20:p(V +), reg r61:V, reg gsub6:cls, reg txt44:*, reg txt45:V, reg p21:p(V +), reg r63:V, reg sub4:cls, reg txt46:*, reg txt47:V, reg p22:p(V +), reg r65:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r66:V, reg r67:V, reg c7:cls, reg r68:V, reg regexpr1:cls, reg name_rex:*, reg name_rex1:V, reg p23:p(V +), reg notables:*, reg notables1:V, reg p24:p(V +), reg r71:V, reg gregexpr1:cls, reg name_rex2:*, reg name_rex3:V, reg p25:p(V +), reg notables2:*, reg notables3:V, reg p26:p(V +), reg r74:V, reg c8:L, reg r76:V, reg dr8:V, reg dc4:L, reg dx8:V, reg __4:cls, reg r77:V, reg r78:cls, reg parse_one:cls, reg notables4:*, reg notables5:V, reg p27:p(V +), reg parsed:*, reg parsed1:V, reg p28:p(V +), reg r81:V, reg regexec:cls, reg x:*, reg x1:V, reg p29:p(V +), reg r83:V, reg m:*, reg m1:V, reg regmatches:cls, reg x2:*, reg x3:V, reg p30:p(V +), reg m2:*, reg m3:V, reg p31:p(V +), reg r86:V, reg r87:cls, reg URL_parts:cls, reg x4:*, reg x5:V, reg p32:p(V +), reg r89:V, reg gregexec:cls, reg pattern:*, reg pattern1:V, reg p33:p(V +), reg s:*, reg s1:V, reg p34:p(V +), reg r92:V, reg m4:*, reg m5:V, reg regmatches1:cls, reg s2:*, reg s3:V, reg p35:p(V +), reg m6:*, reg m7:V, reg p36:p(V +), reg r95:V, reg lapply:cls, reg regmatches2:cls, reg s4:*, reg s5:V, reg p37:p(V +), reg gregexpr2:cls, reg pattern2:*, reg pattern3:V, reg p38:p(V +), reg s6:*, reg s7:V, reg p39:p(V +), reg r99:V, reg p40:p(V +), reg r101:V, reg p41:p(V +), reg r103:cls, reg p42:p(V +), reg r105:V |
    mkenv;
    r = clos inner2785182944;
    st grep = r;
    grep = ldf grep;
    check L10() else D0();
  D0():
    deopt 4 [];
  L10():
    p = prom<V +>{
      letters = ld letters;
      letters1 = force? letters;
      checkMissing(letters1);
      return letters1;
    };
    r2 = dyn grep("[a-z]", p);
    check L11() else D1();
  D1():
    deopt 7 [r2];
  L11():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r4):
    st txt = r4;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L12():
    c = ldf c in base;
    r5 = dyn c("arm", "foot", "lefroo", "bafoobar");
    check L14() else D2();
  L13():
    r3 = dyn base("arm", "foot", "lefroo", "bafoobar");
    goto L0(r3);
  D2():
    deopt 15 [r5];
  L1(r7):
    c1 = `as.logical`(r7);
    if c1 then L20() else L2();
  L14():
    goto L0(r5);
  L15():
    grep1 = ldf grep;
    check L17() else D3();
  L16():
    r6 = dyn base1(<lang `<-`(i, grep("foo", txt))>);
    goto L1(r6);
  D3():
    deopt 20 [];
  L2():
    goto L3();
  L3():
    i = ld i;
    check L24() else D8();
  L17():
    p1 = prom<V +>{
      txt = ld txt;
      txt1 = force? txt;
      checkMissing(txt1);
      return txt1;
    };
    r9 = dyn grep1("foo", p1);
    check L18() else D4();
  L20():
    cat = ldf cat;
    check L21() else D6();
  D4():
    deopt 23 [r9];
  D6():
    deopt 28 [];
  D8():
    deopt 35 [i];
  L18():
    st i = r9;
    length = ldf length in base;
    r10 = dyn length(r9);
    check L19() else D5();
  L21():
    p2 = prom<V +>{
      txt2 = ld txt;
      txt3 = force? txt2;
      checkMissing(txt3);
      return txt3;
    };
    r12 = dyn cat("'foo' appears at least once in\n\t", p2, "\n");
    check L22() else D7();
  L24():
    i1 = force? i;
    checkMissing(i1);
    txt4 = ld txt;
    check L25() else D9();
  D5():
    deopt 26 [r10];
  D7():
    deopt 32 [r12];
  D9():
    deopt 37 [txt4];
  L19():
    goto L1(r10);
  L22():
    goto L3();
  L25():
    txt5 = force? txt4;
    checkMissing(txt5);
    c2 = `is.object`(txt5);
    if c2 then L26() else L27(txt5);
  L4():
    gsub = ldf gsub;
    check L30() else D11();
  L26():
    dr = tryDispatchBuiltin.1("[", txt5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27(dr);
  L27(txt7):
    i2 = ld i;
    check L29() else D10();
  D10():
    deopt 39 [txt7, i2];
  D11():
    deopt 43 [];
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4();
  L29():
    i3 = force? i2;
    __ = ldf `[` in base;
    r14 = dyn __(txt7, i3);
    goto L4();
  L30():
    r15 = dyn gsub("([ab])", "\\1_\\1_", "abc and ABC");
    check L31() else D12();
  D12():
    deopt 47 [r15];
  L31():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L5(r17):
    st txt = r17;
    grep2 = ldf grep;
    check L35() else D14();
  L32():
    c3 = ldf c in base;
    r18 = dyn c3("The", "licenses", "for", "most", "software", "are", "designed", "to", "take", "away", "your", "freedom", "to", "share", "and", "change", "it.", "", "By", "contrast,", "the", "GNU", "General", "Public", "License", "is", "intended", "to", "guarantee", "your", "freedom", "to", "share", "and", "change", "free", "software", "--", "to", "make", "sure", "the", "software", "is", "free", "for", "all", "its", "users");
    check L34() else D13();
  L33():
    r16 = dyn base2("The", "licenses", "for", "most", "software", "are", "designed", "to", "take", "away", "your", "freedom", "to", "share", "and", "change", "it.", "", "By", "contrast,", "the", "GNU", "General", "Public", "License", "is", "intended", "to", "guarantee", "your", "freedom", "to", "share", "and", "change", "free", "software", "--", "to", "make", "sure", "the", "software", "is", "free", "for", "all", "its", "users");
    goto L5(r16);
  D13():
    deopt 100 [r18];
  D14():
    deopt 103 [];
  L34():
    goto L5(r18);
  L35():
    p3 = prom<V +>{
      txt8 = ld txt;
      txt9 = force? txt8;
      checkMissing(txt9);
      return txt9;
    };
    r20 = dyn grep2("[gu]", p3);
    check L36() else D15();
  D15():
    deopt 106 [r20];
  L36():
    st i = r20;
    stopifnot = ldf stopifnot;
    check L37() else D16();
  D16():
    deopt 109 [];
  L37():
    p5 = prom<V +>{
      txt10 = ld txt;
      txt11 = force? txt10;
      checkMissing(txt11);
      c4 = `is.object`(txt11);
      if c4 then L1() else L2(txt11);
    L0(dx3):
      grep3 = ldf grep;
      p4 = prom<V +>{
        txt14 = ld txt;
        txt15 = force? txt14;
        checkMissing(txt15);
        return txt15;
      };
      r23 = dyn grep3[, , value]("[gu]", p4, TRUE);
      r24 = `==`(dx3, r23);
      return r24;
    L1():
      dr2 = tryDispatchBuiltin.1("[", txt11);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(txt13):
      i4 = ld i;
      i5 = force? i4;
      __1 = ldf `[` in base;
      r21 = dyn __1(txt13, i5);
      goto L0(r21);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r26 = dyn stopifnot(p5);
    check L38() else D17();
  D17():
    deopt 111 [r26];
  L38():
    sub = ldf sub;
    check L39() else D18();
  D18():
    deopt 113 [];
  L39():
    p6 = prom<V +>{
      txt16 = ld txt;
      txt17 = force? txt16;
      checkMissing(txt17);
      return txt17;
    };
    r28 = dyn sub("[b-e]", ".", p6);
    check L40() else D19();
  D19():
    deopt 117 [r28];
  L40():
    st ot = r28;
    txt18 = ld txt;
    check L41() else D20();
  D20():
    deopt 119 [txt18];
  L41():
    txt19 = force? txt18;
    checkMissing(txt19);
    c5 = `is.object`(txt19);
    if c5 then L42() else L43(txt19);
  L6():
    grep4 = ldf grep;
    check L48() else D24();
  L42():
    dr4 = tryDispatchBuiltin.1("[", txt19);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L44() else L43(dr4);
  L43(txt21):
    ot = ld ot;
    check L45() else D21();
  D21():
    deopt 121 [txt21, ot];
  D24():
    deopt 131 [];
  L44():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6();
  L45():
    ot1 = force? ot;
    checkMissing(ot1);
    gsub1 = ldf gsub;
    check L46() else D22();
  L48():
    p8 = prom<V +>{
      txt24 = ld txt;
      txt25 = force? txt24;
      checkMissing(txt25);
      return txt25;
    };
    r34 = dyn grep4[, , value]("[b-e]", p8, TRUE);
    check L49() else D25();
  D22():
    deopt 123 [txt21, ot1];
  D25():
    deopt 136 [r34];
  L46():
    p7 = prom<V +>{
      txt22 = ld txt;
      txt23 = force? txt22;
      checkMissing(txt23);
      return txt23;
    };
    r30 = dyn gsub1("[b-e]", ".", p7);
    check L47() else D23();
  L49():
    st a = r34;
    grep5 = ldf grep;
    check L50() else D26();
  D23():
    deopt 127 [txt21, ot1, r30];
  D26():
    deopt 139 [];
  L47():
    r31 = `!=`(ot1, r30);
    __2 = ldf `[` in base;
    r32 = dyn __2(txt21, r31);
    goto L6();
  L50():
    p9 = prom<V +>{
      txt26 = ld txt;
      txt27 = force? txt26;
      checkMissing(txt27);
      return txt27;
    };
    r36 = dyn grep5[, , `ignore.case`, value]("[b-e]", p9, TRUE, TRUE);
    check L51() else D27();
  D27():
    deopt 146 [r36];
  L51():
    st b = r36;
    setdiff = ldf setdiff;
    check L52() else D28();
  D28():
    deopt 149 [];
  L52():
    p10 = prom<V +>{
      b = ld b;
      b1 = force? b;
      checkMissing(b1);
      return b1;
    };
    p11 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    r39 = dyn setdiff(p10, p11);
    check L53() else D29();
  D29():
    deopt 152 [r39];
  L53():
    txt28 = ld txt;
    check L54() else D30();
  D30():
    deopt 153 [txt28];
  L54():
    txt29 = force? txt28;
    checkMissing(txt29);
    c6 = `is.object`(txt29);
    if c6 then L55() else L56(txt29);
  L7():
    regexpr = ldf regexpr;
    check L62() else D35();
  L55():
    dr6 = tryDispatchBuiltin.1("[", txt29);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L57() else L56(dr6);
  L56(txt31):
    gsub2 = ldf gsub;
    check L58() else D31();
  D31():
    deopt 156 [txt31];
  D35():
    deopt 171 [];
  L57():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L7();
  L58():
    p12 = prom<V +>{
      txt32 = ld txt;
      txt33 = force? txt32;
      checkMissing(txt33);
      return txt33;
    };
    r41 = dyn gsub2("g", "#", p12);
    check L59() else D32();
  L62():
    p14 = prom<V +>{
      txt36 = ld txt;
      txt37 = force? txt36;
      checkMissing(txt37);
      return txt37;
    };
    r47 = dyn regexpr("en", p14);
    check L63() else D36();
  D32():
    deopt 160 [txt31, r41];
  D36():
    deopt 174 [r47];
  L59():
    gsub3 = ldf gsub;
    check L60() else D33();
  L63():
    gregexpr = ldf gregexpr;
    check L64() else D37();
  D33():
    deopt 161 [txt31, r41];
  D37():
    deopt 176 [];
  L60():
    p13 = prom<V +>{
      txt34 = ld txt;
      txt35 = force? txt34;
      checkMissing(txt35);
      return txt35;
    };
    r43 = dyn gsub3[, , , `ignore.case`]("g", "#", p13, TRUE);
    check L61() else D34();
  L64():
    p15 = prom<V +>{
      txt38 = ld txt;
      txt39 = force? txt38;
      checkMissing(txt39);
      return txt39;
    };
    r49 = dyn gregexpr("e", p15);
    check L65() else D38();
  D34():
    deopt 167 [txt31, r41, r43];
  D38():
    deopt 179 [r49];
  L61():
    r44 = `!=`(r41, r43);
    __3 = ldf `[` in base;
    r45 = dyn __3(txt31, r44);
    goto L7();
  L65():
    r50 = clos inner4151784751;
    st findArgs = r50;
    findArgs = ldf findArgs;
    check L66() else D39();
  D39():
    deopt 184 [];
  L66():
    r51 = dyn findArgs("package:base", "warn");
    check L67() else D40();
  D40():
    deopt 187 [r51];
  L67():
    st str = "Now is the time      ";
    sub1 = ldf sub;
    check L68() else D41();
  D41():
    deopt 192 [];
  L68():
    p16 = prom<V +>{
      str = ld str;
      str1 = force? str;
      checkMissing(str1);
      return str1;
    };
    r53 = dyn sub1(" +$", "", p16);
    check L69() else D42();
  D42():
    deopt 196 [r53];
  L69():
    sub2 = ldf sub;
    check L70() else D43();
  D43():
    deopt 198 [];
  L70():
    p17 = prom<V +>{
      str2 = ld str;
      str3 = force? str2;
      checkMissing(str3);
      return str3;
    };
    r55 = dyn sub2("[[:space:]]+$", "", p17);
    check L71() else D44();
  D44():
    deopt 202 [r55];
  L71():
    sub3 = ldf sub;
    check L72() else D45();
  D45():
    deopt 204 [];
  L72():
    p18 = prom<V +>{
      str4 = ld str;
      str5 = force? str4;
      checkMissing(str5);
      return str5;
    };
    r57 = dyn sub3[, , , perl]("\\s+$", "", p18, TRUE);
    check L73() else D46();
  D46():
    deopt 210 [r57];
  L73():
    st txt = "a test of capitalizing";
    gsub4 = ldf gsub;
    check L74() else D47();
  D47():
    deopt 215 [];
  L74():
    p19 = prom<V +>{
      txt40 = ld txt;
      txt41 = force? txt40;
      checkMissing(txt41);
      return txt41;
    };
    r59 = dyn gsub4[, , , perl]("(\\w)(\\w*)", "\\U\\1\\L\\2", p19, TRUE);
    check L75() else D48();
  D48():
    deopt 221 [r59];
  L75():
    gsub5 = ldf gsub;
    check L76() else D49();
  D49():
    deopt 223 [];
  L76():
    p20 = prom<V +>{
      txt42 = ld txt;
      txt43 = force? txt42;
      checkMissing(txt43);
      return txt43;
    };
    r61 = dyn gsub5[, , , perl]("\\b(\\w)", "\\U\\1", p20, TRUE);
    check L77() else D50();
  D50():
    deopt 229 [r61];
  L77():
    st txt2 = "useRs may fly into JFK or laGuardia";
    gsub6 = ldf gsub;
    check L78() else D51();
  D51():
    deopt 234 [];
  L78():
    p21 = prom<V +>{
      txt44 = ld txt2;
      txt45 = force? txt44;
      checkMissing(txt45);
      return txt45;
    };
    r63 = dyn gsub6[, , , perl]("(\\w)(\\w*)(\\w)", "\\U\\1\\E\\2\\U\\3", p21, TRUE);
    check L79() else D52();
  D52():
    deopt 240 [r63];
  L79():
    sub4 = ldf sub;
    check L80() else D53();
  D53():
    deopt 242 [];
  L80():
    p22 = prom<V +>{
      txt46 = ld txt2;
      txt47 = force? txt46;
      checkMissing(txt47);
      return txt47;
    };
    r65 = dyn sub4[, , , perl]("(\\w)(\\w*)(\\w)", "\\U\\1\\E\\2\\U\\3", p22, TRUE);
    check L81() else D54();
  D54():
    deopt 248 [r65];
  L81():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L82() else L83();
  L8(r67):
    st notables = r67;
    st `name.rex` = "(?<first>[[:upper:]][[:lower:]]+) (?<last>[[:upper:]][[:lower:]]+)";
    regexpr1 = ldf regexpr;
    check L85() else D56();
  L82():
    c7 = ldf c in base;
    r68 = dyn c7("  Ben Franklin and Jefferson Davis", "\tMillard Fillmore");
    check L84() else D55();
  L83():
    r66 = dyn base3("  Ben Franklin and Jefferson Davis", "\tMillard Fillmore");
    goto L8(r66);
  D55():
    deopt 254 [r68];
  D56():
    deopt 260 [];
  L84():
    goto L8(r68);
  L85():
    p23 = prom<V +>{
      name_rex = ld `name.rex`;
      name_rex1 = force? name_rex;
      checkMissing(name_rex1);
      return name_rex1;
    };
    p24 = prom<V +>{
      notables = ld notables;
      notables1 = force? notables;
      checkMissing(notables1);
      return notables1;
    };
    r71 = dyn regexpr1[, , perl](p23, p24, TRUE);
    check L86() else D57();
  D57():
    deopt 265 [r71];
  L86():
    st parsed = r71;
    gregexpr1 = ldf gregexpr;
    check L87() else D58();
  D58():
    deopt 268 [];
  L87():
    p25 = prom<V +>{
      name_rex2 = ld `name.rex`;
      name_rex3 = force? name_rex2;
      checkMissing(name_rex3);
      return name_rex3;
    };
    p26 = prom<V +>{
      notables2 = ld notables;
      notables3 = force? notables2;
      checkMissing(notables3);
      return notables3;
    };
    r74 = dyn gregexpr1[, , perl](p25, p26, TRUE);
    check L88() else D59();
  D59():
    deopt 273 [r74];
  L88():
    c8 = `is.object`(r74);
    if c8 then L89() else L90(r74);
  L9():
    r78 = clos inner731678829;
    st `parse.one` = r78;
    parse_one = ldf `parse.one`;
    check L92() else D60();
  L89():
    dr8 = tryDispatchBuiltin.1("[[", r74);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L91() else L90(dr8);
  L90(r76):
    __4 = ldf `[[` in base;
    r77 = dyn __4(r76, 2.0);
    goto L9();
  D60():
    deopt 281 [];
  L91():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L9();
  L92():
    p27 = prom<V +>{
      notables4 = ld notables;
      notables5 = force? notables4;
      checkMissing(notables5);
      return notables5;
    };
    p28 = prom<V +>{
      parsed = ld parsed;
      parsed1 = force? parsed;
      checkMissing(parsed1);
      return parsed1;
    };
    r81 = dyn parse_one(p27, p28);
    check L93() else D61();
  D61():
    deopt 284 [r81];
  L93():
    st x = "http://stat.umn.edu:80/xyz";
    regexec = ldf regexec;
    check L94() else D62();
  D62():
    deopt 289 [];
  L94():
    p29 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r83 = dyn regexec("^(([^:]+)://)?([^:/]+)(:([0-9]+))?(/.*)", p29);
    check L95() else D63();
  D63():
    deopt 292 [r83];
  L95():
    st m = r83;
    m = ld m;
    check L96() else D64();
  D64():
    deopt 294 [m];
  L96():
    m1 = force? m;
    checkMissing(m1);
    regmatches = ldf regmatches;
    check L97() else D65();
  D65():
    deopt 297 [];
  L97():
    p30 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p31 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r86 = dyn regmatches(p30, p31);
    check L98() else D66();
  D66():
    deopt 300 [r86];
  L98():
    r87 = clos inner2501545716;
    st URL_parts = r87;
    URL_parts = ldf URL_parts;
    check L99() else D67();
  D67():
    deopt 305 [];
  L99():
    p32 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r89 = dyn URL_parts(p32);
    check L100() else D68();
  D68():
    deopt 307 [r89];
  L100():
    st pattern = "([[:alpha:]]+)([[:digit:]]+)";
    st s = "Test: A1 BC23 DEF456";
    gregexec = ldf gregexec;
    check L101() else D69();
  D69():
    deopt 315 [];
  L101():
    p33 = prom<V +>{
      pattern = ld pattern;
      pattern1 = force? pattern;
      checkMissing(pattern1);
      return pattern1;
    };
    p34 = prom<V +>{
      s = ld s;
      s1 = force? s;
      checkMissing(s1);
      return s1;
    };
    r92 = dyn gregexec(p33, p34);
    check L102() else D70();
  D70():
    deopt 318 [r92];
  L102():
    st m = r92;
    m4 = ld m;
    check L103() else D71();
  D71():
    deopt 320 [m4];
  L103():
    m5 = force? m4;
    checkMissing(m5);
    regmatches1 = ldf regmatches;
    check L104() else D72();
  D72():
    deopt 323 [];
  L104():
    p35 = prom<V +>{
      s2 = ld s;
      s3 = force? s2;
      checkMissing(s3);
      return s3;
    };
    p36 = prom<V +>{
      m6 = ld m;
      m7 = force? m6;
      checkMissing(m7);
      return m7;
    };
    r95 = dyn regmatches1(p35, p36);
    check L105() else D73();
  D73():
    deopt 326 [r95];
  L105():
    lapply = ldf lapply;
    check L106() else D74();
  D74():
    deopt 328 [];
  L106():
    p41 = prom<V +>{
      regmatches2 = ldf regmatches;
      p37 = prom<V +>{
        s4 = ld s;
        s5 = force? s4;
        checkMissing(s5);
        return s5;
      };
      p40 = prom<V +>{
        gregexpr2 = ldf gregexpr;
        p38 = prom<V +>{
          pattern2 = ld pattern;
          pattern3 = force? pattern2;
          checkMissing(pattern3);
          return pattern3;
        };
        p39 = prom<V +>{
          s6 = ld s;
          s7 = force? s6;
          checkMissing(s7);
          return s7;
        };
        r99 = dyn gregexpr2(p38, p39);
        return r99;
      };
      r101 = dyn regmatches2(p37, p40);
      return r101;
    };
    p42 = prom<V +>{
      r103 = clos inner3708401697;
      return r103;
    };
    r105 = dyn lapply(p41, p42);
    check L107() else D75();
  D75():
    deopt 331 [r105];
  L107():
    popenv;
    return r105;
  }
}
fun inner2785182944(pattern, x, `ignore.case`, perl, value, fixed, useBytes, invert) {
  (reg pattern:*, reg x:*, reg ignore_case:*, reg perl:*, reg value:*, reg fixed:*, reg useBytes:*, reg invert:*) -+> V { var pattern:*, var x:*, var `ignore.case`:*, reg ignore_case_isMissing:L, reg ignore_case_orDefault:*, var perl:*, reg perl_isMissing:L, reg perl_orDefault:*, var value:*, reg value_isMissing:L, reg value_orDefault:*, var fixed:*, reg fixed_isMissing:L, reg fixed_orDefault:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, var invert:*, reg invert_isMissing:L, reg invert_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg pattern1:*, reg pattern2:V, reg as_character:cls, reg r2:V, reg is_factor:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r4:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c5:L, reg r6:V, reg levels:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r8:V, reg length:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg c8:L, reg r13:V, reg r14:V, reg x5:*, reg x6:V, reg length1:cls, reg r15:V, reg r16:V, reg c9:L, reg c10:V, reg c12:L, reg c14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg c17:L, reg r18:V, reg pattern3:*, reg pattern4:V, reg c18:L, reg c20:L, reg pattern6:V, reg dr:V, reg dc:L, reg dx:V, reg c22:L, reg dx1:V, reg __:cls, reg r19:V, reg is_na:cls, reg r20:V, reg r21:V, reg c23:L, reg c24:V, reg c26:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg suppressWarnings:cls, reg grep:cls, reg pattern7:*, reg pattern8:V, reg p2:p(V +), reg ignore_case1:*, reg ignore_case2:V, reg p3:p(V +), reg perl1:*, reg perl2:V, reg p4:p(V +), reg value1:*, reg value2:V, reg p5:p(V +), reg fixed1:*, reg fixed2:V, reg p6:p(V +), reg useBytes1:*, reg useBytes2:V, reg p7:p(V +), reg invert1:*, reg invert2:V, reg p8:p(V +), reg r31:V, reg p9:p(V +), reg r33:V, reg c27:L, reg logical:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg levx:*, reg levx1:V, reg length2:cls, reg r36:V, reg p10:p(V +), reg r38:V, reg l:*, reg c28:L, reg r40:L, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg grep1:cls, reg pattern9:*, reg pattern10:V, reg p11:p(V +), reg levx2:*, reg levx3:V, reg p12:p(V +), reg ignore_case3:*, reg ignore_case4:V, reg p13:p(V +), reg perl3:*, reg perl4:V, reg p14:p(V +), reg fixed3:*, reg fixed4:V, reg p15:p(V +), reg useBytes3:*, reg useBytes4:V, reg p16:p(V +), reg invert3:*, reg invert4:V, reg p17:p(V +), reg r50:V, reg ___:cls, reg r51:V, reg idx:*, reg idx1:V, reg c29:L, reg idx3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg x7:*, reg x8:V, reg __1:cls, reg r52:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r53:V, reg r54:V, reg idxna:*, reg idxna1:V, reg length3:cls, reg r55:V, reg c30:L, reg l3:*, reg c31:L, reg r57:L, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r59:L, reg dx7:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r64:V, reg r65:L, reg l8:*, reg r66:L, reg r67:V, reg x9:*, reg x10:V, reg is_na1:cls, reg r68:V, reg ___1:cls, reg r69:V, reg which:cls, reg idx4:*, reg idx5:V, reg p18:p(V +), reg r72:V, reg value3:*, reg value4:V, reg c32:L, reg x11:*, reg x12:V, reg c33:L, reg x14:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg idx6:*, reg idx7:V, reg __2:cls, reg r73:V, reg structure:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r74:V, reg r75:V, reg idx8:*, reg idx9:V, reg as_character1:cls, reg r76:V, reg p19:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r78:V, reg r79:V, reg idx10:*, reg idx11:V, reg names:cls, reg r80:V, reg p20:p(V +), reg r82:V, reg idx12:*, reg idx13:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r83:V, reg r84:V, reg x15:*, reg x16:V, reg c34:L, reg r85:V, reg c35:L, reg structure1:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r86:V, reg r87:V, reg x17:*, reg x18:V, reg as_character2:cls, reg r88:V, reg p21:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r90:V, reg r91:V, reg x19:*, reg x20:V, reg names1:cls, reg r92:V, reg p22:p(V +), reg r94:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r96:V, reg r97:V, reg pattern11:*, reg pattern12:V, reg x21:*, reg x22:V, reg ignore_case5:*, reg ignore_case6:V, reg value5:*, reg value6:V, reg perl5:*, reg perl6:V, reg fixed5:*, reg fixed6:V, reg useBytes5:*, reg useBytes6:V, reg invert5:*, reg invert6:V, reg grep2:cls, reg r98:V |
    mkenv;
    st pattern = pattern;
    st x = x;
    ignore_case_isMissing = missing.0(ignore_case);
    if ignore_case_isMissing then L0(FALSE) else L0(ignore_case);
  L0(ignore_case_orDefault):
    st `ignore.case` = ignore_case_orDefault;
    perl_isMissing = missing.0(perl);
    if perl_isMissing then L1(FALSE) else L1(perl);
  L1(perl_orDefault):
    st perl = perl_orDefault;
    value_isMissing = missing.0(value);
    if value_isMissing then L2(FALSE) else L2(value);
  L2(value_orDefault):
    st value = value_orDefault;
    fixed_isMissing = missing.0(fixed);
    if fixed_isMissing then L3(FALSE) else L3(fixed);
  L3(fixed_orDefault):
    st fixed = fixed_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L4(FALSE) else L4(useBytes);
  L4(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    invert_isMissing = missing.0(invert);
    if invert_isMissing then L5(FALSE) else L5(invert);
  L5(invert_orDefault):
    st invert = invert_orDefault;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L6(r1):
    st pattern = r1;
    is_factor = ldf `is.factor`;
    check L32() else D2();
  L28():
    pattern1 = ld pattern;
    check L30() else D0();
  L29():
    r = dyn base(<sym pattern>);
    goto L6(r);
  D0():
    deopt 2 [pattern1];
  D2():
    deopt 8 [];
  L30():
    pattern2 = force? pattern1;
    checkMissing(pattern2);
    as_character = ldf `as.character` in base;
    r2 = dyn as_character(pattern2);
    check L31() else D1();
  L32():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r4 = dyn is_factor(p);
    check L33() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 10 [r4];
  L31():
    goto L6(r2);
  L33():
    c = `as.logical`(r4);
    if c then L34() else L7(c);
  L7(c2):
    c12 = `as.logical`(c2);
    if c12 then L45() else L10(c12);
  L34():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L8(c5, r6):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  L10(c14):
    c26 = `as.logical`(c14);
    if c26 then L54() else L13();
  L35():
    levels = ldf levels;
    check L37() else D4();
  L36():
    r5 = dyn base1(<lang `<-`(levx, levels(x))>);
    goto L8(c, r5);
  L45():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  D4():
    deopt 14 [c];
  L9(c8, r13, r14):
    r16 = `<`(r13, r14);
    c9 = `as.logical`(r16);
    c10 = `&&`(c8, c9);
    goto L7(c10);
  L11(c17, r18):
    r21 = `!`(r18);
    c23 = `as.logical`(r21);
    c24 = `&&`(c17, c23);
    goto L10(c24);
  L13():
    sym10 = ldf `is.character`;
    base10 = ldf `is.character` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L98() else L99();
  L37():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r8 = dyn levels(p1);
    check L38() else D5();
  L40():
    x5 = ld x;
    check L42() else D7();
  L41():
    r12 = dyn base2(<sym x>);
    goto L9(c5, r6, r12);
  L46():
    pattern3 = ld pattern;
    check L48() else D9();
  L47():
    r17 = dyn base3(<lang `[`(pattern, 1)>);
    goto L11(c12, r17);
  L54():
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  D5():
    deopt 16 [c, r8];
  D7():
    deopt 21 [c5, r6, x5];
  D9():
    deopt 29 [c12, pattern3];
  L14(r23):
    st value = r23;
    logical = ldf logical;
    check L59() else D13();
  L24(r84):
    r85 = `!`(r84);
    c35 = `as.logical`(r85);
    if c35 then L101() else L25();
  L38():
    st levx = r8;
    length = ldf length in base;
    r9 = dyn length(r8);
    check L39() else D6();
  L42():
    x6 = force? x5;
    checkMissing(x6);
    length1 = ldf length in base;
    r15 = dyn length1(x6);
    check L43() else D8();
  L48():
    pattern4 = force? pattern3;
    checkMissing(pattern4);
    c18 = `is.object`(pattern4);
    if c18 then L49() else L50(c12, pattern4);
  L55():
    suppressWarnings = ldf suppressWarnings;
    check L57() else D11();
  L56():
    r22 = dyn base4(<lang `<-`(idxna, suppressWarnings(grep(pattern, NA_STR, ignore.case, perl, value, fixed, useBytes, invert)))>);
    goto L14(r22);
  L98():
    x15 = ld x;
    check L100() else D31();
  L99():
    r83 = dyn base10(<sym x>);
    goto L24(r83);
  D6():
    deopt 19 [c, r9];
  D8():
    deopt 24 [c5, r6, r15];
  D11():
    deopt 40 [];
  D13():
    deopt 47 [];
  D31():
    deopt 114 [x15];
  L12(c22, dx1):
    is_na = ldf `is.na` in base;
    r20 = dyn is_na(dx1);
    check L52() else D10();
  L25():
    goto L26();
  L26():
    sym13 = ldf `.Internal`;
    base13 = ldf `.Internal` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L105() else L106();
  L39():
    goto L8(c, r9);
  L43():
    goto L9(c5, r6, r15);
  L49():
    dr = tryDispatchBuiltin.1("[", pattern4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L51() else L50(c12, dr);
  L50(c20, pattern6):
    __ = ldf `[` in base;
    r19 = dyn __(pattern6, 1);
    goto L12(c20, r19);
  L57():
    p9 = prom<V +>{
      grep = ldf grep;
      p2 = prom<V +>{
        pattern7 = ld pattern;
        pattern8 = force? pattern7;
        checkMissing(pattern8);
        return pattern8;
      };
      p3 = prom<V +>{
        ignore_case1 = ld `ignore.case`;
        ignore_case2 = force? ignore_case1;
        checkMissing(ignore_case2);
        return ignore_case2;
      };
      p4 = prom<V +>{
        perl1 = ld perl;
        perl2 = force? perl1;
        checkMissing(perl2);
        return perl2;
      };
      p5 = prom<V +>{
        value1 = ld value;
        value2 = force? value1;
        checkMissing(value2);
        return value2;
      };
      p6 = prom<V +>{
        fixed1 = ld fixed;
        fixed2 = force? fixed1;
        checkMissing(fixed2);
        return fixed2;
      };
      p7 = prom<V +>{
        useBytes1 = ld useBytes;
        useBytes2 = force? useBytes1;
        checkMissing(useBytes2);
        return useBytes2;
      };
      p8 = prom<V +>{
        invert1 = ld invert;
        invert2 = force? invert1;
        checkMissing(invert2);
        return invert2;
      };
      r31 = dyn grep(p2, NA_STR, p3, p4, p5, p6, p7, p8);
      return r31;
    };
    r33 = dyn suppressWarnings(p9);
    check L58() else D12();
  L59():
    p10 = prom<V +>{
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      levx = ld levx;
      levx1 = force? levx;
      checkMissing(levx1);
      length2 = ldf length in base;
      r36 = dyn length2(levx1);
      goto L0(r36);
    L2():
      r34 = dyn base5(<sym levx>);
      goto L0(r34);
    };
    r38 = dyn logical(p10);
    check L60() else D14();
  L100():
    x16 = force? x15;
    checkMissing(x16);
    c34 = `is.character`(x16);
    goto L24(c34);
  L101():
    structure1 = ldf structure;
    check L102() else D32();
  D10():
    deopt 35 [c22, r20];
  D12():
    deopt 42 [r33];
  D14():
    deopt 49 [r38];
  D32():
    deopt 119 [];
  L27(r97):
    popenv;
    return r97;
  L51():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(c12, dx);
  L52():
    goto L11(c22, r20);
  L58():
    st idxna = r33;
    c27 = `is.character`(r33);
    goto L14(c27);
  L60():
    st idx = r38;
    l = ld idx;
    c28 = `is.object`(l);
    if c28 then L61() else L62(TRUE, l);
  L102():
    p21 = prom<V +>{
      sym11 = ldf `as.character`;
      base11 = ldf `as.character` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r87):
      return r87;
    L1():
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      as_character2 = ldf `as.character` in base;
      r88 = dyn as_character2(x18);
      goto L0(r88);
    L2():
      r86 = dyn base11(<sym x>);
      goto L0(r86);
    };
    p22 = prom<V +>{
      sym12 = ldf names;
      base12 = ldf names in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r91):
      return r91;
    L1():
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      names1 = ldf names in base;
      r92 = dyn names1(x20);
      goto L0(r92);
    L2():
      r90 = dyn base12(<sym x>);
      goto L0(r90);
    };
    r94 = dyn structure1[, names](p21, p22);
    check L103() else D33();
  L105():
    pattern11 = ld pattern;
    check L107() else D34();
  L106():
    r96 = dyn base13(<lang grep(pattern, x, ignore.case, value, perl, fixed, useBytes, invert)>);
    goto L27(r96);
  D33():
    deopt 123 [r94];
  D34():
    deopt 129 [pattern11];
  L15(dx3):
    st idx = dx3;
    idx = ld idx;
    check L66() else D17();
  L61():
    dr2 = tryDispatchBuiltin.0("[<-", l, TRUE);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L63() else L62(TRUE, dr2);
  L62(r40, l2):
    grep1 = ldf grep;
    check L64() else D15();
  L103():
    st x = r94;
    goto L26();
  L107():
    pattern12 = force? pattern11;
    checkMissing(pattern12);
    x21 = ld x;
    check L108() else D35();
  D15():
    deopt 55 [r40, l2, TRUE];
  D17():
    deopt 67 [idx];
  D35():
    deopt 131 [x21];
  L63():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx2);
  L64():
    p11 = prom<V +>{
      pattern9 = ld pattern;
      pattern10 = force? pattern9;
      checkMissing(pattern10);
      return pattern10;
    };
    p12 = prom<V +>{
      levx2 = ld levx;
      levx3 = force? levx2;
      checkMissing(levx3);
      return levx3;
    };
    p13 = prom<V +>{
      ignore_case3 = ld `ignore.case`;
      ignore_case4 = force? ignore_case3;
      checkMissing(ignore_case4);
      return ignore_case4;
    };
    p14 = prom<V +>{
      perl3 = ld perl;
      perl4 = force? perl3;
      checkMissing(perl4);
      return perl4;
    };
    p15 = prom<V +>{
      fixed3 = ld fixed;
      fixed4 = force? fixed3;
      checkMissing(fixed4);
      return fixed4;
    };
    p16 = prom<V +>{
      useBytes3 = ld useBytes;
      useBytes4 = force? useBytes3;
      checkMissing(useBytes4);
      return useBytes4;
    };
    p17 = prom<V +>{
      invert3 = ld invert;
      invert4 = force? invert3;
      checkMissing(invert4);
      return invert4;
    };
    r50 = dyn grep1(p11, p12, p13, p14, FALSE, p15, p16, p17);
    check L65() else D16();
  L66():
    idx1 = force? idx;
    checkMissing(idx1);
    c29 = `is.object`(idx1);
    if c29 then L67() else L68(idx1);
  L108():
    x22 = force? x21;
    checkMissing(x22);
    ignore_case5 = ld `ignore.case`;
    check L109() else D36();
  D16():
    deopt 64 [r40, l2, TRUE, r50];
  D36():
    deopt 133 [ignore_case5];
  L16(dx5):
    st idx = dx5;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L71() else L72();
  L65():
    ___ = ldf `[<-` in base;
    r51 = dyn ___(l2, TRUE, r50);
    goto L15(r51);
  L67():
    dr4 = tryDispatchBuiltin.1("[", idx1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L69() else L68(dr4);
  L68(idx3):
    x7 = ld x;
    check L70() else D18();
  L109():
    ignore_case6 = force? ignore_case5;
    checkMissing(ignore_case6);
    value5 = ld value;
    check L110() else D37();
  D18():
    deopt 69 [idx3, x7];
  D37():
    deopt 135 [value5];
  L17(r54):
    c30 = `as.logical`(r54);
    if c30 then L75() else L18();
  L69():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L16(dx4);
  L70():
    x8 = force? x7;
    __1 = ldf `[` in base;
    r52 = dyn __1(idx3, x8);
    goto L16(r52);
  L71():
    idxna = ld idxna;
    check L73() else D19();
  L72():
    r53 = dyn base6(<sym idxna>);
    goto L17(r53);
  L110():
    value6 = force? value5;
    checkMissing(value6);
    perl5 = ld perl;
    check L111() else D38();
  D19():
    deopt 75 [idxna];
  D38():
    deopt 137 [perl5];
  L18():
    goto L21();
  L21():
    which = ldf which;
    check L84() else D23();
  L73():
    idxna1 = force? idxna;
    checkMissing(idxna1);
    length3 = ldf length in base;
    r55 = dyn length3(idxna1);
    check L74() else D20();
  L75():
    l3 = ld idx;
    c31 = `is.object`(l3);
    if c31 then L76() else L77(TRUE, l3);
  L111():
    perl6 = force? perl5;
    checkMissing(perl6);
    fixed5 = ld fixed;
    check L112() else D39();
  D20():
    deopt 78 [r55];
  D23():
    deopt 93 [];
  D39():
    deopt 139 [fixed5];
  L19(r59, dx7):
    st idx = dx7;
    goto L21();
  L74():
    goto L17(r55);
  L76():
    dr6 = tryDispatchBuiltin.0("[<-", l3, TRUE);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L78() else L77(TRUE, dr6);
  L77(r57, l5):
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L79() else L80();
  L84():
    p18 = prom<V +>{
      idx4 = ld idx;
      idx5 = force? idx4;
      checkMissing(idx5);
      return idx5;
    };
    r72 = dyn which(p18);
    check L85() else D24();
  L112():
    fixed6 = force? fixed5;
    checkMissing(fixed6);
    useBytes5 = ld useBytes;
    check L113() else D40();
  D24():
    deopt 95 [r72];
  D40():
    deopt 141 [useBytes5];
  L20(r65, l8, r66, r67):
    ___1 = ldf `[<-` in base;
    r69 = dyn ___1(l8, r66, r67);
    goto L19(r65, r69);
  L78():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L19(TRUE, dx6);
  L79():
    x9 = ld x;
    check L81() else D21();
  L80():
    r64 = dyn base7(<sym x>);
    goto L20(r57, l5, TRUE, r64);
  L85():
    st idx = r72;
    value3 = ld value;
    check L86() else D25();
  L113():
    useBytes6 = force? useBytes5;
    checkMissing(useBytes6);
    invert5 = ld invert;
    check L114() else D41();
  D21():
    deopt 84 [r57, l5, TRUE, x9];
  D25():
    deopt 97 [value3];
  D41():
    deopt 143 [invert5];
  L81():
    x10 = force? x9;
    checkMissing(x10);
    is_na1 = ldf `is.na` in base;
    r68 = dyn is_na1(x10);
    check L82() else D22();
  L86():
    value4 = force? value3;
    checkMissing(value4);
    c32 = `as.logical`(value4);
    if c32 then L87() else L22();
  L114():
    invert6 = force? invert5;
    checkMissing(invert6);
    grep2 = ldf grep in base;
    r98 = dyn grep2(pattern12, x22, ignore_case6, value6, perl6, fixed6, useBytes6, invert6);
    check L115() else D42();
  D22():
    deopt 87 [r57, l5, TRUE, r68];
  D42():
    deopt 146 [r98];
  L22():
    idx12 = ld idx;
    check L96() else D30();
  L82():
    goto L20(r57, l5, TRUE, r68);
  L87():
    x11 = ld x;
    check L88() else D26();
  L115():
    goto L27(r98);
  D26():
    deopt 99 [x11];
  D30():
    deopt 111 [idx12];
  L88():
    x12 = force? x11;
    checkMissing(x12);
    c33 = `is.object`(x12);
    if c33 then L89() else L90(x12);
  L96():
    idx13 = force? idx12;
    checkMissing(idx13);
    popenv;
    return idx13;
  L23(dx9):
    st idx = dx9;
    structure = ldf structure;
    check L93() else D28();
  L89():
    dr8 = tryDispatchBuiltin.1("[", x12);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L91() else L90(dr8);
  L90(x14):
    idx6 = ld idx;
    check L92() else D27();
  D27():
    deopt 101 [x14, idx6];
  D28():
    deopt 106 [];
  L91():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L23(dx8);
  L92():
    idx7 = force? idx6;
    __2 = ldf `[` in base;
    r73 = dyn __2(x14, idx7);
    goto L23(r73);
  L93():
    p19 = prom<V +>{
      sym8 = ldf `as.character`;
      base8 = ldf `as.character` in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r75):
      return r75;
    L1():
      idx8 = ld idx;
      idx9 = force? idx8;
      checkMissing(idx9);
      as_character1 = ldf `as.character` in base;
      r76 = dyn as_character1(idx9);
      goto L0(r76);
    L2():
      r74 = dyn base8(<sym idx>);
      goto L0(r74);
    };
    p20 = prom<V +>{
      sym9 = ldf names;
      base9 = ldf names in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r79):
      return r79;
    L1():
      idx10 = ld idx;
      idx11 = force? idx10;
      checkMissing(idx11);
      names = ldf names in base;
      r80 = dyn names(idx11);
      goto L0(r80);
    L2():
      r78 = dyn base9(<sym idx>);
      goto L0(r78);
    };
    r82 = dyn structure[, names](p19, p20);
    check L94() else D29();
  D29():
    deopt 110 [r82];
  L94():
    popenv;
    return r82;
  }
}
fun inner4151784751(env, pattern) {
  (reg env:*, reg pattern:*) -+> V { var env:*, var pattern:*, reg ls:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env1:*, reg env2:V, reg as_environment:cls, reg r2:V, reg p:p(V +), reg r4:V, reg nms:*, reg nms1:V, reg c:L, reg nms3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg nms6:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg nms9:V, reg r8:V, reg nms10:*, reg nms11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg nms14:V, reg r10:V, reg c1:cls, reg r11:V, reg match:cls, reg r12:V, reg is_na:cls, reg r13:V, reg __:cls, reg r14:V, reg sapply:cls, reg nms15:*, reg nms16:V, reg p1:p(V +), reg r16:cls, reg p2:p(V +), reg r18:V, reg sapply1:cls, reg aa:*, reg aa1:V, reg p3:p(V +), reg r20:cls, reg p4:p(V +), reg r22:V, reg aa2:*, reg aa3:V, reg c2:L, reg aa5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg iw:*, reg iw1:V, reg __1:cls, reg r23:V |
    mkenv;
    st env = env;
    st pattern = pattern;
    ls = ldf ls;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      sym = ldf `as.environment`;
      base = ldf `as.environment` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      as_environment = ldf `as.environment` in base;
      r2 = dyn as_environment(env2);
      goto L0(r2);
    L2():
      r = dyn base(<sym env>);
      goto L0(r);
    };
    r4 = dyn ls[envir](p);
    check L6() else D1();
  D1():
    deopt 4 [r4];
  L6():
    st nms = r4;
    nms = ld nms;
    check L7() else D2();
  D2():
    deopt 6 [nms];
  L7():
    nms1 = force? nms;
    checkMissing(nms1);
    c = `is.object`(nms1);
    if c then L8() else L9(nms1);
  L0(dx1):
    st nms = dx1;
    sapply = ldf sapply;
    check L21() else D7();
  L8():
    dr = tryDispatchBuiltin.1("[", nms1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(nms3):
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  D7():
    deopt 29 [];
  L1(nms6, r6):
    __ = ldf `[` in base;
    r14 = dyn __(nms6, r6);
    goto L0(r14);
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L11():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L12():
    r5 = dyn base1(<lang match(nms, c("F", "T"))>);
    goto L1(nms3, r5);
  L21():
    p1 = prom<V +>{
      nms15 = ld nms;
      nms16 = force? nms15;
      checkMissing(nms16);
      return nms16;
    };
    p2 = prom<V +>{
      r16 = clos inner2680913962;
      return r16;
    };
    r18 = dyn sapply(p1, p2);
    check L22() else D8();
  D8():
    deopt 32 [r18];
  L2(nms9, r8):
    is_na = ldf `is.na` in base;
    r13 = dyn is_na(r8);
    check L20() else D6();
  L13():
    nms10 = ld nms;
    check L15() else D3();
  L14():
    r7 = dyn base2(<sym nms>, <lang c("F", "T")>);
    goto L2(nms3, r7);
  L22():
    st aa = r18;
    sapply1 = ldf sapply;
    check L23() else D9();
  D3():
    deopt 12 [nms3, nms10];
  D6():
    deopt 25 [nms9, r13];
  D9():
    deopt 35 [];
  L15():
    nms11 = force? nms10;
    checkMissing(nms11);
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L16() else L17();
  L20():
    goto L1(nms9, r13);
  L23():
    p3 = prom<V +>{
      aa = ld aa;
      aa1 = force? aa;
      checkMissing(aa1);
      return aa1;
    };
    p4 = prom<V +>{
      r20 = clos inner119611165;
      return r20;
    };
    r22 = dyn sapply1(p3, p4);
    check L24() else D10();
  D10():
    deopt 38 [r22];
  L3(nms14, r10):
    match = ldf match in base;
    r12 = dyn match(nms11, r10, NA_INT, NULL);
    check L19() else D5();
  L16():
    c1 = ldf c in base;
    r11 = dyn c1("F", "T");
    check L18() else D4();
  L17():
    r9 = dyn base3("F", "T");
    goto L3(nms3, r9);
  L24():
    st iw = r22;
    aa2 = ld aa;
    check L25() else D11();
  D4():
    deopt 19 [nms3, r11];
  D5():
    deopt 23 [nms14, r12];
  D11():
    deopt 40 [aa2];
  L18():
    goto L3(nms3, r11);
  L19():
    goto L2(nms14, r12);
  L25():
    aa3 = force? aa2;
    checkMissing(aa3);
    c2 = `is.object`(aa3);
    if c2 then L26() else L27(aa3);
  L4(dx3):
    popenv;
    return dx3;
  L26():
    dr2 = tryDispatchBuiltin.1("[", aa3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(dr2);
  L27(aa5):
    iw = ld iw;
    check L29() else D12();
  D12():
    deopt 42 [aa5, iw];
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L29():
    iw1 = force? iw;
    __1 = ldf `[` in base;
    r23 = dyn __1(aa5, iw1);
    goto L4(r23);
  }
}
fun inner2680913962(`.`) {
  (reg __:*) -+> V { var `.`:*, reg get:cls, reg __1:*, reg __2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg o:*, reg o1:V, reg is_function:cls, reg r4:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg formals:cls, reg o2:*, reg o3:V, reg p1:p(V +), reg r8:V, reg names:cls, reg r9:V |
    mkenv;
    st `.` = __;
    get = ldf get;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      __1 = ld `.`;
      __2 = force? __1;
      checkMissing(__2);
      return __2;
    };
    r1 = dyn get(p);
    check L4() else D1();
  D1():
    deopt 3 [r1];
  L4():
    st o = r1;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r3):
    c = `as.logical`(r3);
    if c then L9() else L1();
  L5():
    o = ld o;
    check L7() else D2();
  L6():
    r2 = dyn base(<sym o>);
    goto L0(r2);
  D2():
    deopt 7 [o];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L7():
    o1 = force? o;
    checkMissing(o1);
    is_function = ldf `is.function` in base;
    r4 = dyn is_function(o1);
    check L8() else D3();
  L9():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  D3():
    deopt 10 [r4];
  L2(r6):
    popenv;
    return r6;
  L8():
    goto L0(r4);
  L10():
    formals = ldf formals;
    check L12() else D4();
  L11():
    r5 = dyn base1(<lang formals(o)>);
    goto L2(r5);
  D4():
    deopt 14 [];
  L12():
    p1 = prom<V +>{
      o2 = ld o;
      o3 = force? o2;
      checkMissing(o3);
      return o3;
    };
    r8 = dyn formals(p1);
    check L13() else D5();
  D5():
    deopt 16 [r8];
  L13():
    names = ldf names in base;
    r9 = dyn names(r8);
    check L14() else D6();
  D6():
    deopt 18 [r9];
  L14():
    goto L2(r9);
  }
}
fun inner119611165(a) {
  (reg a:*) -+> V { var a:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg grepl:cls, reg pattern:*, reg pattern1:V, reg p:p(V +), reg a1:*, reg a2:V, reg p1:p(V +), reg r4:V, reg any:cls, reg r5:V |
    mkenv;
    st a = a;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    grepl = ldf grepl;
    check L3() else D0();
  L2():
    r = dyn base(<lang grepl(pattern, a, ignore.case=TRUE)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      pattern = ld pattern;
      pattern1 = force? pattern;
      checkMissing(pattern1);
      return pattern1;
    };
    p1 = prom<V +>{
      a1 = ld a;
      a2 = force? a1;
      checkMissing(a2);
      return a2;
    };
    r4 = dyn grepl[, , `ignore.case`](p, p1, TRUE);
    check L4() else D1();
  D1():
    deopt 8 [r4];
  L4():
    any = ldf any in base;
    r5 = dyn any(r4);
    check L5() else D2();
  D2():
    deopt 10 [r5];
  L5():
    goto L0(r5);
  }
}
fun inner731678829(res, result) {
  (reg res:*, reg result:*) -+> V { var res:*, var result:*, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p:p(V +), reg lapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg res1:*, reg res2:V, reg r3:I, reg p1:p(V +), reg r5:cls, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg result1:*, reg result2:V, reg attr:cls, reg r12:V, reg l:*, reg colnames__:cls, reg r13:V, reg m:*, reg m1:V |
    mkenv;
    st res = res;
    st result = result;
    do_call = ldf `do.call`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        sym = ldf seq_along;
        base = ldf seq_along in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r2):
        return r2;
      L1():
        res1 = ld res;
        res2 = force? res1;
        checkMissing(res2);
        r3 = seq_along(res2);
        goto L0(r3);
      L2():
        r1 = dyn base(<sym res>);
        goto L0(r1);
      };
      p2 = prom<V +>{
        r5 = clos inner3002224933;
        return r5;
      };
      r7 = dyn lapply(p1, p2);
      return r7;
    };
    r9 = dyn do_call(p, p3);
    check L2() else D1();
  D1():
    deopt 4 [r9];
  L2():
    st m = r9;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L3() else L4();
  L0(r11):
    l = ld m;
    colnames__ = ldf `colnames<-`;
    check L7() else D4();
  L3():
    result1 = ld result;
    check L5() else D2();
  L4():
    r10 = dyn base1(<sym result>, "capture.names");
    goto L0(r10);
  D2():
    deopt 8 [result1];
  D4():
    deopt 14 [r11, l, r11];
  L5():
    result2 = force? result1;
    checkMissing(result2);
    attr = ldf attr in base;
    r12 = dyn attr(result2, "capture.names");
    check L6() else D3();
  L7():
    r13 = dyn colnames__(l, NULL, r11);
    check L8() else D5();
  D3():
    deopt 12 [r12];
  D5():
    deopt 16 [r11, r13];
  L6():
    goto L0(r12);
  L8():
    st m = r13;
    m = ld m;
    check L9() else D6();
  D6():
    deopt 18 [m];
  L9():
    m1 = force? m;
    checkMissing(m1);
    popenv;
    return m1;
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg result:*, reg result1:V, reg c:L, reg result3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r:V, reg r1:V, reg c1:L, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg result4:*, reg result5:V, reg attr:cls, reg r6:V, reg c2:L, reg r8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i3:*, reg i4:V, reg __1:cls, reg r9:V, reg substring:cls, reg res:*, reg res1:V, reg c3:L, reg res3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i5:*, reg i6:V, reg __2:cls, reg r10:V, reg p:p(V +), reg st:*, reg st1:V, reg p1:p(V +), reg st2:*, reg st3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg st6:V, reg r14:V, reg result6:*, reg result7:V, reg attr1:cls, reg r15:V, reg c4:L, reg st8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg st10:V, reg dx7:V, reg i7:*, reg i8:V, reg __3:cls, reg r18:V, reg r19:V, reg r20:V, reg p2:p(V +), reg r22:V |
    mkenv;
    st i = i;
    result = ld result;
    check L5() else D0();
  D0():
    deopt 0 [result];
  L5():
    result1 = force? result;
    checkMissing(result1);
    c = `is.object`(result1);
    if c then L6() else L7(result1);
  L0(dx1):
    r1 = `==`(dx1, -1.0);
    c1 = `as.logical`(r1);
    if c1 then L10() else L1();
  L6():
    dr = tryDispatchBuiltin.1("[", result1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(result3):
    i1 = ld i;
    check L9() else D1();
  D1():
    deopt 2 [result3, i1];
  L1():
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L9():
    i2 = force? i1;
    __ = ldf `[` in base;
    r = dyn __(result3, i2);
    goto L0(r);
  L10():
    popenv;
    return "";
  L3(r5):
    c2 = `is.object`(r5);
    if c2 then L17() else L18(r5);
  L13():
    result4 = ld result;
    check L15() else D2();
  L14():
    r4 = dyn base(<sym result>, "capture.start");
    goto L3(r4);
  D2():
    deopt 14 [result4];
  L4(dx3):
    st st = dx3;
    substring = ldf substring;
    check L21() else D5();
  L15():
    result5 = force? result4;
    checkMissing(result5);
    attr = ldf attr in base;
    r6 = dyn attr(result5, "capture.start");
    check L16() else D3();
  L17():
    dr2 = tryDispatchBuiltin.1("[", r5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L19() else L18(dr2);
  L18(r8):
    i3 = ld i;
    check L20() else D4();
  D3():
    deopt 18 [r6];
  D4():
    deopt 19 [r8, i3];
  D5():
    deopt 26 [];
  L16():
    goto L3(r6);
  L19():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L20():
    i4 = force? i3;
    __1 = ldf `[` in base;
    r9 = dyn __1(r5, i4, <missing>);
    goto L4(r9);
  L21():
    p = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      c3 = `is.object`(res1);
      if c3 then L1() else L2(res1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", res1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(res3):
      i5 = ld i;
      i6 = force? i5;
      __2 = ldf `[` in base;
      r10 = dyn __2(res3, i6);
      goto L0(r10);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p1 = prom<V +>{
      st = ld st;
      st1 = force? st;
      checkMissing(st1);
      return st1;
    };
    p2 = prom<V +>{
      st2 = ld st;
      st3 = force? st2;
      checkMissing(st3);
      sym1 = ldf attr;
      base1 = ldf attr in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(st6, r14):
      c4 = `is.object`(r14);
      if c4 then L4() else L5(st6);
    L2():
      result6 = ld result;
      result7 = force? result6;
      checkMissing(result7);
      attr1 = ldf attr in base;
      r15 = dyn attr1(result7, "capture.length");
      goto L0(st3, r15);
    L3():
      r13 = dyn base1(<sym result>, "capture.length");
      goto L0(st3, r13);
    L1(st10, dx7):
      r19 = `+`(st10, dx7);
      r20 = `-`(r19, 1.0);
      return r20;
    L4():
      dr6 = tryDispatchBuiltin.1("[", r14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L6() else L5(st6);
    L5(st8):
      i7 = ld i;
      i8 = force? i7;
      __3 = ldf `[` in base;
      r18 = dyn __3(r14, i8, <missing>);
      goto L1(st8, r18);
    L6():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L1(st6, dx6);
    };
    r22 = dyn substring(p, p1, p2);
    check L22() else D6();
  D6():
    deopt 30 [r22];
  L22():
    popenv;
    return r22;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg regexec:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p1:p(V +), reg lapply:cls, reg regmatches:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg m:*, reg m1:V, reg p3:p(V +), reg r5:V, reg p4:p(V +), reg __:*, reg __1:V, reg p5:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg c:cls, reg r10:V, reg p6:p(V +), reg r12:V, reg p7:p(V +), reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg c1:cls, reg r17:V, reg l:*, reg colnames__:cls, reg r18:V, reg parts:*, reg parts1:V |
    mkenv;
    st x = x;
    regexec = ldf regexec;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn regexec("^(([^:]+)://)?([^:/]+)(:([0-9]+))?(/.*)", p);
    check L2() else D1();
  D1():
    deopt 4 [r1];
  L2():
    st m = r1;
    do_call = ldf `do.call`;
    check L3() else D2();
  D2():
    deopt 7 [];
  L3():
    p1 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p7 = prom<V +>{
      lapply = ldf lapply;
      p4 = prom<V +>{
        regmatches = ldf regmatches;
        p2 = prom<V +>{
          x3 = ld x;
          x4 = force? x3;
          checkMissing(x4);
          return x4;
        };
        p3 = prom<V +>{
          m = ld m;
          m1 = force? m;
          checkMissing(m1);
          return m1;
        };
        r5 = dyn regmatches(p2, p3);
        return r5;
      };
      p5 = prom<V +>{
        __ = ld `[`;
        __1 = force? __;
        checkMissing(__1);
        return __1;
      };
      p6 = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r9):
        return r9;
      L1():
        c = ldf c in base;
        r10 = dyn c(3, 4, 6, 7);
        goto L0(r10);
      L2():
        r8 = dyn base(3, 4, 6, 7);
        goto L0(r8);
      };
      r12 = dyn lapply(p4, p5, p6);
      return r12;
    };
    r14 = dyn do_call(p1, p7);
    check L4() else D3();
  D3():
    deopt 10 [r14];
  L4():
    st parts = r14;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L0(r16):
    l = ld parts;
    colnames__ = ldf `colnames<-`;
    check L8() else D5();
  L5():
    c1 = ldf c in base;
    r17 = dyn c1("protocol", "host", "port", "path");
    check L7() else D4();
  L6():
    r15 = dyn base1("protocol", "host", "port", "path");
    goto L0(r15);
  D4():
    deopt 19 [r17];
  D5():
    deopt 21 [r16, l, r16];
  L7():
    goto L0(r17);
  L8():
    r18 = dyn colnames__(l, NULL, r16);
    check L9() else D6();
  D6():
    deopt 23 [r16, r18];
  L9():
    st parts = r18;
    parts = ld parts;
    check L10() else D7();
  D7():
    deopt 25 [parts];
  L10():
    parts1 = force? parts;
    checkMissing(parts1);
    popenv;
    return parts1;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg regmatches:cls, reg e1:*, reg e2:V, reg p:p(V +), reg regexec:cls, reg pattern:*, reg pattern1:V, reg p1:p(V +), reg e3:*, reg e4:V, reg p2:p(V +), reg r3:V, reg p3:p(V +), reg r5:V |
    mkenv;
    st e = e;
    regmatches = ldf regmatches;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    p3 = prom<V +>{
      regexec = ldf regexec;
      p1 = prom<V +>{
        pattern = ld pattern;
        pattern1 = force? pattern;
        checkMissing(pattern1);
        return pattern1;
      };
      p2 = prom<V +>{
        e3 = ld e;
        e4 = force? e3;
        checkMissing(e4);
        return e4;
      };
      r3 = dyn regexec(p1, p2);
      return r3;
    };
    r5 = dyn regmatches(p, p3);
    check L1() else D1();
  D1():
    deopt 4 [r5];
  L1():
    popenv;
    return r5;
  }
}