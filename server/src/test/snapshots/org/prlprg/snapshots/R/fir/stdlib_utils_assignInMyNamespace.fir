fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner736444261;
    st assignInMyNamespace = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner736444261(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg sys_function:cls, reg p:p(V +), reg r1:V, reg environment:cls, reg f:*, reg f1:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg f2:*, reg f3:V, reg isS4:cls, reg r6:V, reg c:L, reg isNamespace:cls, reg ns:*, reg ns1:V, reg p2:p(V +), reg r8:V, reg r9:V, reg c1:L, reg parent_env:cls, reg ns2:*, reg ns3:V, reg p3:p(V +), reg r11:V, reg bindingIsLocked:cls, reg x1:*, reg x2:V, reg p4:p(V +), reg ns4:*, reg ns5:V, reg p5:p(V +), reg r15:V, reg c2:L, reg unlockBinding:cls, reg x3:*, reg x4:V, reg p6:p(V +), reg ns6:*, reg ns7:V, reg p7:p(V +), reg r18:V, reg assign:cls, reg x5:*, reg x6:V, reg p8:p(V +), reg value1:*, reg value2:V, reg p9:p(V +), reg ns8:*, reg ns9:V, reg p10:p(V +), reg r22:V, reg options:cls, reg r23:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg on_exit:cls, reg r26:V, reg options1:cls, reg p11:p(V +), reg r28:V, reg lockBinding:cls, reg x7:*, reg x8:V, reg p12:p(V +), reg ns10:*, reg ns11:V, reg p13:p(V +), reg r31:V, reg assign1:cls, reg x9:*, reg x10:V, reg p14:p(V +), reg value3:*, reg value4:V, reg p15:p(V +), reg ns12:*, reg ns13:V, reg p16:p(V +), reg r36:V, reg isBaseNamespace:cls, reg ns14:*, reg ns15:V, reg p17:p(V +), reg r38:V, reg r39:V, reg c3:L, reg getNamespaceInfo:cls, reg ns16:*, reg ns17:V, reg p18:p(V +), reg r41:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r42:V, reg r43:V, reg S3:*, reg S4:V, reg length:cls, reg r44:V, reg r45:V, reg c4:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r46:V, reg r47:V, reg invisible:cls, reg r48:V, reg S5:*, reg S6:V, reg c5:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r51:V, reg _in_:cls, reg x11:*, reg x12:V, reg p19:p(V +), reg S3names:*, reg S3names1:V, reg p20:p(V +), reg r54:V, reg c6:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r55:V, reg r56:V, reg x13:*, reg x14:V, reg S3names2:*, reg S3names3:V, reg match:cls, reg r57:V, reg get:cls, reg S9:*, reg S10:V, reg c7:L, reg S12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i:*, reg i1:V, reg __1:cls, reg r58:V, reg p21:p(V +), reg parent_frame:cls, reg r60:V, reg p22:p(V +), reg r62:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r63:V, reg r64:V, reg _isMethodsDispatchOn:cls, reg r65:V, reg c8:L, reg c10:V, reg __2:cls, reg r66:V, reg r67:cls, reg genfun:*, reg genfun1:V, reg p23:p(V +), reg r69:V, reg c11:L, reg c12:V, reg c14:L, reg __3:cls, reg r70:V, reg c15:L, reg r72:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r73:V, reg _defenv_for_S3_registry:cls, reg genfun2:*, reg genfun3:V, reg p24:p(V +), reg r75:V, reg defenv:*, reg defenv1:V, reg c16:L, reg defenv3:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg __4:cls, reg r76:V, reg paste:cls, reg S13:*, reg S14:V, reg c17:L, reg S16:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg i2:*, reg i3:V, reg __5:cls, reg r77:V, reg p25:p(V +), reg S17:*, reg S18:V, reg c18:L, reg S20:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg i4:*, reg i5:V, reg __6:cls, reg r79:V, reg p26:p(V +), reg r81:V, reg exists:cls, reg remappedName:*, reg remappedName1:V, reg p27:p(V +), reg S3Table:*, reg S3Table1:V, reg p28:p(V +), reg r84:V, reg c19:L, reg assign2:cls, reg remappedName2:*, reg remappedName3:V, reg p29:p(V +), reg value5:*, reg value6:V, reg p30:p(V +), reg S3Table2:*, reg S3Table3:V, reg p31:p(V +), reg r88:V, reg r89:V, reg r90:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r92:V, reg r93:V, reg invisible1:cls, reg r94:V |
    mkenv;
    st x = x;
    st value = value;
    sys_function = ldf `sys.function`;
    check L26() else D0();
  D0():
    deopt 1 [];
  L26():
    p = prom<V +>{
      return -1.0;
    };
    r1 = dyn sys_function(p);
    check L27() else D1();
  D1():
    deopt 3 [r1];
  L27():
    st f = r1;
    environment = ldf environment;
    check L28() else D2();
  D2():
    deopt 6 [];
  L28():
    p1 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r3 = dyn environment(p1);
    check L29() else D3();
  D3():
    deopt 8 [r3];
  L29():
    st ns = r3;
    sym = ldf isS4;
    base = ldf isS4 in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L0(r5):
    c = `as.logical`(r5);
    if c then L34() else L1();
  L30():
    f2 = ld f;
    check L32() else D4();
  L31():
    r4 = dyn base(<sym f>);
    goto L0(r4);
  D4():
    deopt 12 [f2];
  L1():
    goto L4();
  L4():
    bindingIsLocked = ldf bindingIsLocked;
    check L42() else D10();
  L32():
    f3 = force? f2;
    checkMissing(f3);
    isS4 = ldf isS4 in base;
    r6 = dyn isS4(f3);
    check L33() else D5();
  L34():
    goto L3();
  D5():
    deopt 15 [r6];
  D10():
    deopt 32 [];
  L3():
    isNamespace = ldf isNamespace;
    check L35() else D6();
  L33():
    goto L0(r6);
  L42():
    p4 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p5 = prom<V +>{
      ns4 = ld ns;
      ns5 = force? ns4;
      checkMissing(ns5);
      return ns5;
    };
    r15 = dyn bindingIsLocked(p4, p5);
    check L43() else D11();
  D6():
    deopt 17 [];
  D11():
    deopt 35 [r15];
  L35():
    p2 = prom<V +>{
      ns = ld ns;
      ns1 = force? ns;
      checkMissing(ns1);
      return ns1;
    };
    r8 = dyn isNamespace(p2);
    check L36() else D7();
  L43():
    c2 = `as.logical`(r15);
    if c2 then L44() else L5();
  D7():
    deopt 19 [r8];
  L5():
    assign1 = ldf assign;
    check L58() else D22();
  L7():
    isBaseNamespace = ldf isBaseNamespace;
    check L60() else D24();
  L36():
    r9 = `!`(r8);
    c1 = `as.logical`(r9);
    if c1 then L37() else L2();
  L44():
    unlockBinding = ldf unlockBinding;
    check L45() else D12();
  D12():
    deopt 37 [];
  D22():
    deopt 69 [];
  D24():
    deopt 78 [];
  L2():
    goto L4();
  L37():
    parent_env = ldf `parent.env`;
    check L38() else D8();
  L45():
    p6 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p7 = prom<V +>{
      ns6 = ld ns;
      ns7 = force? ns6;
      checkMissing(ns7);
      return ns7;
    };
    r18 = dyn unlockBinding(p6, p7);
    check L46() else D13();
  L58():
    p14 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p15 = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    p16 = prom<V +>{
      ns12 = ld ns;
      ns13 = force? ns12;
      checkMissing(ns13);
      return ns13;
    };
    r36 = dyn assign1[, , envir, inherits](p14, p15, p16, FALSE);
    check L59() else D23();
  L60():
    p17 = prom<V +>{
      ns14 = ld ns;
      ns15 = force? ns14;
      checkMissing(ns15);
      return ns15;
    };
    r38 = dyn isBaseNamespace(p17);
    check L61() else D25();
  D8():
    deopt 22 [];
  D13():
    deopt 40 [r18];
  D23():
    deopt 76 [r36];
  D25():
    deopt 80 [r38];
  L38():
    p3 = prom<V +>{
      ns2 = ld ns;
      ns3 = force? ns2;
      checkMissing(ns3);
      return ns3;
    };
    r11 = dyn parent_env(p3);
    check L39() else D9();
  L46():
    assign = ldf assign;
    check L47() else D14();
  L59():
    goto L7();
  L61():
    r39 = `!`(r38);
    c3 = `as.logical`(r39);
    if c3 then L62() else L8();
  D9():
    deopt 24 [r11];
  D14():
    deopt 42 [];
  L8():
    goto L24();
  L24():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L119() else L120();
  L39():
    st ns = r11;
    goto L3();
  L47():
    p8 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p9 = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    p10 = prom<V +>{
      ns8 = ld ns;
      ns9 = force? ns8;
      checkMissing(ns9);
      return ns9;
    };
    r22 = dyn assign[, , envir, inherits](p8, p9, p10, FALSE);
    check L48() else D15();
  L62():
    getNamespaceInfo = ldf getNamespaceInfo;
    check L63() else D26();
  D15():
    deopt 49 [r22];
  D26():
    deopt 83 [];
  L25(r93):
    popenv;
    return r93;
  L48():
    options = ldf options;
    check L49() else D16();
  L63():
    p18 = prom<V +>{
      ns16 = ld ns;
      ns17 = force? ns16;
      checkMissing(ns17);
      return ns17;
    };
    r41 = dyn getNamespaceInfo(p18, "S3methods");
    check L64() else D27();
  L119():
    invisible1 = ldf invisible in base;
    r94 = dyn invisible1(NULL);
    check L121() else D52();
  L120():
    r92 = dyn base6(NULL);
    goto L25(r92);
  D16():
    deopt 51 [];
  D27():
    deopt 86 [r41];
  D52():
    deopt 198 [r94];
  L49():
    r23 = dyn options("warn");
    check L50() else D17();
  L64():
    st S3 = r41;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L65() else L66();
  L121():
    goto L25(r94);
  D17():
    deopt 53 [r23];
  L9(r43):
    r45 = `!`(r43);
    c4 = `as.logical`(r45);
    if c4 then L69() else L10();
  L50():
    st w = r23;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L51() else L52();
  L65():
    S3 = ld S3;
    check L67() else D28();
  L66():
    r42 = dyn base2(<sym S3>);
    goto L9(r42);
  D28():
    deopt 90 [S3];
  L6():
    options1 = ldf options;
    check L53() else D18();
  L10():
    S5 = ld S3;
    check L75() else D31();
  L51():
    on_exit = ldf `on.exit` in base;
    r26 = dyn on_exit(<lang options(w)>);
    goto L6();
  L52():
    r24 = dyn base1(<lang options(w)>);
    goto L6();
  L67():
    S4 = force? S3;
    checkMissing(S4);
    length = ldf length in base;
    r44 = dyn length(S4);
    check L68() else D29();
  L69():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L70() else L71();
  D18():
    deopt 59 [];
  D29():
    deopt 93 [r44];
  D31():
    deopt 103 [S5];
  L11(r47):
    popenv;
    return r47;
  L53():
    p11 = prom<V +>{
      return -1.0;
    };
    r28 = dyn options1[warn](p11);
    check L54() else D19();
  L68():
    goto L9(r44);
  L70():
    invisible = ldf invisible in base;
    r48 = dyn invisible(NULL);
    check L72() else D30();
  L71():
    r46 = dyn base3(NULL);
    goto L11(r46);
  L75():
    S6 = force? S5;
    checkMissing(S6);
    c5 = `is.object`(S6);
    if c5 then L76() else L77();
  D19():
    deopt 62 [r28];
  D30():
    deopt 99 [r48];
  L13(dx1):
    st S3names = dx1;
    _in_ = ldf `%in%`;
    check L79() else D32();
  L54():
    lockBinding = ldf lockBinding;
    check L55() else D20();
  L72():
    goto L11(r48);
  L76():
    dr = tryDispatchBuiltin.1("[", S6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L78() else L77();
  L77():
    __ = ldf `[` in base;
    r51 = dyn __(S6, <missing>, 3);
    goto L13(r51);
  D20():
    deopt 64 [];
  D32():
    deopt 111 [];
  L55():
    p12 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p13 = prom<V +>{
      ns10 = ld ns;
      ns11 = force? ns10;
      checkMissing(ns11);
      return ns11;
    };
    r31 = dyn lockBinding(p12, p13);
    check L56() else D21();
  L78():
    dx = getTryDispatchBuiltinValue(dr);
    goto L13(dx);
  L79():
    p19 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p20 = prom<V +>{
      S3names = ld S3names;
      S3names1 = force? S3names;
      checkMissing(S3names1);
      return S3names1;
    };
    r54 = dyn _in_(p19, p20);
    check L80() else D33();
  D21():
    deopt 67 [r31];
  D33():
    deopt 114 [r54];
  L56():
    goto L7();
  L80():
    c6 = `as.logical`(r54);
    if c6 then L81() else L14();
  L14():
    goto L23(NULL);
  L23(r90):
    goto L24();
  L81():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L82() else L83();
  L15(r56):
    st i = r56;
    get = ldf get;
    check L87() else D37();
  L82():
    x13 = ld x;
    check L84() else D34();
  L83():
    r55 = dyn base4(<sym x>, <sym S3names>);
    goto L15(r55);
  D34():
    deopt 117 [x13];
  D37():
    deopt 127 [];
  L84():
    x14 = force? x13;
    checkMissing(x14);
    S3names2 = ld S3names;
    check L85() else D35();
  L87():
    p21 = prom<V +>{
      S9 = ld S3;
      S10 = force? S9;
      checkMissing(S10);
      c7 = `is.object`(S10);
      if c7 then L1() else L2(S10);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", S10);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(S12):
      i = ld i;
      i1 = force? i;
      __1 = ldf `[` in base;
      r58 = dyn __1(S12, i1, 1);
      goto L0(r58);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p22 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r60 = dyn parent_frame();
      return r60;
    };
    r62 = dyn get[, mode, envir](p21, "function", p22);
    check L88() else D38();
  D35():
    deopt 119 [S3names2];
  D38():
    deopt 133 [r62];
  L85():
    S3names3 = force? S3names2;
    checkMissing(S3names3);
    match = ldf match in base;
    r57 = dyn match(x14, S3names3, NA_INT, NULL);
    check L86() else D36();
  L88():
    st genfun = r62;
    sym5 = ldf `.isMethodsDispatchOn`;
    base5 = ldf `.isMethodsDispatchOn` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L89() else L90();
  D36():
    deopt 124 [r57];
  L16(r64):
    c8 = `as.logical`(r64);
    if c8 then L92() else L17(c8);
  L86():
    goto L15(r57);
  L89():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r65 = dyn _isMethodsDispatchOn();
    check L91() else D39();
  L90():
    r63 = dyn base5();
    goto L16(r63);
  D39():
    deopt 138 [r65];
  L17(c10):
    c14 = `as.logical`(c10);
    if c14 then L97() else L18();
  L91():
    goto L16(r65);
  L92():
    __2 = ldf `::`;
    check L93() else D40();
  D40():
    deopt 140 [c8];
  L18():
    goto L19();
  L19():
    _defenv_for_S3_registry = ldf `.defenv_for_S3_registry`;
    check L103() else D43();
  L93():
    r66 = dyn __2("methods", "is");
    check L94() else D41();
  L97():
    __3 = ldf `@` in base;
    r70 = dyn __3(<lang `::`(methods, slot)(genfun, "default")>, <sym methods>);
    c15 = `is.object`(r70);
    if c15 then L99() else L100(r70);
  D41():
    deopt 143 [c8, r66];
  D43():
    deopt 156 [];
  L94():
    checkFun.0(r66);
    r67 = r66 as cls;
    p23 = prom<V +>{
      genfun = ld genfun;
      genfun1 = force? genfun;
      checkMissing(genfun1);
      return genfun1;
    };
    r69 = dyn r67(p23, "genericFunction");
    check L95() else D42();
  L98(dx5):
    st genfun = dx5;
    goto L19();
  L99():
    dr4 = tryDispatchBuiltin.1("$", r70);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L101() else L100(dr4);
  L100(r72):
    r73 = `$`(r72, <sym ANY>);
    goto L98(r73);
  L103():
    p24 = prom<V +>{
      genfun2 = ld genfun;
      genfun3 = force? genfun2;
      checkMissing(genfun3);
      return genfun3;
    };
    r75 = dyn _defenv_for_S3_registry(p24);
    check L104() else D44();
  D42():
    deopt 147 [c8, r69];
  D44():
    deopt 158 [r75];
  L95():
    c11 = `as.logical`(r69);
    c12 = `&&`(c8, c11);
    goto L17(c12);
  L101():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L98(dx4);
  L104():
    st defenv = r75;
    defenv = ld defenv;
    check L105() else D45();
  D45():
    deopt 160 [defenv];
  L105():
    defenv1 = force? defenv;
    checkMissing(defenv1);
    c16 = `is.object`(defenv1);
    if c16 then L106() else L107(defenv1);
  L20(dx8):
    st S3Table = dx8;
    paste = ldf paste;
    check L109() else D46();
  L106():
    dr6 = tryDispatchBuiltin.1("[[", defenv1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L108() else L107(dr6);
  L107(defenv3):
    __4 = ldf `[[` in base;
    r76 = dyn __4(defenv3, ".__S3MethodsTable__.");
    goto L20(r76);
  D46():
    deopt 167 [];
  L108():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L20(dx7);
  L109():
    p25 = prom<V +>{
      S13 = ld S3;
      S14 = force? S13;
      checkMissing(S14);
      c17 = `is.object`(S14);
      if c17 then L1() else L2(S14);
    L0(dx10):
      return dx10;
    L1():
      dr8 = tryDispatchBuiltin.1("[", S14);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(S16):
      i2 = ld i;
      i3 = force? i2;
      __5 = ldf `[` in base;
      r77 = dyn __5(S16, i3, 1);
      goto L0(r77);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    };
    p26 = prom<V +>{
      S17 = ld S3;
      S18 = force? S17;
      checkMissing(S18);
      c18 = `is.object`(S18);
      if c18 then L1() else L2(S18);
    L0(dx12):
      return dx12;
    L1():
      dr10 = tryDispatchBuiltin.1("[", S18);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(S20):
      i4 = ld i;
      i5 = force? i4;
      __6 = ldf `[` in base;
      r79 = dyn __6(S20, i5, 2);
      goto L0(r79);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx11);
    };
    r81 = dyn paste[, , sep](p25, p26, ".");
    check L110() else D47();
  D47():
    deopt 172 [r81];
  L110():
    st remappedName = r81;
    exists = ldf exists;
    check L111() else D48();
  D48():
    deopt 175 [];
  L111():
    p27 = prom<V +>{
      remappedName = ld remappedName;
      remappedName1 = force? remappedName;
      checkMissing(remappedName1);
      return remappedName1;
    };
    p28 = prom<V +>{
      S3Table = ld S3Table;
      S3Table1 = force? S3Table;
      checkMissing(S3Table1);
      return S3Table1;
    };
    r84 = dyn exists[, envir, inherits](p27, p28, FALSE);
    check L112() else D49();
  D49():
    deopt 181 [r84];
  L112():
    c19 = `as.logical`(r84);
    if c19 then L113() else L21();
  L21():
    goto L22(NULL);
  L22(r89):
    goto L23(r89);
  L113():
    assign2 = ldf assign;
    check L114() else D50();
  D50():
    deopt 183 [];
  L114():
    p29 = prom<V +>{
      remappedName2 = ld remappedName;
      remappedName3 = force? remappedName2;
      checkMissing(remappedName3);
      return remappedName3;
    };
    p30 = prom<V +>{
      value5 = ld value;
      value6 = force? value5;
      checkMissing(value6);
      return value6;
    };
    p31 = prom<V +>{
      S3Table2 = ld S3Table;
      S3Table3 = force? S3Table2;
      checkMissing(S3Table3);
      return S3Table3;
    };
    r88 = dyn assign2(p29, p30, p31);
    check L115() else D51();
  D51():
    deopt 187 [r88];
  L115():
    goto L22(r88);
  }
}