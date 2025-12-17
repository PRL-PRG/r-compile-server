fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1501308535;
    st `.assignOverBinding` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1501308535(what, value, where, verbose) {
  (reg what:*, reg value:*, reg where:*, reg verbose:*) -+> V { var what:*, var value:*, var where:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg verbose1:*, reg verbose2:V, reg c:L, reg getPackageName:cls, reg where1:*, reg where2:V, reg p:p(V +), reg r1:V, reg gettextf:cls, reg sQuote:cls, reg what1:*, reg what2:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg sQuote1:cls, reg pname:*, reg pname1:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V, reg message:cls, reg strwrap:cls, reg msg:*, reg msg1:V, reg p5:p(V +), reg r10:V, reg p6:p(V +), reg r12:V, reg options:cls, reg p7:p(V +), reg r15:V, reg sym:cls, reg base:cls, reg guard:L, reg r16:V, reg on_exit:cls, reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg value1:*, reg value2:V, reg is_function:cls, reg r21:V, reg c1:L, reg environment:cls, reg value3:*, reg value4:V, reg p8:p(V +), reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg fenv:*, reg fenv1:V, reg c2:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg baseenv:cls, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg fenv2:*, reg fenv3:V, reg where3:*, reg where4:V, reg identical:cls, reg r32:V, reg r33:V, reg c4:L, reg c6:V, reg exists:cls, reg what3:*, reg what4:V, reg p9:p(V +), reg fenv4:*, reg fenv5:V, reg p10:p(V +), reg r36:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg bindingIsLocked:cls, reg what5:*, reg what6:V, reg p11:p(V +), reg fenv6:*, reg fenv7:V, reg p12:p(V +), reg r39:V, reg c13:L, reg c14:V, reg c16:L, reg unlockBinding:cls, reg what7:*, reg what8:V, reg p13:p(V +), reg fenv8:*, reg fenv9:V, reg p14:p(V +), reg r42:V, reg assign:cls, reg what9:*, reg what10:V, reg p15:p(V +), reg value5:*, reg value6:V, reg p16:p(V +), reg fenv10:*, reg fenv11:V, reg p17:p(V +), reg r46:V, reg lockBinding:cls, reg what11:*, reg what12:V, reg p18:p(V +), reg fenv12:*, reg fenv13:V, reg p19:p(V +), reg r49:V, reg r50:V, reg exists1:cls, reg what13:*, reg what14:V, reg p20:p(V +), reg where5:*, reg where6:V, reg p21:p(V +), reg r54:V, reg c17:L, reg c19:V, reg bindingIsLocked1:cls, reg what15:*, reg what16:V, reg p22:p(V +), reg where7:*, reg where8:V, reg p23:p(V +), reg r57:V, reg c20:L, reg c21:V, reg c23:L, reg unlockBinding1:cls, reg what17:*, reg what18:V, reg p24:p(V +), reg where9:*, reg where10:V, reg p25:p(V +), reg r60:V, reg assign1:cls, reg what19:*, reg what20:V, reg p26:p(V +), reg value7:*, reg value8:V, reg p27:p(V +), reg where11:*, reg where12:V, reg p28:p(V +), reg r64:V, reg lockBinding1:cls, reg what21:*, reg what22:V, reg p29:p(V +), reg where13:*, reg where14:V, reg p30:p(V +), reg r67:V, reg assign2:cls, reg what23:*, reg what24:V, reg p31:p(V +), reg value9:*, reg value10:V, reg p32:p(V +), reg where15:*, reg where16:V, reg p33:p(V +), reg r71:V |
    mkenv;
    st what = what;
    st value = value;
    st where = where;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0(TRUE) else L0(verbose);
  L0(verbose_orDefault):
    st verbose = verbose_orDefault;
    verbose1 = ld verbose;
    check L18() else D0();
  D0():
    deopt 0 [verbose1];
  L18():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c = `as.logical`(verbose2);
    if c then L19() else L1();
  L1():
    goto L2();
  L2():
    options = ldf options;
    check L27() else D7();
  L19():
    getPackageName = ldf getPackageName;
    check L20() else D1();
  D1():
    deopt 3 [];
  D7():
    deopt 23 [];
  L20():
    p = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r1 = dyn getPackageName(p);
    check L21() else D2();
  L27():
    p7 = prom<V +>{
      return -1.0;
    };
    r15 = dyn options[warn](p7);
    check L28() else D8();
  D2():
    deopt 5 [r1];
  D8():
    deopt 26 [r15];
  L21():
    st pname = r1;
    gettextf = ldf gettextf;
    check L22() else D3();
  L28():
    st warnOpt = r15;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  D3():
    deopt 8 [];
  L3():
    sym1 = ldf `is.function`;
    base1 = ldf `is.function` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L22():
    p2 = prom<V +>{
      sQuote = ldf sQuote;
      p1 = prom<V +>{
        what1 = ld what;
        what2 = force? what1;
        checkMissing(what2);
        return what2;
      };
      r3 = dyn sQuote(p1);
      return r3;
    };
    p4 = prom<V +>{
      sQuote1 = ldf sQuote;
      p3 = prom<V +>{
        pname = ld pname;
        pname1 = force? pname;
        checkMissing(pname1);
        return pname1;
      };
      r6 = dyn sQuote1(p3);
      return r6;
    };
    r8 = dyn gettextf("assigning over the binding of symbol %s in environment/package %s", p2, p4);
    check L23() else D4();
  L29():
    on_exit = ldf `on.exit` in base;
    r18 = dyn on_exit(<lang options(warnOpt)>);
    goto L3();
  L30():
    r16 = dyn base(<lang options(warnOpt)>);
    goto L3();
  D4():
    deopt 12 [r8];
  L4(r20):
    c1 = `as.logical`(r20);
    if c1 then L35() else L5();
  L23():
    st msg = r8;
    message = ldf message;
    check L24() else D5();
  L31():
    value1 = ld value;
    check L33() else D9();
  L32():
    r19 = dyn base1(<sym value>);
    goto L4(r19);
  D5():
    deopt 15 [];
  D9():
    deopt 33 [value1];
  L5():
    goto L15();
  L15():
    exists1 = ldf exists;
    check L68() else D28();
  L24():
    p6 = prom<V +>{
      strwrap = ldf strwrap;
      p5 = prom<V +>{
        msg = ld msg;
        msg1 = force? msg;
        checkMissing(msg1);
        return msg1;
      };
      r10 = dyn strwrap(p5);
      return r10;
    };
    r12 = dyn message[, domain](p6, NA_LGL);
    check L25() else D6();
  L33():
    value2 = force? value1;
    checkMissing(value2);
    is_function = ldf `is.function` in base;
    r21 = dyn is_function(value2);
    check L34() else D10();
  L35():
    environment = ldf environment;
    check L36() else D11();
  D6():
    deopt 19 [r12];
  D10():
    deopt 36 [r21];
  D11():
    deopt 38 [];
  D28():
    deopt 105 [];
  L25():
    goto L2();
  L34():
    goto L4(r21);
  L36():
    p8 = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    r23 = dyn environment(p8);
    check L37() else D12();
  L68():
    p20 = prom<V +>{
      what13 = ld what;
      what14 = force? what13;
      checkMissing(what14);
      return what14;
    };
    p21 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r54 = dyn exists1[, envir, inherits](p20, p21, FALSE);
    check L69() else D29();
  D12():
    deopt 40 [r23];
  D29():
    deopt 111 [r54];
  L37():
    st fenv = r23;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L69():
    c17 = `as.logical`(r54);
    if c17 then L70() else L16(c17);
  L6(r25):
    c3 = `as.logical`(r25);
    if c3 then L41() else L7();
  L16(c19):
    c23 = `as.logical`(c19);
    if c23 then L74() else L17();
  L38():
    fenv = ld fenv;
    check L40() else D13();
  L39():
    r24 = dyn base2(<sym fenv>);
    goto L6(r24);
  L70():
    bindingIsLocked1 = ldf bindingIsLocked;
    check L71() else D30();
  D13():
    deopt 43 [fenv];
  D30():
    deopt 113 [c17];
  L7():
    goto L9();
  L9():
    sym4 = ldf identical;
    base4 = ldf identical in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L46() else L47();
  L17():
    assign2 = ldf assign;
    check L82() else D38();
  L40():
    fenv1 = force? fenv;
    checkMissing(fenv1);
    c2 = `==`(fenv1, NULL);
    goto L6(c2);
  L41():
    sym3 = ldf baseenv;
    base3 = ldf baseenv in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L71():
    p22 = prom<V +>{
      what15 = ld what;
      what16 = force? what15;
      checkMissing(what16);
      return what16;
    };
    p23 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r57 = dyn bindingIsLocked1(p22, p23);
    check L72() else D31();
  L74():
    unlockBinding1 = ldf unlockBinding;
    check L75() else D32();
  D31():
    deopt 116 [c17, r57];
  D32():
    deopt 119 [];
  D38():
    deopt 135 [];
  L8(r27):
    st fenv = r27;
    goto L9();
  L10(r31):
    r33 = `!`(r31);
    c4 = `as.logical`(r33);
    if c4 then L51() else L11(c4);
  L42():
    baseenv = ldf baseenv in base;
    r28 = dyn baseenv();
    check L44() else D14();
  L43():
    r26 = dyn base3();
    goto L8(r26);
  L46():
    fenv2 = ld fenv;
    check L48() else D15();
  L47():
    r30 = dyn base4(<sym fenv>, <sym where>);
    goto L10(r30);
  L72():
    c20 = `as.logical`(r57);
    c21 = `&&`(c17, c20);
    goto L16(c21);
  L75():
    p24 = prom<V +>{
      what17 = ld what;
      what18 = force? what17;
      checkMissing(what18);
      return what18;
    };
    p25 = prom<V +>{
      where9 = ld where;
      where10 = force? where9;
      checkMissing(where10);
      return where10;
    };
    r60 = dyn unlockBinding1(p24, p25);
    check L76() else D33();
  L82():
    p31 = prom<V +>{
      what23 = ld what;
      what24 = force? what23;
      checkMissing(what24);
      return what24;
    };
    p32 = prom<V +>{
      value9 = ld value;
      value10 = force? value9;
      checkMissing(value10);
      return value10;
    };
    p33 = prom<V +>{
      where15 = ld where;
      where16 = force? where15;
      checkMissing(where16);
      return where16;
    };
    r71 = dyn assign2(p31, p32, p33);
    check L83() else D39();
  D14():
    deopt 49 [r28];
  D15():
    deopt 55 [fenv2];
  D33():
    deopt 122 [r60];
  D39():
    deopt 139 [r71];
  L11(c6):
    c10 = `as.logical`(c6);
    if c10 then L55() else L12(c10);
  L44():
    goto L8(r28);
  L48():
    fenv3 = force? fenv2;
    checkMissing(fenv3);
    where3 = ld where;
    check L49() else D16();
  L51():
    exists = ldf exists;
    check L52() else D18();
  L76():
    assign1 = ldf assign;
    check L77() else D34();
  L83():
    popenv;
    return r71;
  D16():
    deopt 57 [where3];
  D18():
    deopt 70 [c4];
  D34():
    deopt 124 [];
  L12(c12):
    c16 = `as.logical`(c12);
    if c16 then L59() else L13();
  L49():
    where4 = force? where3;
    checkMissing(where4);
    identical = ldf identical in base;
    r32 = dyn identical(fenv3, where4, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L50() else D17();
  L52():
    p9 = prom<V +>{
      what3 = ld what;
      what4 = force? what3;
      checkMissing(what4);
      return what4;
    };
    p10 = prom<V +>{
      fenv4 = ld fenv;
      fenv5 = force? fenv4;
      checkMissing(fenv5);
      return fenv5;
    };
    r36 = dyn exists[, envir, inherits](p9, p10, FALSE);
    check L53() else D19();
  L55():
    bindingIsLocked = ldf bindingIsLocked;
    check L56() else D20();
  L77():
    p26 = prom<V +>{
      what19 = ld what;
      what20 = force? what19;
      checkMissing(what20);
      return what20;
    };
    p27 = prom<V +>{
      value7 = ld value;
      value8 = force? value7;
      checkMissing(value8);
      return value8;
    };
    p28 = prom<V +>{
      where11 = ld where;
      where12 = force? where11;
      checkMissing(where12);
      return where12;
    };
    r64 = dyn assign1(p26, p27, p28);
    check L78() else D35();
  D17():
    deopt 67 [r32];
  D19():
    deopt 76 [c4, r36];
  D20():
    deopt 79 [c10];
  D35():
    deopt 128 [r64];
  L13():
    goto L14(NULL);
  L14(r50):
    goto L15();
  L50():
    goto L10(r32);
  L53():
    c7 = `as.logical`(r36);
    c8 = `&&`(c4, c7);
    goto L11(c8);
  L56():
    p11 = prom<V +>{
      what5 = ld what;
      what6 = force? what5;
      checkMissing(what6);
      return what6;
    };
    p12 = prom<V +>{
      fenv6 = ld fenv;
      fenv7 = force? fenv6;
      checkMissing(fenv7);
      return fenv7;
    };
    r39 = dyn bindingIsLocked(p11, p12);
    check L57() else D21();
  L59():
    unlockBinding = ldf unlockBinding;
    check L60() else D22();
  L78():
    lockBinding1 = ldf lockBinding;
    check L79() else D36();
  D21():
    deopt 82 [c10, r39];
  D22():
    deopt 85 [];
  D36():
    deopt 130 [];
  L57():
    c13 = `as.logical`(r39);
    c14 = `&&`(c10, c13);
    goto L12(c14);
  L60():
    p13 = prom<V +>{
      what7 = ld what;
      what8 = force? what7;
      checkMissing(what8);
      return what8;
    };
    p14 = prom<V +>{
      fenv8 = ld fenv;
      fenv9 = force? fenv8;
      checkMissing(fenv9);
      return fenv9;
    };
    r42 = dyn unlockBinding(p13, p14);
    check L61() else D23();
  L79():
    p29 = prom<V +>{
      what21 = ld what;
      what22 = force? what21;
      checkMissing(what22);
      return what22;
    };
    p30 = prom<V +>{
      where13 = ld where;
      where14 = force? where13;
      checkMissing(where14);
      return where14;
    };
    r67 = dyn lockBinding1(p29, p30);
    check L80() else D37();
  D23():
    deopt 88 [r42];
  D37():
    deopt 133 [r67];
  L61():
    assign = ldf assign;
    check L62() else D24();
  L80():
    popenv;
    return r67;
  D24():
    deopt 90 [];
  L62():
    p15 = prom<V +>{
      what9 = ld what;
      what10 = force? what9;
      checkMissing(what10);
      return what10;
    };
    p16 = prom<V +>{
      value5 = ld value;
      value6 = force? value5;
      checkMissing(value6);
      return value6;
    };
    p17 = prom<V +>{
      fenv10 = ld fenv;
      fenv11 = force? fenv10;
      checkMissing(fenv11);
      return fenv11;
    };
    r46 = dyn assign(p15, p16, p17);
    check L63() else D25();
  D25():
    deopt 94 [r46];
  L63():
    lockBinding = ldf lockBinding;
    check L64() else D26();
  D26():
    deopt 96 [];
  L64():
    p18 = prom<V +>{
      what11 = ld what;
      what12 = force? what11;
      checkMissing(what12);
      return what12;
    };
    p19 = prom<V +>{
      fenv12 = ld fenv;
      fenv13 = force? fenv12;
      checkMissing(fenv13);
      return fenv13;
    };
    r49 = dyn lockBinding(p18, p19);
    check L65() else D27();
  D27():
    deopt 99 [r49];
  L65():
    goto L14(r49);
  }
}