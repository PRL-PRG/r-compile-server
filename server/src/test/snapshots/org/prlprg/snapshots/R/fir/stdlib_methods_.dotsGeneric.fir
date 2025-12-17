fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1384373858;
    st `.dotsGeneric` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg is:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg getGeneric:cls, reg f3:*, reg f4:V, reg p1:p(V +), reg r4:V, reg is1:cls, reg f5:*, reg f6:V, reg p2:p(V +), reg r7:V, reg r8:V, reg c1:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg c6:L, reg r10:V, reg __:cls, reg r11:V, reg identical:cls, reg r12:V, reg r13:V, reg c7:L, reg c8:V, reg c10:L, reg stop:cls, reg r14:V, reg _standardGenericDots:*, reg _standardGenericDots1:V, reg eval:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg call:cls, reg r18:V, reg p3:p(V +), reg r20:V, reg l:*, reg body__:cls, reg r21:V, reg environment:cls, reg f7:*, reg f8:V, reg p4:p(V +), reg r23:V, reg l1:*, reg environment__:cls, reg r24:V, reg assign:cls, reg def:*, reg def1:V, reg p5:p(V +), reg environment1:cls, reg f9:*, reg f10:V, reg p6:p(V +), reg r27:V, reg p7:p(V +), reg r29:V, reg f11:*, reg f12:V |
    mkenv;
    st f = f;
    is = ldf is;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r1 = dyn is(p, "genericFunction");
    check L7() else D1();
  D1():
    deopt 4 [r1];
  L7():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L8() else L0();
  L0():
    goto L1();
  L1():
    is1 = ldf is;
    check L12() else D4();
  L8():
    getGeneric = ldf getGeneric;
    check L9() else D2();
  D2():
    deopt 7 [];
  D4():
    deopt 14 [];
  L9():
    p1 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    r4 = dyn getGeneric(p1);
    check L10() else D3();
  L12():
    p2 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    r7 = dyn is1(p2, "genericFunction");
    check L13() else D5();
  D3():
    deopt 9 [r4];
  D5():
    deopt 17 [r7];
  L10():
    st f = r4;
    goto L1();
  L13():
    r8 = `!`(r7);
    c1 = `as.logical`(r8);
    if c1 then L2(c1) else L14();
  L2(c2):
    c10 = `as.logical`(c2);
    if c10 then L19() else L4();
  L14():
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L3(c6, r10):
    r13 = `!`(r10);
    c7 = `as.logical`(r13);
    c8 = `||`(c6, c7);
    goto L2(c8);
  L4():
    goto L5();
  L5():
    _standardGenericDots = ld `.standardGenericDots`;
    check L23() else D9();
  L15():
    __ = ldf `@` in base;
    r11 = dyn __(<sym f>, <sym signature>);
    identical = ldf identical in base;
    r12 = dyn identical(r11, "...", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L17() else D6();
  L16():
    r9 = dyn base(<lang `@`(f, signature)>, "...");
    goto L3(c1, r9);
  L19():
    stop = ldf stop;
    check L20() else D7();
  D6():
    deopt 32 [c1, r12];
  D7():
    deopt 36 [];
  D9():
    deopt 41 [_standardGenericDots];
  L17():
    goto L3(c1, r12);
  L20():
    r14 = dyn stop("argument f must be a generic function with signature \"...\"");
    check L21() else D8();
  L23():
    _standardGenericDots1 = force? _standardGenericDots;
    checkMissing(_standardGenericDots1);
    st def = _standardGenericDots1;
    eval = ldf eval;
    check L24() else D10();
  D8():
    deopt 38 [r14];
  D10():
    deopt 45 [];
  L21():
    goto L5();
  L24():
    p3 = prom<V +>{
      sym1 = ldf call;
      base1 = ldf call in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      call = ldf call in base;
      r18 = dyn call("substitute", <lang body(def)>, <lang list(.dotsMethod=as.name(`@`(f, generic)))>);
      goto L0(r18);
    L2():
      r16 = dyn base1("substitute", <lang body(def)>, <lang list(.dotsMethod=as.name(`@`(f, generic)))>);
      goto L0(r16);
    };
    r20 = dyn eval(p3);
    check L25() else D11();
  D11():
    deopt 47 [r20];
  L25():
    l = ld def;
    body__ = ldf `body<-`;
    check L26() else D12();
  D12():
    deopt 49 [r20, l, r20];
  L26():
    r21 = dyn body__(l, NULL, r20);
    check L27() else D13();
  D13():
    deopt 51 [r20, r21];
  L27():
    st def = r21;
    environment = ldf environment;
    check L28() else D14();
  D14():
    deopt 54 [];
  L28():
    p4 = prom<V +>{
      f7 = ld f;
      f8 = force? f7;
      checkMissing(f8);
      return f8;
    };
    r23 = dyn environment(p4);
    check L29() else D15();
  D15():
    deopt 56 [r23];
  L29():
    l1 = ld def;
    environment__ = ldf `environment<-`;
    check L30() else D16();
  D16():
    deopt 58 [r23, l1, r23];
  L30():
    r24 = dyn environment__(l1, NULL, r23);
    check L31() else D17();
  D17():
    deopt 60 [r23, r24];
  L31():
    st def = r24;
    assign = ldf assign;
    check L32() else D18();
  D18():
    deopt 63 [];
  L32():
    p5 = prom<V +>{
      def = ld def;
      def1 = force? def;
      checkMissing(def1);
      return def1;
    };
    p7 = prom<V +>{
      environment1 = ldf environment;
      p6 = prom<V +>{
        f9 = ld f;
        f10 = force? f9;
        checkMissing(f10);
        return f10;
      };
      r27 = dyn environment1(p6);
      return r27;
    };
    r29 = dyn assign[, , envir]("standardGeneric", p5, p7);
    check L33() else D19();
  D19():
    deopt 68 [r29];
  L33():
    f11 = ld f;
    check L34() else D20();
  D20():
    deopt 69 [f11];
  L34():
    f12 = force? f11;
    checkMissing(f12);
    popenv;
    return f12;
  }
}