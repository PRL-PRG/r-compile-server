fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1786372381;
    st isGeneric = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1786372381(f, where, fdef, getName) {
  (reg f:*, reg where:*, reg fdef:*, reg getName:*) -+> V { var f:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var fdef:*, reg fdef_isMissing:L, reg fdef_orDefault:*, var getName:*, reg getName_isMissing:L, reg getName_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg fdef1:*, reg fdef2:V, reg c:V, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg c6:L, reg r7:V, reg missing:cls, reg r8:V, reg c7:L, reg c8:V, reg c10:L, reg _getGenericFromCache:cls, reg f1:*, reg f2:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg fdef3:*, reg fdef4:V, reg c11:V, reg r14:V, reg c12:L, reg getName1:*, reg getName2:V, reg c13:L, reg __:cls, reg r15:V, reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg fdef5:*, reg fdef6:V, reg c14:V, reg c15:L, reg getFunction:cls, reg f3:*, reg f4:V, reg p4:p(V +), reg where3:*, reg where4:V, reg p5:p(V +), reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg fdef7:*, reg fdef8:V, reg c16:V, reg c17:L, reg isBaseFun:cls, reg fdef9:*, reg fdef10:V, reg p6:p(V +), reg r31:V, reg c18:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg f5:*, reg f6:V, reg c19:L, reg c20:L, reg c22:V, reg _in_:cls, reg f7:*, reg f8:V, reg p7:p(V +), reg r35:V, reg c23:L, reg c24:V, reg c26:L, reg genericForBasic:cls, reg f9:*, reg f10:V, reg p8:p(V +), reg r38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg gen:*, reg gen1:V, reg is_function:cls, reg r41:V, reg c27:L, reg c29:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg c32:L, reg r43:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg c35:L, reg r45:V, reg _getMethodsTable:cls, reg gen2:*, reg gen3:V, reg p9:p(V +), reg r47:V, reg names:cls, reg r48:V, reg length:cls, reg r49:V, reg r50:V, reg c36:L, reg c37:V, reg is:cls, reg fdef11:*, reg fdef12:V, reg p10:p(V +), reg r54:V, reg r55:V, reg c39:L, reg __1:cls, reg r58:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r59:V, reg r60:V, reg missing1:cls, reg r61:V, reg c40:L, reg c41:V, reg _identC:cls, reg gen4:*, reg gen5:V, reg p11:p(V +), reg f11:*, reg f12:V, reg p12:p(V +), reg r64:V, reg c43:L, reg c44:V, reg c46:L, reg getName3:*, reg getName4:V, reg c47:L, reg gen6:*, reg gen7:V, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg gen8:*, reg gen9:V, reg p13:p(V +), reg r66:V, reg p14:p(V +), reg sQuote1:cls, reg f13:*, reg f14:V, reg p15:p(V +), reg r69:V, reg p16:p(V +), reg r71:V, reg p17:p(V +), reg r73:V |
    mkenv;
    st f = f;
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
    fdef_isMissing = missing.0(fdef);
    if fdef_isMissing then L2(NULL) else L2(fdef);
  L2(fdef_orDefault):
    st fdef = fdef_orDefault;
    getName_isMissing = missing.0(getName);
    if getName_isMissing then L3(FALSE) else L3(getName);
  L3(getName_orDefault):
    st getName = getName_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L36() else L37();
  L4(r5):
    c1 = `as.logical`(r5);
    if c1 then L39() else L5(c1);
  L36():
    fdef1 = ld fdef;
    check L38() else D0();
  L37():
    r4 = dyn base(<sym fdef>);
    goto L4(r4);
  D0():
    deopt 1 [fdef1];
  L5(c3):
    c10 = `as.logical`(c3);
    if c10 then L43() else L7();
  L38():
    fdef2 = force? fdef1;
    checkMissing(fdef2);
    c = `==`(fdef2, NULL);
    goto L4(c);
  L39():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L6(c6, r7):
    c7 = `as.logical`(r7);
    c8 = `&&`(c6, c7);
    goto L5(c8);
  L7():
    goto L13();
  L13():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L56() else L57();
  L40():
    missing = ldf missing in base;
    r8 = dyn missing(<sym where>);
    goto L6(c1, r8);
  L41():
    r6 = dyn base1(<sym where>);
    goto L6(c1, r6);
  L43():
    _getGenericFromCache = ldf `.getGenericFromCache`;
    check L44() else D1();
  D1():
    deopt 9 [];
  L14(r21):
    c15 = `as.logical`(r21);
    if c15 then L59() else L15();
  L44():
    p2 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r11 = dyn _getGenericFromCache(p2, p3);
    check L45() else D2();
  L56():
    fdef5 = ld fdef;
    check L58() else D5();
  L57():
    r20 = dyn base3(<sym fdef>);
    goto L14(r20);
  D2():
    deopt 12 [r11];
  D5():
    deopt 31 [fdef5];
  L15():
    goto L16();
  L16():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L63() else L64();
  L45():
    st fdef = r11;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L58():
    fdef6 = force? fdef5;
    checkMissing(fdef6);
    c14 = `==`(fdef6, NULL);
    goto L14(c14);
  L59():
    getFunction = ldf getFunction;
    check L60() else D6();
  D6():
    deopt 35 [];
  L8(r13):
    r14 = `!`(r13);
    c12 = `as.logical`(r14);
    if c12 then L49() else L9();
  L17(r27):
    c17 = `as.logical`(r27);
    if c17 then L66() else L18();
  L46():
    fdef3 = ld fdef;
    check L48() else D3();
  L47():
    r12 = dyn base2(<sym fdef>);
    goto L8(r12);
  L60():
    p4 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    p5 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r24 = dyn getFunction[, where, mustFind](p4, p5, FALSE);
    check L61() else D7();
  L63():
    fdef7 = ld fdef;
    check L65() else D8();
  L64():
    r26 = dyn base4(<sym fdef>);
    goto L17(r26);
  D3():
    deopt 15 [fdef3];
  D7():
    deopt 41 [r24];
  D8():
    deopt 46 [fdef7];
  L9():
    goto L13();
  L18():
    isBaseFun = ldf isBaseFun;
    check L69() else D9();
  L48():
    fdef4 = force? fdef3;
    checkMissing(fdef4);
    c11 = `==`(fdef4, NULL);
    goto L8(c11);
  L49():
    getName1 = ld getName;
    check L50() else D4();
  L61():
    st fdef = r24;
    goto L16();
  L65():
    fdef8 = force? fdef7;
    checkMissing(fdef8);
    c16 = `==`(fdef8, NULL);
    goto L17(c16);
  L66():
    popenv;
    return FALSE;
  D4():
    deopt 19 [getName1];
  D9():
    deopt 55 [];
  L50():
    getName2 = force? getName1;
    checkMissing(getName2);
    c13 = `as.logical`(getName2);
    if c13 then L51() else L10();
  L69():
    p6 = prom<V +>{
      fdef9 = ld fdef;
      fdef10 = force? fdef9;
      checkMissing(fdef10);
      return fdef10;
    };
    r31 = dyn isBaseFun(p6);
    check L70() else D10();
  D10():
    deopt 57 [r31];
  L10():
    goto L11(TRUE);
  L11(r16):
    popenv;
    return r16;
  L51():
    __ = ldf `@` in base;
    r15 = dyn __(<sym fdef>, <sym generic>);
    goto L11(r15);
  L70():
    c18 = `as.logical`(r31);
    if c18 then L71() else L20();
  L20():
    is = ldf is;
    check L99() else D22();
  L71():
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L72() else L73();
  D22():
    deopt 105 [];
  L21(r33):
    c20 = `as.logical`(r33);
    if c20 then L75() else L22(c20);
  L72():
    f5 = ld f;
    check L74() else D11();
  L73():
    r32 = dyn base5(<sym f>);
    goto L21(r32);
  L99():
    p10 = prom<V +>{
      fdef11 = ld fdef;
      fdef12 = force? fdef11;
      checkMissing(fdef12);
      return fdef12;
    };
    r54 = dyn is(p10, "genericFunction");
    check L100() else D23();
  D11():
    deopt 59 [f5];
  D23():
    deopt 108 [r54];
  L22(c22):
    c26 = `as.logical`(c22);
    if c26 then L79() else L23();
  L74():
    f6 = force? f5;
    checkMissing(f6);
    c19 = `is.character`(f6);
    goto L21(c19);
  L75():
    _in_ = ldf `%in%`;
    check L76() else D12();
  L100():
    r55 = `!`(r54);
    c39 = `as.logical`(r55);
    if c39 then L101() else L30();
  D12():
    deopt 63 [c20];
  L23():
    goto L24();
  L24():
    genericForBasic = ldf genericForBasic;
    check L81() else D14();
  L30():
    __1 = ldf `@` in base;
    r58 = dyn __1(<sym fdef>, <sym generic>);
    st gen = r58;
    sym9 = ldf missing;
    base9 = ldf missing in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L104() else L105();
  L76():
    p7 = prom<V +>{
      f7 = ld f;
      f8 = force? f7;
      checkMissing(f8);
      return f8;
    };
    r35 = dyn _in_(p7, "as.double");
    check L77() else D13();
  L79():
    st f = "as.numeric";
    goto L24();
  L101():
    popenv;
    return FALSE;
  D13():
    deopt 66 [c20, r35];
  D14():
    deopt 74 [];
  L32(r60):
    c40 = `as.logical`(r60);
    if c40 then L33(c40) else L106();
  L77():
    c23 = `as.logical`(r35);
    c24 = `&&`(c20, c23);
    goto L22(c24);
  L81():
    p8 = prom<V +>{
      f9 = ld f;
      f10 = force? f9;
      checkMissing(f10);
      return f10;
    };
    r38 = dyn genericForBasic[, mustFind](p8, FALSE);
    check L82() else D15();
  L104():
    missing1 = ldf missing in base;
    r61 = dyn missing1(<sym f>);
    goto L32(r61);
  L105():
    r59 = dyn base9(<sym f>);
    goto L32(r59);
  D15():
    deopt 78 [r38];
  L33(c41):
    c46 = `as.logical`(c41);
    if c46 then L110() else L34();
  L82():
    st gen = r38;
    sym6 = ldf `is.function`;
    base6 = ldf `is.function` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L83() else L84();
  L106():
    _identC = ldf `.identC`;
    check L107() else D24();
  D24():
    deopt 122 [c40];
  L25(r40):
    c27 = `as.logical`(r40);
    if c27 then L87() else L26(c27);
  L34():
    warning = ldf warning;
    check L116() else D28();
  L83():
    gen = ld gen;
    check L85() else D16();
  L84():
    r39 = dyn base6(<sym gen>);
    goto L25(r39);
  L107():
    p11 = prom<V +>{
      gen4 = ld gen;
      gen5 = force? gen4;
      checkMissing(gen5);
      return gen5;
    };
    p12 = prom<V +>{
      f11 = ld f;
      f12 = force? f11;
      checkMissing(f12);
      return f12;
    };
    r64 = dyn _identC(p11, p12);
    check L108() else D25();
  L110():
    getName3 = ld getName;
    check L111() else D26();
  D16():
    deopt 82 [gen];
  D25():
    deopt 125 [c40, r64];
  D26():
    deopt 127 [getName3];
  D28():
    deopt 134 [];
  L26(c29):
    popenv;
    return c29;
  L85():
    gen1 = force? gen;
    checkMissing(gen1);
    is_function = ldf `is.function` in base;
    r41 = dyn is_function(gen1);
    check L86() else D17();
  L87():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L88() else L89();
  L108():
    c43 = `as.logical`(r64);
    c44 = `||`(c40, c43);
    goto L33(c44);
  L111():
    getName4 = force? getName3;
    checkMissing(getName4);
    c47 = `as.logical`(getName4);
    if c47 then L112() else L35();
  L116():
    p17 = prom<V +>{
      gettextf = ldf gettextf;
      p14 = prom<V +>{
        sQuote = ldf sQuote;
        p13 = prom<V +>{
          gen8 = ld gen;
          gen9 = force? gen8;
          checkMissing(gen9);
          return gen9;
        };
        r66 = dyn sQuote(p13);
        return r66;
      };
      p16 = prom<V +>{
        sQuote1 = ldf sQuote;
        p15 = prom<V +>{
          f13 = ld f;
          f14 = force? f13;
          checkMissing(f14);
          return f14;
        };
        r69 = dyn sQuote1(p15);
        return r69;
      };
      r71 = dyn gettextf("fdef appears to be a generic function, but with generic name %s instead of %s", p14, p16);
      return r71;
    };
    r73 = dyn warning[, domain](p17, NA_LGL);
    check L117() else D29();
  D17():
    deopt 85 [r41];
  D29():
    deopt 138 [r73];
  L27(c32, r43):
    r50 = `>`(r43, 1);
    c36 = `as.logical`(r50);
    c37 = `&&`(c32, c36);
    goto L26(c37);
  L35():
    popenv;
    return TRUE;
  L86():
    goto L25(r41);
  L88():
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L90() else L91();
  L89():
    r42 = dyn base7(<lang names(.getMethodsTable(gen))>);
    goto L27(c27, r42);
  L112():
    gen6 = ld gen;
    check L113() else D27();
  L117():
    popenv;
    return FALSE;
  D27():
    deopt 129 [gen6];
  L28(c35, r45):
    length = ldf length in base;
    r49 = dyn length(r45);
    check L95() else D21();
  L90():
    _getMethodsTable = ldf `.getMethodsTable`;
    check L92() else D18();
  L91():
    r44 = dyn base8(<lang .getMethodsTable(gen)>);
    goto L28(c27, r44);
  L113():
    gen7 = force? gen6;
    checkMissing(gen7);
    popenv;
    return gen7;
  D18():
    deopt 91 [c27];
  D21():
    deopt 97 [c35, r49];
  L92():
    p9 = prom<V +>{
      gen2 = ld gen;
      gen3 = force? gen2;
      checkMissing(gen3);
      return gen3;
    };
    r47 = dyn _getMethodsTable(p9);
    check L93() else D19();
  L95():
    goto L27(c35, r49);
  D19():
    deopt 93 [c27, r47];
  L93():
    names = ldf names in base;
    r48 = dyn names(r47);
    check L94() else D20();
  D20():
    deopt 95 [c27, r48];
  L94():
    goto L28(c27, r48);
  }
}