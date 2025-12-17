fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2023598292;
    st classLabel = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2023598292(Class) {
  (reg Class:*) -+> V { var Class:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg Class1:*, reg Class2:V, reg c:L, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg c6:L, reg r3:V, reg Class3:*, reg Class4:V, reg length:cls, reg r4:V, reg c7:L, reg c8:V, reg c10:L, reg Class5:*, reg Class6:V, reg c11:L, reg Class8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg Class9:*, reg Class10:V, reg attr:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg packageName:*, reg packageName1:V, reg c12:V, reg c13:L, reg r11:V, reg is:cls, reg Class11:*, reg Class12:V, reg p:p(V +), reg r14:V, reg c14:L, reg __1:cls, reg r15:V, reg __2:cls, reg r16:V, reg stop:cls, reg gettextf:cls, reg classLabel:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg Class13:*, reg Class14:V, reg class:cls, reg r19:V, reg p1:p(V +), reg r21:V, reg p2:p(V +), reg r23:V, reg p3:p(V +), reg r25:V, reg _showPackage:cls, reg className:*, reg className1:V, reg p4:p(V +), reg r27:V, reg c15:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg packageName2:*, reg packageName3:V, reg identical:cls, reg r30:V, reg c16:L, reg r31:V, reg paste0:cls, reg packageName4:*, reg packageName5:V, reg p5:p(V +), reg r33:V, reg paste1:cls, reg className2:*, reg className3:V, reg p6:p(V +), reg packageName6:*, reg packageName7:V, reg p7:p(V +), reg r36:V, reg paste2:cls, reg className4:*, reg className5:V, reg p8:p(V +), reg r38:V |
    mkenv;
    st Class = Class;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L18() else L1(c1);
  L15():
    Class1 = ld Class;
    check L17() else D0();
  L16():
    r = dyn base(<sym Class>);
    goto L0(r);
  D0():
    deopt 1 [Class1];
  L1(c3):
    c10 = `as.logical`(c3);
    if c10 then L24() else L3();
  L17():
    Class2 = force? Class1;
    checkMissing(Class2);
    c = `is.character`(Class2);
    goto L0(c);
  L18():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L2(c6, r3):
    c7 = `as.logical`(r3);
    c8 = `&&`(c6, c7);
    goto L1(c8);
  L3():
    is = ldf is;
    check L39() else D7();
  L9():
    _showPackage = ldf `.showPackage`;
    check L45() else D11();
  L19():
    Class3 = ld Class;
    check L21() else D1();
  L20():
    r2 = dyn base1(<sym Class>);
    goto L2(c1, r2);
  L24():
    Class5 = ld Class;
    check L25() else D3();
  D1():
    deopt 6 [c1, Class3];
  D3():
    deopt 11 [Class5];
  D7():
    deopt 35 [];
  D11():
    deopt 52 [];
  L21():
    Class4 = force? Class3;
    checkMissing(Class4);
    length = ldf length in base;
    r4 = dyn length(Class4);
    check L22() else D2();
  L25():
    Class6 = force? Class5;
    checkMissing(Class6);
    c11 = `is.object`(Class6);
    if c11 then L26() else L27(Class6);
  L39():
    p = prom<V +>{
      Class11 = ld Class;
      Class12 = force? Class11;
      checkMissing(Class12);
      return Class12;
    };
    r14 = dyn is(p, "classRepresentation");
    check L40() else D8();
  L45():
    p4 = prom<V +>{
      className = ld className;
      className1 = force? className;
      checkMissing(className1);
      return className1;
    };
    r27 = dyn _showPackage(p4);
    check L46() else D12();
  D2():
    deopt 9 [c1, r4];
  D8():
    deopt 38 [r14];
  D12():
    deopt 54 [r27];
  L4(dx1):
    st className = dx1;
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L22():
    goto L2(c1, r4);
  L26():
    dr = tryDispatchBuiltin.1("[[", Class6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27(dr);
  L27(Class8):
    __ = ldf `[[` in base;
    r5 = dyn __(Class8, 1);
    goto L4(r5);
  L40():
    c14 = `as.logical`(r14);
    if c14 then L41() else L10();
  L46():
    c15 = `as.logical`(r27);
    if c15 then L47() else L11();
  L5(r7):
    st packageName = r7;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L10():
    stop = ldf stop;
    check L43() else D9();
  L11():
    paste2 = ldf paste0;
    check L59() else D19();
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L29():
    Class9 = ld Class;
    check L31() else D4();
  L30():
    r6 = dyn base2(<sym Class>, "package");
    goto L5(r6);
  L41():
    __1 = ldf `@` in base;
    r15 = dyn __1(<sym Class>, <sym className>);
    st className = r15;
    __2 = ldf `@` in base;
    r16 = dyn __2(<sym Class>, <sym package>);
    st packageName = r16;
    goto L9();
  L47():
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  D4():
    deopt 19 [Class9];
  D9():
    deopt 46 [];
  D19():
    deopt 86 [];
  L6(r10):
    c13 = `as.logical`(r10);
    if c13 then L36() else L7();
  L12(r29):
    c16 = `as.logical`(r29);
    if c16 then L52() else L13();
  L31():
    Class10 = force? Class9;
    checkMissing(Class10);
    attr = ldf attr in base;
    r8 = dyn attr(Class10, "package");
    check L32() else D5();
  L33():
    packageName = ld packageName;
    check L35() else D6();
  L34():
    r9 = dyn base3(<sym packageName>);
    goto L6(r9);
  L43():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        classLabel = ldf classLabel;
        p1 = prom<V +>{
          sym4 = ldf class;
          base4 = ldf class in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L1() else L2();
        L0(r18):
          return r18;
        L1():
          Class13 = ld Class;
          Class14 = force? Class13;
          checkMissing(Class14);
          class = ldf class in base;
          r19 = dyn class(Class14);
          goto L0(r19);
        L2():
          r17 = dyn base4(<sym Class>);
          goto L0(r17);
        };
        r21 = dyn classLabel(p1);
        return r21;
      };
      r23 = dyn gettextf("invalid call to 'classLabel': expected a name or a class definition, got an object of class %s", p2);
      return r23;
    };
    r25 = dyn stop[, domain](p3, NA_LGL);
    check L44() else D10();
  L48():
    packageName2 = ld packageName;
    check L50() else D13();
  L49():
    r28 = dyn base5(<sym packageName>, ".GlobalEnv");
    goto L12(r28);
  L59():
    p8 = prom<V +>{
      className4 = ld className;
      className5 = force? className4;
      checkMissing(className5);
      return className5;
    };
    r38 = dyn paste2("\"", p8, "\"");
    check L60() else D20();
  D5():
    deopt 23 [r8];
  D6():
    deopt 26 [packageName];
  D10():
    deopt 50 [r25];
  D13():
    deopt 57 [packageName2];
  D20():
    deopt 90 [r38];
  L7():
    goto L8(NULL);
  L8(r11):
    goto L9();
  L13():
    paste0 = ldf paste0;
    check L54() else D15();
  L14(r31):
    st packageName = r31;
    paste1 = ldf paste0;
    check L56() else D17();
  L32():
    goto L5(r8);
  L35():
    packageName1 = force? packageName;
    checkMissing(packageName1);
    c12 = `==`(packageName1, NULL);
    goto L6(c12);
  L36():
    st packageName = "";
    goto L8("");
  L44():
    goto L9();
  L50():
    packageName3 = force? packageName2;
    checkMissing(packageName3);
    identical = ldf identical in base;
    r30 = dyn identical(packageName3, ".GlobalEnv", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L51() else D14();
  L52():
    goto L14(" (from the global environment)");
  L60():
    popenv;
    return r38;
  D14():
    deopt 68 [r30];
  D15():
    deopt 72 [];
  D17():
    deopt 79 [];
  L51():
    goto L12(r30);
  L54():
    p5 = prom<V +>{
      packageName4 = ld packageName;
      packageName5 = force? packageName4;
      checkMissing(packageName5);
      return packageName5;
    };
    r33 = dyn paste0(" (from package \"", p5, "\")");
    check L55() else D16();
  L56():
    p6 = prom<V +>{
      className2 = ld className;
      className3 = force? className2;
      checkMissing(className3);
      return className3;
    };
    p7 = prom<V +>{
      packageName6 = ld packageName;
      packageName7 = force? packageName6;
      checkMissing(packageName7);
      return packageName7;
    };
    r36 = dyn paste1("\"", p6, "\"", p7);
    check L57() else D18();
  D16():
    deopt 76 [r33];
  D18():
    deopt 84 [r36];
  L55():
    goto L14(r33);
  L57():
    popenv;
    return r36;
  }
}