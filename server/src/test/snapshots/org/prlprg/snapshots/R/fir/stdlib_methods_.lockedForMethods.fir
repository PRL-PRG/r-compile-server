fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3310468470;
    st `.lockedForMethods` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3310468470(fdef, env) {
  (reg fdef:*, reg env:*) -+> V { var fdef:*, var env:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env1:*, reg env2:V, reg c:V, reg c1:L, reg c2:V, reg environmentIsLocked:cls, reg env3:*, reg env4:V, reg p:p(V +), reg r3:V, reg r4:V, reg c4:L, reg c5:V, reg c7:L, reg is:cls, reg fdef1:*, reg fdef2:V, reg p1:p(V +), reg r8:V, reg r9:V, reg c8:L, reg __:cls, reg r12:V, reg __1:cls, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg name:*, reg name1:V, reg _TableMetaName:cls, reg name2:*, reg name3:V, reg p2:p(V +), reg package:*, reg package1:V, reg p3:p(V +), reg r18:V, reg c9:cls, reg r19:V, reg objs:*, reg objs1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c10:L, reg x:V, reg exists:cls, reg obj:*, reg obj1:V, reg p4:p(V +), reg env5:*, reg env6:V, reg p5:p(V +), reg r22:V, reg hasIt:*, reg hasIt1:V, reg r23:V, reg c11:L, reg i5:I, reg c12:V, reg bindingIsLocked:cls, reg obj2:*, reg obj3:V, reg p6:p(V +), reg env7:*, reg env8:V, reg p7:p(V +), reg r26:V, reg c14:L, reg c15:V, reg c17:L |
    mkenv;
    st fdef = fdef;
    st env = env;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L1(c1) else L15();
  L12():
    env1 = ld env;
    check L14() else D0();
  L13():
    r = dyn base(<sym env>);
    goto L0(r);
  D0():
    deopt 1 [env1];
  L1(c2):
    c7 = `as.logical`(c2);
    if c7 then L19() else L2();
  L14():
    env2 = force? env1;
    checkMissing(env2);
    c = `==`(env2, NULL);
    goto L0(c);
  L15():
    environmentIsLocked = ldf environmentIsLocked;
    check L16() else D1();
  D1():
    deopt 5 [c1];
  L2():
    is = ldf is;
    check L22() else D3();
  L16():
    p = prom<V +>{
      env3 = ld env;
      env4 = force? env3;
      checkMissing(env4);
      return env4;
    };
    r3 = dyn environmentIsLocked(p);
    check L17() else D2();
  L19():
    popenv;
    return FALSE;
  D2():
    deopt 7 [c1, r3];
  D3():
    deopt 16 [];
  L17():
    r4 = `!`(r3);
    c4 = `as.logical`(r4);
    c5 = `||`(c1, c4);
    goto L1(c5);
  L22():
    p1 = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r8 = dyn is(p1, "genericFunction");
    check L23() else D4();
  D4():
    deopt 19 [r8];
  L23():
    r9 = `!`(r8);
    c8 = `as.logical`(r9);
    if c8 then L24() else L4();
  L4():
    __ = ldf `@` in base;
    r12 = dyn __(<sym fdef>, <sym generic>);
    st name = r12;
    __1 = ldf `@` in base;
    r13 = dyn __1(<sym fdef>, <sym package>);
    st package = r13;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L24():
    popenv;
    return TRUE;
  L6(r15):
    st objs = r15;
    objs = ld objs;
    check L33() else D9();
  L27():
    name = ld name;
    check L29() else D5();
  L28():
    r14 = dyn base1(<sym name>, <lang .TableMetaName(name, package)>);
    goto L6(r14);
  D5():
    deopt 34 [name];
  D9():
    deopt 44 [objs];
  L29():
    name1 = force? name;
    checkMissing(name1);
    _TableMetaName = ldf `.TableMetaName`;
    check L30() else D6();
  L33():
    objs1 = force? objs;
    checkMissing(objs1);
    s = toForSeq(objs1);
    l = length(s);
    i = 0;
    goto L7(i);
  D6():
    deopt 37 [];
  L7(i1):
    i2 = `+`.1(i1, 1);
    c10 = `<`.1(l, i2);
    if c10 then L34() else L11();
  L30():
    p2 = prom<V +>{
      name2 = ld name;
      name3 = force? name2;
      checkMissing(name3);
      return name3;
    };
    p3 = prom<V +>{
      package = ld package;
      package1 = force? package;
      checkMissing(package1);
      return package1;
    };
    r18 = dyn _TableMetaName(p2, p3);
    check L31() else D7();
  D7():
    deopt 40 [r18];
  L11():
    x = `[[`(s, i2, NULL, TRUE);
    st obj = x;
    exists = ldf exists;
    check L35() else D10();
  L31():
    c9 = ldf c in base;
    r19 = dyn c9(name1, r18);
    check L32() else D8();
  L34():
    popenv;
    return FALSE;
  D8():
    deopt 42 [r19];
  D10():
    deopt 47 [i2];
  L32():
    goto L6(r19);
  L35():
    p4 = prom<V +>{
      obj = ld obj;
      obj1 = force? obj;
      checkMissing(obj1);
      return obj1;
    };
    p5 = prom<V +>{
      env5 = ld env;
      env6 = force? env5;
      checkMissing(env6);
      return env6;
    };
    r22 = dyn exists[, , inherits](p4, p5, FALSE);
    check L36() else D11();
  D11():
    deopt 52 [i2, r22];
  L36():
    st hasIt = r22;
    hasIt = ld hasIt;
    check L37() else D12();
  D12():
    deopt 54 [i2, hasIt];
  L37():
    hasIt1 = force? hasIt;
    checkMissing(hasIt1);
    r23 = `!`(hasIt1);
    c11 = `as.logical`(r23);
    if c11 then L8(i2, c11) else L38();
  L8(i5, c12):
    c17 = `as.logical`(c12);
    if c17 then L42() else L9();
  L38():
    bindingIsLocked = ldf bindingIsLocked;
    check L39() else D13();
  D13():
    deopt 58 [i2, c11];
  L9():
    goto L7(i5);
  L39():
    p6 = prom<V +>{
      obj2 = ld obj;
      obj3 = force? obj2;
      checkMissing(obj3);
      return obj3;
    };
    p7 = prom<V +>{
      env7 = ld env;
      env8 = force? env7;
      checkMissing(env8);
      return env8;
    };
    r26 = dyn bindingIsLocked(p6, p7);
    check L40() else D14();
  L42():
    popenv;
    return TRUE;
  D14():
    deopt 61 [i2, c11, r26];
  L40():
    c14 = `as.logical`(r26);
    c15 = `||`(c11, c14);
    goto L8(i2, c15);
  }
}