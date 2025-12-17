fun main() {
  () -+> V { reg r:cls, reg matrix:cls, reg p:p(V +), reg r2:V, reg canCoerce:cls, reg m:*, reg m1:V, reg p1:p(V +), reg r4:V, reg canCoerce1:cls, reg m2:*, reg m3:V, reg p2:p(V +), reg r6:V |
    mkenv;
    r = clos inner186068737;
    st canCoerce = r;
    matrix = ldf matrix;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      return 3.141592653589793;
    };
    r2 = dyn matrix(p, 2.0, 3.0);
    check L1() else D1();
  D1():
    deopt 8 [r2];
  L1():
    st m = r2;
    canCoerce = ldf canCoerce;
    check L2() else D2();
  D2():
    deopt 11 [];
  L2():
    p1 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r4 = dyn canCoerce(p1, "numeric");
    check L3() else D3();
  D3():
    deopt 14 [r4];
  L3():
    canCoerce1 = ldf canCoerce;
    check L4() else D4();
  D4():
    deopt 16 [];
  L4():
    p2 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r6 = dyn canCoerce1(p2, "array");
    check L5() else D5();
  D5():
    deopt 19 [r6];
  L5():
    popenv;
    return r6;
  }
}
fun inner186068737(object, Class) {
  (reg object:*, reg Class:*) -+> V { var object:*, var Class:*, reg is:cls, reg object1:*, reg object2:V, reg p:p(V +), reg Class1:*, reg Class2:V, reg p1:p(V +), reg r2:V, reg c:L, reg c1:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg c5:L, reg r4:V, reg selectMethod:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg _class1:cls, reg object3:*, reg object4:V, reg p2:p(V +), reg r8:V, reg Class3:*, reg Class4:V, reg c6:cls, reg r9:V, reg p3:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg c7:cls, reg r13:V, reg p4:p(V +), reg r15:V, reg c8:V, reg r16:V, reg c9:L, reg c10:V |
    mkenv;
    st object = object;
    st Class = Class;
    is = ldf is;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    p1 = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    r2 = dyn is(p, p1);
    check L3() else D1();
  D1():
    deopt 4 [r2];
  L3():
    c = `as.logical`(r2);
    if c then L0(c) else L4();
  L0(c1):
    popenv;
    return c1;
  L4():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(c5, r4):
    r16 = `!`(r4);
    c9 = `as.logical`(r16);
    c10 = `||`(c5, c9);
    goto L0(c10);
  L5():
    selectMethod = ldf selectMethod;
    check L7() else D2();
  L6():
    r3 = dyn base(<lang selectMethod("coerce", c(.class1(object), Class), optional=TRUE, useInherited=c(from=TRUE, to=FALSE))>);
    goto L1(c, r3);
  D2():
    deopt 7 [c];
  L7():
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      _class1 = ldf `.class1`;
      p2 = prom<V +>{
        object3 = ld object;
        object4 = force? object3;
        checkMissing(object4);
        return object4;
      };
      r8 = dyn _class1(p2);
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      c6 = ldf c in base;
      r9 = dyn c6(r8, Class4);
      goto L0(r9);
    L2():
      r5 = dyn base1(<lang .class1(object)>, <sym Class>);
      goto L0(r5);
    };
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c7 = ldf c in base;
      r13 = dyn c7(TRUE, FALSE);
      goto L0(r13);
    L2():
      r11 = dyn base2[from, to](TRUE, FALSE);
      goto L0(r11);
    };
    r15 = dyn selectMethod[, , optional, useInherited]("coerce", p3, TRUE, p4);
    check L8() else D3();
  D3():
    deopt 14 [c, r15];
  L8():
    c8 = `==`(r15, NULL);
    goto L1(c, c8);
  }
}