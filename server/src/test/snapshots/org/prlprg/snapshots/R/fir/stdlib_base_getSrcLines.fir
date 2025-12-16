fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1275459335;
    st getSrcLines = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1275459335(srcfile, first, last) {
  (reg srcfile:*, reg first:*, reg last:*) -+> V { var srcfile:*, var first:*, var last:*, reg first1:*, reg first2:V, reg last1:*, reg last2:V, reg r:V, reg c:L, reg character:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg srcfile1:*, reg srcfile2:V, reg inherits:cls, reg r6:V, reg c1:L, reg srcfile3:*, reg srcfile4:V, reg c2:L, reg srcfile6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg srcfile7:*, reg srcfile8:V, reg inherits1:cls, reg r10:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg srcfile9:*, reg srcfile10:V, reg c4:L, reg srcfile12:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg r13:V, reg c5:V, reg c6:L, reg srcfile13:*, reg srcfile14:V, reg c7:L, reg srcfile16:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg grepl:cls, reg lines:*, reg lines1:V, reg p:p(V +), reg r18:V, reg any:cls, reg r19:V, reg c8:L, reg unlist:cls, reg strsplit:cls, reg sub:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg lines2:*, reg lines3:V, reg as_character:cls, reg r22:V, reg p1:p(V +), reg r24:V, reg p2:p(V +), reg r26:V, reg p3:p(V +), reg r28:V, reg l:*, reg c9:L, reg r30:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx7:V, reg r32:V, reg dx8:V, reg r33:V, reg l3:*, reg c10:L, reg r36:L, reg l5:*, reg dr8:V, reg dc4:L, reg dx9:V, reg r38:L, reg dx10:V, reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg r42:V, reg last3:*, reg last4:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg srcfile17:*, reg srcfile18:V, reg c11:L, reg srcfile20:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r45:V, reg length:cls, reg r46:V, reg min:cls, reg r47:V, reg first3:*, reg first4:V, reg last5:*, reg last6:V, reg r48:V, reg c12:L, reg character1:cls, reg r49:V, reg srcfile21:*, reg srcfile22:V, reg c13:L, reg srcfile24:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg r52:V, reg c14:L, reg dx16:V, reg dr14:V, reg dc7:L, reg dx17:V, reg dx18:V, reg first5:*, reg first6:V, reg last7:*, reg last8:V, reg r53:V, reg __:cls, reg r54:V, reg _isOpen:cls, reg srcfile25:*, reg srcfile26:V, reg p4:p(V +), reg r57:V, reg r58:V, reg c15:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r59:V, reg r60:V, reg on_exit:cls, reg r61:V, reg open:cls, reg srcfile27:*, reg srcfile28:V, reg p5:p(V +), reg first7:*, reg first8:V, reg p6:p(V +), reg r65:V, reg readLines:cls, reg conn:*, reg conn1:V, reg p7:p(V +), reg last9:*, reg last10:V, reg first9:*, reg first10:V, reg r67:V, reg r68:V, reg p8:p(V +), reg r70:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r71:V, reg r72:V, reg srcfile29:*, reg srcfile30:V, reg c16:L, reg srcfile32:V, reg dr16:V, reg dc8:L, reg dx19:V, reg dx20:V, reg r73:V, reg c17:V, reg r74:V, reg c18:L, reg c20:V, reg _in_:cls, reg Enc:*, reg Enc1:V, reg p9:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r76:V, reg r77:V, reg c21:cls, reg r78:V, reg p10:p(V +), reg r80:V, reg r81:V, reg c22:L, reg c23:V, reg c25:L, reg iconv:cls, reg lines4:*, reg lines5:V, reg p11:p(V +), reg Enc2:*, reg Enc3:V, reg p12:p(V +), reg r84:V, reg first11:*, reg first12:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r86:V, reg first15:V, reg r87:V, reg lines6:*, reg lines7:V, reg length1:cls, reg r88:V, reg r89:V, reg l6:*, reg c26:L, reg r91:V, reg l8:*, reg dr18:V, reg dc9:L, reg dx21:V, reg dx22:V, reg r94:V, reg lines8:*, reg lines9:V |
    mkenv;
    st srcfile = srcfile;
    st first = first;
    st last = last;
    first1 = ld first;
    check L27() else D0();
  D0():
    deopt 0 [first1];
  L27():
    first2 = force? first1;
    checkMissing(first2);
    last1 = ld last;
    check L28() else D1();
  D1():
    deopt 1 [first2, last1];
  L28():
    last2 = force? last1;
    checkMissing(last2);
    r = `>`(first2, last2);
    c = `as.logical`(r);
    if c then L29() else L0();
  L0():
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L34() else L35();
  L29():
    character = ldf character;
    check L30() else D2();
  D2():
    deopt 5 [];
  L2(r5):
    c1 = `as.logical`(r5);
    if c1 then L38() else L3();
  L30():
    r1 = dyn character();
    check L31() else D3();
  L34():
    srcfile1 = ld srcfile;
    check L36() else D4();
  L35():
    r4 = dyn base(<sym srcfile>, "srcfilealias");
    goto L2(r4);
  D3():
    deopt 6 [r1];
  D4():
    deopt 12 [srcfile1];
  L3():
    goto L4();
  L4():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L45() else L46();
  L31():
    popenv;
    return r1;
  L36():
    srcfile2 = force? srcfile1;
    checkMissing(srcfile2);
    inherits = ldf inherits in base;
    r6 = dyn inherits(srcfile2, "srcfilealias", FALSE);
    check L37() else D5();
  L38():
    srcfile3 = ld srcfile;
    check L39() else D6();
  D5():
    deopt 17 [r6];
  D6():
    deopt 18 [srcfile3];
  L5(r9):
    c3 = `as.logical`(r9);
    if c3 then L49() else L6();
  L37():
    goto L2(r6);
  L39():
    srcfile4 = force? srcfile3;
    checkMissing(srcfile4);
    c2 = `is.object`(srcfile4);
    if c2 then L41() else L42(srcfile4);
  L45():
    srcfile7 = ld srcfile;
    check L47() else D7();
  L46():
    r8 = dyn base1(<sym srcfile>, "srcfilecopy");
    goto L5(r8);
  D7():
    deopt 26 [srcfile7];
  L6():
    _isOpen = ldf `.isOpen`;
    check L112() else D27();
  L40(dx1):
    st srcfile = dx1;
    goto L4();
  L41():
    dr = tryDispatchBuiltin.1("$", srcfile4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L43() else L42(dr);
  L42(srcfile6):
    r7 = `$`(srcfile6, <sym original>);
    goto L40(r7);
  L47():
    srcfile8 = force? srcfile7;
    checkMissing(srcfile8);
    inherits1 = ldf inherits in base;
    r10 = dyn inherits1(srcfile8, "srcfilecopy", FALSE);
    check L48() else D8();
  L49():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L50() else L51();
  D8():
    deopt 31 [r10];
  D27():
    deopt 104 [];
  L7(r12):
    c6 = `as.logical`(r12);
    if c6 then L57() else L8();
  L43():
    dx = getTryDispatchBuiltinValue(dr);
    goto L40(dx);
  L48():
    goto L5(r10);
  L50():
    srcfile9 = ld srcfile;
    check L52() else D9();
  L51():
    r11 = dyn base2(<lang `$`(srcfile, fixedNewlines)>);
    goto L7(r11);
  L112():
    p4 = prom<V +>{
      srcfile25 = ld srcfile;
      srcfile26 = force? srcfile25;
      checkMissing(srcfile26);
      return srcfile26;
    };
    r57 = dyn _isOpen(p4);
    check L113() else D28();
  D9():
    deopt 33 [srcfile9];
  D28():
    deopt 106 [r57];
  L8():
    goto L12();
  L12():
    sym5 = ldf min;
    base5 = ldf min in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L81() else L82();
  L52():
    srcfile10 = force? srcfile9;
    checkMissing(srcfile10);
    c4 = `is.object`(srcfile10);
    if c4 then L54() else L55(srcfile10);
  L57():
    srcfile13 = ld srcfile;
    check L58() else D10();
  L113():
    r58 = `!`(r57);
    c15 = `as.logical`(r58);
    if c15 then L114() else L19();
  D10():
    deopt 37 [srcfile13];
  L13(r42):
    st last = r42;
    first3 = ld first;
    check L93() else D20();
  L19():
    goto L21();
  L21():
    open = ldf open;
    check L118() else D29();
  L53(dx4):
    c5 = `==`(dx4, NULL);
    goto L7(c5);
  L54():
    dr2 = tryDispatchBuiltin.1("$", srcfile10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L56() else L55(dr2);
  L55(srcfile12):
    r13 = `$`(srcfile12, <sym fixedNewlines>);
    goto L53(r13);
  L58():
    srcfile14 = force? srcfile13;
    checkMissing(srcfile14);
    c7 = `is.object`(srcfile14);
    if c7 then L60() else L61(srcfile14);
  L81():
    last3 = ld last;
    check L83() else D16();
  L82():
    r41 = dyn base5(<sym last>, <lang length(`$`(srcfile, lines))>);
    goto L13(r41);
  L114():
    sym7 = ldf `on.exit`;
    base7 = ldf `on.exit` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L115() else L116();
  D16():
    deopt 72 [last3];
  D20():
    deopt 84 [first3];
  D29():
    deopt 114 [];
  L20(r60):
    goto L21();
  L56():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L53(dx3);
  L59(dx6):
    st lines = dx6;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L63() else L64();
  L60():
    dr4 = tryDispatchBuiltin.1("$", srcfile14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L62() else L61(dr4);
  L61(srcfile16):
    r14 = `$`(srcfile16, <sym lines>);
    goto L59(r14);
  L83():
    last4 = force? last3;
    checkMissing(last4);
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L84() else L85();
  L93():
    first4 = force? first3;
    checkMissing(first4);
    last5 = ld last;
    check L94() else D21();
  L115():
    on_exit = ldf `on.exit` in base;
    r61 = dyn on_exit(<lang close(srcfile)>);
    goto L20(r61);
  L116():
    r59 = dyn base7(<lang close(srcfile)>);
    goto L20(r59);
  L118():
    p5 = prom<V +>{
      srcfile27 = ld srcfile;
      srcfile28 = force? srcfile27;
      checkMissing(srcfile28);
      return srcfile28;
    };
    p6 = prom<V +>{
      first7 = ld first;
      first8 = force? first7;
      checkMissing(first8);
      return first8;
    };
    r65 = dyn open(p5, p6);
    check L119() else D30();
  D21():
    deopt 85 [first4, last5];
  D30():
    deopt 117 [r65];
  L9(r16):
    c8 = `as.logical`(r16);
    if c8 then L68() else L10();
  L14(r44):
    min = ldf min in base;
    r47 = dyn min(last4, r44);
    check L92() else D19();
  L62():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L59(dx5);
  L63():
    grepl = ldf grepl;
    check L65() else D11();
  L64():
    r15 = dyn base3(<lang grepl("\n", lines, fixed=TRUE, useBytes=TRUE)>);
    goto L9(r15);
  L84():
    srcfile17 = ld srcfile;
    check L86() else D17();
  L85():
    r43 = dyn base6(<lang `$`(srcfile, lines)>);
    goto L14(r43);
  L94():
    last6 = force? last5;
    checkMissing(last6);
    r48 = `>`(first4, last6);
    c12 = `as.logical`(r48);
    if c12 then L95() else L15();
  L119():
    st conn = r65;
    readLines = ldf readLines;
    check L120() else D31();
  D11():
    deopt 44 [];
  D17():
    deopt 76 [srcfile17];
  D19():
    deopt 82 [r47];
  D31():
    deopt 120 [];
  L10():
    goto L11();
  L11():
    l3 = ld srcfile;
    c10 = `is.object`(l3);
    if c10 then L77() else L78(TRUE, l3);
  L15():
    srcfile21 = ld srcfile;
    check L100() else D24();
  L65():
    p = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    r18 = dyn grepl[, , fixed, useBytes]("\n", p, TRUE, TRUE);
    check L66() else D12();
  L68():
    unlist = ldf unlist;
    check L69() else D14();
  L86():
    srcfile18 = force? srcfile17;
    checkMissing(srcfile18);
    c11 = `is.object`(srcfile18);
    if c11 then L88() else L89(srcfile18);
  L92():
    goto L13(r47);
  L95():
    character1 = ldf character;
    check L96() else D22();
  L120():
    p7 = prom<V +>{
      conn = ld conn;
      conn1 = force? conn;
      checkMissing(conn1);
      return conn1;
    };
    p8 = prom<V +>{
      last9 = ld last;
      last10 = force? last9;
      checkMissing(last10);
      first9 = ld first;
      first10 = force? first9;
      checkMissing(first10);
      r67 = `-`(last10, first10);
      r68 = `+`(r67, 1);
      return r68;
    };
    r70 = dyn readLines[, n, warn](p7, p8, FALSE);
    check L121() else D32();
  D12():
    deopt 51 [r18];
  D14():
    deopt 55 [];
  D22():
    deopt 89 [];
  D24():
    deopt 92 [srcfile21];
  D32():
    deopt 126 [r70];
  L66():
    any = ldf any in base;
    r19 = dyn any(r18);
    check L67() else D13();
  L69():
    p3 = prom<V +>{
      strsplit = ldf strsplit;
      p2 = prom<V +>{
        sub = ldf sub;
        p1 = prom<V +>{
          sym4 = ldf `as.character`;
          base4 = ldf `as.character` in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L1() else L2();
        L0(r21):
          return r21;
        L1():
          lines2 = ld lines;
          lines3 = force? lines2;
          checkMissing(lines3);
          as_character = ldf `as.character` in base;
          r22 = dyn as_character(lines3);
          goto L0(r22);
        L2():
          r20 = dyn base4(<sym lines>);
          goto L0(r20);
        };
        r24 = dyn sub("$", "\n", p1);
        return r24;
      };
      r26 = dyn strsplit(p2, "\n");
      return r26;
    };
    r28 = dyn unlist(p3);
    check L70() else D15();
  L76(r38, dx10):
    st srcfile = dx10;
    goto L12();
  L77():
    dr8 = tryDispatchBuiltin.0("$<-", l3, TRUE);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L79() else L78(TRUE, dr8);
  L78(r36, l5):
    r39 = `$<-`(l5, <sym fixedNewlines>, TRUE);
    goto L76(r36, r39);
  L87(dx12):
    length = ldf length in base;
    r46 = dyn length(dx12);
    check L91() else D18();
  L88():
    dr10 = tryDispatchBuiltin.1("$", srcfile18);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L90() else L89(dr10);
  L89(srcfile20):
    r45 = `$`(srcfile20, <sym lines>);
    goto L87(r45);
  L96():
    r49 = dyn character1();
    check L97() else D23();
  L100():
    srcfile22 = force? srcfile21;
    checkMissing(srcfile22);
    c13 = `is.object`(srcfile22);
    if c13 then L102() else L103(srcfile22);
  L121():
    st lines = r70;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L122() else L123();
  D13():
    deopt 53 [r19];
  D15():
    deopt 57 [r28];
  D18():
    deopt 80 [r46];
  D23():
    deopt 90 [r49];
  L22(r72):
    r74 = `!`(r72);
    c18 = `as.logical`(r74);
    if c18 then L129() else L23(c18);
  L67():
    goto L9(r19);
  L70():
    l = ld srcfile;
    c9 = `is.object`(l);
    if c9 then L72() else L73(r28, l);
  L79():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L76(TRUE, dx9);
  L90():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L87(dx11);
  L91():
    goto L14(r46);
  L97():
    popenv;
    return r49;
  L101(dx14):
    c14 = `is.object`(dx14);
    if c14 then L105() else L106(dx14);
  L102():
    dr12 = tryDispatchBuiltin.1("$", srcfile22);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L104() else L103(dr12);
  L103(srcfile24):
    r52 = `$`(srcfile24, <sym lines>);
    goto L101(r52);
  L122():
    srcfile29 = ld srcfile;
    check L124() else D33();
  L123():
    r71 = dyn base8(<lang `<-`(Enc, `$`(srcfile, Enc))>);
    goto L22(r71);
  D33():
    deopt 129 [srcfile29];
  L17(dx18):
    popenv;
    return dx18;
  L23(c20):
    c25 = `as.logical`(c20);
    if c25 then L133() else L24();
  L71(r32, dx8):
    st srcfile = dx8;
    goto L11();
  L72():
    dr6 = tryDispatchBuiltin.0("$<-", l, r28);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L74() else L73(r28, dr6);
  L73(r30, l2):
    r33 = `$<-`(l2, <sym lines>, r28);
    goto L71(r30, r33);
  L104():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L101(dx13);
  L105():
    dr14 = tryDispatchBuiltin.1("[", dx14);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L107() else L106(dr14);
  L106(dx16):
    first5 = ld first;
    check L108() else D25();
  L124():
    srcfile30 = force? srcfile29;
    checkMissing(srcfile30);
    c16 = `is.object`(srcfile30);
    if c16 then L126() else L127(srcfile30);
  L129():
    _in_ = ldf `%in%`;
    check L130() else D34();
  D25():
    deopt 95 [dx16, first5];
  D34():
    deopt 136 [c18];
  L24():
    goto L25();
  L25():
    first11 = ld first;
    check L137() else D38();
  L74():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L71(r28, dx7);
  L107():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L17(dx17);
  L108():
    first6 = force? first5;
    checkMissing(first6);
    last7 = ld last;
    check L109() else D26();
  L125(dx20):
    st Enc = dx20;
    c17 = `==`(dx20, NULL);
    goto L22(c17);
  L126():
    dr16 = tryDispatchBuiltin.1("$", srcfile30);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L128() else L127(dr16);
  L127(srcfile32):
    r73 = `$`(srcfile32, <sym Enc>);
    goto L125(r73);
  L130():
    p9 = prom<V +>{
      Enc = ld Enc;
      Enc1 = force? Enc;
      checkMissing(Enc1);
      return Enc1;
    };
    p10 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r77):
      return r77;
    L1():
      c21 = ldf c in base;
      r78 = dyn c21("unknown", "native.enc");
      goto L0(r78);
    L2():
      r76 = dyn base9("unknown", "native.enc");
      goto L0(r76);
    };
    r80 = dyn _in_(p9, p10);
    check L131() else D35();
  L133():
    iconv = ldf iconv;
    check L134() else D36();
  D26():
    deopt 96 [dx16, first6, last7];
  D35():
    deopt 139 [c18, r80];
  D36():
    deopt 143 [];
  D38():
    deopt 151 [first11];
  L109():
    last8 = force? last7;
    checkMissing(last8);
    r53 = `:`(first6, last8);
    __ = ldf `[` in base;
    r54 = dyn __(dx16, r53);
    goto L17(r54);
  L128():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L125(dx19);
  L131():
    r81 = `!`(r80);
    c22 = `as.logical`(r81);
    c23 = `&&`(c18, c22);
    goto L23(c23);
  L134():
    p11 = prom<V +>{
      lines4 = ld lines;
      lines5 = force? lines4;
      checkMissing(lines5);
      return lines5;
    };
    p12 = prom<V +>{
      Enc2 = ld Enc;
      Enc3 = force? Enc2;
      checkMissing(Enc3);
      return Enc3;
    };
    r84 = dyn iconv(p11, "", p12);
    check L135() else D37();
  L137():
    first12 = force? first11;
    checkMissing(first12);
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L138() else L139();
  D37():
    deopt 147 [r84];
  L26(first15, r87):
    r89 = `+`(first15, r87);
    l6 = ld srcfile;
    c26 = `is.object`(l6);
    if c26 then L143() else L144(r89, l6);
  L135():
    st lines = r84;
    goto L25();
  L138():
    lines6 = ld lines;
    check L140() else D39();
  L139():
    r86 = dyn base10(<sym lines>);
    goto L26(first12, r86);
  D39():
    deopt 154 [first12, lines6];
  L140():
    lines7 = force? lines6;
    checkMissing(lines7);
    length1 = ldf length in base;
    r88 = dyn length1(lines7);
    check L141() else D40();
  L142(dx22):
    st srcfile = dx22;
    lines8 = ld lines;
    check L146() else D41();
  L143():
    dr18 = tryDispatchBuiltin.0("$<-", l6, r89);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L145() else L144(r89, dr18);
  L144(r91, l8):
    r94 = `$<-`(l8, <sym line>, r89);
    goto L142(r94);
  D40():
    deopt 157 [first12, r88];
  D41():
    deopt 162 [lines8];
  L141():
    goto L26(first12, r88);
  L145():
    dx21 = getTryDispatchBuiltinValue(dr18);
    goto L142(dx21);
  L146():
    lines9 = force? lines8;
    checkMissing(lines9);
    popenv;
    return lines9;
  }
}