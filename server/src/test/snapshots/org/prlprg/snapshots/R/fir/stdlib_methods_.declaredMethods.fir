fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner815072961;
    st `.declaredMethods` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner815072961(method) {
  (reg method:*) -+> V { var method:*, reg character:cls, reg r:V, reg _hasCodeTools:cls, reg r1:V, reg r2:V, reg c:L, reg methods:*, reg methods1:V, reg r5:cls, reg __:cls, reg r6:V, reg r7:cls, reg r8:cls, reg p:p(V +), reg r10:cls, reg p1:p(V +), reg r12:V, reg __1:cls, reg r13:V, reg r14:cls, reg body:cls, reg method1:*, reg method2:V, reg p2:p(V +), reg r16:V, reg p3:p(V +), reg walker:*, reg walker1:V, reg p4:p(V +), reg r19:V, reg unique:cls, reg methods2:*, reg methods3:V, reg p5:p(V +), reg r21:V |
    mkenv;
    st method = method;
    character = ldf character;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r = dyn character();
    check L3() else D1();
  D1():
    deopt 2 [r];
  L3():
    st methods = r;
    _hasCodeTools = ldf `.hasCodeTools`;
    check L4() else D2();
  D2():
    deopt 5 [];
  L4():
    r1 = dyn _hasCodeTools();
    check L5() else D3();
  D3():
    deopt 6 [r1];
  L5():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L6() else L0();
  L0():
    r5 = clos inner1427960478;
    st `.theseMethods` = r5;
    __ = ldf `::`;
    check L10() else D5();
  L6():
    methods = ld methods;
    check L7() else D4();
  D4():
    deopt 8 [methods];
  D5():
    deopt 17 [];
  L7():
    methods1 = force? methods;
    checkMissing(methods1);
    popenv;
    return methods1;
  L10():
    r6 = dyn __("codetools", "makeCodeWalker");
    check L11() else D6();
  D6():
    deopt 20 [r6];
  L11():
    checkFun.0(r6);
    r7 = r6 as cls;
    p = prom<V +>{
      r8 = clos inner1633745581;
      return r8;
    };
    p1 = prom<V +>{
      r10 = clos inner1427960478;
      return r10;
    };
    r12 = dyn r7[handler, leaf](p, p1);
    check L12() else D7();
  D7():
    deopt 26 [r12];
  L12():
    st walker = r12;
    __1 = ldf `::`;
    check L13() else D8();
  D8():
    deopt 29 [];
  L13():
    r13 = dyn __1("codetools", "walkCode");
    check L14() else D9();
  D9():
    deopt 32 [r13];
  L14():
    checkFun.0(r13);
    r14 = r13 as cls;
    p3 = prom<V +>{
      body = ldf body;
      p2 = prom<V +>{
        method1 = ld method;
        method2 = force? method1;
        checkMissing(method2);
        return method2;
      };
      r16 = dyn body(p2);
      return r16;
    };
    p4 = prom<V +>{
      walker = ld walker;
      walker1 = force? walker;
      checkMissing(walker1);
      return walker1;
    };
    r19 = dyn r14(p3, p4);
    check L15() else D10();
  D10():
    deopt 36 [r19];
  L15():
    unique = ldf unique;
    check L16() else D11();
  D11():
    deopt 38 [];
  L16():
    p5 = prom<V +>{
      methods2 = ld methods;
      methods3 = force? methods2;
      checkMissing(methods3);
      return methods3;
    };
    r21 = dyn unique(p5);
    check L17() else D12();
  D12():
    deopt 40 [r21];
  L17():
    popenv;
    return r21;
  }
}
fun inner1427960478(e, w) {
  (reg e:*, reg w:*) -+> V { var e:*, var w:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg sapply:cls, reg as_list:cls, reg e3:*, reg e4:V, reg p:p(V +), reg r6:V, reg c1:L, reg r8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg p1:p(V +), reg r11:cls, reg p2:p(V +), reg r13:V |
    mkenv;
    st e = e;
    st w = w;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    r3 = `<`(r1, 2.0);
    c = `as.logical`(r3);
    if c then L6() else L1();
  L2():
    e1 = ld e;
    check L4() else D0();
  L3():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1():
    sapply = ldf sapply;
    check L10() else D4();
  L4():
    e2 = force? e1;
    checkMissing(e2);
    length = ldf length in base;
    r2 = dyn length(e2);
    check L5() else D1();
  L6():
    character = ldf character;
    check L7() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 12 [];
  L5():
    goto L0(r2);
  L7():
    r4 = dyn character();
    check L8() else D3();
  L10():
    p1 = prom<V +>{
      as_list = ldf `as.list`;
      p = prom<V +>{
        e3 = ld e;
        e4 = force? e3;
        checkMissing(e4);
        return e4;
      };
      r6 = dyn as_list(p);
      c1 = `is.object`(r6);
      if c1 then L1() else L2(r6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r8):
      __ = ldf `[` in base;
      r9 = dyn __(r8, -1.0);
      goto L0(r9);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      r11 = clos inner2203017188;
      return r11;
    };
    r13 = dyn sapply(p1, p2);
    check L11() else D5();
  D3():
    deopt 10 [r4];
  D5():
    deopt 15 [r13];
  L8():
    popenv;
    return r4;
  L11():
    popenv;
    return r13;
  }
}
fun inner2203017188(what) {
  (reg what:*) -+> V { var what:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg methods:*, reg methods1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg what1:*, reg what2:V, reg c:L, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r4:V, reg r5:V, reg what3:*, reg what4:V, reg as_character:cls, reg r6:V, reg r7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg what5:*, reg what6:V, reg c2:L, reg c3:L, reg what7:*, reg what8:V, reg character:cls, reg r10:V, reg c4:cls, reg r11:V |
    mkenv;
    st what = what;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    sst methods = r1;
    invisible.0();
    popenv;
    return r1;
  L7():
    methods = ld methods;
    check L9() else D0();
  L8():
    r = dyn base(<sym methods>, <lang if(is.symbol(what), as.character(what), if(is.character(what), what, character()))>);
    goto L0(r);
  D0():
    deopt 2 [methods];
  L9():
    methods1 = force? methods;
    checkMissing(methods1);
    sym1 = ldf `is.symbol`;
    base1 = ldf `is.symbol` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L1(r3):
    c1 = `as.logical`(r3);
    if c1 then L13() else L2();
  L10():
    what1 = ld what;
    check L12() else D1();
  L11():
    r2 = dyn base1(<sym what>);
    goto L1(r2);
  D1():
    deopt 5 [what1];
  L2():
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L4(r7):
    c4 = ldf c in base;
    r11 = dyn c4(methods1, r7);
    check L27() else D8();
  L12():
    what2 = force? what1;
    checkMissing(what2);
    c = `is.symbol`(what2);
    goto L1(c);
  L13():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  D8():
    deopt 24 [r11];
  L3(r5):
    goto L4(r5);
  L5(r9):
    c3 = `as.logical`(r9);
    if c3 then L22() else L6();
  L14():
    what3 = ld what;
    check L16() else D2();
  L15():
    r4 = dyn base2(<sym what>);
    goto L3(r4);
  L19():
    what5 = ld what;
    check L21() else D4();
  L20():
    r8 = dyn base3(<sym what>);
    goto L5(r8);
  L27():
    goto L0(r11);
  D2():
    deopt 10 [what3];
  D4():
    deopt 15 [what5];
  L6():
    character = ldf character;
    check L25() else D6();
  L16():
    what4 = force? what3;
    checkMissing(what4);
    as_character = ldf `as.character` in base;
    r6 = dyn as_character(what4);
    check L17() else D3();
  L21():
    what6 = force? what5;
    checkMissing(what6);
    c2 = `is.character`(what6);
    goto L5(c2);
  L22():
    what7 = ld what;
    check L23() else D5();
  D3():
    deopt 13 [r6];
  D5():
    deopt 18 [what7];
  D6():
    deopt 21 [];
  L17():
    goto L3(r6);
  L23():
    what8 = force? what7;
    checkMissing(what8);
    goto L4(what8);
  L25():
    r10 = dyn character();
    check L26() else D7();
  D7():
    deopt 22 [r10];
  L26():
    goto L4(r10);
  }
}
fun inner1633745581(v, w) {
  (reg v:*, reg w:*) -+> V { var v:*, var w:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg v1:*, reg v2:V, reg identical:cls, reg r2:V, reg c:L, reg _theseMethods:*, reg _theseMethods1:V |
    mkenv;
    st v = v;
    st w = w;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L2():
    v1 = ld v;
    check L4() else D0();
  L3():
    r = dyn base(<sym v>, "usingMethods");
    goto L0(r);
  D0():
    deopt 2 [v1];
  L1():
    popenv;
    return NULL;
  L4():
    v2 = force? v1;
    checkMissing(v2);
    identical = ldf identical in base;
    r2 = dyn identical(v2, "usingMethods", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L5() else D1();
  L6():
    _theseMethods = ld `.theseMethods`;
    check L7() else D2();
  D1():
    deopt 13 [r2];
  D2():
    deopt 14 [_theseMethods];
  L5():
    goto L0(r2);
  L7():
    _theseMethods1 = force? _theseMethods;
    checkMissing(_theseMethods1);
    popenv;
    return _theseMethods1;
  }
}