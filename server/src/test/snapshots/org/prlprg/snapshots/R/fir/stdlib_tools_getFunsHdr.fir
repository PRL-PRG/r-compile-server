fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1598074944;
    st getFunsHdr = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1598074944(fpath, lines) {
  (reg fpath:*, reg lines:*) -+> V { var fpath:*, var lines:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg readLines:cls, reg fpath1:*, reg fpath2:V, reg p:p(V +), reg r4:V, reg basename:cls, reg fpath3:*, reg fpath4:V, reg p1:p(V +), reg r6:V, reg ifelse:cls, reg grepl:cls, reg lines1:*, reg lines2:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg lines3:*, reg lines4:V, reg p4:p(V +), reg gsub:cls, reg lines5:*, reg lines6:V, reg p5:p(V +), reg r13:V, reg p6:p(V +), reg r15:V, reg lines7:*, reg lines8:V, reg c1:L, reg lines10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg grepl1:cls, reg lines11:*, reg lines12:V, reg p7:p(V +), reg r17:V, reg r18:V, reg __:cls, reg r19:V, reg ccE:cls, reg lines13:*, reg lines14:V, reg p8:p(V +), reg r21:V, reg dropBraces:cls, reg lines15:*, reg lines16:V, reg p9:p(V +), reg r23:V, reg gsub1:cls, reg lines17:*, reg lines18:V, reg p10:p(V +), reg r25:V, reg sub:cls, reg lines19:*, reg lines20:V, reg p11:p(V +), reg r27:V, reg gsub2:cls, reg lines21:*, reg lines22:V, reg p12:p(V +), reg r29:V, reg gregexec:cls, reg funcRegexp:*, reg funcRegexp1:V, reg p13:p(V +), reg lines23:*, reg lines24:V, reg p14:p(V +), reg r32:V, reg regmatches:cls, reg lines25:*, reg lines26:V, reg p15:p(V +), reg m:*, reg m1:V, reg p16:p(V +), reg r35:V, reg sapply:cls, reg v:*, reg v1:V, reg c2:L, reg v3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg lengths:cls, reg v4:*, reg v5:V, reg p17:p(V +), reg r37:V, reg r38:V, reg __1:cls, reg r39:V, reg p18:p(V +), reg __2:*, reg __3:V, reg p19:p(V +), reg r42:V, reg unique:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r43:V, reg r44:V, reg val:*, reg val1:V, reg as_character:cls, reg r45:V, reg p20:p(V +), reg r47:V, reg val2:*, reg val3:V, reg c3:L, reg val5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg _in_:cls, reg val6:*, reg val7:V, reg p21:p(V +), reg letters:*, reg letters1:V, reg p22:p(V +), reg r50:V, reg _in_1:cls, reg val8:*, reg val9:V, reg p23:p(V +), reg LETTERS:*, reg LETTERS1:V, reg p24:p(V +), reg r53:V, reg r54:V, reg r55:V, reg __4:cls, reg r56:V, reg val10:*, reg val11:V, reg c4:L, reg val13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg grepl2:cls, reg val14:*, reg val15:V, reg p25:p(V +), reg r58:V, reg r59:V, reg __5:cls, reg r60:V, reg val16:*, reg val17:V, reg c5:L, reg val19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg grepl3:cls, reg val20:*, reg val21:V, reg p26:p(V +), reg r62:V, reg r63:V, reg __6:cls, reg r64:V, reg val22:*, reg val23:V, reg c6:L, reg val25:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg grepl4:cls, reg val26:*, reg val27:V, reg p27:p(V +), reg r66:V, reg r67:V, reg __7:cls, reg r68:V, reg val28:*, reg val29:V |
    mkenv;
    st fpath = fpath;
    st lines = lines;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    c = `as.logical`(r1);
    if c then L10() else L1();
  L8():
    missing = ldf missing in base;
    r2 = dyn missing(<sym lines>);
    goto L0(r2);
  L9():
    r = dyn base(<sym lines>);
    goto L0(r);
  L1():
    st name = NULL;
    goto L2();
  L2():
    ifelse = ldf ifelse;
    check L16() else D4();
  L10():
    readLines = ldf readLines;
    check L11() else D0();
  D0():
    deopt 4 [];
  D4():
    deopt 17 [];
  L11():
    p = prom<V +>{
      fpath1 = ld fpath;
      fpath2 = force? fpath1;
      checkMissing(fpath2);
      return fpath2;
    };
    r4 = dyn readLines(p);
    check L12() else D1();
  L16():
    p3 = prom<V +>{
      grepl = ldf grepl;
      p2 = prom<V +>{
        lines1 = ld lines;
        lines2 = force? lines1;
        checkMissing(lines2);
        return lines2;
      };
      r9 = dyn grepl("^#", p2);
      return r9;
    };
    p4 = prom<V +>{
      lines3 = ld lines;
      lines4 = force? lines3;
      checkMissing(lines4);
      return lines4;
    };
    p6 = prom<V +>{
      gsub = ldf gsub;
      p5 = prom<V +>{
        lines5 = ld lines;
        lines6 = force? lines5;
        checkMissing(lines6);
        return lines6;
      };
      r13 = dyn gsub(".*\\s*NORET\\s*", " ", p5);
      return r13;
    };
    r15 = dyn ifelse(p3, p4, p6);
    check L17() else D5();
  D1():
    deopt 6 [r4];
  D5():
    deopt 21 [r15];
  L12():
    st lines = r4;
    basename = ldf basename;
    check L13() else D2();
  L17():
    st lines = r15;
    lines7 = ld lines;
    check L18() else D6();
  D2():
    deopt 9 [];
  D6():
    deopt 23 [lines7];
  L13():
    p1 = prom<V +>{
      fpath3 = ld fpath;
      fpath4 = force? fpath3;
      checkMissing(fpath4);
      return fpath4;
    };
    r6 = dyn basename(p1);
    check L14() else D3();
  L18():
    lines8 = force? lines7;
    checkMissing(lines8);
    c1 = `is.object`(lines8);
    if c1 then L19() else L20(lines8);
  D3():
    deopt 11 [r6];
  L3(dx1):
    st lines = dx1;
    ccE = ldf ccE;
    check L24() else D9();
  L14():
    st name = r6;
    goto L2();
  L19():
    dr = tryDispatchBuiltin.1("[", lines8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(lines10):
    grepl1 = ldf grepl;
    check L22() else D7();
  D7():
    deopt 26 [lines10];
  D9():
    deopt 34 [];
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L22():
    p7 = prom<V +>{
      lines11 = ld lines;
      lines12 = force? lines11;
      checkMissing(lines12);
      return lines12;
    };
    r17 = dyn grepl1("^#\\s*error", p7);
    check L23() else D8();
  L24():
    p8 = prom<V +>{
      lines13 = ld lines;
      lines14 = force? lines13;
      checkMissing(lines14);
      return lines14;
    };
    r21 = dyn ccE(p8);
    check L25() else D10();
  D8():
    deopt 29 [lines10, r17];
  D10():
    deopt 36 [r21];
  L23():
    r18 = `!`(r17);
    __ = ldf `[` in base;
    r19 = dyn __(lines10, r18);
    goto L3(r19);
  L25():
    st lines = r21;
    dropBraces = ldf dropBraces;
    check L26() else D11();
  D11():
    deopt 39 [];
  L26():
    p9 = prom<V +>{
      lines15 = ld lines;
      lines16 = force? lines15;
      checkMissing(lines16);
      return lines16;
    };
    r23 = dyn dropBraces(p9);
    check L27() else D12();
  D12():
    deopt 41 [r23];
  L27():
    st lines = r23;
    gsub1 = ldf gsub;
    check L28() else D13();
  D13():
    deopt 44 [];
  L28():
    p10 = prom<V +>{
      lines17 = ld lines;
      lines18 = force? lines17;
      checkMissing(lines18);
      return lines18;
    };
    r25 = dyn gsub1("\\s*(const|extern|long|unsigned)\\s*", "", p10);
    check L29() else D14();
  D14():
    deopt 48 [r25];
  L29():
    st lines = r25;
    sub = ldf sub;
    check L30() else D15();
  D15():
    deopt 51 [];
  L30():
    p11 = prom<V +>{
      lines19 = ld lines;
      lines20 = force? lines19;
      checkMissing(lines20);
      return lines20;
    };
    r27 = dyn sub("^\\s*(\\w*[(])", "void \\1", p11);
    check L31() else D16();
  D16():
    deopt 55 [r27];
  L31():
    st lines = r27;
    gsub2 = ldf gsub;
    check L32() else D17();
  D17():
    deopt 58 [];
  L32():
    p12 = prom<V +>{
      lines21 = ld lines;
      lines22 = force? lines21;
      checkMissing(lines22);
      return lines22;
    };
    r29 = dyn gsub2("\\(\\s*\\*\\s*(\\w+)\\s*\\)", "(\\1)", p12);
    check L33() else D18();
  D18():
    deopt 62 [r29];
  L33():
    st lines = r29;
    st funcRegexp = "^\\s*(?:(?:inline|static)\\s+){0,2}(?!else|typedef|return)\\w+\\s*\\*?\\s*\\(?(\\w+)\\)?\\s*\\([^0]+\\)?\\s*;?";
    gregexec = ldf gregexec;
    check L34() else D19();
  D19():
    deopt 68 [];
  L34():
    p13 = prom<V +>{
      funcRegexp = ld funcRegexp;
      funcRegexp1 = force? funcRegexp;
      checkMissing(funcRegexp1);
      return funcRegexp1;
    };
    p14 = prom<V +>{
      lines23 = ld lines;
      lines24 = force? lines23;
      checkMissing(lines24);
      return lines24;
    };
    r32 = dyn gregexec[, , perl](p13, p14, TRUE);
    check L35() else D20();
  D20():
    deopt 73 [r32];
  L35():
    st m = r32;
    regmatches = ldf regmatches;
    check L36() else D21();
  D21():
    deopt 76 [];
  L36():
    p15 = prom<V +>{
      lines25 = ld lines;
      lines26 = force? lines25;
      checkMissing(lines26);
      return lines26;
    };
    p16 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r35 = dyn regmatches(p15, p16);
    check L37() else D22();
  D22():
    deopt 79 [r35];
  L37():
    st v = r35;
    sapply = ldf sapply;
    check L38() else D23();
  D23():
    deopt 82 [];
  L38():
    p18 = prom<V +>{
      v = ld v;
      v1 = force? v;
      checkMissing(v1);
      c2 = `is.object`(v1);
      if c2 then L1() else L2(v1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", v1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(v3):
      lengths = ldf lengths;
      p17 = prom<V +>{
        v4 = ld v;
        v5 = force? v4;
        checkMissing(v5);
        return v5;
      };
      r37 = dyn lengths(p17);
      r38 = `>`(r37, 0.0);
      __1 = ldf `[` in base;
      r39 = dyn __1(v3, r38);
      goto L0(r39);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p19 = prom<V +>{
      __2 = ld `[[`;
      __3 = force? __2;
      checkMissing(__3);
      return __3;
    };
    r42 = dyn sapply(p18, p19, 2.0);
    check L39() else D24();
  D24():
    deopt 86 [r42];
  L39():
    st val = r42;
    unique = ldf unique;
    check L40() else D25();
  D25():
    deopt 89 [];
  L40():
    p20 = prom<V +>{
      sym1 = ldf `as.character`;
      base1 = ldf `as.character` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      val = ld val;
      val1 = force? val;
      checkMissing(val1);
      as_character = ldf `as.character` in base;
      r45 = dyn as_character(val1);
      goto L0(r45);
    L2():
      r43 = dyn base1(<sym val>);
      goto L0(r43);
    };
    r47 = dyn unique(p20);
    check L41() else D26();
  D26():
    deopt 91 [r47];
  L41():
    st val = r47;
    val2 = ld val;
    check L42() else D27();
  D27():
    deopt 93 [val2];
  L42():
    val3 = force? val2;
    checkMissing(val3);
    c3 = `is.object`(val3);
    if c3 then L43() else L44(val3);
  L4(dx5):
    st val = dx5;
    val10 = ld val;
    check L50() else D32();
  L43():
    dr4 = tryDispatchBuiltin.1("[", val3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L45() else L44(dr4);
  L44(val5):
    _in_ = ldf `%in%`;
    check L46() else D28();
  D28():
    deopt 96 [val5];
  D32():
    deopt 108 [val10];
  L45():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx4);
  L46():
    p21 = prom<V +>{
      val6 = ld val;
      val7 = force? val6;
      checkMissing(val7);
      return val7;
    };
    p22 = prom<V +>{
      letters = ld letters;
      letters1 = force? letters;
      checkMissing(letters1);
      return letters1;
    };
    r50 = dyn _in_(p21, p22);
    check L47() else D29();
  L50():
    val11 = force? val10;
    checkMissing(val11);
    c4 = `is.object`(val11);
    if c4 then L51() else L52(val11);
  D29():
    deopt 99 [val5, r50];
  L5(dx7):
    st val = dx7;
    val16 = ld val;
    check L56() else D35();
  L47():
    _in_1 = ldf `%in%`;
    check L48() else D30();
  L51():
    dr6 = tryDispatchBuiltin.1("[", val11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L53() else L52(dr6);
  L52(val13):
    grepl2 = ldf grepl;
    check L54() else D33();
  D30():
    deopt 100 [val5, r50];
  D33():
    deopt 111 [val13];
  D35():
    deopt 118 [val16];
  L48():
    p23 = prom<V +>{
      val8 = ld val;
      val9 = force? val8;
      checkMissing(val9);
      return val9;
    };
    p24 = prom<V +>{
      LETTERS = ld LETTERS;
      LETTERS1 = force? LETTERS;
      checkMissing(LETTERS1);
      return LETTERS1;
    };
    r53 = dyn _in_1(p23, p24);
    check L49() else D31();
  L53():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L5(dx6);
  L54():
    p25 = prom<V +>{
      val14 = ld val;
      val15 = force? val14;
      checkMissing(val15);
      return val15;
    };
    r58 = dyn grepl2("_t$", p25);
    check L55() else D34();
  L56():
    val17 = force? val16;
    checkMissing(val17);
    c5 = `is.object`(val17);
    if c5 then L57() else L58(val17);
  D31():
    deopt 103 [val5, r50, r53];
  D34():
    deopt 114 [val13, r58];
  L6(dx9):
    st val = dx9;
    val22 = ld val;
    check L62() else D38();
  L49():
    r54 = `||`(r50, r53);
    r55 = `!`(r54);
    __4 = ldf `[` in base;
    r56 = dyn __4(val5, r55);
    goto L4(r56);
  L55():
    r59 = `!`(r58);
    __5 = ldf `[` in base;
    r60 = dyn __5(val13, r59);
    goto L5(r60);
  L57():
    dr8 = tryDispatchBuiltin.1("[", val17);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L59() else L58(dr8);
  L58(val19):
    grepl3 = ldf grepl;
    check L60() else D36();
  D36():
    deopt 121 [val19];
  D38():
    deopt 128 [val22];
  L59():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L6(dx8);
  L60():
    p26 = prom<V +>{
      val20 = ld val;
      val21 = force? val20;
      checkMissing(val21);
      return val21;
    };
    r62 = dyn grepl3("user_(unif|norm)", p26);
    check L61() else D37();
  L62():
    val23 = force? val22;
    checkMissing(val23);
    c6 = `is.object`(val23);
    if c6 then L63() else L64(val23);
  D37():
    deopt 124 [val19, r62];
  L7(dx11):
    st val = dx11;
    val28 = ld val;
    check L68() else D41();
  L61():
    r63 = `!`(r62);
    __6 = ldf `[` in base;
    r64 = dyn __6(val19, r63);
    goto L6(r64);
  L63():
    dr10 = tryDispatchBuiltin.1("[", val23);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L65() else L64(dr10);
  L64(val25):
    grepl4 = ldf grepl;
    check L66() else D39();
  D39():
    deopt 131 [val25];
  D41():
    deopt 138 [val28];
  L65():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L7(dx10);
  L66():
    p27 = prom<V +>{
      val26 = ld val;
      val27 = force? val26;
      checkMissing(val27);
      return val27;
    };
    r66 = dyn grepl4("Quartz|Win32", p27);
    check L67() else D40();
  L68():
    val29 = force? val28;
    checkMissing(val29);
    popenv;
    return val29;
  D40():
    deopt 134 [val25, r66];
  L67():
    r67 = `!`(r66);
    __7 = ldf `[` in base;
    r68 = dyn __7(val25, r67);
    goto L7(r68);
  }
}