fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1088666106;
    st className = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1088666106(class, package) {
  (reg class:*, reg package:*) -+> V { var class:*, var package:*, reg is:cls, reg class1:*, reg class2:V, reg p:p(V +), reg r1:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg class3:*, reg class4:V, reg as_character:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg missing:cls, reg r7:V, reg c1:L, reg packageSlot:cls, reg class5:*, reg class6:V, reg p1:p(V +), reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg package1:*, reg package2:V, reg c2:V, reg c3:L, reg exists:cls, reg className:*, reg className1:V, reg p2:p(V +), reg _classTable:*, reg _classTable1:V, reg p3:p(V +), reg r15:V, reg c4:L, reg get:cls, reg className2:*, reg className3:V, reg p4:p(V +), reg _classTable2:*, reg _classTable3:V, reg p5:p(V +), reg r18:V, reg findClass:cls, reg className4:*, reg className5:V, reg p6:p(V +), reg topenv:cls, reg parent_frame:cls, reg r21:V, reg p7:p(V +), reg r23:V, reg p8:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg classDef:*, reg classDef1:V, reg length:cls, reg r28:V, reg r29:V, reg c5:L, reg classDef2:*, reg classDef3:V, reg c6:L, reg classDef5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r30:V, reg is1:cls, reg classDef6:*, reg classDef7:V, reg p9:p(V +), reg r32:V, reg c7:L, reg __1:cls, reg r33:V, reg r34:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg classDef8:*, reg classDef9:V, reg length1:cls, reg r37:V, reg r38:V, reg c8:L, reg sapply:cls, reg classDef10:*, reg classDef11:V, reg p10:p(V +), reg r40:cls, reg p11:p(V +), reg r42:V, reg warning:cls, reg gettextf:cls, reg dQuote:cls, reg className6:*, reg className7:V, reg p12:p(V +), reg r44:V, reg p13:p(V +), reg paste:cls, reg sQuote:cls, reg pkgs:*, reg pkgs1:V, reg p14:p(V +), reg r47:V, reg p15:p(V +), reg r49:V, reg p16:p(V +), reg r51:V, reg p17:p(V +), reg r53:V, reg pkgs2:*, reg pkgs3:V, reg c9:L, reg pkgs5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __2:cls, reg r54:V, reg stop:cls, reg gettextf1:cls, reg dQuote1:cls, reg className8:*, reg className9:V, reg p18:p(V +), reg r56:V, reg p19:p(V +), reg r58:V, reg p20:p(V +), reg r60:V, reg r61:V, reg is2:cls, reg class7:*, reg class8:V, reg p21:p(V +), reg classDef12:*, reg classDef13:V, reg p22:p(V +), reg r65:V, reg c10:L, reg __3:cls, reg r66:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r67:V, reg r68:V, reg missing1:cls, reg r69:V, reg c11:L, reg __4:cls, reg r70:V, reg r71:V, reg new:cls, reg className10:*, reg className11:V, reg p23:p(V +), reg package3:*, reg package4:V, reg p24:p(V +), reg r74:V |
    mkenv;
    st class = class;
    st package = package;
    is = ldf is;
    check L23() else D0();
  D0():
    deopt 1 [];
  L23():
    p = prom<V +>{
      class1 = ld class;
      class2 = force? class1;
      checkMissing(class2);
      return class2;
    };
    r1 = dyn is(p, "character");
    check L24() else D1();
  D1():
    deopt 4 [r1];
  L24():
    c = `as.logical`(r1);
    if c then L25() else L0();
  L0():
    is2 = ldf is;
    check L80() else D27();
  L18():
    new = ldf new;
    check L88() else D29();
  L25():
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  D27():
    deopt 106 [];
  D29():
    deopt 124 [];
  L1(r3):
    st className = r3;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L26():
    class3 = ld class;
    check L28() else D2();
  L27():
    r2 = dyn base(<sym class>);
    goto L1(r2);
  L80():
    p21 = prom<V +>{
      class7 = ld class;
      class8 = force? class7;
      checkMissing(class8);
      return class8;
    };
    p22 = prom<V +>{
      classDef12 = ld classDef;
      classDef13 = force? classDef12;
      checkMissing(classDef13);
      return classDef13;
    };
    r65 = dyn is2(p21, p22);
    check L81() else D28();
  L88():
    p23 = prom<V +>{
      className10 = ld className;
      className11 = force? className10;
      checkMissing(className11);
      return className11;
    };
    p24 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    r74 = dyn new[, `.Data`, package]("className", p23, p24);
    check L89() else D30();
  D2():
    deopt 7 [class3];
  D28():
    deopt 109 [r65];
  D30():
    deopt 130 [r74];
  L2(r6):
    c1 = `as.logical`(r6);
    if c1 then L32() else L3();
  L28():
    class4 = force? class3;
    checkMissing(class4);
    as_character = ldf `as.character` in base;
    r4 = dyn as_character(class4);
    check L29() else D3();
  L30():
    missing = ldf missing in base;
    r7 = dyn missing(<sym package>);
    goto L2(r7);
  L31():
    r5 = dyn base1(<sym package>);
    goto L2(r5);
  L81():
    c10 = `as.logical`(r65);
    if c10 then L82() else L19();
  L89():
    popenv;
    return r74;
  D3():
    deopt 10 [r4];
  L3():
    goto L4();
  L4():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L19():
    goto L18();
  L29():
    goto L1(r4);
  L32():
    packageSlot = ldf packageSlot;
    check L33() else D4();
  L82():
    __3 = ldf `@` in base;
    r66 = dyn __3(<sym class>, <sym className>);
    st className = r66;
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L83() else L84();
  D4():
    deopt 16 [];
  L5(r12):
    c3 = `as.logical`(r12);
    if c3 then L39() else L6();
  L20(r68):
    c11 = `as.logical`(r68);
    if c11 then L85() else L21();
  L33():
    p1 = prom<V +>{
      class5 = ld class;
      class6 = force? class5;
      checkMissing(class6);
      return class6;
    };
    r9 = dyn packageSlot(p1);
    check L34() else D5();
  L36():
    package1 = ld package;
    check L38() else D6();
  L37():
    r11 = dyn base2(<sym package>);
    goto L5(r11);
  L83():
    missing1 = ldf missing in base;
    r69 = dyn missing1(<sym package>);
    goto L20(r69);
  L84():
    r67 = dyn base5(<sym package>);
    goto L20(r67);
  D5():
    deopt 18 [r9];
  D6():
    deopt 23 [package1];
  L6():
    goto L17(NULL);
  L17(r61):
    goto L18();
  L21():
    goto L22(NULL);
  L22(r71):
    goto L18();
  L34():
    st package = r9;
    goto L4();
  L38():
    package2 = force? package1;
    checkMissing(package2);
    c2 = `==`(package2, NULL);
    goto L5(c2);
  L39():
    exists = ldf exists;
    check L40() else D7();
  L85():
    __4 = ldf `@` in base;
    r70 = dyn __4(<sym class>, <sym package>);
    st package = r70;
    goto L22(r70);
  D7():
    deopt 27 [];
  L40():
    p2 = prom<V +>{
      className = ld className;
      className1 = force? className;
      checkMissing(className1);
      return className1;
    };
    p3 = prom<V +>{
      _classTable = ld `.classTable`;
      _classTable1 = force? _classTable;
      checkMissing(_classTable1);
      return _classTable1;
    };
    r15 = dyn exists[, envir, inherits](p2, p3, FALSE);
    check L41() else D8();
  D8():
    deopt 33 [r15];
  L41():
    c4 = `as.logical`(r15);
    if c4 then L42() else L7();
  L7():
    findClass = ldf findClass;
    check L46() else D11();
  L8():
    is1 = ldf is;
    check L58() else D16();
  L42():
    get = ldf get;
    check L43() else D9();
  D9():
    deopt 35 [];
  D11():
    deopt 42 [];
  D16():
    deopt 64 [];
  L43():
    p4 = prom<V +>{
      className2 = ld className;
      className3 = force? className2;
      checkMissing(className3);
      return className3;
    };
    p5 = prom<V +>{
      _classTable2 = ld `.classTable`;
      _classTable3 = force? _classTable2;
      checkMissing(_classTable3);
      return _classTable3;
    };
    r18 = dyn get[, envir](p4, p5);
    check L44() else D10();
  L46():
    p6 = prom<V +>{
      className4 = ld className;
      className5 = force? className4;
      checkMissing(className5);
      return className5;
    };
    p8 = prom<V +>{
      topenv = ldf topenv;
      p7 = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r21 = dyn parent_frame();
        return r21;
      };
      r23 = dyn topenv(p7);
      return r23;
    };
    r25 = dyn findClass(p6, p8);
    check L47() else D12();
  L58():
    p9 = prom<V +>{
      classDef6 = ld classDef;
      classDef7 = force? classDef6;
      checkMissing(classDef7);
      return classDef7;
    };
    r32 = dyn is1(p9, "classRepresentation");
    check L59() else D17();
  D10():
    deopt 39 [r18];
  D12():
    deopt 45 [r25];
  D17():
    deopt 67 [r32];
  L44():
    st classDef = r18;
    goto L8();
  L47():
    st classDef = r25;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L59():
    c7 = `as.logical`(r32);
    if c7 then L60() else L12();
  L9(r27):
    r29 = `==`(r27, 1.0);
    c5 = `as.logical`(r29);
    if c5 then L52() else L10();
  L12():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L62() else L63();
  L13(r34):
    goto L17(r34);
  L48():
    classDef = ld classDef;
    check L50() else D13();
  L49():
    r26 = dyn base3(<sym classDef>);
    goto L9(r26);
  L60():
    __1 = ldf `@` in base;
    r33 = dyn __1(<sym classDef>, <sym package>);
    st package = r33;
    goto L13(r33);
  D13():
    deopt 49 [classDef];
  L10():
    goto L8();
  L14(r36):
    r38 = `>`(r36, 1);
    c8 = `as.logical`(r38);
    if c8 then L66() else L15();
  L50():
    classDef1 = force? classDef;
    checkMissing(classDef1);
    length = ldf length in base;
    r28 = dyn length(classDef1);
    check L51() else D14();
  L52():
    classDef2 = ld classDef;
    check L53() else D15();
  L62():
    classDef8 = ld classDef;
    check L64() else D18();
  L63():
    r35 = dyn base4(<sym classDef>);
    goto L14(r35);
  D14():
    deopt 52 [r28];
  D15():
    deopt 55 [classDef2];
  D18():
    deopt 73 [classDef8];
  L15():
    stop = ldf stop;
    check L76() else D25();
  L51():
    goto L9(r28);
  L53():
    classDef3 = force? classDef2;
    checkMissing(classDef3);
    c6 = `is.object`(classDef3);
    if c6 then L54() else L55(classDef3);
  L64():
    classDef9 = force? classDef8;
    checkMissing(classDef9);
    length1 = ldf length in base;
    r37 = dyn length1(classDef9);
    check L65() else D19();
  L66():
    sapply = ldf sapply;
    check L67() else D20();
  D19():
    deopt 76 [r37];
  D20():
    deopt 80 [];
  D25():
    deopt 98 [];
  L11(dx1):
    st classDef = dx1;
    goto L8();
  L54():
    dr = tryDispatchBuiltin.1("[[", classDef3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L56() else L55(dr);
  L55(classDef5):
    __ = ldf `[[` in base;
    r30 = dyn __(classDef5, 1);
    goto L11(r30);
  L65():
    goto L14(r37);
  L67():
    p10 = prom<V +>{
      classDef10 = ld classDef;
      classDef11 = force? classDef10;
      checkMissing(classDef11);
      return classDef11;
    };
    p11 = prom<V +>{
      r40 = clos inner3618118985;
      return r40;
    };
    r42 = dyn sapply(p10, p11);
    check L68() else D21();
  L76():
    p20 = prom<V +>{
      gettextf1 = ldf gettextf;
      p19 = prom<V +>{
        dQuote1 = ldf dQuote;
        p18 = prom<V +>{
          className8 = ld className;
          className9 = force? className8;
          checkMissing(className9);
          return className9;
        };
        r56 = dyn dQuote1(p18);
        return r56;
      };
      r58 = dyn gettextf1("no package name supplied and no class definition found for %s", p19);
      return r58;
    };
    r60 = dyn stop[, domain](p20, NA_LGL);
    check L77() else D26();
  D21():
    deopt 83 [r42];
  D26():
    deopt 102 [r60];
  L56():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L68():
    st pkgs = r42;
    warning = ldf warning;
    check L69() else D22();
  L77():
    goto L13(r60);
  D22():
    deopt 86 [];
  L69():
    p17 = prom<V +>{
      gettextf = ldf gettextf;
      p13 = prom<V +>{
        dQuote = ldf dQuote;
        p12 = prom<V +>{
          className6 = ld className;
          className7 = force? className6;
          checkMissing(className7);
          return className7;
        };
        r44 = dyn dQuote(p12);
        return r44;
      };
      p16 = prom<V +>{
        paste = ldf paste;
        p15 = prom<V +>{
          sQuote = ldf sQuote;
          p14 = prom<V +>{
            pkgs = ld pkgs;
            pkgs1 = force? pkgs;
            checkMissing(pkgs1);
            return pkgs1;
          };
          r47 = dyn sQuote(p14);
          return r47;
        };
        r49 = dyn paste[, collapse](p15, ", ");
        return r49;
      };
      r51 = dyn gettextf("multiple class definitions for %s from packages: %s; picking the first", p13, p16);
      return r51;
    };
    r53 = dyn warning[, domain](p17, NA_LGL);
    check L70() else D23();
  D23():
    deopt 90 [r53];
  L70():
    pkgs2 = ld pkgs;
    check L71() else D24();
  D24():
    deopt 91 [pkgs2];
  L71():
    pkgs3 = force? pkgs2;
    checkMissing(pkgs3);
    c9 = `is.object`(pkgs3);
    if c9 then L72() else L73(pkgs3);
  L16(dx3):
    st package = dx3;
    goto L13(dx3);
  L72():
    dr2 = tryDispatchBuiltin.1("[[", pkgs3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L74() else L73(dr2);
  L73(pkgs5):
    __2 = ldf `[[` in base;
    r54 = dyn __2(pkgs5, 1);
    goto L16(r54);
  L74():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L16(dx2);
  }
}
fun inner3618118985(cl) {
  (reg cl:*) -+> V { var cl:*, reg __:cls, reg r:V |
    mkenv;
    st cl = cl;
    __ = ldf `@` in base;
    r = dyn __(<sym cl>, <sym package>);
    popenv;
    return r;
  }
}