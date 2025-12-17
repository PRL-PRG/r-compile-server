fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3943625592;
    st `.removeSuperclassBackRefs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3943625592(Class, classDef, classWhere) {
  (reg Class:*, reg classDef:*, reg classWhere:*) -+> V { var Class:*, var classDef:*, var classWhere:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg __:cls, reg r2:V, reg length:cls, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg __1:cls, reg r6:V, reg names:cls, reg r7:V, reg superclasses:*, reg superclasses1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg _getClassFromCache:cls, reg what:*, reg what1:V, reg p:p(V +), reg classWhere1:*, reg classWhere2:V, reg p1:p(V +), reg r10:V, reg is:cls, reg cdef:*, reg cdef1:V, reg p2:p(V +), reg r12:V, reg c2:L, reg _removeSubClass:cls, reg what2:*, reg what3:V, reg p3:p(V +), reg Class1:*, reg Class2:V, reg p4:p(V +), reg cdef2:*, reg cdef3:V, reg p5:p(V +), reg r16:V, reg i7:I, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg i10:I, reg r19:V, reg cdef4:*, reg cdef5:V, reg is_list:cls, reg r20:V, reg c3:L, reg lapply:cls, reg cdef6:*, reg cdef7:V, reg p6:p(V +), reg r22:cls, reg p7:p(V +), reg r24:V |
    mkenv;
    st Class = Class;
    st classDef = classDef;
    st classWhere = classWhere;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r1):
    c = `as.logical`(r1);
    if c then L13() else L1();
  L10():
    __ = ldf `@` in base;
    r2 = dyn __(<sym classDef>, <sym contains>);
    length = ldf length in base;
    r3 = dyn length(r2);
    check L12() else D0();
  L11():
    r = dyn base(<lang `@`(classDef, contains)>);
    goto L0(r);
  D0():
    deopt 5 [r3];
  L1():
    goto L9();
  L9():
    popenv;
    return NULL;
  L12():
    goto L0(r3);
  L13():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L2(r5):
    st superclasses = r5;
    superclasses = ld superclasses;
    check L17() else D2();
  L14():
    __1 = ldf `@` in base;
    r6 = dyn __1(<sym classDef>, <sym contains>);
    names = ldf names in base;
    r7 = dyn names(r6);
    check L16() else D1();
  L15():
    r4 = dyn base1(<lang `@`(classDef, contains)>);
    goto L2(r4);
  D1():
    deopt 11 [r7];
  D2():
    deopt 13 [superclasses];
  L16():
    goto L2(r7);
  L17():
    superclasses1 = force? superclasses;
    checkMissing(superclasses1);
    s = toForSeq(superclasses1);
    l = length(s);
    i = 0;
    goto L3(i);
  L3(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L18() else L8();
  L8():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    _getClassFromCache = ldf `.getClassFromCache`;
    check L19() else D3();
  L18():
    goto L9();
  D3():
    deopt 16 [i2];
  L19():
    p = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p1 = prom<V +>{
      classWhere1 = ld classWhere;
      classWhere2 = force? classWhere1;
      checkMissing(classWhere2);
      return classWhere2;
    };
    r10 = dyn _getClassFromCache[, , `resolve.confl`](p, p1, "all");
    check L20() else D4();
  D4():
    deopt 21 [i2, r10];
  L20():
    st cdef = r10;
    is = ldf is;
    check L21() else D5();
  D5():
    deopt 24 [i2];
  L21():
    p2 = prom<V +>{
      cdef = ld cdef;
      cdef1 = force? cdef;
      checkMissing(cdef1);
      return cdef1;
    };
    r12 = dyn is(p2, "classRepresentation");
    check L22() else D6();
  D6():
    deopt 27 [i2, r12];
  L22():
    c2 = `as.logical`(r12);
    if c2 then L23() else L4();
  L4():
    sym2 = ldf `is.list`;
    base2 = ldf `is.list` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L5(i7):
    goto L3(i7);
  L23():
    _removeSubClass = ldf `.removeSubClass`;
    check L24() else D7();
  D7():
    deopt 29 [i2];
  L6(i10, r19):
    c3 = `as.logical`(r19);
    if c3 then L31() else L7();
  L24():
    p3 = prom<V +>{
      what2 = ld what;
      what3 = force? what2;
      checkMissing(what3);
      return what3;
    };
    p4 = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    p5 = prom<V +>{
      cdef2 = ld cdef;
      cdef3 = force? cdef2;
      checkMissing(cdef3);
      return cdef3;
    };
    r16 = dyn _removeSubClass(p3, p4, p5);
    check L25() else D8();
  L27():
    cdef4 = ld cdef;
    check L29() else D9();
  L28():
    r18 = dyn base2(<sym cdef>);
    goto L6(i2, r18);
  D8():
    deopt 33 [i2, r16];
  D9():
    deopt 36 [i2, cdef4];
  L7():
    goto L5(i10);
  L25():
    goto L5(i2);
  L29():
    cdef5 = force? cdef4;
    checkMissing(cdef5);
    is_list = ldf `is.list` in base;
    r20 = dyn is_list(cdef5);
    check L30() else D10();
  L31():
    lapply = ldf lapply;
    check L32() else D11();
  D10():
    deopt 39 [i2, r20];
  D11():
    deopt 41 [i10];
  L30():
    goto L6(i2, r20);
  L32():
    p6 = prom<V +>{
      cdef6 = ld cdef;
      cdef7 = force? cdef6;
      checkMissing(cdef7);
      return cdef7;
    };
    p7 = prom<V +>{
      r22 = clos inner3618118985;
      return r22;
    };
    r24 = dyn lapply(p6, p7);
    check L33() else D12();
  D12():
    deopt 44 [i10, r24];
  L33():
    goto L5(i10);
  }
}
fun inner3618118985(cl) {
  (reg cl:*) -+> V { var cl:*, reg _removeSubClass:cls, reg what:*, reg what1:V, reg p:p(V +), reg Class:*, reg Class1:V, reg p1:p(V +), reg cl1:*, reg cl2:V, reg p2:p(V +), reg r3:V |
    mkenv;
    st cl = cl;
    _removeSubClass = ldf `.removeSubClass`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p1 = prom<V +>{
      Class = ld Class;
      Class1 = force? Class;
      checkMissing(Class1);
      return Class1;
    };
    p2 = prom<V +>{
      cl1 = ld cl;
      cl2 = force? cl1;
      checkMissing(cl2);
      return cl2;
    };
    r3 = dyn _removeSubClass(p, p1, p2);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}