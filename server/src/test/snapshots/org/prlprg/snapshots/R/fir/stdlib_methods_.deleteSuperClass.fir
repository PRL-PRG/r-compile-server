fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner766954739;
    st `.deleteSuperClass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner766954739(cdef, superclass) {
  (reg cdef:*, reg superclass:*) -+> V { var cdef:*, var superclass:*, reg __:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg superclass1:*, reg superclass2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg superclasses:*, reg superclasses1:V, reg names:cls, reg r5:V, reg match:cls, reg r6:V, reg ii:*, reg ii1:V, reg c:L, reg superclasses2:*, reg superclasses3:V, reg c1:L, reg superclasses5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ii2:*, reg ii3:V, reg r7:V, reg __1:cls, reg r8:V, reg l:*, reg ___:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg __2:cls, reg r12:V, reg names1:cls, reg r13:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg _removeSuperClass:cls, reg subclass:*, reg subclass1:V, reg p:p(V +), reg superclass3:*, reg superclass4:V, reg p1:p(V +), reg r16:V, reg cdef1:*, reg cdef2:V |
    mkenv;
    st cdef = cdef;
    st superclass = superclass;
    __ = ldf `@` in base;
    r = dyn __(<sym cdef>, <sym contains>);
    st superclasses = r;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r2):
    st ii = r2;
    ii = ld ii;
    check L15() else D4();
  L7():
    superclass1 = ld superclass;
    check L9() else D0();
  L8():
    r1 = dyn base(<sym superclass>, <lang names(superclasses)>, 0);
    goto L0(r1);
  D0():
    deopt 5 [superclass1];
  D4():
    deopt 18 [ii];
  L9():
    superclass2 = force? superclass1;
    checkMissing(superclass2);
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L15():
    ii1 = force? ii;
    checkMissing(ii1);
    c = `as.logical`(ii1);
    if c then L16() else L2();
  L1(r4):
    match = ldf match in base;
    r6 = dyn match(superclass2, r4, 0, NULL);
    check L14() else D3();
  L2():
    popenv;
    return NULL;
  L10():
    superclasses = ld superclasses;
    check L12() else D1();
  L11():
    r3 = dyn base1(<sym superclasses>);
    goto L1(r3);
  L16():
    superclasses2 = ld superclasses;
    check L17() else D5();
  D1():
    deopt 9 [superclasses];
  D3():
    deopt 16 [r6];
  D5():
    deopt 20 [superclasses2];
  L12():
    superclasses1 = force? superclasses;
    checkMissing(superclasses1);
    names = ldf names in base;
    r5 = dyn names(superclasses1);
    check L13() else D2();
  L14():
    goto L0(r6);
  L17():
    superclasses3 = force? superclasses2;
    checkMissing(superclasses3);
    c1 = `is.object`(superclasses3);
    if c1 then L18() else L19(superclasses3);
  D2():
    deopt 12 [r5];
  L3(dx1):
    l = ld cdef;
    ___ = ldf `@<-`;
    check L22() else D7();
  L13():
    goto L1(r5);
  L18():
    dr = tryDispatchBuiltin.1("[", superclasses3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(dr);
  L19(superclasses5):
    ii2 = ld ii;
    check L21() else D6();
  D6():
    deopt 22 [superclasses5, ii2];
  D7():
    deopt 27 [dx1, l, dx1];
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L21():
    ii3 = force? ii2;
    checkMissing(ii3);
    r7 = `-`(<missing>, ii3);
    __1 = ldf `[` in base;
    r8 = dyn __1(superclasses5, r7);
    goto L3(r8);
  L22():
    r9 = dyn ___(l, NULL, "contains", dx1);
    check L23() else D8();
  D8():
    deopt 30 [dx1, r9];
  L23():
    st cdef = r9;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L4(r11):
    s = toForSeq(r11);
    l1 = length(s);
    i = 0;
    goto L5(i);
  L24():
    __2 = ldf `@` in base;
    r12 = dyn __2(<sym cdef>, <sym subclasses>);
    names1 = ldf names in base;
    r13 = dyn names1(r12);
    check L26() else D9();
  L25():
    r10 = dyn base2(<lang `@`(cdef, subclasses)>);
    goto L4(r10);
  D9():
    deopt 37 [r13];
  L5(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l1, i2);
    if c2 then L27() else L6();
  L26():
    goto L4(r13);
  L6():
    x = `[[`(s, i2, NULL, TRUE);
    st subclass = x;
    _removeSuperClass = ldf `.removeSuperClass`;
    check L28() else D10();
  L27():
    cdef1 = ld cdef;
    check L30() else D12();
  D10():
    deopt 39 [i2];
  D12():
    deopt 46 [cdef1];
  L28():
    p = prom<V +>{
      subclass = ld subclass;
      subclass1 = force? subclass;
      checkMissing(subclass1);
      return subclass1;
    };
    p1 = prom<V +>{
      superclass3 = ld superclass;
      superclass4 = force? superclass3;
      checkMissing(superclass4);
      return superclass4;
    };
    r16 = dyn _removeSuperClass(p, p1);
    check L29() else D11();
  L30():
    cdef2 = force? cdef1;
    checkMissing(cdef2);
    popenv;
    return cdef2;
  D11():
    deopt 42 [i2, r16];
  L29():
    goto L5(i2);
  }
}