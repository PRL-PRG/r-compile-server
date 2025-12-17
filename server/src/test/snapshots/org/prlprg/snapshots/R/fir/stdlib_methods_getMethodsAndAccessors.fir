fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2023598292;
    st getMethodsAndAccessors = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2023598292(Class) {
  (reg Class:*) -+> V { var Class:*, reg getClass:cls, reg Class1:*, reg Class2:V, reg p:p(V +), reg r1:V, reg is:cls, reg def:*, reg def1:V, reg p1:p(V +), reg r3:V, reg r4:V, reg c:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg __:cls, reg r5:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg r11:V, reg __1:cls, reg r13:V, reg vapply:cls, reg ff:*, reg ff1:V, reg p5:p(V +), reg r15:cls, reg p6:p(V +), reg r17:V, reg sym:cls, reg base:cls, reg guard:L, reg r18:V, reg r19:V, reg as_list:cls, reg __2:cls, reg r20:V, reg p7:p(V +), reg r22:V, reg as_list1:cls, reg ff2:*, reg ff3:V, reg p8:p(V +), reg r24:V, reg c1:L, reg r26:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg accs:*, reg accs1:V, reg __3:cls, reg r27:V, reg c2:cls, reg r28:V |
    mkenv;
    st Class = Class;
    getClass = ldf getClass;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    r1 = dyn getClass(p);
    check L5() else D1();
  D1():
    deopt 3 [r1];
  L5():
    st def = r1;
    is = ldf is;
    check L6() else D2();
  D2():
    deopt 6 [];
  L6():
    p1 = prom<V +>{
      def = ld def;
      def1 = force? def;
      checkMissing(def1);
      return def1;
    };
    r3 = dyn is(p1, "refClassRepresentation");
    check L7() else D3();
  D3():
    deopt 9 [r3];
  L7():
    r4 = `!`(r3);
    c = `as.logical`(r4);
    if c then L8() else L0();
  L0():
    goto L1();
  L1():
    __1 = ldf `@` in base;
    r13 = dyn __1(<sym def>, <sym fieldPrototypes>);
    st ff = r13;
    vapply = ldf vapply;
    check L12() else D6();
  L8():
    stop = ldf stop;
    check L9() else D4();
  D4():
    deopt 12 [];
  D6():
    deopt 21 [];
  L9():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        dQuote = ldf dQuote;
        p2 = prom<V +>{
          __ = ldf `@` in base;
          r5 = dyn __(<sym def>, <sym className>);
          return r5;
        };
        r7 = dyn dQuote(p2);
        return r7;
      };
      r9 = dyn gettextf("%s is not a reference class", p3);
      return r9;
    };
    r11 = dyn stop(p4);
    check L10() else D5();
  L12():
    p5 = prom<V +>{
      ff = ld ff;
      ff1 = force? ff;
      checkMissing(ff1);
      return ff1;
    };
    p6 = prom<V +>{
      r15 = clos inner2203017188;
      return r15;
    };
    r17 = dyn vapply(p5, p6, NA_LGL);
    check L13() else D7();
  D5():
    deopt 14 [r11];
  D7():
    deopt 25 [r17];
  L10():
    goto L1();
  L13():
    st accs = r17;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L2(r19):
    popenv;
    return r19;
  L14():
    as_list = ldf `as.list`;
    check L16() else D8();
  L15():
    r18 = dyn base(<lang as.list(`@`(def, refMethods))>, <lang `[`(as.list(ff), accs)>);
    goto L2(r18);
  D8():
    deopt 30 [];
  L16():
    p7 = prom<V +>{
      __2 = ldf `@` in base;
      r20 = dyn __2(<sym def>, <sym refMethods>);
      return r20;
    };
    r22 = dyn as_list(p7);
    check L17() else D9();
  D9():
    deopt 32 [r22];
  L17():
    as_list1 = ldf `as.list`;
    check L18() else D10();
  D10():
    deopt 34 [];
  L18():
    p8 = prom<V +>{
      ff2 = ld ff;
      ff3 = force? ff2;
      checkMissing(ff3);
      return ff3;
    };
    r24 = dyn as_list1(p8);
    check L19() else D11();
  D11():
    deopt 36 [r24];
  L19():
    c1 = `is.object`(r24);
    if c1 then L20() else L21(r24);
  L3(dx1):
    c2 = ldf c in base;
    r28 = dyn c2(r22, dx1);
    check L24() else D13();
  L20():
    dr = tryDispatchBuiltin.1("[", r24);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(r26):
    accs = ld accs;
    check L23() else D12();
  D12():
    deopt 37 [r26, accs];
  D13():
    deopt 41 [r28];
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L23():
    accs1 = force? accs;
    __3 = ldf `[` in base;
    r27 = dyn __3(r26, accs1);
    goto L3(r27);
  L24():
    goto L2(r28);
  }
}
fun inner2203017188(what) {
  (reg what:*) -+> V { var what:*, reg is:cls, reg what1:*, reg what2:V, reg p:p(V +), reg r1:V, reg c:L, reg c2:V, reg is1:cls, reg what3:*, reg what4:V, reg p1:p(V +), reg r3:V, reg r4:V, reg c3:L, reg c4:V |
    mkenv;
    st what = what;
    is = ldf is;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      return what2;
    };
    r1 = dyn is(p, "activeBindingFunction");
    check L2() else D1();
  D1():
    deopt 4 [r1];
  L2():
    c = `as.logical`(r1);
    if c then L3() else L0(c);
  L0(c2):
    popenv;
    return c2;
  L3():
    is1 = ldf is;
    check L4() else D2();
  D2():
    deopt 6 [c];
  L4():
    p1 = prom<V +>{
      what3 = ld what;
      what4 = force? what3;
      checkMissing(what4);
      return what4;
    };
    r3 = dyn is1(p1, "defaultBindingFunction");
    check L5() else D3();
  D3():
    deopt 9 [c, r3];
  L5():
    r4 = `!`(r3);
    c3 = `as.logical`(r4);
    c4 = `&&`(c, c3);
    goto L0(c4);
  }
}