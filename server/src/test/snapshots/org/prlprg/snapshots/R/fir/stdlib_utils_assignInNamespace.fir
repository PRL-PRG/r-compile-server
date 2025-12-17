fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner676071745;
    st assignInNamespace = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner676071745(x, value, ns, pos, envir) {
  (reg x:*, reg value:*, reg ns:*, reg pos:*, reg envir:*) -+> V { var x:*, var value:*, var ns:*, var pos:*, reg pos_isMissing:L, reg pos_orDefault:*, reg p:p(V +), var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg pos1:*, reg pos2:V, reg as_environment:cls, reg r3:V, reg p1:p(V +), reg sys_nframe:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg missing:cls, reg r8:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg envir1:*, reg envir2:V, reg attr:cls, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg nm:*, reg nm1:V, reg c1:V, reg c2:L, reg c3:V, reg startsWith:cls, reg nm2:*, reg nm3:V, reg p2:p(V +), reg r15:V, reg r16:V, reg c5:L, reg c6:V, reg c8:L, reg stop:cls, reg r17:V, reg asNamespace:cls, reg substring:cls, reg nm4:*, reg nm5:V, reg p3:p(V +), reg r20:V, reg p4:p(V +), reg r22:V, reg asNamespace1:cls, reg ns1:*, reg ns2:V, reg p5:p(V +), reg r25:V, reg getNamespaceName:cls, reg ns3:*, reg ns4:V, reg p6:p(V +), reg r27:V, reg nf:*, reg nf1:V, reg r28:V, reg c9:L, reg _in_:cls, reg ns_name:*, reg ns_name1:V, reg p7:p(V +), reg ___:cls, reg r30:V, reg r31:cls, reg r32:V, reg c10:L, reg r34:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r35:V, reg p8:p(V +), reg r37:V, reg c11:L, reg stop1:cls, reg sQuote:cls, reg x1:*, reg x2:V, reg p9:p(V +), reg r39:V, reg p10:p(V +), reg r41:V, reg r42:V, reg bindingIsLocked:cls, reg x3:*, reg x4:V, reg p11:p(V +), reg ns5:*, reg ns6:V, reg p12:p(V +), reg r46:V, reg c12:L, reg Sys_getenv:cls, reg r47:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r48:V, reg r49:V, reg in_load:*, reg in_load1:V, reg nzchar:cls, reg r50:V, reg c13:L, reg in_load2:*, reg in_load3:V, reg ns_name2:*, reg ns_name3:V, reg r51:V, reg c14:L, reg gettextf:cls, reg sQuote1:cls, reg x5:*, reg x6:V, reg p13:p(V +), reg r53:V, reg p14:p(V +), reg sQuote2:cls, reg ns_name4:*, reg ns_name5:V, reg p15:p(V +), reg r56:V, reg p16:p(V +), reg sQuote3:cls, reg in_load4:*, reg in_load5:V, reg p17:p(V +), reg r59:V, reg p18:p(V +), reg r61:V, reg _in_1:cls, reg in_load6:*, reg in_load7:V, reg p19:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r63:V, reg r64:V, reg c15:cls, reg r65:V, reg p20:p(V +), reg r67:V, reg r68:V, reg c16:L, reg warning:cls, reg msg:*, reg msg1:V, reg p21:p(V +), reg r70:V, reg r71:V, reg r72:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r74:V, reg r75:V, reg Sys_getenv1:cls, reg r76:V, reg nzchar1:cls, reg r77:V, reg c17:L, reg warning1:cls, reg gettextf1:cls, reg sQuote4:cls, reg x7:*, reg x8:V, reg p22:p(V +), reg r79:V, reg p23:p(V +), reg sQuote5:cls, reg ns_name6:*, reg ns_name7:V, reg p24:p(V +), reg r82:V, reg p25:p(V +), reg r84:V, reg p26:p(V +), reg r86:V, reg unlockBinding:cls, reg x9:*, reg x10:V, reg p27:p(V +), reg ns7:*, reg ns8:V, reg p28:p(V +), reg r89:V, reg assign:cls, reg x11:*, reg x12:V, reg p29:p(V +), reg value1:*, reg value2:V, reg p30:p(V +), reg ns9:*, reg ns10:V, reg p31:p(V +), reg r93:V, reg options:cls, reg r94:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r95:V, reg on_exit:cls, reg r97:V, reg options1:cls, reg p32:p(V +), reg r99:V, reg lockBinding:cls, reg x13:*, reg x14:V, reg p33:p(V +), reg ns11:*, reg ns12:V, reg p34:p(V +), reg r102:V, reg assign1:cls, reg x15:*, reg x16:V, reg p35:p(V +), reg value3:*, reg value4:V, reg p36:p(V +), reg ns13:*, reg ns14:V, reg p37:p(V +), reg r107:V, reg isBaseNamespace:cls, reg ns15:*, reg ns16:V, reg p38:p(V +), reg r109:V, reg r110:V, reg c18:L, reg _getNamespaceInfo:cls, reg ns17:*, reg ns18:V, reg p39:p(V +), reg r112:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r113:V, reg r114:V, reg S3:*, reg S4:V, reg length:cls, reg r115:V, reg r116:V, reg c19:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r117:V, reg r118:V, reg invisible:cls, reg r119:V, reg S5:*, reg S6:V, reg c20:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r122:V, reg _in_2:cls, reg x17:*, reg x18:V, reg p40:p(V +), reg S3names:*, reg S3names1:V, reg p41:p(V +), reg r125:V, reg c21:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r126:V, reg r127:V, reg x19:*, reg x20:V, reg S3names2:*, reg S3names3:V, reg match:cls, reg r128:V, reg get:cls, reg S9:*, reg S10:V, reg c22:L, reg S12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i:*, reg i1:V, reg __1:cls, reg r129:V, reg p42:p(V +), reg parent_frame:cls, reg r131:V, reg p43:p(V +), reg r133:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r134:V, reg r135:V, reg _isMethodsDispatchOn:cls, reg r136:V, reg c23:L, reg c25:V, reg __2:cls, reg r137:V, reg r138:cls, reg genfun:*, reg genfun1:V, reg p44:p(V +), reg r140:V, reg c26:L, reg c27:V, reg c29:L, reg __3:cls, reg r141:V, reg c30:L, reg r143:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r144:V, reg _defenv_for_S3_registry:cls, reg genfun2:*, reg genfun3:V, reg p45:p(V +), reg r146:V, reg defenv:*, reg defenv1:V, reg c31:L, reg defenv3:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg __4:cls, reg r147:V, reg paste:cls, reg S13:*, reg S14:V, reg c32:L, reg S16:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg i2:*, reg i3:V, reg __5:cls, reg r148:V, reg p46:p(V +), reg S17:*, reg S18:V, reg c33:L, reg S20:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg i4:*, reg i5:V, reg __6:cls, reg r150:V, reg p47:p(V +), reg r152:V, reg exists:cls, reg remappedName:*, reg remappedName1:V, reg p48:p(V +), reg S3Table:*, reg S3Table1:V, reg p49:p(V +), reg r155:V, reg c34:L, reg assign2:cls, reg remappedName2:*, reg remappedName3:V, reg p50:p(V +), reg value5:*, reg value6:V, reg p51:p(V +), reg S3Table2:*, reg S3Table3:V, reg p52:p(V +), reg r159:V, reg r160:V, reg r161:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r163:V, reg r164:V, reg invisible1:cls, reg r165:V |
    mkenv;
    st x = x;
    st value = value;
    st ns = ns;
    pos_isMissing = missing.0(pos);
    if pos_isMissing then L0() else L1(pos);
  L0():
    p = prom<V +>{
      return -1.0;
    };
    goto L1(p);
  L1(pos_orDefault):
    st pos = pos_orDefault;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L2() else L3(envir);
  L2():
    p1 = prom<V +>{
      sym = ldf `as.environment`;
      base = ldf `as.environment` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      pos1 = ld pos;
      pos2 = force? pos1;
      checkMissing(pos2);
      as_environment = ldf `as.environment` in base;
      r3 = dyn as_environment(pos2);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym pos>);
      goto L0(r1);
    };
    goto L3(p1);
  L3(envir_orDefault):
    st envir = envir_orDefault;
    sys_nframe = ldf `sys.nframe`;
    check L46() else D0();
  D0():
    deopt 1 [];
  L46():
    r5 = dyn sys_nframe();
    check L47() else D1();
  D1():
    deopt 2 [r5];
  L47():
    st nf = r5;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L48() else L49();
  L4(r7):
    c = `as.logical`(r7);
    if c then L50() else L5();
  L48():
    missing = ldf missing in base;
    r8 = dyn missing(<sym ns>);
    goto L4(r8);
  L49():
    r6 = dyn base1(<sym ns>);
    goto L4(r6);
  L5():
    asNamespace1 = ldf asNamespace;
    check L69() else D11();
  L11():
    getNamespaceName = ldf getNamespaceName;
    check L71() else D13();
  L50():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  D11():
    deopt 40 [];
  D13():
    deopt 45 [];
  L6(r10):
    st nm = r10;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  L51():
    envir1 = ld envir;
    check L53() else D2();
  L52():
    r9 = dyn base2[, , exact](<sym envir>, "name", TRUE);
    goto L6(r9);
  L69():
    p5 = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r25 = dyn asNamespace1(p5);
    check L70() else D12();
  L71():
    p6 = prom<V +>{
      ns3 = ld ns;
      ns4 = force? ns3;
      checkMissing(ns4);
      return ns4;
    };
    r27 = dyn getNamespaceName(p6);
    check L72() else D14();
  D2():
    deopt 9 [envir1];
  D12():
    deopt 42 [r25];
  D14():
    deopt 47 [r27];
  L7(r13):
    c2 = `as.logical`(r13);
    if c2 then L8(c2) else L58();
  L53():
    envir2 = force? envir1;
    checkMissing(envir2);
    attr = ldf attr in base;
    r11 = dyn attr(envir2, "name", TRUE);
    check L54() else D3();
  L55():
    nm = ld nm;
    check L57() else D4();
  L56():
    r12 = dyn base3(<sym nm>);
    goto L7(r12);
  L70():
    st ns = r25;
    goto L11();
  L72():
    st ns_name = r27;
    nf = ld nf;
    check L73() else D15();
  D3():
    deopt 15 [r11];
  D4():
    deopt 18 [nm];
  D15():
    deopt 49 [nf];
  L8(c3):
    c8 = `as.logical`(c3);
    if c8 then L62() else L9();
  L54():
    goto L6(r11);
  L57():
    nm1 = force? nm;
    checkMissing(nm1);
    c1 = `==`(nm1, NULL);
    goto L7(c1);
  L58():
    startsWith = ldf startsWith;
    check L59() else D5();
  L73():
    nf1 = force? nf;
    checkMissing(nf1);
    r28 = `>`(nf1, 1);
    c9 = `as.logical`(r28);
    if c9 then L74() else L12();
  D5():
    deopt 22 [c2];
  L9():
    goto L10();
  L10():
    asNamespace = ldf asNamespace;
    check L66() else D9();
  L12():
    goto L15();
  L15():
    bindingIsLocked = ldf bindingIsLocked;
    check L82() else D20();
  L59():
    p2 = prom<V +>{
      nm2 = ld nm;
      nm3 = force? nm2;
      checkMissing(nm3);
      return nm3;
    };
    r15 = dyn startsWith(p2, "package:");
    check L60() else D6();
  L62():
    stop = ldf stop;
    check L63() else D7();
  L74():
    _in_ = ldf `%in%`;
    check L75() else D16();
  D6():
    deopt 25 [c2, r15];
  D7():
    deopt 29 [];
  D9():
    deopt 35 [];
  D16():
    deopt 54 [];
  D20():
    deopt 71 [];
  L60():
    r16 = `!`(r15);
    c5 = `as.logical`(r16);
    c6 = `||`(c2, c5);
    goto L8(c6);
  L63():
    r17 = dyn stop("environment specified is not a package");
    check L64() else D8();
  L66():
    p4 = prom<V +>{
      substring = ldf substring;
      p3 = prom<V +>{
        nm4 = ld nm;
        nm5 = force? nm4;
        checkMissing(nm5);
        return nm5;
      };
      r20 = dyn substring(p3, 9);
      return r20;
    };
    r22 = dyn asNamespace(p4);
    check L67() else D10();
  L75():
    p7 = prom<V +>{
      ns_name = ld ns_name;
      ns_name1 = force? ns_name;
      checkMissing(ns_name1);
      return ns_name1;
    };
    p8 = prom<V +>{
      ___ = ldf `:::`;
      r30 = dyn ___("tools", ".get_standard_package_names");
      checkFun.0(r30);
      r31 = r30 as cls;
      r32 = dyn r31();
      c10 = `is.object`(r32);
      if c10 then L1() else L2(r32);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", r32);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r34):
      r35 = `$`(r34, <sym base>);
      goto L0(r35);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r37 = dyn _in_(p7, p8);
    check L76() else D17();
  L82():
    p11 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p12 = prom<V +>{
      ns5 = ld ns;
      ns6 = force? ns5;
      checkMissing(ns6);
      return ns6;
    };
    r46 = dyn bindingIsLocked(p11, p12);
    check L83() else D21();
  D8():
    deopt 31 [r17];
  D10():
    deopt 37 [r22];
  D17():
    deopt 57 [r37];
  D21():
    deopt 74 [r46];
  L64():
    goto L10();
  L67():
    st ns = r22;
    goto L11();
  L76():
    c11 = `as.logical`(r37);
    if c11 then L77() else L13();
  L83():
    c12 = `as.logical`(r46);
    if c12 then L84() else L16();
  L13():
    goto L14(NULL);
  L14(r42):
    goto L15();
  L16():
    assign1 = ldf assign;
    check L127() else D49();
  L27():
    isBaseNamespace = ldf isBaseNamespace;
    check L129() else D51();
  L77():
    stop1 = ldf stop;
    check L78() else D18();
  L84():
    Sys_getenv = ldf `Sys.getenv`;
    check L85() else D22();
  D18():
    deopt 59 [];
  D22():
    deopt 76 [];
  D49():
    deopt 171 [];
  D51():
    deopt 180 [];
  L78():
    p10 = prom<V +>{
      sQuote = ldf sQuote;
      p9 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r39 = dyn sQuote(p9);
      return r39;
    };
    r41 = dyn stop1[, , , domain]("locked binding of ", p10, " cannot be changed", NA_LGL);
    check L79() else D19();
  L85():
    r47 = dyn Sys_getenv("_R_NS_LOAD_");
    check L86() else D23();
  L127():
    p35 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    p36 = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    p37 = prom<V +>{
      ns13 = ld ns;
      ns14 = force? ns13;
      checkMissing(ns14);
      return ns14;
    };
    r107 = dyn assign1[, , envir, inherits](p35, p36, p37, FALSE);
    check L128() else D50();
  L129():
    p38 = prom<V +>{
      ns15 = ld ns;
      ns16 = force? ns15;
      checkMissing(ns16);
      return ns16;
    };
    r109 = dyn isBaseNamespace(p38);
    check L130() else D52();
  D19():
    deopt 65 [r41];
  D23():
    deopt 78 [r47];
  D50():
    deopt 178 [r107];
  D52():
    deopt 182 [r109];
  L79():
    goto L14(r41);
  L86():
    st in_load = r47;
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L87() else L88();
  L128():
    goto L27();
  L130():
    r110 = `!`(r109);
    c18 = `as.logical`(r110);
    if c18 then L131() else L28();
  L17(r49):
    c13 = `as.logical`(r49);
    if c13 then L91() else L18();
  L28():
    goto L44();
  L44():
    sym12 = ldf invisible;
    base12 = ldf invisible in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L188() else L189();
  L87():
    in_load = ld in_load;
    check L89() else D24();
  L88():
    r48 = dyn base4(<sym in_load>);
    goto L17(r48);
  L131():
    _getNamespaceInfo = ldf `.getNamespaceInfo`;
    check L132() else D53();
  D24():
    deopt 82 [in_load];
  D53():
    deopt 185 [];
  L18():
    sym6 = ldf nzchar;
    base6 = ldf nzchar in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L105() else L106();
  L23():
    unlockBinding = ldf unlockBinding;
    check L114() else D39();
  L45(r164):
    popenv;
    return r164;
  L89():
    in_load1 = force? in_load;
    checkMissing(in_load1);
    nzchar = ldf nzchar in base;
    r50 = dyn nzchar(in_load1);
    check L90() else D25();
  L91():
    in_load2 = ld in_load;
    check L92() else D26();
  L132():
    p39 = prom<V +>{
      ns17 = ld ns;
      ns18 = force? ns17;
      checkMissing(ns18);
      return ns18;
    };
    r112 = dyn _getNamespaceInfo(p39, "S3methods");
    check L133() else D54();
  L188():
    invisible1 = ldf invisible in base;
    r165 = dyn invisible1(NULL);
    check L190() else D79();
  L189():
    r163 = dyn base12(NULL);
    goto L45(r163);
  D25():
    deopt 85 [r50];
  D26():
    deopt 86 [in_load2];
  D39():
    deopt 139 [];
  D54():
    deopt 188 [r112];
  D79():
    deopt 300 [r165];
  L24(r75):
    c17 = `as.logical`(r75);
    if c17 then L110() else L25();
  L90():
    goto L17(r50);
  L92():
    in_load3 = force? in_load2;
    checkMissing(in_load3);
    ns_name2 = ld ns_name;
    check L93() else D27();
  L105():
    Sys_getenv1 = ldf `Sys.getenv`;
    check L107() else D34();
  L106():
    r74 = dyn base6(<lang Sys.getenv("_R_WARN_ON_LOCKED_BINDINGS_")>);
    goto L24(r74);
  L114():
    p27 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p28 = prom<V +>{
      ns7 = ld ns;
      ns8 = force? ns7;
      checkMissing(ns8);
      return ns8;
    };
    r89 = dyn unlockBinding(p27, p28);
    check L115() else D40();
  L133():
    st S3 = r112;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L134() else L135();
  L190():
    goto L45(r165);
  D27():
    deopt 87 [in_load3, ns_name2];
  D34():
    deopt 121 [];
  D40():
    deopt 142 [r89];
  L25():
    goto L23();
  L29(r114):
    r116 = `!`(r114);
    c19 = `as.logical`(r116);
    if c19 then L138() else L30();
  L93():
    ns_name3 = force? ns_name2;
    checkMissing(ns_name3);
    r51 = `!=`(in_load3, ns_name3);
    c14 = `as.logical`(r51);
    if c14 then L94() else L19();
  L107():
    r76 = dyn Sys_getenv1("_R_WARN_ON_LOCKED_BINDINGS_");
    check L108() else D35();
  L110():
    warning1 = ldf warning;
    check L111() else D37();
  L115():
    assign = ldf assign;
    check L116() else D41();
  L134():
    S3 = ld S3;
    check L136() else D55();
  L135():
    r113 = dyn base8(<sym S3>);
    goto L29(r113);
  D35():
    deopt 123 [r76];
  D37():
    deopt 127 [];
  D41():
    deopt 144 [];
  D55():
    deopt 192 [S3];
  L19():
    goto L22(NULL);
  L22(r72):
    goto L23();
  L30():
    S5 = ld S3;
    check L144() else D58();
  L94():
    gettextf = ldf gettextf;
    check L95() else D28();
  L108():
    nzchar1 = ldf nzchar in base;
    r77 = dyn nzchar1(r76);
    check L109() else D36();
  L111():
    p26 = prom<V +>{
      gettextf1 = ldf gettextf;
      p23 = prom<V +>{
        sQuote4 = ldf sQuote;
        p22 = prom<V +>{
          x7 = ld x;
          x8 = force? x7;
          checkMissing(x8);
          return x8;
        };
        r79 = dyn sQuote4(p22);
        return r79;
      };
      p25 = prom<V +>{
        sQuote5 = ldf sQuote;
        p24 = prom<V +>{
          ns_name6 = ld ns_name;
          ns_name7 = force? ns_name6;
          checkMissing(ns_name7);
          return ns_name7;
        };
        r82 = dyn sQuote5(p24);
        return r82;
      };
      r84 = dyn gettextf1("changing locked binding for %s in %s", p23, p25);
      return r84;
    };
    r86 = dyn warning1[, `call.`, domain, `immediate.`](p26, FALSE, NA_LGL, TRUE);
    check L112() else D38();
  L116():
    p29 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p30 = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    p31 = prom<V +>{
      ns9 = ld ns;
      ns10 = force? ns9;
      checkMissing(ns10);
      return ns10;
    };
    r93 = dyn assign[, , envir, inherits](p29, p30, p31, FALSE);
    check L117() else D42();
  L136():
    S4 = force? S3;
    checkMissing(S4);
    length = ldf length in base;
    r115 = dyn length(S4);
    check L137() else D56();
  L138():
    sym9 = ldf invisible;
    base9 = ldf invisible in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L139() else L140();
  D28():
    deopt 91 [];
  D36():
    deopt 125 [r77];
  D38():
    deopt 135 [r86];
  D42():
    deopt 151 [r93];
  D56():
    deopt 195 [r115];
  D58():
    deopt 205 [S5];
  L31(r118):
    popenv;
    return r118;
  L95():
    p14 = prom<V +>{
      sQuote1 = ldf sQuote;
      p13 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r53 = dyn sQuote1(p13);
      return r53;
    };
    p16 = prom<V +>{
      sQuote2 = ldf sQuote;
      p15 = prom<V +>{
        ns_name4 = ld ns_name;
        ns_name5 = force? ns_name4;
        checkMissing(ns_name5);
        return ns_name5;
      };
      r56 = dyn sQuote2(p15);
      return r56;
    };
    p18 = prom<V +>{
      sQuote3 = ldf sQuote;
      p17 = prom<V +>{
        in_load4 = ld in_load;
        in_load5 = force? in_load4;
        checkMissing(in_load5);
        return in_load5;
      };
      r59 = dyn sQuote3(p17);
      return r59;
    };
    r61 = dyn gettextf("changing locked binding for %s in %s whilst loading %s", p14, p16, p18);
    check L96() else D29();
  L109():
    goto L24(r77);
  L112():
    goto L23();
  L117():
    options = ldf options;
    check L118() else D43();
  L137():
    goto L29(r115);
  L139():
    invisible = ldf invisible in base;
    r119 = dyn invisible(NULL);
    check L141() else D57();
  L140():
    r117 = dyn base9(NULL);
    goto L31(r117);
  L144():
    S6 = force? S5;
    checkMissing(S6);
    c20 = `is.object`(S6);
    if c20 then L145() else L146();
  D29():
    deopt 96 [r61];
  D43():
    deopt 153 [];
  D57():
    deopt 201 [r119];
  L33(dx3):
    st S3names = dx3;
    _in_2 = ldf `%in%`;
    check L148() else D59();
  L96():
    st msg = r61;
    _in_1 = ldf `%in%`;
    check L97() else D30();
  L118():
    r94 = dyn options("warn");
    check L119() else D44();
  L141():
    goto L31(r119);
  L145():
    dr2 = tryDispatchBuiltin.1("[", S6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L147() else L146();
  L146():
    __ = ldf `[` in base;
    r122 = dyn __(S6, <missing>, 3);
    goto L33(r122);
  D30():
    deopt 99 [];
  D44():
    deopt 155 [r94];
  D59():
    deopt 213 [];
  L97():
    p19 = prom<V +>{
      in_load6 = ld in_load;
      in_load7 = force? in_load6;
      checkMissing(in_load7);
      return in_load7;
    };
    p20 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r64):
      return r64;
    L1():
      c15 = ldf c in base;
      r65 = dyn c15("Matrix", "SparseM");
      goto L0(r65);
    L2():
      r63 = dyn base5("Matrix", "SparseM");
      goto L0(r63);
    };
    r67 = dyn _in_1(p19, p20);
    check L98() else D31();
  L119():
    st w = r94;
    sym7 = ldf `on.exit`;
    base7 = ldf `on.exit` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L120() else L121();
  L147():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L33(dx2);
  L148():
    p40 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    p41 = prom<V +>{
      S3names = ld S3names;
      S3names1 = force? S3names;
      checkMissing(S3names1);
      return S3names1;
    };
    r125 = dyn _in_2(p40, p41);
    check L149() else D60();
  D31():
    deopt 102 [r67];
  D60():
    deopt 216 [r125];
  L26():
    options1 = ldf options;
    check L122() else D45();
  L98():
    r68 = `!`(r67);
    c16 = `as.logical`(r68);
    if c16 then L99() else L20();
  L120():
    on_exit = ldf `on.exit` in base;
    r97 = dyn on_exit(<lang options(w)>);
    goto L26();
  L121():
    r95 = dyn base7(<lang options(w)>);
    goto L26();
  L149():
    c21 = `as.logical`(r125);
    if c21 then L150() else L34();
  D45():
    deopt 161 [];
  L20():
    goto L21(NULL);
  L21(r71):
    goto L22(r71);
  L34():
    goto L43(NULL);
  L43(r161):
    goto L44();
  L99():
    warning = ldf warning;
    check L100() else D32();
  L122():
    p32 = prom<V +>{
      return -1.0;
    };
    r99 = dyn options1[warn](p32);
    check L123() else D46();
  L150():
    sym10 = ldf match;
    base10 = ldf match in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L151() else L152();
  D32():
    deopt 105 [];
  D46():
    deopt 164 [r99];
  L35(r127):
    st i = r127;
    get = ldf get;
    check L156() else D64();
  L100():
    p21 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r70 = dyn warning[, `call.`, domain, `immediate.`](p21, FALSE, NA_LGL, TRUE);
    check L101() else D33();
  L123():
    lockBinding = ldf lockBinding;
    check L124() else D47();
  L151():
    x19 = ld x;
    check L153() else D61();
  L152():
    r126 = dyn base10(<sym x>, <sym S3names>);
    goto L35(r126);
  D33():
    deopt 113 [r70];
  D47():
    deopt 166 [];
  D61():
    deopt 219 [x19];
  D64():
    deopt 229 [];
  L101():
    goto L21(r70);
  L124():
    p33 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    p34 = prom<V +>{
      ns11 = ld ns;
      ns12 = force? ns11;
      checkMissing(ns12);
      return ns12;
    };
    r102 = dyn lockBinding(p33, p34);
    check L125() else D48();
  L153():
    x20 = force? x19;
    checkMissing(x20);
    S3names2 = ld S3names;
    check L154() else D62();
  L156():
    p42 = prom<V +>{
      S9 = ld S3;
      S10 = force? S9;
      checkMissing(S10);
      c22 = `is.object`(S10);
      if c22 then L1() else L2(S10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", S10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(S12):
      i = ld i;
      i1 = force? i;
      __1 = ldf `[` in base;
      r129 = dyn __1(S12, i1, 1);
      goto L0(r129);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p43 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r131 = dyn parent_frame();
      return r131;
    };
    r133 = dyn get[, mode, envir](p42, "function", p43);
    check L157() else D65();
  D48():
    deopt 169 [r102];
  D62():
    deopt 221 [S3names2];
  D65():
    deopt 235 [r133];
  L125():
    goto L27();
  L154():
    S3names3 = force? S3names2;
    checkMissing(S3names3);
    match = ldf match in base;
    r128 = dyn match(x20, S3names3, NA_INT, NULL);
    check L155() else D63();
  L157():
    st genfun = r133;
    sym11 = ldf `.isMethodsDispatchOn`;
    base11 = ldf `.isMethodsDispatchOn` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L158() else L159();
  D63():
    deopt 226 [r128];
  L36(r135):
    c23 = `as.logical`(r135);
    if c23 then L161() else L37(c23);
  L155():
    goto L35(r128);
  L158():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r136 = dyn _isMethodsDispatchOn();
    check L160() else D66();
  L159():
    r134 = dyn base11();
    goto L36(r134);
  D66():
    deopt 240 [r136];
  L37(c25):
    c29 = `as.logical`(c25);
    if c29 then L166() else L38();
  L160():
    goto L36(r136);
  L161():
    __2 = ldf `::`;
    check L162() else D67();
  D67():
    deopt 242 [c23];
  L38():
    goto L39();
  L39():
    _defenv_for_S3_registry = ldf `.defenv_for_S3_registry`;
    check L172() else D70();
  L162():
    r137 = dyn __2("methods", "is");
    check L163() else D68();
  L166():
    __3 = ldf `@` in base;
    r141 = dyn __3(<lang `::`(methods, slot)(genfun, "default")>, <sym methods>);
    c30 = `is.object`(r141);
    if c30 then L168() else L169(r141);
  D68():
    deopt 245 [c23, r137];
  D70():
    deopt 258 [];
  L163():
    checkFun.0(r137);
    r138 = r137 as cls;
    p44 = prom<V +>{
      genfun = ld genfun;
      genfun1 = force? genfun;
      checkMissing(genfun1);
      return genfun1;
    };
    r140 = dyn r138(p44, "genericFunction");
    check L164() else D69();
  L167(dx7):
    st genfun = dx7;
    goto L39();
  L168():
    dr6 = tryDispatchBuiltin.1("$", r141);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L170() else L169(dr6);
  L169(r143):
    r144 = `$`(r143, <sym ANY>);
    goto L167(r144);
  L172():
    p45 = prom<V +>{
      genfun2 = ld genfun;
      genfun3 = force? genfun2;
      checkMissing(genfun3);
      return genfun3;
    };
    r146 = dyn _defenv_for_S3_registry(p45);
    check L173() else D71();
  D69():
    deopt 249 [c23, r140];
  D71():
    deopt 260 [r146];
  L164():
    c26 = `as.logical`(r140);
    c27 = `&&`(c23, c26);
    goto L37(c27);
  L170():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L167(dx6);
  L173():
    st defenv = r146;
    defenv = ld defenv;
    check L174() else D72();
  D72():
    deopt 262 [defenv];
  L174():
    defenv1 = force? defenv;
    checkMissing(defenv1);
    c31 = `is.object`(defenv1);
    if c31 then L175() else L176(defenv1);
  L40(dx10):
    st S3Table = dx10;
    paste = ldf paste;
    check L178() else D73();
  L175():
    dr8 = tryDispatchBuiltin.1("[[", defenv1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L177() else L176(dr8);
  L176(defenv3):
    __4 = ldf `[[` in base;
    r147 = dyn __4(defenv3, ".__S3MethodsTable__.");
    goto L40(r147);
  D73():
    deopt 269 [];
  L177():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L40(dx9);
  L178():
    p46 = prom<V +>{
      S13 = ld S3;
      S14 = force? S13;
      checkMissing(S14);
      c32 = `is.object`(S14);
      if c32 then L1() else L2(S14);
    L0(dx12):
      return dx12;
    L1():
      dr10 = tryDispatchBuiltin.1("[", S14);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(S16):
      i2 = ld i;
      i3 = force? i2;
      __5 = ldf `[` in base;
      r148 = dyn __5(S16, i3, 1);
      goto L0(r148);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx11);
    };
    p47 = prom<V +>{
      S17 = ld S3;
      S18 = force? S17;
      checkMissing(S18);
      c33 = `is.object`(S18);
      if c33 then L1() else L2(S18);
    L0(dx14):
      return dx14;
    L1():
      dr12 = tryDispatchBuiltin.1("[", S18);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(S20):
      i4 = ld i;
      i5 = force? i4;
      __6 = ldf `[` in base;
      r150 = dyn __6(S20, i5, 2);
      goto L0(r150);
    L3():
      dx13 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx13);
    };
    r152 = dyn paste[, , sep](p46, p47, ".");
    check L179() else D74();
  D74():
    deopt 274 [r152];
  L179():
    st remappedName = r152;
    exists = ldf exists;
    check L180() else D75();
  D75():
    deopt 277 [];
  L180():
    p48 = prom<V +>{
      remappedName = ld remappedName;
      remappedName1 = force? remappedName;
      checkMissing(remappedName1);
      return remappedName1;
    };
    p49 = prom<V +>{
      S3Table = ld S3Table;
      S3Table1 = force? S3Table;
      checkMissing(S3Table1);
      return S3Table1;
    };
    r155 = dyn exists[, envir, inherits](p48, p49, FALSE);
    check L181() else D76();
  D76():
    deopt 283 [r155];
  L181():
    c34 = `as.logical`(r155);
    if c34 then L182() else L41();
  L41():
    goto L42(NULL);
  L42(r160):
    goto L43(r160);
  L182():
    assign2 = ldf assign;
    check L183() else D77();
  D77():
    deopt 285 [];
  L183():
    p50 = prom<V +>{
      remappedName2 = ld remappedName;
      remappedName3 = force? remappedName2;
      checkMissing(remappedName3);
      return remappedName3;
    };
    p51 = prom<V +>{
      value5 = ld value;
      value6 = force? value5;
      checkMissing(value6);
      return value6;
    };
    p52 = prom<V +>{
      S3Table2 = ld S3Table;
      S3Table3 = force? S3Table2;
      checkMissing(S3Table3);
      return S3Table3;
    };
    r159 = dyn assign2(p50, p51, p52);
    check L184() else D78();
  D78():
    deopt 289 [r159];
  L184():
    goto L42(r159);
  }
}