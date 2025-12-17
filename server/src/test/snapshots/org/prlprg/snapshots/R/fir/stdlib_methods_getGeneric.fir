fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2713861980;
    st getGeneric = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2713861980(f, mustFind, where, package) {
  (reg f:*, reg mustFind:*, reg where:*, reg package:*) -+> V { var f:*, var mustFind:*, reg mustFind_isMissing:L, reg mustFind_orDefault:*, var where:*, var package:*, reg package_isMissing:L, reg package_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg f1:*, reg f2:V, reg is_function:cls, reg r2:V, reg c:L, reg is:cls, reg f3:*, reg f4:V, reg p:p(V +), reg r4:V, reg c1:L, reg f5:*, reg f6:V, reg is_primitive:cls, reg f7:*, reg f8:V, reg p1:p(V +), reg r8:V, reg c2:L, reg genericForBasic:cls, reg _primname:cls, reg f9:*, reg f10:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg mustFind1:*, reg mustFind2:V, reg p4:p(V +), reg r13:V, reg stop:cls, reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg missing:cls, reg r19:V, reg c3:L, reg _getGeneric:cls, reg f11:*, reg f12:V, reg p5:p(V +), reg package1:*, reg package2:V, reg p6:p(V +), reg r22:V, reg r23:V, reg _getGeneric1:cls, reg f13:*, reg f14:V, reg p7:p(V +), reg where1:*, reg where2:V, reg p8:p(V +), reg package3:*, reg package4:V, reg p9:p(V +), reg r27:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg value:*, reg value1:V, reg c4:V, reg c5:L, reg c7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg c10:L, reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg c13:L, reg r33:V, reg baseenv:cls, reg r34:V, reg c14:L, reg c16:L, reg r36:V, reg dr:V, reg dc:L, reg dx:V, reg c18:L, reg dx1:V, reg f15:*, reg f16:V, reg __:cls, reg r37:V, reg c19:V, reg r38:V, reg c20:L, reg c21:V, reg c23:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg baseDef:*, reg baseDef1:V, reg is_function1:cls, reg r41:V, reg c24:L, reg genericForBasic1:cls, reg f17:*, reg f18:V, reg p10:p(V +), reg r43:V, reg is1:cls, reg value2:*, reg value3:V, reg p11:p(V +), reg r45:V, reg c25:L, reg _cacheGeneric:cls, reg f19:*, reg f20:V, reg p12:p(V +), reg value4:*, reg value5:V, reg p13:p(V +), reg r48:V, reg r49:V, reg r50:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg r53:V, reg value6:*, reg value7:V, reg is_function2:cls, reg r54:V, reg c26:L, reg value8:*, reg value9:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r55:V, reg r56:V, reg package5:*, reg package6:V, reg nzchar:cls, reg r57:V, reg c27:L, reg c29:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r58:V, reg c32:L, reg r59:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r60:V, reg c35:L, reg r61:V, reg package7:*, reg package8:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r62:V, reg c38:L, reg r63:V, reg c39:cls, reg r64:V, reg match:cls, reg r65:V, reg is_na:cls, reg r66:V, reg c40:L, reg c41:V, reg c43:L, reg tryCatch:cls, reg getNamespace:cls, reg package9:*, reg package10:V, reg p14:p(V +), reg r68:V, reg _getGeneric2:cls, reg f21:*, reg f22:V, reg p15:p(V +), reg ev:*, reg ev1:V, reg p16:p(V +), reg package11:*, reg package12:V, reg p17:p(V +), reg r72:V, reg p18:p(V +), reg r74:cls, reg p19:p(V +), reg r76:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r78:V, reg r79:V, reg value10:*, reg value11:V, reg is_function3:cls, reg r80:V, reg c44:L, reg value12:*, reg value13:V, reg mustFind3:*, reg mustFind4:V, reg c45:L, reg stop1:cls, reg gettextf:cls, reg sQuote:cls, reg f23:*, reg f24:V, reg p20:p(V +), reg r82:V, reg p21:p(V +), reg r84:V, reg p22:p(V +), reg r86:V |
    mkenv;
    st f = f;
    mustFind_isMissing = missing.0(mustFind);
    if mustFind_isMissing then L0(FALSE) else L0(mustFind);
  L0(mustFind_orDefault):
    st mustFind = mustFind_orDefault;
    st where = where;
    package_isMissing = missing.0(package);
    if package_isMissing then L1("") else L1(package);
  L1(package_orDefault):
    st package = package_orDefault;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L2(r1):
    c = `as.logical`(r1);
    if c then L39() else L3();
  L35():
    f1 = ld f;
    check L37() else D0();
  L36():
    r = dyn base(<sym f>);
    goto L2(r);
  D0():
    deopt 2 [f1];
  L3():
    goto L7();
  L7():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L56() else L57();
  L37():
    f2 = force? f1;
    checkMissing(f2);
    is_function = ldf `is.function` in base;
    r2 = dyn is_function(f2);
    check L38() else D1();
  L39():
    is = ldf is;
    check L40() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  L8(r18):
    c3 = `as.logical`(r18);
    if c3 then L58() else L9();
  L38():
    goto L2(r2);
  L40():
    p = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    r4 = dyn is(p, "genericFunction");
    check L41() else D3();
  L56():
    missing = ldf missing in base;
    r19 = dyn missing(<sym where>);
    goto L8(r19);
  L57():
    r17 = dyn base1(<sym where>);
    goto L8(r17);
  D3():
    deopt 10 [r4];
  L9():
    _getGeneric1 = ldf `.getGeneric`;
    check L62() else D13();
  L10(r23):
    st value = r23;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L64() else L65();
  L41():
    c1 = `as.logical`(r4);
    if c1 then L42() else L4();
  L58():
    _getGeneric = ldf `.getGeneric`;
    check L59() else D11();
  D11():
    deopt 35 [];
  D13():
    deopt 41 [];
  L4():
    is_primitive = ldf `is.primitive`;
    check L46() else D5();
  L11(r29):
    c5 = `as.logical`(r29);
    if c5 then L67() else L12(c5);
  L42():
    f5 = ld f;
    check L43() else D4();
  L59():
    p5 = prom<V +>{
      f11 = ld f;
      f12 = force? f11;
      checkMissing(f12);
      return f12;
    };
    p6 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    r22 = dyn _getGeneric(p5, <missing>, p6);
    check L60() else D12();
  L62():
    p7 = prom<V +>{
      f13 = ld f;
      f14 = force? f13;
      checkMissing(f14);
      return f14;
    };
    p8 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    p9 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    r27 = dyn _getGeneric1(p7, p8, p9);
    check L63() else D14();
  L64():
    value = ld value;
    check L66() else D15();
  L65():
    r28 = dyn base2(<sym value>);
    goto L11(r28);
  D4():
    deopt 11 [f5];
  D5():
    deopt 15 [];
  D12():
    deopt 39 [r22];
  D14():
    deopt 45 [r27];
  D15():
    deopt 48 [value];
  L12(c7):
    c23 = `as.logical`(c7);
    if c23 then L78() else L16();
  L43():
    f6 = force? f5;
    checkMissing(f6);
    popenv;
    return f6;
  L46():
    p1 = prom<V +>{
      f7 = ld f;
      f8 = force? f7;
      checkMissing(f8);
      return f8;
    };
    r8 = dyn is_primitive(p1);
    check L47() else D6();
  L60():
    goto L10(r22);
  L63():
    goto L10(r27);
  L66():
    value1 = force? value;
    checkMissing(value1);
    c4 = `==`(value1, NULL);
    goto L11(c4);
  L67():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L68() else L69();
  D6():
    deopt 17 [r8];
  L13(c10, r31):
    r38 = `!`(r31);
    c20 = `as.logical`(r38);
    c21 = `&&`(c10, c20);
    goto L12(c21);
  L16():
    goto L22();
  L22():
    sym6 = ldf `is.function`;
    base6 = ldf `is.function` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L94() else L95();
  L47():
    c2 = `as.logical`(r8);
    if c2 then L48() else L6();
  L68():
    sym4 = ldf baseenv;
    base4 = ldf baseenv in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L70() else L71();
  L69():
    r30 = dyn base3(<lang `<-`(baseDef, `[[`(baseenv(), f))>);
    goto L13(c5, r30);
  L78():
    sym5 = ldf `is.function`;
    base5 = ldf `is.function` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L79() else L80();
  L6():
    stop = ldf stop;
    check L53() else D9();
  L14(c13, r33):
    c14 = `is.object`(r33);
    if c14 then L73() else L74(c13, r33);
  L17(r40):
    c24 = `as.logical`(r40);
    if c24 then L83() else L18();
  L23(r53):
    c26 = `as.logical`(r53);
    if c26 then L98() else L24();
  L48():
    genericForBasic = ldf genericForBasic;
    check L49() else D7();
  L70():
    baseenv = ldf baseenv in base;
    r34 = dyn baseenv();
    check L72() else D16();
  L71():
    r32 = dyn base4();
    goto L14(c5, r32);
  L79():
    baseDef = ld baseDef;
    check L81() else D18();
  L80():
    r39 = dyn base5(<sym baseDef>);
    goto L17(r39);
  L94():
    value6 = ld value;
    check L96() else D26();
  L95():
    r52 = dyn base6(<sym value>);
    goto L23(r52);
  D7():
    deopt 19 [];
  D9():
    deopt 26 [];
  D16():
    deopt 55 [c5, r34];
  D18():
    deopt 65 [baseDef];
  D26():
    deopt 95 [value6];
  L15(c18, dx1):
    st baseDef = dx1;
    c19 = `==`(dx1, NULL);
    goto L13(c18, c19);
  L18():
    goto L21(NULL);
  L21(r50):
    goto L22();
  L24():
    sym7 = ldf nzchar;
    base7 = ldf nzchar in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L101() else L102();
  L49():
    p3 = prom<V +>{
      _primname = ldf `.primname`;
      p2 = prom<V +>{
        f9 = ld f;
        f10 = force? f9;
        checkMissing(f10);
        return f10;
      };
      r10 = dyn _primname(p2);
      return r10;
    };
    p4 = prom<V +>{
      mustFind1 = ld mustFind;
      mustFind2 = force? mustFind1;
      checkMissing(mustFind2);
      return mustFind2;
    };
    r13 = dyn genericForBasic[, mustFind](p3, p4);
    check L50() else D8();
  L53():
    r15 = dyn stop("argument 'f' must be a string, generic function, or primitive: got an ordinary function");
    check L54() else D10();
  L72():
    goto L14(c5, r34);
  L73():
    dr = tryDispatchBuiltin.1("[[", r33);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L75() else L74(c13, dr);
  L74(c16, r36):
    f15 = ld f;
    check L76() else D17();
  L81():
    baseDef1 = force? baseDef;
    checkMissing(baseDef1);
    is_function1 = ldf `is.function` in base;
    r41 = dyn is_function1(baseDef1);
    check L82() else D19();
  L83():
    genericForBasic1 = ldf genericForBasic;
    check L84() else D20();
  L96():
    value7 = force? value6;
    checkMissing(value7);
    is_function2 = ldf `is.function` in base;
    r54 = dyn is_function2(value7);
    check L97() else D27();
  L98():
    value8 = ld value;
    check L99() else D28();
  D8():
    deopt 23 [r13];
  D10():
    deopt 28 [r15];
  D17():
    deopt 56 [c16, r36, f15];
  D19():
    deopt 68 [r41];
  D20():
    deopt 70 [];
  D27():
    deopt 98 [r54];
  D28():
    deopt 99 [value8];
  L25(r56):
    c27 = `as.logical`(r56);
    if c27 then L105() else L26(c27);
  L50():
    popenv;
    return r13;
  L54():
    goto L7();
  L75():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(c13, dx);
  L76():
    f16 = force? f15;
    __ = ldf `[[` in base;
    r37 = dyn __(r36, f16);
    goto L15(c16, r37);
  L82():
    goto L17(r41);
  L84():
    p10 = prom<V +>{
      f17 = ld f;
      f18 = force? f17;
      checkMissing(f18);
      return f18;
    };
    r43 = dyn genericForBasic1[, mustFind](p10, FALSE);
    check L85() else D21();
  L97():
    goto L23(r54);
  L99():
    value9 = force? value8;
    checkMissing(value9);
    popenv;
    return value9;
  L101():
    package5 = ld package;
    check L103() else D29();
  L102():
    r55 = dyn base7(<sym package>);
    goto L25(r55);
  D21():
    deopt 74 [r43];
  D29():
    deopt 103 [package5];
  L26(c29):
    c43 = `as.logical`(c29);
    if c43 then L117() else L30();
  L85():
    st value = r43;
    is1 = ldf is;
    check L86() else D22();
  L103():
    package6 = force? package5;
    checkMissing(package6);
    nzchar = ldf nzchar in base;
    r57 = dyn nzchar(package6);
    check L104() else D30();
  L105():
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L106() else L107();
  D22():
    deopt 77 [];
  D30():
    deopt 106 [r57];
  L27(c32, r59):
    c40 = `as.logical`(r59);
    c41 = `&&`(c32, c40);
    goto L26(c41);
  L30():
    goto L31();
  L31():
    sym11 = ldf `is.function`;
    base11 = ldf `is.function` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L121() else L122();
  L86():
    p11 = prom<V +>{
      value2 = ld value;
      value3 = force? value2;
      checkMissing(value3);
      return value3;
    };
    r45 = dyn is1(p11, "genericFunction");
    check L87() else D23();
  L104():
    goto L25(r57);
  L106():
    sym9 = ldf match;
    base9 = ldf match in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L108() else L109();
  L107():
    r58 = dyn base8(<lang match(package, c("methods", "base"))>);
    goto L27(c27, r58);
  L117():
    tryCatch = ldf tryCatch;
    check L118() else D35();
  D23():
    deopt 80 [r45];
  D35():
    deopt 127 [];
  L28(c35, r61):
    is_na = ldf `is.na` in base;
    r66 = dyn is_na(r61);
    check L115() else D34();
  L32(r79):
    c44 = `as.logical`(r79);
    if c44 then L125() else L33();
  L87():
    c25 = `as.logical`(r45);
    if c25 then L88() else L19();
  L108():
    package7 = ld package;
    check L110() else D31();
  L109():
    r60 = dyn base9(<sym package>, <lang c("methods", "base")>);
    goto L28(c27, r60);
  L118():
    p18 = prom<V +>{
      getNamespace = ldf getNamespace;
      p14 = prom<V +>{
        package9 = ld package;
        package10 = force? package9;
        checkMissing(package10);
        return package10;
      };
      r68 = dyn getNamespace(p14);
      st ev = r68;
      _getGeneric2 = ldf `.getGeneric`;
      p15 = prom<V +>{
        f21 = ld f;
        f22 = force? f21;
        checkMissing(f22);
        return f22;
      };
      p16 = prom<V +>{
        ev = ld ev;
        ev1 = force? ev;
        checkMissing(ev1);
        return ev1;
      };
      p17 = prom<V +>{
        package11 = ld package;
        package12 = force? package11;
        checkMissing(package12);
        return package12;
      };
      r72 = dyn _getGeneric2(p15, p16, p17);
      return r72;
    };
    p19 = prom<V +>{
      r74 = clos inner3708401697;
      return r74;
    };
    r76 = dyn tryCatch[, error](p18, p19);
    check L119() else D36();
  L121():
    value10 = ld value;
    check L123() else D37();
  L122():
    r78 = dyn base11(<sym value>);
    goto L32(r78);
  D31():
    deopt 111 [c27, package7];
  D34():
    deopt 124 [c35, r66];
  D36():
    deopt 131 [r76];
  D37():
    deopt 137 [value10];
  L19():
    goto L20(NULL);
  L20(r49):
    goto L21(r49);
  L33():
    mustFind3 = ld mustFind;
    check L128() else D40();
  L88():
    _cacheGeneric = ldf `.cacheGeneric`;
    check L89() else D24();
  L110():
    package8 = force? package7;
    checkMissing(package8);
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L111() else L112();
  L115():
    goto L27(c35, r66);
  L119():
    st value = r76;
    goto L31();
  L123():
    value11 = force? value10;
    checkMissing(value11);
    is_function3 = ldf `is.function` in base;
    r80 = dyn is_function3(value11);
    check L124() else D38();
  L125():
    value12 = ld value;
    check L126() else D39();
  D24():
    deopt 82 [];
  D38():
    deopt 140 [r80];
  D39():
    deopt 141 [value12];
  D40():
    deopt 143 [mustFind3];
  L29(c38, r63):
    match = ldf match in base;
    r65 = dyn match(package8, r63, NA_INT, NULL);
    check L114() else D33();
  L89():
    p12 = prom<V +>{
      f19 = ld f;
      f20 = force? f19;
      checkMissing(f20);
      return f20;
    };
    p13 = prom<V +>{
      value4 = ld value;
      value5 = force? value4;
      checkMissing(value5);
      return value5;
    };
    r48 = dyn _cacheGeneric(p12, p13);
    check L90() else D25();
  L111():
    c39 = ldf c in base;
    r64 = dyn c39("methods", "base");
    check L113() else D32();
  L112():
    r62 = dyn base10("methods", "base");
    goto L29(c27, r62);
  L124():
    goto L32(r80);
  L126():
    value13 = force? value12;
    checkMissing(value13);
    popenv;
    return value13;
  L128():
    mustFind4 = force? mustFind3;
    checkMissing(mustFind4);
    c45 = `as.logical`(mustFind4);
    if c45 then L129() else L34();
  D25():
    deopt 85 [r48];
  D32():
    deopt 118 [c27, r64];
  D33():
    deopt 122 [c38, r65];
  L34():
    popenv;
    return NULL;
  L90():
    st value = r48;
    goto L20(r48);
  L113():
    goto L29(c27, r64);
  L114():
    goto L28(c38, r65);
  L129():
    stop1 = ldf stop;
    check L130() else D41();
  D41():
    deopt 146 [];
  L130():
    p22 = prom<V +>{
      gettextf = ldf gettextf;
      p21 = prom<V +>{
        sQuote = ldf sQuote;
        p20 = prom<V +>{
          f23 = ld f;
          f24 = force? f23;
          checkMissing(f24);
          return f24;
        };
        r82 = dyn sQuote(p20);
        return r82;
      };
      r84 = dyn gettextf("no generic function found for %s", p21);
      return r84;
    };
    r86 = dyn stop1[, domain](p22, NA_LGL);
    check L131() else D42();
  D42():
    deopt 150 [r86];
  L131():
    popenv;
    return r86;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return NULL;
  }
}