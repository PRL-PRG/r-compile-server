fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2023598292;
    st refClassFields = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2023598292(Class) {
  (reg Class:*) -+> V { var Class:*, reg getClass:cls, reg Class1:*, reg Class2:V, reg p:p(V +), reg r1:V, reg is:cls, reg ClassDef:*, reg ClassDef1:V, reg p1:p(V +), reg r3:V, reg c:L, reg __:cls, reg r4:V, reg stop:cls, reg gettextf:cls, reg __1:cls, reg r5:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg r9:V |
    mkenv;
    st Class = Class;
    getClass = ldf getClass;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    r1 = dyn getClass(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    st ClassDef = r1;
    is = ldf is;
    check L3() else D2();
  D2():
    deopt 6 [];
  L3():
    p1 = prom<V +>{
      ClassDef = ld ClassDef;
      ClassDef1 = force? ClassDef;
      checkMissing(ClassDef1);
      return ClassDef1;
    };
    r3 = dyn is(p1, "refClassRepresentation");
    check L4() else D3();
  D3():
    deopt 9 [r3];
  L4():
    c = `as.logical`(r3);
    if c then L5() else L0();
  L0():
    stop = ldf stop;
    check L7() else D4();
  L5():
    __ = ldf `@` in base;
    r4 = dyn __(<sym ClassDef>, <sym fieldClasses>);
    popenv;
    return r4;
  D4():
    deopt 13 [];
  L7():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        __1 = ldf `@` in base;
        r5 = dyn __1(<sym ClassDef>, <sym name>);
        return r5;
      };
      r7 = dyn gettextf("not a reference class: %s", p2);
      return r7;
    };
    r9 = dyn stop[, domain](p3, NA_LGL);
    check L8() else D5();
  D5():
    deopt 17 [r9];
  L8():
    popenv;
    return r9;
  }
}