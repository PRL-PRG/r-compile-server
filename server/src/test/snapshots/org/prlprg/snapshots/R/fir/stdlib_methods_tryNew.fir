fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4134983291;
    st tryNew = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4134983291(Class, where) {
  (reg Class:*, reg where:*) -+> V { var Class:*, var where:*, reg getClassDef:cls, reg Class1:*, reg Class2:V, reg p:p(V +), reg where1:*, reg where2:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg ClassDef:*, reg ClassDef1:V, reg c:V, reg c1:L, reg isTRUE:cls, reg __:cls, reg r5:V, reg p2:p(V +), reg r7:V, reg c2:L, reg __1:cls, reg r8:V, reg tryCatch:cls, reg new:cls, reg ClassDef2:*, reg ClassDef3:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:cls, reg p5:p(V +), reg r14:V |
    mkenv;
    st Class = Class;
    st where = where;
    getClassDef = ldf getClassDef;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    p1 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r2 = dyn getClassDef(p, p1);
    check L4() else D1();
  D1():
    deopt 4 [r2];
  L4():
    st ClassDef = r2;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r4):
    c1 = `as.logical`(r4);
    if c1 then L8() else L1();
  L5():
    ClassDef = ld ClassDef;
    check L7() else D2();
  L6():
    r3 = dyn base(<sym ClassDef>);
    goto L0(r3);
  D2():
    deopt 7 [ClassDef];
  L1():
    isTRUE = ldf isTRUE;
    check L10() else D3();
  L7():
    ClassDef1 = force? ClassDef;
    checkMissing(ClassDef1);
    c = `==`(ClassDef1, NULL);
    goto L0(c);
  L8():
    popenv;
    return NULL;
  D3():
    deopt 13 [];
  L10():
    p2 = prom<V +>{
      __ = ldf `@` in base;
      r5 = dyn __(<sym ClassDef>, <sym virtual>);
      return r5;
    };
    r7 = dyn isTRUE(p2);
    check L11() else D4();
  D4():
    deopt 15 [r7];
  L11():
    c2 = `as.logical`(r7);
    if c2 then L12() else L2();
  L2():
    tryCatch = ldf tryCatch;
    check L14() else D5();
  L12():
    __1 = ldf `@` in base;
    r8 = dyn __1(<sym ClassDef>, <sym prototype>);
    popenv;
    return r8;
  D5():
    deopt 19 [];
  L14():
    p4 = prom<V +>{
      new = ldf new;
      p3 = prom<V +>{
        ClassDef2 = ld ClassDef;
        ClassDef3 = force? ClassDef2;
        checkMissing(ClassDef3);
        return ClassDef3;
      };
      r10 = dyn new(p3);
      return r10;
    };
    p5 = prom<V +>{
      r12 = clos inner3708401697;
      return r12;
    };
    r14 = dyn tryCatch[, error](p4, p5);
    check L15() else D6();
  D6():
    deopt 23 [r14];
  L15():
    popenv;
    return r14;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg __:cls, reg r:V, reg __1:cls, reg r1:V, reg l:*, reg class__:cls, reg r2:V, reg value:*, reg value1:V |
    mkenv;
    st e = e;
    __ = ldf `@` in base;
    r = dyn __(<sym ClassDef>, <sym prototype>);
    st value = r;
    __1 = ldf `@` in base;
    r1 = dyn __1(<sym ClassDef>, <sym className>);
    l = ld value;
    class__ = ldf `class<-`;
    check L0() else D0();
  D0():
    deopt 6 [r1, l, r1];
  L0():
    r2 = dyn class__(l, NULL, r1);
    check L1() else D1();
  D1():
    deopt 8 [r1, r2];
  L1():
    st value = r2;
    value = ld value;
    check L2() else D2();
  D2():
    deopt 10 [value];
  L2():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  }
}