fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2340105578;
    st metaNameUndo = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2340105578(strings, prefix, searchForm) {
  (reg strings:*, reg prefix:*, reg searchForm:*) -+> V { var strings:*, var prefix:*, var searchForm:*, reg searchForm_isMissing:L, reg searchForm_orDefault:*, reg methodsPackageMetaName:cls, reg prefix1:*, reg prefix2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg pattern:*, reg pattern1:V, reg nchar:cls, reg r4:V, reg substr:cls, reg strings1:*, reg strings2:V, reg p1:p(V +), reg n:*, reg n1:V, reg p2:p(V +), reg r7:V, reg pattern2:*, reg pattern3:V, reg r8:V, reg substring:cls, reg strings3:*, reg strings4:V, reg c:L, reg strings6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg matched:*, reg matched1:V, reg __:cls, reg r9:V, reg p3:p(V +), reg n2:*, reg n3:V, reg r11:V, reg p4:p(V +), reg r13:V, reg sub:cls, reg value:*, reg value1:V, reg p5:p(V +), reg r15:V, reg searchForm1:*, reg searchForm2:V, reg c1:L, reg grep:cls, reg value2:*, reg value3:V, reg p6:p(V +), reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg global:*, reg global1:V, reg length:cls, reg r20:V, reg c2:L, reg paste0:cls, reg pkg:*, reg pkg1:V, reg c3:L, reg pkg3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg global2:*, reg global3:V, reg r21:V, reg __1:cls, reg r22:V, reg p7:p(V +), reg r24:V, reg l:*, reg c4:L, reg r26:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg global4:*, reg global5:V, reg r29:V, reg ___:cls, reg r30:V, reg substring1:cls, reg pkg4:*, reg pkg5:V, reg c5:L, reg pkg7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg global6:*, reg global7:V, reg __2:cls, reg r31:V, reg p8:p(V +), reg r33:V, reg l3:*, reg c6:L, reg r35:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r37:V, reg dx9:V, reg global8:*, reg global9:V, reg ___1:cls, reg r38:V, reg r39:V, reg substring2:cls, reg pkg8:*, reg pkg9:V, reg p9:p(V +), reg r42:V, reg sub1:cls, reg value4:*, reg value5:V, reg p10:p(V +), reg r44:V, reg new:cls, reg value6:*, reg value7:V, reg p11:p(V +), reg pkg10:*, reg pkg11:V, reg p12:p(V +), reg r47:V |
    mkenv;
    st strings = strings;
    st prefix = prefix;
    searchForm_isMissing = missing.0(searchForm);
    if searchForm_isMissing then L0(FALSE) else L0(searchForm);
  L0(searchForm_orDefault):
    st searchForm = searchForm_orDefault;
    methodsPackageMetaName = ldf methodsPackageMetaName;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p = prom<V +>{
      prefix1 = ld prefix;
      prefix2 = force? prefix1;
      checkMissing(prefix2);
      return prefix2;
    };
    r1 = dyn methodsPackageMetaName(p, "");
    check L10() else D1();
  D1():
    deopt 4 [r1];
  L10():
    st pattern = r1;
    sym = ldf nchar;
    base = ldf nchar in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L1(r3):
    st n = r3;
    substr = ldf substr;
    check L15() else D4();
  L11():
    pattern = ld pattern;
    check L13() else D2();
  L12():
    r2 = dyn base(<sym pattern>, "c");
    goto L1(r2);
  D2():
    deopt 8 [pattern];
  D4():
    deopt 17 [];
  L13():
    pattern1 = force? pattern;
    checkMissing(pattern1);
    nchar = ldf nchar in base;
    r4 = dyn nchar(pattern1, "c", FALSE, NA_LGL);
    check L14() else D3();
  L15():
    p1 = prom<V +>{
      strings1 = ld strings;
      strings2 = force? strings1;
      checkMissing(strings2);
      return strings2;
    };
    p2 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    r7 = dyn substr(p1, 1, p2);
    check L16() else D5();
  D3():
    deopt 14 [r4];
  D5():
    deopt 21 [r7];
  L14():
    goto L1(r4);
  L16():
    pattern2 = ld pattern;
    check L17() else D6();
  D6():
    deopt 21 [r7, pattern2];
  L17():
    pattern3 = force? pattern2;
    checkMissing(pattern3);
    r8 = `==`(r7, pattern3);
    st matched = r8;
    substring = ldf substring;
    check L18() else D7();
  D7():
    deopt 26 [];
  L18():
    p3 = prom<V +>{
      strings3 = ld strings;
      strings4 = force? strings3;
      checkMissing(strings4);
      c = `is.object`(strings4);
      if c then L1() else L2(strings4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", strings4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(strings6):
      matched = ld matched;
      matched1 = force? matched;
      __ = ldf `[` in base;
      r9 = dyn __(strings6, matched1);
      goto L0(r9);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p4 = prom<V +>{
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      r11 = `+`(n3, 1);
      return r11;
    };
    r13 = dyn substring(p3, p4);
    check L19() else D8();
  D8():
    deopt 29 [r13];
  L19():
    st value = r13;
    sub = ldf sub;
    check L20() else D9();
  D9():
    deopt 32 [];
  L20():
    p5 = prom<V +>{
      value = ld value;
      value1 = force? value;
      checkMissing(value1);
      return value1;
    };
    r15 = dyn sub("^[^:]*", "", p5);
    check L21() else D10();
  D10():
    deopt 36 [r15];
  L21():
    st pkg = r15;
    searchForm1 = ld searchForm;
    check L22() else D11();
  D11():
    deopt 38 [searchForm1];
  L22():
    searchForm2 = force? searchForm1;
    checkMissing(searchForm2);
    c1 = `as.logical`(searchForm2);
    if c1 then L23() else L2();
  L2():
    substring2 = ldf substring;
    check L45() else D22();
  L8():
    sub1 = ldf sub;
    check L47() else D24();
  L23():
    grep = ldf grep;
    check L24() else D12();
  D12():
    deopt 41 [];
  D22():
    deopt 76 [];
  D24():
    deopt 82 [];
  L24():
    p6 = prom<V +>{
      value2 = ld value;
      value3 = force? value2;
      checkMissing(value3);
      return value3;
    };
    r17 = dyn grep(".GlobalEnv", p6);
    check L25() else D13();
  L45():
    p9 = prom<V +>{
      pkg8 = ld pkg;
      pkg9 = force? pkg8;
      checkMissing(pkg9);
      return pkg9;
    };
    r42 = dyn substring2(p9, 2);
    check L46() else D23();
  L47():
    p10 = prom<V +>{
      value4 = ld value;
      value5 = force? value4;
      checkMissing(value5);
      return value5;
    };
    r44 = dyn sub1(":.*", "", p10);
    check L48() else D25();
  D13():
    deopt 44 [r17];
  D23():
    deopt 79 [r42];
  D25():
    deopt 86 [r44];
  L25():
    st global = r17;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L46():
    st pkg = r42;
    goto L8();
  L48():
    st value = r44;
    new = ldf new;
    check L49() else D26();
  D26():
    deopt 89 [];
  L3(r19):
    c2 = `as.logical`(r19);
    if c2 then L30() else L4();
  L26():
    global = ld global;
    check L28() else D14();
  L27():
    r18 = dyn base1(<sym global>);
    goto L3(r18);
  L49():
    p11 = prom<V +>{
      value6 = ld value;
      value7 = force? value6;
      checkMissing(value7);
      return value7;
    };
    p12 = prom<V +>{
      pkg10 = ld pkg;
      pkg11 = force? pkg10;
      checkMissing(pkg11);
      return pkg11;
    };
    r47 = dyn new[, , package]("ObjectsWithPackage", p11, p12);
    check L50() else D27();
  D14():
    deopt 48 [global];
  D27():
    deopt 94 [r47];
  L4():
    goto L7(NULL);
  L7(r39):
    goto L8();
  L28():
    global1 = force? global;
    checkMissing(global1);
    length = ldf length in base;
    r20 = dyn length(global1);
    check L29() else D15();
  L30():
    paste0 = ldf paste0;
    check L31() else D16();
  L50():
    popenv;
    return r47;
  D15():
    deopt 51 [r20];
  D16():
    deopt 53 [];
  L29():
    goto L3(r20);
  L31():
    p7 = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      c3 = `is.object`(pkg1);
      if c3 then L1() else L2(pkg1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", pkg1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(pkg3):
      global2 = ld global;
      global3 = force? global2;
      checkMissing(global3);
      r21 = `-`(<missing>, global3);
      __1 = ldf `[` in base;
      r22 = dyn __1(pkg3, r21);
      goto L0(r22);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r24 = dyn paste0("package", p7);
    check L32() else D17();
  D17():
    deopt 56 [r24];
  L32():
    l = ld pkg;
    c4 = `is.object`(l);
    if c4 then L33() else L34(r24, l);
  L5(dx5):
    st pkg = dx5;
    substring1 = ldf substring;
    check L37() else D19();
  L33():
    dr4 = tryDispatchBuiltin.0("[<-", l, r24);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L35() else L34(r24, dr4);
  L34(r26, l2):
    global4 = ld global;
    check L36() else D18();
  D18():
    deopt 58 [r26, l2, r24, global4];
  D19():
    deopt 64 [];
  L35():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(dx4);
  L36():
    global5 = force? global4;
    checkMissing(global5);
    r29 = `-`(<missing>, global5);
    ___ = ldf `[<-` in base;
    r30 = dyn ___(l2, r24, r29);
    goto L5(r30);
  L37():
    p8 = prom<V +>{
      pkg4 = ld pkg;
      pkg5 = force? pkg4;
      checkMissing(pkg5);
      c5 = `is.object`(pkg5);
      if c5 then L1() else L2(pkg5);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", pkg5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(pkg7):
      global6 = ld global;
      global7 = force? global6;
      __2 = ldf `[` in base;
      r31 = dyn __2(pkg7, global7);
      goto L0(r31);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r33 = dyn substring1(p8, 2);
    check L38() else D20();
  D20():
    deopt 67 [r33];
  L38():
    l3 = ld pkg;
    c6 = `is.object`(l3);
    if c6 then L39() else L40(r33, l3);
  L6(r37, dx9):
    st pkg = dx9;
    goto L7(r37);
  L39():
    dr8 = tryDispatchBuiltin.0("[<-", l3, r33);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L41() else L40(r33, dr8);
  L40(r35, l5):
    global8 = ld global;
    check L42() else D21();
  D21():
    deopt 69 [r35, l5, r33, global8];
  L41():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L6(r33, dx8);
  L42():
    global9 = force? global8;
    ___1 = ldf `[<-` in base;
    r38 = dyn ___1(l5, r33, global9);
    goto L6(r35, r38);
  }
}