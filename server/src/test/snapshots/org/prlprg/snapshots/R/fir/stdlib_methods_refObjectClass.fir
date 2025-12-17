fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4102710431;
    st refObjectClass = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4102710431(object) {
  (reg object:*) -+> V { var object:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg class:cls, reg r2:V, reg getClassDef:cls, reg Class:*, reg Class1:V, reg p:p(V +), reg r4:V, reg is:cls, reg classDef:*, reg classDef1:V, reg p1:p(V +), reg r6:V, reg c:L, reg classDef2:*, reg classDef3:V, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg Class2:*, reg Class3:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V |
    mkenv;
    st object = object;
    sym = ldf class;
    base = ldf class in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st Class = r1;
    getClassDef = ldf getClassDef;
    check L6() else D2();
  L2():
    object1 = ld object;
    check L4() else D0();
  L3():
    r = dyn base(<sym object>);
    goto L0(r);
  D0():
    deopt 2 [object1];
  D2():
    deopt 8 [];
  L4():
    object2 = force? object1;
    checkMissing(object2);
    class = ldf class in base;
    r2 = dyn class(object2);
    check L5() else D1();
  L6():
    p = prom<V +>{
      Class = ld Class;
      Class1 = force? Class;
      checkMissing(Class1);
      return Class1;
    };
    r4 = dyn getClassDef(p);
    check L7() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 10 [r4];
  L5():
    goto L0(r2);
  L7():
    st classDef = r4;
    is = ldf is;
    check L8() else D4();
  D4():
    deopt 13 [];
  L8():
    p1 = prom<V +>{
      classDef = ld classDef;
      classDef1 = force? classDef;
      checkMissing(classDef1);
      return classDef1;
    };
    r6 = dyn is(p1, "refClassRepresentation");
    check L9() else D5();
  D5():
    deopt 16 [r6];
  L9():
    c = `as.logical`(r6);
    if c then L10() else L1();
  L1():
    stop = ldf stop;
    check L13() else D7();
  L10():
    classDef2 = ld classDef;
    check L11() else D6();
  D6():
    deopt 17 [classDef2];
  D7():
    deopt 20 [];
  L11():
    classDef3 = force? classDef2;
    checkMissing(classDef3);
    popenv;
    return classDef3;
  L13():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        dQuote = ldf dQuote;
        p2 = prom<V +>{
          Class2 = ld Class;
          Class3 = force? Class2;
          checkMissing(Class3);
          return Class3;
        };
        r8 = dyn dQuote(p2);
        return r8;
      };
      r10 = dyn gettextf("%s is not a reference class", p3);
      return r10;
    };
    r12 = dyn stop[, domain](p4, NA_LGL);
    check L14() else D8();
  D8():
    deopt 24 [r12];
  L14():
    popenv;
    return r12;
  }
}