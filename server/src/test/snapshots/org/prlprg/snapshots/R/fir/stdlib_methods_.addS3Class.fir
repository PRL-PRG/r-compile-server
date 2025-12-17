fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2009278726;
    st `.addS3Class` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2009278726(class, prototype, contains, where) {
  (reg class:*, reg prototype:*, reg contains:*, reg where:*) -+> V { var class:*, var prototype:*, var contains:*, var where:*, reg contains1:*, reg contains2:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg getClassDef:cls, reg __:cls, reg r:V, reg p:p(V +), reg packageSlot:cls, reg what:*, reg what1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg isXS3Class:cls, reg whatDef:*, reg whatDef1:V, reg p3:p(V +), reg r7:V, reg c1:L, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg i9:I, reg r9:V, reg class1:*, reg class2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg i12:I, reg r11:V, reg __1:cls, reg r12:V, reg attr:cls, reg r13:V, reg c2:cls, reg r14:V, reg i13:I, reg unique:cls, reg class3:*, reg class4:V, reg p4:p(V +), reg r17:V, reg l1:*, reg attr__:cls, reg r18:V, reg prototype1:*, reg prototype2:V |
    mkenv;
    st class = class;
    st prototype = prototype;
    st contains = contains;
    st where = where;
    contains1 = ld contains;
    check L6() else D0();
  D0():
    deopt 0 [contains1];
  L6():
    contains2 = force? contains1;
    checkMissing(contains2);
    s = toForSeq(contains2);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L7() else L5();
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    getClassDef = ldf getClassDef;
    check L8() else D1();
  L7():
    unique = ldf unique;
    check L21() else D8();
  D1():
    deopt 3 [i2];
  D8():
    deopt 33 [];
  L8():
    p = prom<V +>{
      __ = ldf `@` in base;
      r = dyn __(<sym what>, <sym superClass>);
      return r;
    };
    p2 = prom<V +>{
      packageSlot = ldf packageSlot;
      p1 = prom<V +>{
        what = ld what;
        what1 = force? what;
        checkMissing(what1);
        return what1;
      };
      r3 = dyn packageSlot(p1);
      return r3;
    };
    r5 = dyn getClassDef[, package](p, p2);
    check L9() else D2();
  L21():
    p4 = prom<V +>{
      class3 = ld class;
      class4 = force? class3;
      checkMissing(class4);
      return class4;
    };
    r17 = dyn unique(p4);
    check L22() else D9();
  D2():
    deopt 7 [i2, r5];
  D9():
    deopt 35 [r17];
  L9():
    st whatDef = r5;
    isXS3Class = ldf isXS3Class;
    check L10() else D3();
  L22():
    l1 = ld prototype;
    attr__ = ldf `attr<-`;
    check L23() else D10();
  D3():
    deopt 10 [i2];
  D10():
    deopt 37 [r17, l1, r17];
  L10():
    p3 = prom<V +>{
      whatDef = ld whatDef;
      whatDef1 = force? whatDef;
      checkMissing(whatDef1);
      return whatDef1;
    };
    r7 = dyn isXS3Class(p3);
    check L11() else D4();
  L23():
    r18 = dyn attr__(l1, NULL, ".S3Class", r17);
    check L24() else D11();
  D4():
    deopt 12 [i2, r7];
  D11():
    deopt 40 [r17, r18];
  L11():
    c1 = `as.logical`(r7);
    if c1 then L12() else L1();
  L24():
    st prototype = r18;
    prototype1 = ld prototype;
    check L25() else D12();
  D12():
    deopt 42 [prototype1];
  L1():
    goto L4(i2);
  L4(i13):
    goto L0(i13);
  L12():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L25():
    prototype2 = force? prototype1;
    checkMissing(prototype2);
    popenv;
    return prototype2;
  L2(i9, r9):
    st class = r9;
    goto L4(i9);
  L13():
    class1 = ld class;
    check L15() else D5();
  L14():
    r8 = dyn base(<sym class>, <lang attr(`@`(whatDef, prototype), ".S3Class")>);
    goto L2(i2, r8);
  D5():
    deopt 15 [i2, class1];
  L15():
    class2 = force? class1;
    checkMissing(class2);
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L3(i12, r11):
    c2 = ldf c in base;
    r14 = dyn c2(class2, r11);
    check L19() else D7();
  L16():
    __1 = ldf `@` in base;
    r12 = dyn __1(<sym whatDef>, <sym prototype>);
    attr = ldf attr in base;
    r13 = dyn attr(r12, ".S3Class");
    check L18() else D6();
  L17():
    r10 = dyn base1(<lang `@`(whatDef, prototype)>, ".S3Class");
    goto L3(i2, r10);
  D6():
    deopt 23 [i2, r13];
  D7():
    deopt 25 [i12, r14];
  L18():
    goto L3(i2, r13);
  L19():
    goto L2(i12, r14);
  }
}