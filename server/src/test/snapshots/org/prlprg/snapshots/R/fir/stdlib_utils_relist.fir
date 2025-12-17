fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg cbind:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg p:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg c2:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg list:cls, reg r15:V, reg as_relistable:cls, reg ipar:*, reg ipar1:V, reg p2:p(V +), reg r17:V, reg unlist:cls, reg initial_param:*, reg initial_param1:V, reg p3:p(V +), reg r19:V, reg relist:cls, reg ul:*, reg ul1:V, reg p4:p(V +), reg r21:V, reg stopifnot:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg relist1:cls, reg ul2:*, reg ul3:V, reg p5:p(V +), reg r25:V, reg initial_param2:*, reg initial_param3:V, reg identical:cls, reg r26:V, reg p6:p(V +), reg r28:V |
    mkenv;
    r = clos inner3929323065;
    st relist = r;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r2):
    st ipar = r2;
    as_relistable = ldf `as.relistable`;
    check L10() else D4();
  L2():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r1 = dyn base[mean, vcov](<lang c(0.0, 1.0)>, <lang cbind(c(1.0, 1.0), c(1.0, 0.0))>);
    goto L0(r1);
  D4():
    deopt 22 [];
  L1(r4):
    cbind = ldf cbind;
    check L7() else D1();
  L4():
    c = ldf c in base;
    r5 = dyn c(0.0, 1.0);
    check L6() else D0();
  L5():
    r3 = dyn base1(0.0, 1.0);
    goto L1(r3);
  L10():
    p2 = prom<V +>{
      ipar = ld ipar;
      ipar1 = force? ipar;
      checkMissing(ipar1);
      return ipar1;
    };
    r17 = dyn as_relistable(p2);
    check L11() else D5();
  D0():
    deopt 10 [r5];
  D1():
    deopt 13 [];
  D5():
    deopt 24 [r17];
  L6():
    goto L1(r5);
  L7():
    p = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c1 = ldf c in base;
      r8 = dyn c1(1.0, 1.0);
      goto L0(r8);
    L2():
      r6 = dyn base2(1.0, 1.0);
      goto L0(r6);
    };
    p1 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      c2 = ldf c in base;
      r12 = dyn c2(1.0, 0.0);
      goto L0(r12);
    L2():
      r10 = dyn base3(1.0, 0.0);
      goto L0(r10);
    };
    r14 = dyn cbind(p, p1);
    check L8() else D2();
  L11():
    st `initial.param` = r17;
    unlist = ldf unlist;
    check L12() else D6();
  D2():
    deopt 16 [r14];
  D6():
    deopt 27 [];
  L8():
    list = ldf list in base;
    r15 = dyn list(r4, r14);
    check L9() else D3();
  L12():
    p3 = prom<V +>{
      initial_param = ld `initial.param`;
      initial_param1 = force? initial_param;
      checkMissing(initial_param1);
      return initial_param1;
    };
    r19 = dyn unlist(p3);
    check L13() else D7();
  D3():
    deopt 19 [r15];
  D7():
    deopt 29 [r19];
  L9():
    goto L0(r15);
  L13():
    st ul = r19;
    relist = ldf relist;
    check L14() else D8();
  D8():
    deopt 32 [];
  L14():
    p4 = prom<V +>{
      ul = ld ul;
      ul1 = force? ul;
      checkMissing(ul1);
      return ul1;
    };
    r21 = dyn relist(p4);
    check L15() else D9();
  D9():
    deopt 34 [r21];
  L15():
    stopifnot = ldf stopifnot;
    check L16() else D10();
  D10():
    deopt 36 [];
  L16():
    p6 = prom<V +>{
      sym4 = ldf identical;
      base4 = ldf identical in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      relist1 = ldf relist;
      p5 = prom<V +>{
        ul2 = ld ul;
        ul3 = force? ul2;
        checkMissing(ul3);
        return ul3;
      };
      r25 = dyn relist1(p5);
      initial_param2 = ld `initial.param`;
      initial_param3 = force? initial_param2;
      checkMissing(initial_param3);
      identical = ldf identical in base;
      r26 = dyn identical(r25, initial_param3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r26);
    L2():
      r22 = dyn base4(<lang relist(ul)>, <sym initial.param>);
      goto L0(r22);
    };
    r28 = dyn stopifnot(p6);
    check L17() else D11();
  D11():
    deopt 38 [r28];
  L17():
    popenv;
    return r28;
  }
}
fun inner3929323065(flesh, skeleton) {
  (reg flesh:*, reg skeleton:*) -+> V { var flesh:*, var skeleton:*, reg skeleton_isMissing:L, reg skeleton_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg flesh1:*, reg flesh2:V, reg attr:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg skeleton1:*, reg skeleton2:V, reg c:V, reg c1:L, reg stop:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg UseMethod:cls, reg r10:V |
    mkenv;
    st flesh = flesh;
    skeleton_isMissing = missing.0(skeleton);
    if skeleton_isMissing then L0() else L1(skeleton);
  L0():
    p = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      flesh1 = ld flesh;
      flesh2 = force? flesh1;
      checkMissing(flesh2);
      attr = ldf attr in base;
      r2 = dyn attr(flesh2, "skeleton");
      goto L0(r2);
    L2():
      r = dyn base(<sym flesh>, "skeleton");
      goto L0(r);
    };
    goto L1(p);
  L1(skeleton_orDefault):
    st skeleton = skeleton_orDefault;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L2(r5):
    c1 = `as.logical`(r5);
    if c1 then L9() else L3();
  L6():
    skeleton1 = ld skeleton;
    check L8() else D0();
  L7():
    r4 = dyn base1(<sym skeleton>);
    goto L2(r4);
  D0():
    deopt 1 [skeleton1];
  L3():
    goto L4();
  L4():
    sym2 = ldf UseMethod;
    base2 = ldf UseMethod in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L8():
    skeleton2 = force? skeleton1;
    checkMissing(skeleton2);
    c = `==`(skeleton2, NULL);
    goto L2(c);
  L9():
    stop = ldf stop;
    check L10() else D1();
  D1():
    deopt 5 [];
  L5(r9):
    popenv;
    return r9;
  L10():
    r6 = dyn stop("The 'flesh' argument does not contain a skeleton attribute.\n", "Either ensure you unlist a relistable object, or specify the skeleton separately.");
    check L11() else D2();
  L13():
    UseMethod = ldf UseMethod in base;
    r10 = dyn UseMethod("relist", <sym skeleton>);
    goto L5(r10);
  L14():
    r8 = dyn base2("relist", <sym skeleton>);
    goto L5(r8);
  D2():
    deopt 8 [r6];
  L11():
    goto L4();
  }
}