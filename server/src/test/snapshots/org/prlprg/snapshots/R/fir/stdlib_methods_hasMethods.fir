fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1636480792;
    st hasMethods = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1636480792(f, where, package) {
  (reg f:*, reg where:*, reg package:*) -+> V { var f:*, var where:*, var package:*, reg package_isMissing:L, reg package_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg is:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r4:V, reg c:L, reg f3:*, reg f4:V, reg __:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg missing1:cls, reg r8:V, reg c1:L, reg __1:cls, reg r9:V, reg r10:V, reg _isSingleString:cls, reg f5:*, reg f6:V, reg p1:p(V +), reg r13:V, reg r14:V, reg c2:L, reg stop:cls, reg gettextf:cls, reg _notSingleString:cls, reg f7:*, reg f8:V, reg p2:p(V +), reg r16:V, reg p3:p(V +), reg r18:V, reg p4:p(V +), reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg missing2:cls, reg r23:V, reg c3:L, reg packageSlot:cls, reg f9:*, reg f10:V, reg p5:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg package1:*, reg package2:V, reg c4:V, reg c5:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg missing3:cls, reg r30:V, reg c6:L, reg getGeneric:cls, reg f11:*, reg f12:V, reg p6:p(V +), reg r32:V, reg getGeneric1:cls, reg f13:*, reg f14:V, reg p7:p(V +), reg where1:*, reg where2:V, reg p8:p(V +), reg r36:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg fdef:*, reg fdef1:V, reg c7:V, reg c8:L, reg getGeneric2:cls, reg f15:*, reg f16:V, reg p9:p(V +), reg r40:V, reg is1:cls, reg fdef2:*, reg fdef3:V, reg p10:p(V +), reg r42:V, reg c9:L, reg __2:cls, reg r43:V, reg r44:V, reg stop1:cls, reg gettextf1:cls, reg f17:*, reg f18:V, reg p11:p(V +), reg r46:V, reg p12:p(V +), reg r48:V, reg r49:V, reg _TableMetaName:cls, reg f19:*, reg f20:V, reg p13:p(V +), reg package3:*, reg package4:V, reg p14:p(V +), reg r52:V, reg r53:cls, reg nowhere:*, reg nowhere1:V, reg c10:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r54:V, reg r55:V, reg search:cls, reg r56:V, reg r57:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c11:L, reg x:V, reg testEv:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r58:V, reg r59:V, reg i5:*, reg i6:V, reg as_environment:cls, reg r60:V, reg p15:p(V +), reg r62:V, reg c12:L, reg testEv1:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r65:V, reg r66:V, reg where3:*, reg where4:V, reg as_environment1:cls, reg r67:V, reg p16:p(V +), reg r69:V |
    mkenv;
    st f = f;
    st where = where;
    package_isMissing = missing.0(package);
    if package_isMissing then L0("") else L0(package);
  L0(package_orDefault):
    st package = package_orDefault;
    st fdef = NULL;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L1(r1):
    st nowhere = r1;
    is = ldf is;
    check L28() else D0();
  L26():
    missing = ldf missing in base;
    r2 = dyn missing(<sym where>);
    goto L1(r2);
  L27():
    r = dyn base(<sym where>);
    goto L1(r);
  D0():
    deopt 8 [];
  L28():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r4 = dyn is(p, "genericFunction");
    check L29() else D1();
  D1():
    deopt 11 [r4];
  L29():
    c = `as.logical`(r4);
    if c then L30() else L2();
  L2():
    _isSingleString = ldf `.isSingleString`;
    check L37() else D3();
  L6():
    _TableMetaName = ldf `.TableMetaName`;
    check L75() else D21();
  L30():
    f3 = ld f;
    check L31() else D2();
  D2():
    deopt 12 [f3];
  D3():
    deopt 27 [];
  D21():
    deopt 94 [];
  L31():
    f4 = force? f3;
    checkMissing(f4);
    st fdef = f4;
    __ = ldf `@` in base;
    r5 = dyn __(<sym fdef>, <sym generic>);
    st f = r5;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L37():
    p1 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    r13 = dyn _isSingleString(p1);
    check L38() else D4();
  L75():
    p13 = prom<V +>{
      f19 = ld f;
      f20 = force? f19;
      checkMissing(f20);
      return f20;
    };
    p14 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    r52 = dyn _TableMetaName(p13, p14);
    check L76() else D22();
  D4():
    deopt 29 [r13];
  D22():
    deopt 97 [r52];
  L3(r7):
    c1 = `as.logical`(r7);
    if c1 then L34() else L4();
  L32():
    missing1 = ldf missing in base;
    r8 = dyn missing1(<sym package>);
    goto L3(r8);
  L33():
    r6 = dyn base1(<sym package>);
    goto L3(r6);
  L38():
    r14 = `!`(r13);
    c2 = `as.logical`(r14);
    if c2 then L39() else L7();
  L76():
    st what = r52;
    r53 = clos inner3791839121;
    st testEv = r53;
    nowhere = ld nowhere;
    check L77() else D23();
  D23():
    deopt 102 [nowhere];
  L4():
    goto L5(NULL);
  L5(r10):
    goto L6();
  L7():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  L34():
    __1 = ldf `@` in base;
    r9 = dyn __1(<sym fdef>, <sym package>);
    st package = r9;
    goto L5(r9);
  L39():
    stop = ldf stop;
    check L40() else D5();
  L77():
    nowhere1 = force? nowhere;
    checkMissing(nowhere1);
    c10 = `as.logical`(nowhere1);
    if c10 then L78() else L20();
  D5():
    deopt 32 [];
  L8(r22):
    c3 = `as.logical`(r22);
    if c3 then L45() else L9();
  L20():
    testEv1 = ldf testEv;
    check L90() else D28();
  L40():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        _notSingleString = ldf `.notSingleString`;
        p2 = prom<V +>{
          f7 = ld f;
          f8 = force? f7;
          checkMissing(f8);
          return f8;
        };
        r16 = dyn _notSingleString(p2);
        return r16;
      };
      r18 = dyn gettextf("argument 'f' must be a generic function or %s", p3);
      return r18;
    };
    r20 = dyn stop[, domain](p4, NA_LGL);
    check L41() else D6();
  L43():
    missing2 = ldf missing in base;
    r23 = dyn missing2(<sym package>);
    goto L8(r23);
  L44():
    r21 = dyn base2(<sym package>);
    goto L8(r21);
  L78():
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L79() else L80();
  D6():
    deopt 36 [r20];
  D28():
    deopt 124 [];
  L9():
    goto L6();
  L21(r55):
    s = toForSeq(r55);
    l = length(s);
    i = 0;
    goto L22(i);
  L41():
    goto L6();
  L45():
    packageSlot = ldf packageSlot;
    check L46() else D7();
  L79():
    search = ldf search;
    check L81() else D24();
  L80():
    r54 = dyn base6(<lang search()>);
    goto L21(r54);
  L90():
    p16 = prom<V +>{
      sym8 = ldf `as.environment`;
      base8 = ldf `as.environment` in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r66):
      return r66;
    L1():
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      as_environment1 = ldf `as.environment` in base;
      r67 = dyn as_environment1(where4);
      goto L0(r67);
    L2():
      r65 = dyn base8(<sym where>);
      goto L0(r65);
    };
    r69 = dyn testEv1(p16);
    check L91() else D29();
  D7():
    deopt 41 [];
  D24():
    deopt 106 [];
  D29():
    deopt 126 [r69];
  L22(i1):
    i2 = `+`.1(i1, 1);
    c11 = `<`.1(l, i2);
    if c11 then L83() else L25();
  L46():
    p5 = prom<V +>{
      f9 = ld f;
      f10 = force? f9;
      checkMissing(f10);
      return f10;
    };
    r25 = dyn packageSlot(p5);
    check L47() else D8();
  L81():
    r56 = dyn search();
    check L82() else D25();
  L91():
    popenv;
    return r69;
  D8():
    deopt 43 [r25];
  D25():
    deopt 107 [r56];
  L25():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    testEv = ldf testEv;
    check L84() else D26();
  L47():
    st package = r25;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L82():
    r57 = seq_along(r56);
    goto L21(r57);
  L83():
    popenv;
    return FALSE;
  D26():
    deopt 110 [i2];
  L10(r27):
    c5 = `as.logical`(r27);
    if c5 then L51() else L11();
  L48():
    package1 = ld package;
    check L50() else D9();
  L49():
    r26 = dyn base3(<sym package>);
    goto L10(r26);
  L84():
    p15 = prom<V +>{
      sym7 = ldf `as.environment`;
      base7 = ldf `as.environment` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r59):
      return r59;
    L1():
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      as_environment = ldf `as.environment` in base;
      r60 = dyn as_environment(i6);
      goto L0(r60);
    L2():
      r58 = dyn base7(<sym i>);
      goto L0(r58);
    };
    r62 = dyn testEv(p15);
    check L85() else D27();
  D9():
    deopt 46 [package1];
  D27():
    deopt 112 [i2, r62];
  L11():
    goto L19(NULL);
  L19(r49):
    goto L6();
  L50():
    package2 = force? package1;
    checkMissing(package2);
    c4 = `==`(package2, NULL);
    goto L10(c4);
  L51():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  L85():
    c12 = `as.logical`(r62);
    if c12 then L86() else L23();
  L12(r29):
    c6 = `as.logical`(r29);
    if c6 then L54() else L13();
  L23():
    goto L22(i2);
  L52():
    missing3 = ldf missing in base;
    r30 = dyn missing3(<sym where>);
    goto L12(r30);
  L53():
    r28 = dyn base4(<sym where>);
    goto L12(r28);
  L86():
    popenv;
    return TRUE;
  L13():
    getGeneric1 = ldf getGeneric;
    check L58() else D12();
  L14():
    is1 = ldf is;
    check L67() else D17();
  L54():
    getGeneric = ldf getGeneric;
    check L55() else D10();
  D10():
    deopt 53 [];
  D12():
    deopt 58 [];
  D17():
    deopt 76 [];
  L55():
    p6 = prom<V +>{
      f11 = ld f;
      f12 = force? f11;
      checkMissing(f12);
      return f12;
    };
    r32 = dyn getGeneric(p6);
    check L56() else D11();
  L58():
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
    r36 = dyn getGeneric1[, where](p7, p8);
    check L59() else D13();
  L67():
    p10 = prom<V +>{
      fdef2 = ld fdef;
      fdef3 = force? fdef2;
      checkMissing(fdef3);
      return fdef3;
    };
    r42 = dyn is1(p10, "genericFunction");
    check L68() else D18();
  D11():
    deopt 55 [r32];
  D13():
    deopt 62 [r36];
  D18():
    deopt 79 [r42];
  L56():
    st fdef = r32;
    goto L14();
  L59():
    st fdef = r36;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L60() else L61();
  L68():
    c9 = `as.logical`(r42);
    if c9 then L69() else L17();
  L15(r38):
    c8 = `as.logical`(r38);
    if c8 then L63() else L16();
  L17():
    stop1 = ldf stop;
    check L71() else D19();
  L18(r44):
    goto L19(r44);
  L60():
    fdef = ld fdef;
    check L62() else D14();
  L61():
    r37 = dyn base5(<sym fdef>);
    goto L15(r37);
  L69():
    __2 = ldf `@` in base;
    r43 = dyn __2(<sym fdef>, <sym package>);
    st package = r43;
    goto L18(r43);
  D14():
    deopt 65 [fdef];
  D19():
    deopt 84 [];
  L16():
    goto L14();
  L62():
    fdef1 = force? fdef;
    checkMissing(fdef1);
    c7 = `==`(fdef1, NULL);
    goto L15(c7);
  L63():
    getGeneric2 = ldf getGeneric;
    check L64() else D15();
  L71():
    p12 = prom<V +>{
      gettextf1 = ldf gettextf;
      p11 = prom<V +>{
        f17 = ld f;
        f18 = force? f17;
        checkMissing(f18);
        return f18;
      };
      r46 = dyn gettextf1("'%s' is not a known generic function {and 'package' not specified}", p11);
      return r46;
    };
    r48 = dyn stop1[, domain](p12, NA_LGL);
    check L72() else D20();
  D15():
    deopt 69 [];
  D20():
    deopt 88 [r48];
  L64():
    p9 = prom<V +>{
      f15 = ld f;
      f16 = force? f15;
      checkMissing(f16);
      return f16;
    };
    r40 = dyn getGeneric2(p9);
    check L65() else D16();
  L72():
    goto L18(r48);
  D16():
    deopt 71 [r40];
  L65():
    st fdef = r40;
    goto L14();
  }
}
fun inner3791839121(ev) {
  (reg ev:*) -+> V { var ev:*, reg exists:cls, reg what:*, reg what1:V, reg p:p(V +), reg ev1:*, reg ev2:V, reg p1:p(V +), reg r2:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg c5:L, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c8:L, reg r6:V, reg get:cls, reg what2:*, reg what3:V, reg p2:p(V +), reg ev3:*, reg ev4:V, reg p3:p(V +), reg r9:V, reg names:cls, reg r10:V, reg length:cls, reg r11:V, reg r12:V, reg c9:L, reg c10:V |
    mkenv;
    st ev = ev;
    exists = ldf exists;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p1 = prom<V +>{
      ev1 = ld ev;
      ev2 = force? ev1;
      checkMissing(ev2);
      return ev2;
    };
    r2 = dyn exists[, envir, inherits](p, p1, FALSE);
    check L4() else D1();
  D1():
    deopt 7 [r2];
  L4():
    c = `as.logical`(r2);
    if c then L5() else L0(c);
  L0(c2):
    popenv;
    return c2;
  L5():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L1(c5, r4):
    r12 = `>`(r4, 0);
    c9 = `as.logical`(r12);
    c10 = `&&`(c5, c9);
    goto L0(c10);
  L6():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L7():
    r3 = dyn base(<lang names(get(what, envir=ev))>);
    goto L1(c, r3);
  L2(c8, r6):
    length = ldf length in base;
    r11 = dyn length(r6);
    check L13() else D5();
  L8():
    get = ldf get;
    check L10() else D2();
  L9():
    r5 = dyn base1(<lang get(what, envir=ev)>);
    goto L2(c, r5);
  D2():
    deopt 13 [c];
  D5():
    deopt 21 [c8, r11];
  L10():
    p2 = prom<V +>{
      what2 = ld what;
      what3 = force? what2;
      checkMissing(what3);
      return what3;
    };
    p3 = prom<V +>{
      ev3 = ld ev;
      ev4 = force? ev3;
      checkMissing(ev4);
      return ev4;
    };
    r9 = dyn get[, envir](p2, p3);
    check L11() else D3();
  L13():
    goto L1(c8, r11);
  D3():
    deopt 17 [c, r9];
  L11():
    names = ldf names in base;
    r10 = dyn names(r9);
    check L12() else D4();
  D4():
    deopt 19 [c, r10];
  L12():
    goto L2(c, r10);
  }
}