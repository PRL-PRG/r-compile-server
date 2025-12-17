fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3855282202;
    st RweaveRdOptions = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3855282202(options) {
  (reg options:*) -+> V { var options:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg NUMOPTS:*, reg NUMOPTS1:V, reg c1:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg options1:*, reg options2:V, reg names:cls, reg r9:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg _notin_:cls, reg opt:*, reg opt1:V, reg p:p(V +), reg NOLOGOPTS:*, reg NOLOGOPTS1:V, reg p1:p(V +), reg r12:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg i9:I, reg r14:V, reg options3:*, reg options4:V, reg c4:L, reg i11:I, reg options6:V, reg dr:V, reg dc:L, reg dx:V, reg i13:I, reg dx1:V, reg opt2:*, reg opt3:V, reg __:cls, reg r15:V, reg c5:L, reg r16:V, reg c6:L, reg c2l:cls, reg oldval:*, reg oldval1:V, reg p2:p(V +), reg r18:V, reg l1:*, reg c7:L, reg i17:I, reg r20:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i19:I, reg r22:V, reg dx3:V, reg opt4:*, reg opt5:V, reg ____:cls, reg r23:V, reg i20:I, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg i23:I, reg r26:V, reg options7:*, reg options8:V, reg c8:L, reg i25:I, reg options10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i27:I, reg dx5:V, reg opt6:*, reg opt7:V, reg __1:cls, reg r27:V, reg is_na:cls, reg r28:V, reg c9:L, reg stop:cls, reg gettextf:cls, reg opt8:*, reg opt9:V, reg p3:p(V +), reg oldval2:*, reg oldval3:V, reg p4:p(V +), reg r31:V, reg p5:p(V +), reg r33:V, reg i30:I, reg r34:V, reg i31:I, reg _in_:cls, reg opt10:*, reg opt11:V, reg p6:p(V +), reg NUMOPTS2:*, reg NUMOPTS3:V, reg p7:p(V +), reg r38:V, reg c10:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg i36:I, reg r40:V, reg options11:*, reg options12:V, reg c11:L, reg i38:I, reg options14:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i40:I, reg dx7:V, reg opt12:*, reg opt13:V, reg __2:cls, reg r41:V, reg as_numeric:cls, reg r42:V, reg l4:*, reg c12:L, reg i42:I, reg r44:V, reg l6:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i44:I, reg r46:V, reg dx9:V, reg opt14:*, reg opt15:V, reg ____1:cls, reg r47:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg r49:V, reg options15:*, reg options16:V, reg c13:L, reg options18:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r50:V, reg c14:V, reg r51:V, reg c15:L, reg match_arg:cls, reg tolower:cls, reg options19:*, reg options20:V, reg c16:L, reg options22:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r52:V, reg p8:p(V +), reg r54:V, reg p9:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg r57:V, reg c17:cls, reg r58:V, reg p10:p(V +), reg r60:V, reg l7:*, reg c18:L, reg r62:V, reg l9:*, reg dr14:V, reg dc7:L, reg dx14:V, reg r64:V, reg dx15:V, reg r65:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r67:V, reg r68:V, reg options23:*, reg options24:V, reg c19:L, reg options26:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r69:V, reg c20:V, reg r70:V, reg c21:L, reg match_arg1:cls, reg tolower1:cls, reg options27:*, reg options28:V, reg c22:L, reg options30:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r71:V, reg p11:p(V +), reg r73:V, reg p12:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r75:V, reg r76:V, reg c23:cls, reg r77:V, reg p13:p(V +), reg r79:V, reg l10:*, reg c24:L, reg r81:V, reg l12:*, reg dr20:V, reg dc10:L, reg dx20:V, reg r83:V, reg dx21:V, reg r84:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r86:V, reg r87:V, reg options31:*, reg options32:V, reg c25:L, reg options34:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r88:V, reg c26:V, reg r89:V, reg c27:L, reg tolower2:cls, reg options35:*, reg options36:V, reg c28:L, reg options38:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r90:V, reg p14:p(V +), reg r92:V, reg l13:*, reg c29:L, reg r94:V, reg l15:*, reg dr26:V, reg dc13:L, reg dx26:V, reg r96:V, reg dx27:V, reg r97:V, reg options39:*, reg options40:V |
    mkenv;
    st options = options;
    r = clos inner2501545716;
    st c2l = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L0(r2):
    st NUMOPTS = r2;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L29():
    c = ldf c in base;
    r3 = dyn c("width", "height");
    check L31() else D0();
  L30():
    r1 = dyn base("width", "height");
    goto L0(r1);
  D0():
    deopt 8 [r3];
  L1(r5):
    st NOLOGOPTS = r5;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L31():
    goto L0(r3);
  L32():
    NUMOPTS = ld NUMOPTS;
    check L34() else D1();
  L33():
    r4 = dyn base1(<sym NUMOPTS>, "results", "stage", "strip.white");
    goto L1(r4);
  D1():
    deopt 12 [NUMOPTS];
  L2(r8):
    s = toForSeq(r8);
    l = length(s);
    i = 0;
    goto L3(i);
  L34():
    NUMOPTS1 = force? NUMOPTS;
    checkMissing(NUMOPTS1);
    c1 = ldf c in base;
    r6 = dyn c1(NUMOPTS1, "results", "stage", "strip.white");
    check L35() else D2();
  L36():
    options1 = ld options;
    check L38() else D3();
  L37():
    r7 = dyn base2(<sym options>);
    goto L2(r7);
  D2():
    deopt 18 [r6];
  D3():
    deopt 22 [options1];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L40() else L19();
  L35():
    goto L1(r6);
  L38():
    options2 = force? options1;
    checkMissing(options2);
    names = ldf names in base;
    r9 = dyn names(options2);
    check L39() else D4();
  D4():
    deopt 25 [r9];
  L19():
    x = `[[`(s, i2, NULL, TRUE);
    st opt = x;
    _notin_ = ldf `%notin%`;
    check L41() else D5();
  L39():
    goto L2(r9);
  L40():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L88() else L89();
  D5():
    deopt 27 [i2];
  L20(r49):
    r51 = `!`(r49);
    c15 = `as.logical`(r51);
    if c15 then L95() else L21();
  L41():
    p = prom<V +>{
      opt = ld opt;
      opt1 = force? opt;
      checkMissing(opt1);
      return opt1;
    };
    p1 = prom<V +>{
      NOLOGOPTS = ld NOLOGOPTS;
      NOLOGOPTS1 = force? NOLOGOPTS;
      checkMissing(NOLOGOPTS1);
      return NOLOGOPTS1;
    };
    r12 = dyn _notin_(p, p1);
    check L42() else D6();
  L88():
    options15 = ld options;
    check L90() else D23();
  L89():
    r48 = dyn base6(<lang `$`(options, results)>);
    goto L20(r48);
  D6():
    deopt 30 [i2, r12];
  D23():
    deopt 93 [options15];
  L21():
    goto L22();
  L22():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L103() else L104();
  L42():
    c3 = `as.logical`(r12);
    if c3 then L43() else L4();
  L90():
    options16 = force? options15;
    checkMissing(options16);
    c13 = `is.object`(options16);
    if c13 then L92() else L93(options16);
  L95():
    match_arg = ldf `match.arg`;
    check L96() else D24();
  D24():
    deopt 99 [];
  L4():
    _in_ = ldf `%in%`;
    check L72() else D17();
  L14(i31):
    goto L3(i31);
  L23(r68):
    r70 = `!`(r68);
    c21 = `as.logical`(r70);
    if c21 then L110() else L24();
  L43():
    sym3 = ldf `is.logical`;
    base3 = ldf `is.logical` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  L91(dx11):
    c14 = `==`(dx11, NULL);
    goto L20(c14);
  L92():
    dr10 = tryDispatchBuiltin.1("$", options16);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L94() else L93(dr10);
  L93(options18):
    r50 = `$`(options18, <sym results>);
    goto L91(r50);
  L96():
    p9 = prom<V +>{
      tolower = ldf tolower;
      p8 = prom<V +>{
        options19 = ld options;
        options20 = force? options19;
        checkMissing(options20);
        c16 = `is.object`(options20);
        if c16 then L1() else L2(options20);
      L0(dx13):
        return dx13;
      L1():
        dr12 = tryDispatchBuiltin.1("$", options20);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(options22):
        r52 = `$`(options22, <sym results>);
        goto L0(r52);
      L3():
        dx12 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx12);
      };
      r54 = dyn tolower(p8);
      return r54;
    };
    p10 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r57):
      return r57;
    L1():
      c17 = ldf c in base;
      r58 = dyn c17("text", "verbatim", "rd", "hide");
      goto L0(r58);
    L2():
      r56 = dyn base7("text", "verbatim", "rd", "hide");
      goto L0(r56);
    };
    r60 = dyn match_arg(p9, p10);
    check L97() else D25();
  L103():
    options23 = ld options;
    check L105() else D26();
  L104():
    r67 = dyn base8(<lang `$`(options, stage)>);
    goto L23(r67);
  D17():
    deopt 69 [i2];
  D25():
    deopt 102 [r60];
  D26():
    deopt 109 [options23];
  L5(i9, r14):
    r16 = `!`(r14);
    c6 = `as.logical`(r16);
    if c6 then L51() else L7();
  L24():
    goto L25();
  L25():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L118() else L119();
  L44():
    options3 = ld options;
    check L46() else D7();
  L45():
    r13 = dyn base3(<lang `<-`(oldval, `[[`(options, opt))>);
    goto L5(i2, r13);
  L72():
    p6 = prom<V +>{
      opt10 = ld opt;
      opt11 = force? opt10;
      checkMissing(opt11);
      return opt11;
    };
    p7 = prom<V +>{
      NUMOPTS2 = ld NUMOPTS;
      NUMOPTS3 = force? NUMOPTS2;
      checkMissing(NUMOPTS3);
      return NUMOPTS3;
    };
    r38 = dyn _in_(p6, p7);
    check L73() else D18();
  L94():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L91(dx10);
  L97():
    l7 = ld options;
    c18 = `is.object`(l7);
    if c18 then L99() else L100(r60, l7);
  L105():
    options24 = force? options23;
    checkMissing(options24);
    c19 = `is.object`(options24);
    if c19 then L107() else L108(options24);
  L110():
    match_arg1 = ldf `match.arg`;
    check L111() else D27();
  D7():
    deopt 32 [i2, options3];
  D18():
    deopt 72 [i2, r38];
  D27():
    deopt 115 [];
  L7():
    goto L9(i9);
  L9(i20):
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L59() else L60();
  L26(r87):
    r89 = `!`(r87);
    c27 = `as.logical`(r89);
    if c27 then L125() else L27();
  L46():
    options4 = force? options3;
    checkMissing(options4);
    c4 = `is.object`(options4);
    if c4 then L47() else L48(i2, options4);
  L51():
    c2l = ldf c2l;
    check L52() else D9();
  L73():
    c10 = `as.logical`(r38);
    if c10 then L74() else L15();
  L98(r64, dx15):
    st options = dx15;
    goto L22();
  L99():
    dr14 = tryDispatchBuiltin.0("$<-", l7, r60);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L101() else L100(r60, dr14);
  L100(r62, l9):
    r65 = `$<-`(l9, <sym results>, r60);
    goto L98(r62, r65);
  L106(dx17):
    c20 = `==`(dx17, NULL);
    goto L23(c20);
  L107():
    dr16 = tryDispatchBuiltin.1("$", options24);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L109() else L108(dr16);
  L108(options26):
    r69 = `$`(options26, <sym stage>);
    goto L106(r69);
  L111():
    p12 = prom<V +>{
      tolower1 = ldf tolower;
      p11 = prom<V +>{
        options27 = ld options;
        options28 = force? options27;
        checkMissing(options28);
        c22 = `is.object`(options28);
        if c22 then L1() else L2(options28);
      L0(dx19):
        return dx19;
      L1():
        dr18 = tryDispatchBuiltin.1("$", options28);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L3() else L2(dr18);
      L2(options30):
        r71 = `$`(options30, <sym stage>);
        goto L0(r71);
      L3():
        dx18 = getTryDispatchBuiltinValue(dr18);
        goto L0(dx18);
      };
      r73 = dyn tolower1(p11);
      return r73;
    };
    p13 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r76):
      return r76;
    L1():
      c23 = ldf c in base;
      r77 = dyn c23("build", "install", "render");
      goto L0(r77);
    L2():
      r75 = dyn base9("build", "install", "render");
      goto L0(r75);
    };
    r79 = dyn match_arg1(p12, p13);
    check L112() else D28();
  L118():
    options31 = ld options;
    check L120() else D29();
  L119():
    r86 = dyn base10(<lang `$`(options, strip.white)>);
    goto L26(r86);
  D9():
    deopt 41 [i9];
  D28():
    deopt 118 [r79];
  D29():
    deopt 125 [options31];
  L6(i13, dx1):
    st oldval = dx1;
    c5 = `is.logical`(dx1);
    goto L5(i13, c5);
  L10(i23, r26):
    c9 = `as.logical`(r26);
    if c9 then L67() else L12();
  L15():
    goto L14(i2);
  L27():
    goto L28();
  L28():
    options39 = ld options;
    check L133() else D32();
  L47():
    dr = tryDispatchBuiltin.1("[[", options4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L49() else L48(i2, dr);
  L48(i11, options6):
    opt2 = ld opt;
    check L50() else D8();
  L52():
    p2 = prom<V +>{
      oldval = ld oldval;
      oldval1 = force? oldval;
      checkMissing(oldval1);
      return oldval1;
    };
    r18 = dyn c2l(p2);
    check L53() else D10();
  L59():
    options7 = ld options;
    check L61() else D12();
  L60():
    r25 = dyn base4(<lang `[[`(options, opt)>);
    goto L10(i20, r25);
  L74():
    sym5 = ldf `as.numeric`;
    base5 = ldf `as.numeric` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L75() else L76();
  L101():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L98(r60, dx14);
  L109():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L106(dx16);
  L112():
    l10 = ld options;
    c24 = `is.object`(l10);
    if c24 then L114() else L115(r79, l10);
  L120():
    options32 = force? options31;
    checkMissing(options32);
    c25 = `is.object`(options32);
    if c25 then L122() else L123(options32);
  L125():
    tolower2 = ldf tolower;
    check L126() else D30();
  D8():
    deopt 34 [i11, options6, opt2];
  D10():
    deopt 43 [i9, r18];
  D12():
    deopt 53 [i20, options7];
  D30():
    deopt 131 [];
  D32():
    deopt 139 [options39];
  L12():
    goto L13(i23, NULL);
  L13(i30, r34):
    goto L14(i30);
  L16(i36, r40):
    l4 = ld options;
    c12 = `is.object`(l4);
    if c12 then L83() else L84(i36, r40, l4);
  L49():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(i2, dx);
  L50():
    opt3 = force? opt2;
    __ = ldf `[[` in base;
    r15 = dyn __(options6, opt3);
    goto L6(i11, r15);
  L53():
    l1 = ld options;
    c7 = `is.object`(l1);
    if c7 then L54() else L55(i9, r18, l1);
  L61():
    options8 = force? options7;
    checkMissing(options8);
    c8 = `is.object`(options8);
    if c8 then L62() else L63(i20, options8);
  L67():
    stop = ldf stop;
    check L68() else D15();
  L75():
    options11 = ld options;
    check L77() else D19();
  L76():
    r39 = dyn base5(<lang `[[`(options, opt)>);
    goto L16(i2, r39);
  L113(r83, dx21):
    st options = dx21;
    goto L25();
  L114():
    dr20 = tryDispatchBuiltin.0("$<-", l10, r79);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L116() else L115(r79, dr20);
  L115(r81, l12):
    r84 = `$<-`(l12, <sym stage>, r79);
    goto L113(r81, r84);
  L121(dx23):
    c26 = `==`(dx23, NULL);
    goto L26(c26);
  L122():
    dr22 = tryDispatchBuiltin.1("$", options32);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L124() else L123(dr22);
  L123(options34):
    r88 = `$`(options34, <sym strip.white>);
    goto L121(r88);
  L126():
    p14 = prom<V +>{
      options35 = ld options;
      options36 = force? options35;
      checkMissing(options36);
      c28 = `is.object`(options36);
      if c28 then L1() else L2(options36);
    L0(dx25):
      return dx25;
    L1():
      dr24 = tryDispatchBuiltin.1("$", options36);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(options38):
      r90 = `$`(options38, <sym strip.white>);
      goto L0(r90);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx24);
    };
    r92 = dyn tolower2(p14);
    check L127() else D31();
  L133():
    options40 = force? options39;
    checkMissing(options40);
    popenv;
    return options40;
  D15():
    deopt 61 [i23];
  D19():
    deopt 75 [i2, options11];
  D31():
    deopt 133 [r92];
  L8(i19, r22, dx3):
    st options = dx3;
    goto L9(i19);
  L11(i27, dx5):
    is_na = ldf `is.na` in base;
    r28 = dyn is_na(dx5);
    check L66() else D14();
  L18(i44, r46, dx9):
    st options = dx9;
    goto L14(i44);
  L54():
    dr2 = tryDispatchBuiltin.0("[[<-", l1, r18);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L56() else L55(i9, r18, dr2);
  L55(i17, r20, l3):
    opt4 = ld opt;
    check L57() else D11();
  L62():
    dr4 = tryDispatchBuiltin.1("[[", options8);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L64() else L63(i20, dr4);
  L63(i25, options10):
    opt6 = ld opt;
    check L65() else D13();
  L68():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        opt8 = ld opt;
        opt9 = force? opt8;
        checkMissing(opt9);
        return opt9;
      };
      p4 = prom<V +>{
        oldval2 = ld oldval;
        oldval3 = force? oldval2;
        checkMissing(oldval3);
        return oldval3;
      };
      r31 = dyn gettextf("invalid value for '%s' : %s", p3, p4);
      return r31;
    };
    r33 = dyn stop[, domain](p5, NA_LGL);
    check L69() else D16();
  L77():
    options12 = force? options11;
    checkMissing(options12);
    c11 = `is.object`(options12);
    if c11 then L78() else L79(i2, options12);
  L83():
    dr8 = tryDispatchBuiltin.0("[[<-", l4, r40);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L85() else L84(i36, r40, dr8);
  L84(i42, r44, l6):
    opt14 = ld opt;
    check L86() else D22();
  L116():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L113(r79, dx20);
  L124():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L121(dx22);
  L127():
    l13 = ld options;
    c29 = `is.object`(l13);
    if c29 then L129() else L130(r92, l13);
  D11():
    deopt 45 [i17, r20, l3, r18, opt4];
  D13():
    deopt 55 [i25, options10, opt6];
  D14():
    deopt 59 [i27, r28];
  D16():
    deopt 65 [i23, r33];
  D22():
    deopt 83 [i42, r44, l6, r40, opt14];
  L17(i40, dx7):
    as_numeric = ldf `as.numeric` in base;
    r42 = dyn as_numeric(dx7);
    check L82() else D21();
  L56():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(i9, r18, dx2);
  L57():
    opt5 = force? opt4;
    ____ = ldf `[[<-` in base;
    r23 = dyn ____(l3, r18, opt5);
    goto L8(i17, r20, r23);
  L64():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(i20, dx4);
  L65():
    opt7 = force? opt6;
    __1 = ldf `[[` in base;
    r27 = dyn __1(options10, opt7);
    goto L11(i25, r27);
  L66():
    goto L10(i27, r28);
  L69():
    goto L13(i23, r33);
  L78():
    dr6 = tryDispatchBuiltin.1("[[", options12);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L80() else L79(i2, dr6);
  L79(i38, options14):
    opt12 = ld opt;
    check L81() else D20();
  L85():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L18(i36, r40, dx8);
  L86():
    opt15 = force? opt14;
    ____1 = ldf `[[<-` in base;
    r47 = dyn ____1(l6, r40, opt15);
    goto L18(i42, r44, r47);
  L128(r96, dx27):
    st options = dx27;
    goto L28();
  L129():
    dr26 = tryDispatchBuiltin.0("$<-", l13, r92);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L131() else L130(r92, dr26);
  L130(r94, l15):
    r97 = `$<-`(l15, <sym strip.white>, r92);
    goto L128(r94, r97);
  D20():
    deopt 77 [i38, options14, opt12];
  D21():
    deopt 81 [i40, r42];
  L80():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L17(i2, dx6);
  L81():
    opt13 = force? opt12;
    __2 = ldf `[[` in base;
    r41 = dyn __2(options14, opt13);
    goto L17(i38, r41);
  L82():
    goto L16(i40, r42);
  L131():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L128(r92, dx26);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg toupper:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg as_character:cls, reg r6:V, reg p:p(V +), reg r8:V, reg as_logical:cls, reg r9:V |
    mkenv;
    st x = x;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L6() else L1();
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    sym1 = ldf `as.logical`;
    base1 = ldf `as.logical` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L5():
    x2 = force? x1;
    checkMissing(x2);
    c = `==`(x2, NULL);
    goto L0(c);
  L6():
    popenv;
    return FALSE;
  L2(r3):
    popenv;
    return r3;
  L8():
    toupper = ldf toupper;
    check L10() else D1();
  L9():
    r2 = dyn base1(<lang toupper(as.character(x))>);
    goto L2(r2);
  D1():
    deopt 9 [];
  L10():
    p = prom<V +>{
      sym2 = ldf `as.character`;
      base2 = ldf `as.character` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      as_character = ldf `as.character` in base;
      r6 = dyn as_character(x4);
      goto L0(r6);
    L2():
      r4 = dyn base2(<sym x>);
      goto L0(r4);
    };
    r8 = dyn toupper(p);
    check L11() else D2();
  D2():
    deopt 11 [r8];
  L11():
    as_logical = ldf `as.logical` in base;
    r9 = dyn as_logical(r8);
    check L12() else D3();
  D3():
    deopt 13 [r9];
  L12():
    goto L2(r9);
  }
}