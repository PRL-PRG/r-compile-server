fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4102710431;
    st showClassMethod = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4102710431(object) {
  (reg object:*) -+> V { var object:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg class:cls, reg r2:V, reg cat:cls, reg r3:V, reg _identC:cls, reg cl:*, reg cl1:V, reg p:p(V +), reg r5:V, reg r6:V, reg c:L, reg cat1:cls, reg sprintf:cls, reg dQuote:cls, reg cl2:*, reg cl3:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V, reg cat2:cls, reg sprintf1:cls, reg __:cls, reg r14:V, reg p4:p(V +), reg r16:V, reg p5:p(V +), reg r18:V, reg is:cls, reg object3:*, reg object4:V, reg p6:p(V +), reg r20:V, reg c1:L, reg show:cls, reg __1:cls, reg r21:V, reg p7:p(V +), reg r23:V, reg show1:cls, reg as:cls, reg object5:*, reg object6:V, reg p8:p(V +), reg r26:V, reg p9:p(V +), reg r28:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r29:V, reg r30:V, reg __2:cls, reg r31:V, reg length:cls, reg r32:V, reg c2:L, reg _printNames:cls, reg __3:cls, reg r33:V, reg p10:p(V +), reg r35:V |
    mkenv;
    st object = object;
    sym = ldf class;
    base = ldf class in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    st cl = r1;
    cat = ldf cat;
    check L11() else D2();
  L7():
    object1 = ld object;
    check L9() else D0();
  L8():
    r = dyn base(<sym object>);
    goto L0(r);
  D0():
    deopt 2 [object1];
  D2():
    deopt 8 [];
  L9():
    object2 = force? object1;
    checkMissing(object2);
    class = ldf class in base;
    r2 = dyn class(object2);
    check L10() else D1();
  L11():
    r3 = dyn cat("Class method definition");
    check L12() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 10 [r3];
  L10():
    goto L0(r2);
  L12():
    _identC = ldf `.identC`;
    check L13() else D4();
  D4():
    deopt 12 [];
  L13():
    p = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    r5 = dyn _identC(p, "refMethodDef");
    check L14() else D5();
  D5():
    deopt 15 [r5];
  L14():
    r6 = `!`(r5);
    c = `as.logical`(r6);
    if c then L15() else L1();
  L1():
    goto L2();
  L2():
    cat2 = ldf cat;
    check L19() else D8();
  L15():
    cat1 = ldf cat;
    check L16() else D6();
  D6():
    deopt 18 [];
  D8():
    deopt 24 [];
  L16():
    p3 = prom<V +>{
      sprintf = ldf sprintf;
      p2 = prom<V +>{
        dQuote = ldf dQuote;
        p1 = prom<V +>{
          cl2 = ld cl;
          cl3 = force? cl2;
          checkMissing(cl3);
          return cl3;
        };
        r8 = dyn dQuote(p1);
        return r8;
      };
      r10 = dyn sprintf(" (class %s)", p2);
      return r10;
    };
    r12 = dyn cat1(p3);
    check L17() else D7();
  L19():
    p5 = prom<V +>{
      sprintf1 = ldf sprintf;
      p4 = prom<V +>{
        __ = ldf `@` in base;
        r14 = dyn __(<sym object>, <sym name>);
        return r14;
      };
      r16 = dyn sprintf1(" for method %s()\n", p4);
      return r16;
    };
    r18 = dyn cat2(p5);
    check L20() else D9();
  D7():
    deopt 20 [r12];
  D9():
    deopt 26 [r18];
  L17():
    goto L2();
  L20():
    is = ldf is;
    check L21() else D10();
  D10():
    deopt 28 [];
  L21():
    p6 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    r20 = dyn is(p6, "externalRefMethod");
    check L22() else D11();
  D11():
    deopt 31 [r20];
  L22():
    c1 = `as.logical`(r20);
    if c1 then L23() else L3();
  L3():
    show1 = ldf show;
    check L27() else D14();
  L4():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L23():
    show = ldf show;
    check L24() else D12();
  D12():
    deopt 33 [];
  D14():
    deopt 37 [];
  L5(r30):
    c2 = `as.logical`(r30);
    if c2 then L32() else L6();
  L24():
    p7 = prom<V +>{
      __1 = ldf `@` in base;
      r21 = dyn __1(<sym object>, <sym actual>);
      return r21;
    };
    r23 = dyn show(p7);
    check L25() else D13();
  L27():
    p9 = prom<V +>{
      as = ldf as;
      p8 = prom<V +>{
        object5 = ld object;
        object6 = force? object5;
        checkMissing(object6);
        return object6;
      };
      r26 = dyn as(p8, "function");
      return r26;
    };
    r28 = dyn show1(p9);
    check L28() else D15();
  L29():
    __2 = ldf `@` in base;
    r31 = dyn __2(<sym object>, <sym mayCall>);
    length = ldf length in base;
    r32 = dyn length(r31);
    check L31() else D16();
  L30():
    r29 = dyn base1(<lang `@`(object, mayCall)>);
    goto L5(r29);
  D13():
    deopt 35 [r23];
  D15():
    deopt 39 [r28];
  D16():
    deopt 45 [r32];
  L6():
    invisible.0();
    popenv;
    return NULL;
  L25():
    goto L4();
  L28():
    goto L4();
  L31():
    goto L5(r32);
  L32():
    _printNames = ldf `.printNames`;
    check L33() else D17();
  D17():
    deopt 47 [];
  L33():
    p10 = prom<V +>{
      __3 = ldf `@` in base;
      r33 = dyn __3(<sym object>, <sym mayCall>);
      return r33;
    };
    r35 = dyn _printNames("\nMethods used: ", p10);
    check L34() else D18();
  D18():
    deopt 50 [r35];
  L34():
    popenv;
    return r35;
  }
}