fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner418561577;
    st dynGet = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner418561577(x, ifnotfound, minframe, inherits) {
  (reg x:*, reg ifnotfound:*, reg minframe:*, reg inherits:*) -+> V { var x:*, var ifnotfound:*, reg ifnotfound_isMissing:L, reg ifnotfound_orDefault:*, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), var minframe:*, reg minframe_isMissing:L, reg minframe_orDefault:*, var inherits:*, reg inherits_isMissing:L, reg inherits_orDefault:*, reg sys_nframe:cls, reg r7:V, reg structure:cls, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg as_raw:cls, reg r12:V, reg list:cls, reg r13:V, reg p4:p(V +), reg r15:V, reg n:*, reg n1:V, reg minframe1:*, reg minframe2:V, reg r16:V, reg c:L, reg n2:*, reg n3:V, reg r17:V, reg sys_frame:cls, reg n4:*, reg n5:V, reg p5:p(V +), reg r19:V, reg get0:cls, reg x3:*, reg x4:V, reg p6:p(V +), reg env:*, reg env1:V, reg p7:p(V +), reg inherits1:*, reg inherits2:V, reg p8:p(V +), reg myObj:*, reg myObj1:V, reg p9:p(V +), reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg r27:*, reg r28:V, reg myObj2:*, reg myObj3:V, reg identical:cls, reg r29:V, reg r30:V, reg c1:L, reg r31:*, reg r32:V, reg ifnotfound1:*, reg ifnotfound2:V |
    mkenv;
    st x = x;
    ifnotfound_isMissing = missing.0(ifnotfound);
    if ifnotfound_isMissing then L0() else L1(ifnotfound);
  L0():
    p3 = prom<V +>{
      stop = ldf stop;
      p2 = prom<V +>{
        gettextf = ldf gettextf;
        p1 = prom<V +>{
          sQuote = ldf sQuote;
          p = prom<V +>{
            x1 = ld x;
            x2 = force? x1;
            checkMissing(x2);
            return x2;
          };
          r1 = dyn sQuote(p);
          return r1;
        };
        r3 = dyn gettextf("%s not found", p1);
        return r3;
      };
      r5 = dyn stop[, domain](p2, NA_LGL);
      return r5;
    };
    goto L1(p3);
  L1(ifnotfound_orDefault):
    st ifnotfound = ifnotfound_orDefault;
    minframe_isMissing = missing.0(minframe);
    if minframe_isMissing then L2(1) else L2(minframe);
  L2(minframe_orDefault):
    st minframe = minframe_orDefault;
    inherits_isMissing = missing.0(inherits);
    if inherits_isMissing then L3(FALSE) else L3(inherits);
  L3(inherits_orDefault):
    st inherits = inherits_orDefault;
    sys_nframe = ldf `sys.nframe`;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    r7 = dyn sys_nframe();
    check L10() else D1();
  D1():
    deopt 2 [r7];
  L10():
    st n = r7;
    structure = ldf structure;
    check L11() else D2();
  D2():
    deopt 5 [];
  L11():
    p4 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r9):
      return r9;
    L2():
      sym1 = ldf `as.raw`;
      base1 = ldf `as.raw` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r8 = dyn base[`.b`](<lang as.raw(7.0)>);
      goto L0(r8);
    L1(r11):
      list = ldf list in base;
      r13 = dyn list(r11);
      goto L0(r13);
    L4():
      as_raw = ldf `as.raw` in base;
      r12 = dyn as_raw(7.0);
      goto L1(r12);
    L5():
      r10 = dyn base1(7.0);
      goto L1(r10);
    };
    r15 = dyn structure[, foo](p4, 47);
    check L12() else D3();
  D3():
    deopt 9 [r15];
  L12():
    st myObj = r15;
    goto L8();
  L8():
    n = ld n;
    check L13() else D4();
  D4():
    deopt 11 [n];
  L13():
    n1 = force? n;
    checkMissing(n1);
    minframe1 = ld minframe;
    check L14() else D5();
  D5():
    deopt 12 [n1, minframe1];
  L14():
    minframe2 = force? minframe1;
    checkMissing(minframe2);
    r16 = `>`(n1, minframe2);
    c = `as.logical`(r16);
    if c then L15() else L4();
  L4():
    ifnotfound1 = ld ifnotfound;
    check L31() else D15();
  L15():
    n2 = ld n;
    check L16() else D6();
  D6():
    deopt 15 [n2];
  D15():
    deopt 60 [ifnotfound1];
  L16():
    n3 = force? n2;
    checkMissing(n3);
    r17 = `-`(n3, 1);
    st n = r17;
    sys_frame = ldf `sys.frame`;
    check L17() else D7();
  L31():
    ifnotfound2 = force? ifnotfound1;
    checkMissing(ifnotfound2);
    popenv;
    return ifnotfound2;
  D7():
    deopt 21 [];
  L17():
    p5 = prom<V +>{
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      return n5;
    };
    r19 = dyn sys_frame(p5);
    check L18() else D8();
  D8():
    deopt 23 [r19];
  L18():
    st env = r19;
    get0 = ldf get0;
    check L19() else D9();
  D9():
    deopt 26 [];
  L19():
    p6 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p7 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    p8 = prom<V +>{
      inherits1 = ld inherits;
      inherits2 = force? inherits1;
      checkMissing(inherits2);
      return inherits2;
    };
    p9 = prom<V +>{
      myObj = ld myObj;
      myObj1 = force? myObj;
      checkMissing(myObj1);
      return myObj1;
    };
    r24 = dyn get0[, envir, inherits, ifnotfound](p6, p7, p8, p9);
    check L20() else D10();
  D10():
    deopt 34 [r24];
  L20():
    st r = r24;
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L5(r26):
    r30 = `!`(r26);
    c1 = `as.logical`(r30);
    if c1 then L26() else L6();
  L21():
    r27 = ld r;
    check L23() else D11();
  L22():
    r25 = dyn base2(<sym r>, <sym myObj>);
    goto L5(r25);
  D11():
    deopt 38 [r27];
  L6():
    goto L8();
  L23():
    r28 = force? r27;
    checkMissing(r28);
    myObj2 = ld myObj;
    check L24() else D12();
  L26():
    r31 = ld r;
    check L27() else D14();
  D12():
    deopt 40 [myObj2];
  D14():
    deopt 52 [r31];
  L24():
    myObj3 = force? myObj2;
    checkMissing(myObj3);
    identical = ldf identical in base;
    r29 = dyn identical(r28, myObj3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L25() else D13();
  L27():
    r32 = force? r31;
    checkMissing(r32);
    popenv;
    return r32;
  D13():
    deopt 50 [r29];
  L25():
    goto L5(r29);
  }
}