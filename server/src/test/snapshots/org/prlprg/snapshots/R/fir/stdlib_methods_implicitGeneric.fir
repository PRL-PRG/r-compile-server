fun main() {
  () -+> V { reg r:cls, reg implicitGeneric:cls, reg r1:V |
    mkenv;
    r = clos inner683338940;
    st implicitGeneric = r;
    implicitGeneric = ldf implicitGeneric;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn implicitGeneric("with");
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner683338940(name, where, generic) {
  (reg name:*, reg where:*, reg generic:*) -+> V { var name:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var generic:*, reg generic_isMissing:L, reg generic_orDefault:*, reg getGeneric:cls, reg name1:*, reg name2:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg name3:*, reg name4:V, reg nzchar:cls, reg r10:V, reg r11:V, reg c:L, reg stop:cls, reg gettextf:cls, reg r12:V, reg p5:p(V +), reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg missing:cls, reg r18:V, reg r19:V, reg c1:L, reg c3:V, reg is:cls, reg generic1:*, reg generic2:V, reg p6:p(V +), reg r21:V, reg c4:L, reg c5:V, reg c7:L, reg c9:V, reg _identC:cls, reg name5:*, reg name6:V, reg p7:p(V +), reg __:cls, reg r23:V, reg p8:p(V +), reg r25:V, reg r26:V, reg c10:L, reg c11:V, reg c13:L, reg stop1:cls, reg gettextf1:cls, reg sQuote:cls, reg name7:*, reg name8:V, reg p9:p(V +), reg r28:V, reg p10:p(V +), reg r30:V, reg p11:p(V +), reg r32:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r34:V, reg r35:V, reg missing1:cls, reg r36:V, reg c14:L, reg c15:V, reg is1:cls, reg generic3:*, reg generic4:V, reg p12:p(V +), reg r38:V, reg r39:V, reg c17:L, reg c18:V, reg c20:L, reg c22:V, reg isGeneric:cls, reg name9:*, reg name10:V, reg p13:p(V +), reg where3:*, reg where4:V, reg p14:p(V +), reg r42:V, reg r43:V, reg c23:L, reg c24:V, reg createGeneric:*, reg createGeneric1:V, reg c26:L, reg getFunction:cls, reg name11:*, reg name12:V, reg p15:p(V +), reg where5:*, reg where6:V, reg p16:p(V +), reg r46:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r47:V, reg r48:V, reg fdefault:*, reg fdefault1:V, reg c27:V, reg c28:L, reg environment:cls, reg fdefault2:*, reg fdefault3:V, reg p17:p(V +), reg r52:V, reg _derivedDefaultMethod:cls, reg fdefault4:*, reg fdefault5:V, reg p18:p(V +), reg r54:V, reg isBaseFun:cls, reg fdefault6:*, reg fdefault7:V, reg p19:p(V +), reg r56:V, reg c29:L, reg genericForBasic:cls, reg name13:*, reg name14:V, reg p20:p(V +), reg r58:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r59:V, reg r60:V, reg value:*, reg value1:V, reg is_function:cls, reg r61:V, reg c30:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r62:V, reg r63:V, reg missing2:cls, reg r64:V, reg r65:V, reg c31:L, reg c33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r66:V, reg c36:L, reg r67:V, reg value2:*, reg value3:V, reg generic5:*, reg generic6:V, reg identical:cls, reg r68:V, reg r69:V, reg c37:L, reg c38:V, reg c40:L, reg stop2:cls, reg gettextf2:cls, reg sQuote1:cls, reg name15:*, reg name16:V, reg p21:p(V +), reg r71:V, reg p22:p(V +), reg r73:V, reg p23:p(V +), reg r75:V, reg value4:*, reg value5:V, reg __1:cls, reg r77:V, reg getPackageName:cls, reg env:*, reg env1:V, reg p24:p(V +), reg r81:V, reg _getImplicitGroup:cls, reg name17:*, reg name18:V, reg p25:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r83:V, reg r84:V, reg package:*, reg package1:V, reg identical1:cls, reg r85:V, reg c41:L, reg _methodsNamespace:*, reg _methodsNamespace1:V, reg environment1:cls, reg fdefault8:*, reg fdefault9:V, reg p26:p(V +), reg r87:V, reg p27:p(V +), reg r89:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r90:V, reg r91:V, reg missing3:cls, reg r92:V, reg c42:L, reg _getImplicitGeneric:cls, reg name19:*, reg name20:V, reg p28:p(V +), reg env2:*, reg env3:V, reg p29:p(V +), reg package2:*, reg package3:V, reg p30:p(V +), reg r96:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r97:V, reg r98:V, reg generic7:*, reg generic8:V, reg c43:V, reg c44:L, reg makeGeneric:cls, reg name21:*, reg name22:V, reg p31:p(V +), reg fdefault10:*, reg fdefault11:V, reg p32:p(V +), reg package4:*, reg package5:V, reg p33:p(V +), reg group:*, reg group1:V, reg p34:p(V +), reg r103:V, reg _cacheImplicitGeneric:cls, reg name23:*, reg name24:V, reg p35:p(V +), reg generic9:*, reg generic10:V, reg p36:p(V +), reg r106:V, reg r107:V, reg r108:V, reg makeGeneric1:cls, reg name25:*, reg name26:V, reg p37:p(V +), reg generic11:*, reg generic12:V, reg p38:p(V +), reg fdefault12:*, reg fdefault13:V, reg p39:p(V +), reg package6:*, reg package7:V, reg p40:p(V +), reg group2:*, reg group3:V, reg p41:p(V +), reg r114:V, reg _cacheImplicitGeneric1:cls, reg name27:*, reg name28:V, reg p42:p(V +), reg generic13:*, reg generic14:V, reg p43:p(V +), reg r117:V, reg generic15:*, reg generic16:V |
    mkenv;
    st name = name;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L1(p1);
  L1(where_orDefault):
    st where = where_orDefault;
    generic_isMissing = missing.0(generic);
    if generic_isMissing then L2() else L3(generic);
  L2():
    p4 = prom<V +>{
      getGeneric = ldf getGeneric;
      p2 = prom<V +>{
        name1 = ld name;
        name2 = force? name1;
        checkMissing(name2);
        return name2;
      };
      p3 = prom<V +>{
        where1 = ld where;
        where2 = force? where1;
        checkMissing(where2);
        return where2;
      };
      r6 = dyn getGeneric[, where](p2, p3);
      return r6;
    };
    goto L3(p4);
  L3(generic_orDefault):
    st generic = generic_orDefault;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L36() else L37();
  L4(r9):
    r11 = `!`(r9);
    c = `as.logical`(r11);
    if c then L40() else L5();
  L36():
    name3 = ld name;
    check L38() else D0();
  L37():
    r8 = dyn base(<sym name>);
    goto L4(r8);
  D0():
    deopt 2 [name3];
  L5():
    goto L6();
  L6():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L44() else L45();
  L38():
    name4 = force? name3;
    checkMissing(name4);
    nzchar = ldf nzchar in base;
    r10 = dyn nzchar(name4);
    check L39() else D1();
  L40():
    stop = ldf stop;
    check L41() else D2();
  D1():
    deopt 5 [r10];
  D2():
    deopt 8 [];
  L7(r17):
    r19 = `!`(r17);
    c1 = `as.logical`(r19);
    if c1 then L46() else L8(c1);
  L39():
    goto L4(r10);
  L41():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      r12 = dyn gettextf("expected a non-empty character string for argument name");
      return r12;
    };
    r14 = dyn stop[, domain](p5, NA_LGL);
    check L42() else D3();
  L44():
    missing = ldf missing in base;
    r18 = dyn missing(<sym generic>);
    goto L7(r18);
  L45():
    r16 = dyn base1(<sym generic>);
    goto L7(r16);
  D3():
    deopt 12 [r14];
  L8(c3):
    c7 = `as.logical`(c3);
    if c7 then L50() else L9(c7);
  L42():
    goto L6();
  L46():
    is = ldf is;
    check L47() else D4();
  D4():
    deopt 20 [c1];
  L9(c9):
    c13 = `as.logical`(c9);
    if c13 then L54() else L10();
  L47():
    p6 = prom<V +>{
      generic1 = ld generic;
      generic2 = force? generic1;
      checkMissing(generic2);
      return generic2;
    };
    r21 = dyn is(p6, "genericFunction");
    check L48() else D5();
  L50():
    _identC = ldf `.identC`;
    check L51() else D6();
  D5():
    deopt 23 [c1, r21];
  D6():
    deopt 26 [c7];
  L10():
    goto L11();
  L11():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L58() else L59();
  L48():
    c4 = `as.logical`(r21);
    c5 = `&&`(c1, c4);
    goto L8(c5);
  L51():
    p7 = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    p8 = prom<V +>{
      __ = ldf `@` in base;
      r23 = dyn __(<sym generic>, <sym generic>);
      return r23;
    };
    r25 = dyn _identC(p7, p8);
    check L52() else D7();
  L54():
    stop1 = ldf stop;
    check L55() else D8();
  D7():
    deopt 29 [c7, r25];
  D8():
    deopt 33 [];
  L12(r35):
    c14 = `as.logical`(r35);
    if c14 then L13(c14) else L60();
  L52():
    r26 = `!`(r25);
    c10 = `as.logical`(r26);
    c11 = `&&`(c7, c10);
    goto L9(c11);
  L55():
    p11 = prom<V +>{
      gettextf1 = ldf gettextf;
      p10 = prom<V +>{
        sQuote = ldf sQuote;
        p9 = prom<V +>{
          name7 = ld name;
          name8 = force? name7;
          checkMissing(name8);
          return name8;
        };
        r28 = dyn sQuote(p9);
        return r28;
      };
      r30 = dyn gettextf1("generic function supplied was not created for %s", p10);
      return r30;
    };
    r32 = dyn stop1[, domain](p11, NA_LGL);
    check L56() else D9();
  L58():
    missing1 = ldf missing in base;
    r36 = dyn missing1(<sym generic>);
    goto L12(r36);
  L59():
    r34 = dyn base2(<sym generic>);
    goto L12(r34);
  D9():
    deopt 37 [r32];
  L13(c15):
    c20 = `as.logical`(c15);
    if c20 then L64() else L14(c20);
  L56():
    goto L11();
  L60():
    is1 = ldf is;
    check L61() else D10();
  D10():
    deopt 44 [c14];
  L14(c22):
    st createGeneric = c22;
    createGeneric = ld createGeneric;
    check L68() else D14();
  L61():
    p12 = prom<V +>{
      generic3 = ld generic;
      generic4 = force? generic3;
      checkMissing(generic4);
      return generic4;
    };
    r38 = dyn is1(p12, "genericFunction");
    check L62() else D11();
  L64():
    isGeneric = ldf isGeneric;
    check L65() else D12();
  D11():
    deopt 47 [c14, r38];
  D12():
    deopt 51 [c20];
  D14():
    deopt 58 [createGeneric];
  L62():
    r39 = `!`(r38);
    c17 = `as.logical`(r39);
    c18 = `||`(c14, c17);
    goto L13(c18);
  L65():
    p13 = prom<V +>{
      name9 = ld name;
      name10 = force? name9;
      checkMissing(name10);
      return name10;
    };
    p14 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r42 = dyn isGeneric(p13, p14);
    check L66() else D13();
  L68():
    createGeneric1 = force? createGeneric;
    checkMissing(createGeneric1);
    c26 = `as.logical`(createGeneric1);
    if c26 then L69() else L15();
  D13():
    deopt 54 [c20, r42];
  L15():
    goto L35();
  L35():
    generic15 = ld generic;
    check L132() else D49();
  L66():
    r43 = `!`(r42);
    c23 = `as.logical`(r43);
    c24 = `&&`(c20, c23);
    goto L14(c24);
  L69():
    getFunction = ldf getFunction;
    check L70() else D15();
  D15():
    deopt 61 [];
  D49():
    deopt 204 [generic15];
  L70():
    p15 = prom<V +>{
      name11 = ld name;
      name12 = force? name11;
      checkMissing(name12);
      return name12;
    };
    p16 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r46 = dyn getFunction[, where, mustFind](p15, p16, FALSE);
    check L71() else D16();
  L132():
    generic16 = force? generic15;
    checkMissing(generic16);
    popenv;
    return generic16;
  D16():
    deopt 67 [r46];
  L71():
    st fdefault = r46;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L72() else L73();
  L16(r48):
    c28 = `as.logical`(r48);
    if c28 then L75() else L17();
  L72():
    fdefault = ld fdefault;
    check L74() else D17();
  L73():
    r47 = dyn base3(<sym fdefault>);
    goto L16(r47);
  D17():
    deopt 70 [fdefault];
  L17():
    environment = ldf environment;
    check L78() else D18();
  L74():
    fdefault1 = force? fdefault;
    checkMissing(fdefault1);
    c27 = `==`(fdefault1, NULL);
    goto L16(c27);
  L75():
    popenv;
    return NULL;
  D18():
    deopt 79 [];
  L78():
    p17 = prom<V +>{
      fdefault2 = ld fdefault;
      fdefault3 = force? fdefault2;
      checkMissing(fdefault3);
      return fdefault3;
    };
    r52 = dyn environment(p17);
    check L79() else D19();
  D19():
    deopt 81 [r52];
  L79():
    st env = r52;
    _derivedDefaultMethod = ldf `.derivedDefaultMethod`;
    check L80() else D20();
  D20():
    deopt 84 [];
  L80():
    p18 = prom<V +>{
      fdefault4 = ld fdefault;
      fdefault5 = force? fdefault4;
      checkMissing(fdefault5);
      return fdefault5;
    };
    r54 = dyn _derivedDefaultMethod(p18);
    check L81() else D21();
  D21():
    deopt 86 [r54];
  L81():
    st fdefault = r54;
    isBaseFun = ldf isBaseFun;
    check L82() else D22();
  D22():
    deopt 89 [];
  L82():
    p19 = prom<V +>{
      fdefault6 = ld fdefault;
      fdefault7 = force? fdefault6;
      checkMissing(fdefault7);
      return fdefault7;
    };
    r56 = dyn isBaseFun(p19);
    check L83() else D23();
  D23():
    deopt 91 [r56];
  L83():
    c29 = `as.logical`(r56);
    if c29 then L84() else L19();
  L19():
    getPackageName = ldf getPackageName;
    check L108() else D34();
  L28():
    _getImplicitGroup = ldf `.getImplicitGroup`;
    check L110() else D36();
  L84():
    genericForBasic = ldf genericForBasic;
    check L85() else D24();
  D24():
    deopt 93 [];
  D34():
    deopt 144 [];
  D36():
    deopt 149 [];
  L85():
    p20 = prom<V +>{
      name13 = ld name;
      name14 = force? name13;
      checkMissing(name14);
      return name14;
    };
    r58 = dyn genericForBasic(p20);
    check L86() else D25();
  L108():
    p24 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r81 = dyn getPackageName(p24);
    check L109() else D35();
  L110():
    p25 = prom<V +>{
      name17 = ld name;
      name18 = force? name17;
      checkMissing(name18);
      return name18;
    };
    p27 = prom<V +>{
      sym7 = ldf identical;
      base7 = ldf identical in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r84):
      c41 = `as.logical`(r84);
      if c41 then L4() else L1();
    L2():
      package = ld package;
      package1 = force? package;
      checkMissing(package1);
      identical1 = ldf identical in base;
      r85 = dyn identical1(package1, "base", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r85);
    L3():
      r83 = dyn base7(<sym package>, "base");
      goto L0(r83);
    L1():
      environment1 = ldf environment;
      p26 = prom<V +>{
        fdefault8 = ld fdefault;
        fdefault9 = force? fdefault8;
        checkMissing(fdefault9);
        return fdefault9;
      };
      r87 = dyn environment1(p26);
      return r87;
    L4():
      _methodsNamespace = ld `.methodsNamespace`;
      _methodsNamespace1 = force? _methodsNamespace;
      checkMissing(_methodsNamespace1);
      return _methodsNamespace1;
    };
    r89 = dyn _getImplicitGroup(p25, p27);
    check L111() else D37();
  D25():
    deopt 95 [r58];
  D35():
    deopt 146 [r81];
  D37():
    deopt 152 [r89];
  L86():
    st value = r58;
    sym4 = ldf `is.function`;
    base4 = ldf `is.function` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L87() else L88();
  L109():
    st package = r81;
    goto L28();
  L111():
    st group = r89;
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L112() else L113();
  L20(r60):
    c30 = `as.logical`(r60);
    if c30 then L91() else L21();
  L29(r91):
    c42 = `as.logical`(r91);
    if c42 then L114() else L30();
  L87():
    value = ld value;
    check L89() else D26();
  L88():
    r59 = dyn base4(<sym value>);
    goto L20(r59);
  L112():
    missing3 = ldf missing in base;
    r92 = dyn missing3(<sym generic>);
    goto L29(r92);
  L113():
    r90 = dyn base8(<sym generic>);
    goto L29(r90);
  D26():
    deopt 99 [value];
  L21():
    goto L27();
  L27():
    st package = "base";
    goto L28();
  L30():
    makeGeneric1 = ldf makeGeneric;
    check L127() else D45();
  L34(r108):
    goto L35();
  L89():
    value1 = force? value;
    checkMissing(value1);
    is_function = ldf `is.function` in base;
    r61 = dyn is_function(value1);
    check L90() else D27();
  L91():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L92() else L93();
  L114():
    _getImplicitGeneric = ldf `.getImplicitGeneric`;
    check L115() else D38();
  D27():
    deopt 102 [r61];
  D38():
    deopt 158 [];
  D45():
    deopt 187 [];
  L22(r63):
    r65 = `!`(r63);
    c31 = `as.logical`(r65);
    if c31 then L94() else L23(c31);
  L90():
    goto L20(r61);
  L92():
    missing2 = ldf missing in base;
    r64 = dyn missing2(<sym generic>);
    goto L22(r64);
  L93():
    r62 = dyn base5(<sym generic>);
    goto L22(r62);
  L115():
    p28 = prom<V +>{
      name19 = ld name;
      name20 = force? name19;
      checkMissing(name20);
      return name20;
    };
    p29 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    p30 = prom<V +>{
      package2 = ld package;
      package3 = force? package2;
      checkMissing(package3);
      return package3;
    };
    r96 = dyn _getImplicitGeneric(p28, p29, p30);
    check L116() else D39();
  L127():
    p37 = prom<V +>{
      name25 = ld name;
      name26 = force? name25;
      checkMissing(name26);
      return name26;
    };
    p38 = prom<V +>{
      generic11 = ld generic;
      generic12 = force? generic11;
      checkMissing(generic12);
      return generic12;
    };
    p39 = prom<V +>{
      fdefault12 = ld fdefault;
      fdefault13 = force? fdefault12;
      checkMissing(fdefault13);
      return fdefault13;
    };
    p40 = prom<V +>{
      package6 = ld package;
      package7 = force? package6;
      checkMissing(package7);
      return package7;
    };
    p41 = prom<V +>{
      group2 = ld group;
      group3 = force? group2;
      checkMissing(group3);
      return group3;
    };
    r114 = dyn makeGeneric1[, , , package, group](p37, p38, p39, p40, p41);
    check L128() else D46();
  D39():
    deopt 162 [r96];
  D46():
    deopt 195 [r114];
  L23(c33):
    c40 = `as.logical`(c33);
    if c40 then L101() else L25();
  L94():
    sym6 = ldf identical;
    base6 = ldf identical in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L95() else L96();
  L116():
    st generic = r96;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L117() else L118();
  L128():
    st generic = r114;
    _cacheImplicitGeneric1 = ldf `.cacheImplicitGeneric`;
    check L129() else D47();
  D47():
    deopt 198 [];
  L24(c36, r67):
    r69 = `!`(r67);
    c37 = `as.logical`(r69);
    c38 = `&&`(c36, c37);
    goto L23(c38);
  L25():
    goto L26();
  L26():
    value4 = ld value;
    check L105() else D33();
  L31(r98):
    c44 = `as.logical`(r98);
    if c44 then L120() else L32();
  L95():
    value2 = ld value;
    check L97() else D28();
  L96():
    r66 = dyn base6(<sym value>, <sym generic>);
    goto L24(c31, r66);
  L101():
    stop2 = ldf stop;
    check L102() else D31();
  L117():
    generic7 = ld generic;
    check L119() else D40();
  L118():
    r97 = dyn base9(<sym generic>);
    goto L31(r97);
  L129():
    p42 = prom<V +>{
      name27 = ld name;
      name28 = force? name27;
      checkMissing(name28);
      return name28;
    };
    p43 = prom<V +>{
      generic13 = ld generic;
      generic14 = force? generic13;
      checkMissing(generic14);
      return generic14;
    };
    r117 = dyn _cacheImplicitGeneric1(p42, p43);
    check L130() else D48();
  D28():
    deopt 109 [c31, value2];
  D31():
    deopt 125 [];
  D33():
    deopt 132 [value4];
  D40():
    deopt 165 [generic7];
  D48():
    deopt 201 [r117];
  L32():
    goto L33(NULL);
  L33(r107):
    goto L34(r107);
  L97():
    value3 = force? value2;
    checkMissing(value3);
    generic5 = ld generic;
    check L98() else D29();
  L102():
    p23 = prom<V +>{
      gettextf2 = ldf gettextf;
      p22 = prom<V +>{
        sQuote1 = ldf sQuote;
        p21 = prom<V +>{
          name15 = ld name;
          name16 = force? name15;
          checkMissing(name16);
          return name16;
        };
        r71 = dyn sQuote1(p21);
        return r71;
      };
      r73 = dyn gettextf2("%s is a primitive function; its generic form cannot be redefined", p22);
      return r73;
    };
    r75 = dyn stop2[, domain](p23, NA_LGL);
    check L103() else D32();
  L105():
    value5 = force? value4;
    checkMissing(value5);
    st generic = value5;
    __1 = ldf `@` in base;
    r77 = dyn __1(<sym generic>, <sym default>);
    st fdefault = r77;
    goto L27();
  L119():
    generic8 = force? generic7;
    checkMissing(generic8);
    c43 = `==`(generic8, NULL);
    goto L31(c43);
  L120():
    makeGeneric = ldf makeGeneric;
    check L121() else D41();
  L130():
    goto L34(r117);
  D29():
    deopt 111 [c31, generic5];
  D32():
    deopt 129 [r75];
  D41():
    deopt 169 [];
  L98():
    generic6 = force? generic5;
    checkMissing(generic6);
    identical = ldf identical in base;
    r68 = dyn identical(value3, generic6, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L99() else D30();
  L103():
    goto L26();
  L121():
    p31 = prom<V +>{
      name21 = ld name;
      name22 = force? name21;
      checkMissing(name22);
      return name22;
    };
    p32 = prom<V +>{
      fdefault10 = ld fdefault;
      fdefault11 = force? fdefault10;
      checkMissing(fdefault11);
      return fdefault11;
    };
    p33 = prom<V +>{
      package4 = ld package;
      package5 = force? package4;
      checkMissing(package5);
      return package5;
    };
    p34 = prom<V +>{
      group = ld group;
      group1 = force? group;
      checkMissing(group1);
      return group1;
    };
    r103 = dyn makeGeneric[, fdefault, package, group](p31, p32, p33, p34);
    check L122() else D42();
  D30():
    deopt 121 [c31, r68];
  D42():
    deopt 177 [r103];
  L99():
    goto L24(c31, r68);
  L122():
    st generic = r103;
    _cacheImplicitGeneric = ldf `.cacheImplicitGeneric`;
    check L123() else D43();
  D43():
    deopt 180 [];
  L123():
    p35 = prom<V +>{
      name23 = ld name;
      name24 = force? name23;
      checkMissing(name24);
      return name24;
    };
    p36 = prom<V +>{
      generic9 = ld generic;
      generic10 = force? generic9;
      checkMissing(generic10);
      return generic10;
    };
    r106 = dyn _cacheImplicitGeneric(p35, p36);
    check L124() else D44();
  D44():
    deopt 183 [r106];
  L124():
    goto L33(r106);
  }
}