fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1849408893;
    st `fixPre1.8` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1849408893(names, where) {
  (reg names:*, reg where:*) -+> V { var names:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg character:cls, reg r4:V, reg names1:*, reg names2:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg _findAll:cls, reg what:*, reg what1:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg i7:I, reg r9:V, reg objWhere:*, reg objWhere1:V, reg length:cls, reg r10:V, reg r11:V, reg c1:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg what2:*, reg what3:V, reg p4:p(V +), reg r13:V, reg p5:p(V +), reg r15:V, reg p6:p(V +), reg r17:V, reg objWhere2:*, reg objWhere3:V, reg c2:L, reg i13:I, reg objWhere5:V, reg dr:V, reg dc:L, reg dx:V, reg i15:I, reg dx1:V, reg __:cls, reg r19:V, reg get:cls, reg what4:*, reg what5:V, reg p7:p(V +), reg objWhere6:*, reg objWhere7:V, reg p8:p(V +), reg r22:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r23:V, reg i18:I, reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg i21:I, reg r26:V, reg obj:*, reg obj1:V, reg attr:cls, reg r27:V, reg c3:V, reg c4:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg i28:I, reg r30:V, reg obj2:*, reg obj3:V, reg class:cls, reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg i31:I, reg r33:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg i34:I, reg r35:V, reg Class:*, reg Class1:V, reg attr1:cls, reg r36:V, reg c5:V, reg c6:L, reg isClass:cls, reg Class2:*, reg Class3:V, reg p9:p(V +), reg where3:*, reg where4:V, reg p10:p(V +), reg r39:V, reg c7:L, reg getClass:cls, reg Class4:*, reg Class5:V, reg p11:p(V +), reg where5:*, reg where6:V, reg p12:p(V +), reg r42:V, reg isVirtualClass:cls, reg ClassDef:*, reg ClassDef1:V, reg p13:p(V +), reg r44:V, reg c8:L, reg i39:I, reg c9:V, reg isTRUE:cls, reg validObject:cls, reg obj4:*, reg obj5:V, reg p14:p(V +), reg r46:V, reg p15:p(V +), reg r48:V, reg r49:V, reg c11:L, reg c12:V, reg r50:V, reg ok:*, reg ok1:V, reg c14:L, reg __1:cls, reg r51:V, reg l1:*, reg class__:cls, reg r52:V, reg assign:cls, reg what6:*, reg what7:V, reg p16:p(V +), reg obj6:*, reg obj7:V, reg p17:p(V +), reg objWhere8:*, reg objWhere9:V, reg p18:p(V +), reg r56:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r57:V, reg i46:I, reg r58:V, reg done:*, reg done1:V, reg what8:*, reg what9:V, reg c15:cls, reg r59:V, reg i47:I, reg r60:V, reg warning1:cls, reg gettextf1:cls, reg sQuote1:cls, reg what10:*, reg what11:V, reg p19:p(V +), reg r62:V, reg p20:p(V +), reg dQuote:cls, reg Class6:*, reg Class7:V, reg p21:p(V +), reg r65:V, reg p22:p(V +), reg sQuote2:cls, reg __2:cls, reg r67:V, reg p23:p(V +), reg r69:V, reg p24:p(V +), reg r71:V, reg p25:p(V +), reg r73:V, reg i48:I, reg r74:V, reg warning2:cls, reg gettextf2:cls, reg sQuote3:cls, reg what12:*, reg what13:V, reg p26:p(V +), reg r76:V, reg p27:p(V +), reg dQuote1:cls, reg class1:*, reg class2:V, reg p28:p(V +), reg r79:V, reg p29:p(V +), reg r81:V, reg p30:p(V +), reg r83:V, reg i49:I, reg warning3:cls, reg gettextf3:cls, reg sQuote4:cls, reg what14:*, reg what15:V, reg p31:p(V +), reg r86:V, reg p32:p(V +), reg r88:V, reg p33:p(V +), reg r90:V, reg done2:*, reg done3:V |
    mkenv;
    st names = names;
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
    character = ldf character;
    check L23() else D0();
  D0():
    deopt 1 [];
  L23():
    r4 = dyn character();
    check L24() else D1();
  D1():
    deopt 2 [r4];
  L24():
    st done = r4;
    names1 = ld names;
    check L25() else D2();
  D2():
    deopt 4 [names1];
  L25():
    names2 = force? names1;
    checkMissing(names2);
    s = toForSeq(names2);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L26() else L22();
  L22():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    _findAll = ldf `.findAll`;
    check L27() else D3();
  L26():
    done2 = ld done;
    check L95() else D40();
  D3():
    deopt 7 [i2];
  D40():
    deopt 141 [done2];
  L27():
    p2 = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r7 = dyn _findAll(p2, p3);
    check L28() else D4();
  L95():
    done3 = force? done2;
    checkMissing(done3);
    popenv;
    return done3;
  D4():
    deopt 10 [i2, r7];
  L28():
    st objWhere = r7;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L3(i7, r9):
    r11 = `==`(r9, 0.0);
    c1 = `as.logical`(r11);
    if c1 then L33() else L4();
  L29():
    objWhere = ld objWhere;
    check L31() else D5();
  L30():
    r8 = dyn base(<sym objWhere>);
    goto L3(i2, r8);
  D5():
    deopt 14 [i2, objWhere];
  L4():
    objWhere2 = ld objWhere;
    check L38() else D9();
  L31():
    objWhere1 = force? objWhere;
    checkMissing(objWhere1);
    length = ldf length in base;
    r10 = dyn length(objWhere1);
    check L32() else D6();
  L33():
    warning = ldf warning;
    check L34() else D7();
  D6():
    deopt 17 [i2, r10];
  D7():
    deopt 21 [i7];
  D9():
    deopt 30 [i7, objWhere2];
  L32():
    goto L3(i2, r10);
  L34():
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        sQuote = ldf sQuote;
        p4 = prom<V +>{
          what2 = ld what;
          what3 = force? what2;
          checkMissing(what3);
          return what3;
        };
        r13 = dyn sQuote(p4);
        return r13;
      };
      r15 = dyn gettextf("object %s not found", p5);
      return r15;
    };
    r17 = dyn warning[, domain](p6, NA_LGL);
    check L35() else D8();
  L38():
    objWhere3 = force? objWhere2;
    checkMissing(objWhere3);
    c2 = `is.object`(objWhere3);
    if c2 then L39() else L40(i7, objWhere3);
  D8():
    deopt 25 [i7, r17];
  L6(i15, dx1):
    st objWhere = dx1;
    get = ldf get;
    check L42() else D10();
  L35():
    goto L2(i7);
  L39():
    dr = tryDispatchBuiltin.1("[[", objWhere3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L41() else L40(i7, dr);
  L40(i13, objWhere5):
    __ = ldf `[[` in base;
    r19 = dyn __(objWhere5, 1);
    goto L6(i13, r19);
  D10():
    deopt 37 [i15];
  L41():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(i7, dx);
  L42():
    p7 = prom<V +>{
      what4 = ld what;
      what5 = force? what4;
      checkMissing(what5);
      return what5;
    };
    p8 = prom<V +>{
      objWhere6 = ld objWhere;
      objWhere7 = force? objWhere6;
      checkMissing(objWhere7);
      return objWhere7;
    };
    r22 = dyn get(p7, p8);
    check L43() else D11();
  D11():
    deopt 40 [i15, r22];
  L43():
    st obj = r22;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L44() else L45();
  L7(i18, r24):
    c4 = `as.logical`(r24);
    if c4 then L50() else L9();
  L44():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L45():
    r23 = dyn base1(<lang attr(obj, "class")>);
    goto L7(i15, r23);
  L8(i21, r26):
    c3 = `==`(r26, NULL);
    goto L7(i21, c3);
  L9():
    sym3 = ldf class;
    base3 = ldf class in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  L46():
    obj = ld obj;
    check L48() else D12();
  L47():
    r25 = dyn base2(<sym obj>, "class");
    goto L8(i15, r25);
  L50():
    goto L2(i18);
  D12():
    deopt 45 [i15, obj];
  L11(i28, r30):
    st Class = r30;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L57() else L58();
  L48():
    obj1 = force? obj;
    checkMissing(obj1);
    attr = ldf attr in base;
    r27 = dyn attr(obj1, "class");
    check L49() else D13();
  L53():
    obj2 = ld obj;
    check L55() else D14();
  L54():
    r29 = dyn base3(<sym obj>);
    goto L11(i18, r29);
  D13():
    deopt 49 [i15, r27];
  D14():
    deopt 57 [i18, obj2];
  L12(i31, r33):
    c6 = `as.logical`(r33);
    if c6 then L63() else L14();
  L49():
    goto L8(i15, r27);
  L55():
    obj3 = force? obj2;
    checkMissing(obj3);
    class = ldf class in base;
    r31 = dyn class(obj3);
    check L56() else D15();
  L57():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L59() else L60();
  L58():
    r32 = dyn base4(<lang attr(Class, "package")>);
    goto L12(i28, r32);
  D15():
    deopt 60 [i18, r31];
  L13(i34, r35):
    c5 = `==`(r35, NULL);
    goto L12(i34, c5);
  L14():
    warning3 = ldf warning;
    check L93() else D38();
  L21(i49):
    goto L2(i49);
  L56():
    goto L11(i18, r31);
  L59():
    Class = ld Class;
    check L61() else D16();
  L60():
    r34 = dyn base5(<sym Class>, "package");
    goto L13(i28, r34);
  L63():
    isClass = ldf isClass;
    check L64() else D18();
  D16():
    deopt 65 [i28, Class];
  D18():
    deopt 72 [i31];
  D38():
    deopt 133 [i31];
  L61():
    Class1 = force? Class;
    checkMissing(Class1);
    attr1 = ldf attr in base;
    r36 = dyn attr1(Class1, "package");
    check L62() else D17();
  L64():
    p9 = prom<V +>{
      Class2 = ld Class;
      Class3 = force? Class2;
      checkMissing(Class3);
      return Class3;
    };
    p10 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r39 = dyn isClass[, where](p9, p10);
    check L65() else D19();
  L93():
    p33 = prom<V +>{
      gettextf3 = ldf gettextf;
      p32 = prom<V +>{
        sQuote4 = ldf sQuote;
        p31 = prom<V +>{
          what14 = ld what;
          what15 = force? what14;
          checkMissing(what15);
          return what15;
        };
        r86 = dyn sQuote4(p31);
        return r86;
      };
      r88 = dyn gettextf3("object %s not changed (it does not appear to be from a version of R earlier than 1.8.0)", p32);
      return r88;
    };
    r90 = dyn warning3[, domain](p33, NA_LGL);
    check L94() else D39();
  D17():
    deopt 69 [i28, r36];
  D19():
    deopt 76 [i31, r39];
  D39():
    deopt 137 [i31, r90];
  L62():
    goto L13(i28, r36);
  L65():
    c7 = `as.logical`(r39);
    if c7 then L66() else L15();
  L94():
    goto L21(i31);
  L15():
    warning2 = ldf warning;
    check L90() else D36();
  L20(i48, r74):
    goto L21(i48);
  L66():
    getClass = ldf getClass;
    check L67() else D20();
  D20():
    deopt 78 [i31];
  D36():
    deopt 127 [i31];
  L67():
    p11 = prom<V +>{
      Class4 = ld Class;
      Class5 = force? Class4;
      checkMissing(Class5);
      return Class5;
    };
    p12 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r42 = dyn getClass[, where](p11, p12);
    check L68() else D21();
  L90():
    p30 = prom<V +>{
      gettextf2 = ldf gettextf;
      p27 = prom<V +>{
        sQuote3 = ldf sQuote;
        p26 = prom<V +>{
          what12 = ld what;
          what13 = force? what12;
          checkMissing(what13);
          return what13;
        };
        r76 = dyn sQuote3(p26);
        return r76;
      };
      p29 = prom<V +>{
        dQuote1 = ldf dQuote;
        p28 = prom<V +>{
          class1 = ld class;
          class2 = force? class1;
          checkMissing(class2);
          return class2;
        };
        r79 = dyn dQuote1(p28);
        return r79;
      };
      r81 = dyn gettextf2("no definition for the class of %s (class %s) found", p27, p29);
      return r81;
    };
    r83 = dyn warning2[, domain](p30, NA_LGL);
    check L91() else D37();
  D21():
    deopt 82 [i31, r42];
  D37():
    deopt 131 [i31, r83];
  L68():
    st ClassDef = r42;
    isVirtualClass = ldf isVirtualClass;
    check L69() else D22();
  L91():
    goto L20(i31, r83);
  D22():
    deopt 85 [i31];
  L69():
    p13 = prom<V +>{
      ClassDef = ld ClassDef;
      ClassDef1 = force? ClassDef;
      checkMissing(ClassDef1);
      return ClassDef1;
    };
    r44 = dyn isVirtualClass(p13);
    check L70() else D23();
  D23():
    deopt 87 [i31, r44];
  L70():
    c8 = `as.logical`(r44);
    if c8 then L16(i31, c8) else L71();
  L16(i39, c9):
    r50 = `!`(c9);
    st ok = r50;
    ok = ld ok;
    check L75() else D26();
  L71():
    isTRUE = ldf isTRUE;
    check L72() else D24();
  D24():
    deopt 89 [i31, c8];
  D26():
    deopt 96 [i39, ok];
  L72():
    p15 = prom<V +>{
      validObject = ldf validObject;
      p14 = prom<V +>{
        obj4 = ld obj;
        obj5 = force? obj4;
        checkMissing(obj5);
        return obj5;
      };
      r46 = dyn validObject[, test](p14, TRUE);
      return r46;
    };
    r48 = dyn isTRUE(p15);
    check L73() else D25();
  L75():
    ok1 = force? ok;
    checkMissing(ok1);
    c14 = `as.logical`(ok1);
    if c14 then L76() else L17();
  D25():
    deopt 91 [i31, c8, r48];
  L17():
    warning1 = ldf warning;
    check L87() else D34();
  L19(i47, r60):
    goto L20(i47, r60);
  L73():
    r49 = `!`(r48);
    c11 = `as.logical`(r49);
    c12 = `||`(c8, c11);
    goto L16(i31, c12);
  L76():
    __1 = ldf `@` in base;
    r51 = dyn __1(<sym ClassDef>, <sym className>);
    l1 = ld obj;
    class__ = ldf `class<-`;
    check L77() else D27();
  D27():
    deopt 101 [i39, r51, l1, r51];
  D34():
    deopt 121 [i39];
  L77():
    r52 = dyn class__(l1, NULL, r51);
    check L78() else D28();
  L87():
    p25 = prom<V +>{
      gettextf1 = ldf gettextf;
      p20 = prom<V +>{
        sQuote1 = ldf sQuote;
        p19 = prom<V +>{
          what10 = ld what;
          what11 = force? what10;
          checkMissing(what11);
          return what11;
        };
        r62 = dyn sQuote1(p19);
        return r62;
      };
      p22 = prom<V +>{
        dQuote = ldf dQuote;
        p21 = prom<V +>{
          Class6 = ld Class;
          Class7 = force? Class6;
          checkMissing(Class7);
          return Class7;
        };
        r65 = dyn dQuote(p21);
        return r65;
      };
      p24 = prom<V +>{
        sQuote2 = ldf sQuote;
        p23 = prom<V +>{
          __2 = ldf `@` in base;
          r67 = dyn __2(<sym ClassDef>, <sym package>);
          return r67;
        };
        r69 = dyn sQuote2(p23);
        return r69;
      };
      r71 = dyn gettextf1("object %s not changed (it is not consistent with the current definition of class %s from %s)", p20, p22, p24);
      return r71;
    };
    r73 = dyn warning1[, domain](p25, NA_LGL);
    check L88() else D35();
  D28():
    deopt 103 [i39, r51, r52];
  D35():
    deopt 125 [i39, r73];
  L78():
    st obj = r52;
    assign = ldf assign;
    check L79() else D29();
  L88():
    goto L19(i39, r73);
  D29():
    deopt 106 [i39];
  L79():
    p16 = prom<V +>{
      what6 = ld what;
      what7 = force? what6;
      checkMissing(what7);
      return what7;
    };
    p17 = prom<V +>{
      obj6 = ld obj;
      obj7 = force? obj6;
      checkMissing(obj7);
      return obj7;
    };
    p18 = prom<V +>{
      objWhere8 = ld objWhere;
      objWhere9 = force? objWhere8;
      checkMissing(objWhere9);
      return objWhere9;
    };
    r56 = dyn assign(p16, p17, p18);
    check L80() else D30();
  D30():
    deopt 110 [i39, r56];
  L80():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L81() else L82();
  L18(i46, r58):
    st done = r58;
    goto L19(i46, r58);
  L81():
    done = ld done;
    check L83() else D31();
  L82():
    r57 = dyn base6(<sym done>, <sym what>);
    goto L18(i39, r57);
  D31():
    deopt 113 [i39, done];
  L83():
    done1 = force? done;
    checkMissing(done1);
    what8 = ld what;
    check L84() else D32();
  D32():
    deopt 115 [i39, what8];
  L84():
    what9 = force? what8;
    checkMissing(what9);
    c15 = ldf c in base;
    r59 = dyn c15(done1, what9);
    check L85() else D33();
  D33():
    deopt 118 [i39, r59];
  L85():
    goto L18(i39, r59);
  }
}