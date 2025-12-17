fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner650995377;
    st getClasses = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner650995377(where, inherits) {
  (reg where:*, reg inherits:*) -+> V { var where:*, reg where_isMissing:L, reg where_orDefault:*, reg _externalCallerEnv:cls, reg r:V, reg p:p(V +), var inherits:*, reg inherits_isMissing:L, reg inherits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg missing:cls, reg r4:V, reg p1:p(V +), reg paste0:cls, reg classMetaName:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg where1:*, reg where2:V, reg is_environment:cls, reg r11:V, reg r12:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg where3:*, reg where4:V, reg as_environment:cls, reg r15:V, reg inherits1:*, reg inherits2:V, reg c1:L, reg _parentEnvList:cls, reg where5:*, reg where6:V, reg p3:p(V +), reg r18:V, reg character:cls, reg r19:V, reg evList:*, reg evList1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg i7:I, reg r21:V, reg clNames:*, reg clNames1:V, reg grep:cls, reg pat:*, reg pat1:V, reg p4:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg ev:*, reg ev1:V, reg names:cls, reg r25:V, reg p5:p(V +), reg r27:V, reg c3:cls, reg r28:V, reg unique:cls, reg clNames2:*, reg clNames3:V, reg p6:p(V +), reg r30:V, reg grep1:cls, reg pat2:*, reg pat3:V, reg p7:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg where7:*, reg where8:V, reg names1:cls, reg r35:V, reg p8:p(V +), reg r37:V, reg substring:cls, reg clNames4:*, reg clNames5:V, reg p9:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg pat4:*, reg pat5:V, reg nchar:cls, reg r41:V, reg p10:p(V +), reg r43:V |
    mkenv;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p = prom<V +>{
      _externalCallerEnv = ldf `.externalCallerEnv`;
      r = dyn _externalCallerEnv();
      return r;
    };
    goto L1(p);
  L1(where_orDefault):
    st where = where_orDefault;
    inherits_isMissing = missing.0(inherits);
    if inherits_isMissing then L2() else L3(inherits);
  L2():
    p1 = prom<V +>{
      sym = ldf missing;
      base = ldf missing in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      missing = ldf missing in base;
      r4 = dyn missing(<sym where>);
      goto L0(r4);
    L2():
      r2 = dyn base(<sym where>);
      goto L0(r2);
    };
    goto L3(p1);
  L3(inherits_orDefault):
    st inherits = inherits_orDefault;
    paste0 = ldf paste0;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p2 = prom<V +>{
      classMetaName = ldf classMetaName;
      r6 = dyn classMetaName("");
      return r6;
    };
    r8 = dyn paste0("^", p2);
    check L14() else D1();
  D1():
    deopt 4 [r8];
  L14():
    st pat = r8;
    sym1 = ldf `is.environment`;
    base1 = ldf `is.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L4(r10):
    r12 = `!`(r10);
    c = `as.logical`(r12);
    if c then L19() else L5();
  L15():
    where1 = ld where;
    check L17() else D2();
  L16():
    r9 = dyn base1(<sym where>);
    goto L4(r9);
  D2():
    deopt 8 [where1];
  L5():
    goto L7();
  L7():
    inherits1 = ld inherits;
    check L25() else D6();
  L17():
    where2 = force? where1;
    checkMissing(where2);
    is_environment = ldf `is.environment` in base;
    r11 = dyn is_environment(where2);
    check L18() else D3();
  L19():
    sym2 = ldf `as.environment`;
    base2 = ldf `as.environment` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  D3():
    deopt 11 [r11];
  D6():
    deopt 22 [inherits1];
  L6(r14):
    st where = r14;
    goto L7();
  L18():
    goto L4(r11);
  L20():
    where3 = ld where;
    check L22() else D4();
  L21():
    r13 = dyn base2(<sym where>);
    goto L6(r13);
  L25():
    inherits2 = force? inherits1;
    checkMissing(inherits2);
    c1 = `as.logical`(inherits2);
    if c1 then L26() else L8();
  D4():
    deopt 15 [where3];
  L8():
    grep1 = ldf grep;
    check L42() else D18();
  L12():
    substring = ldf substring;
    check L44() else D20();
  L22():
    where4 = force? where3;
    checkMissing(where4);
    as_environment = ldf `as.environment` in base;
    r15 = dyn as_environment(where4);
    check L23() else D5();
  L26():
    _parentEnvList = ldf `.parentEnvList`;
    check L27() else D7();
  D5():
    deopt 18 [r15];
  D7():
    deopt 25 [];
  D18():
    deopt 58 [];
  D20():
    deopt 66 [];
  L23():
    goto L6(r15);
  L27():
    p3 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r18 = dyn _parentEnvList(p3);
    check L28() else D8();
  L42():
    p7 = prom<V +>{
      pat2 = ld pat;
      pat3 = force? pat2;
      checkMissing(pat3);
      return pat3;
    };
    p8 = prom<V +>{
      sym5 = ldf names;
      base5 = ldf names in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      names1 = ldf names in base;
      r35 = dyn names1(where8);
      goto L0(r35);
    L2():
      r33 = dyn base5(<sym where>);
      goto L0(r33);
    };
    r37 = dyn grep1[, , value](p7, p8, TRUE);
    check L43() else D19();
  L44():
    p9 = prom<V +>{
      clNames4 = ld clNames;
      clNames5 = force? clNames4;
      checkMissing(clNames5);
      return clNames5;
    };
    p10 = prom<V +>{
      sym6 = ldf nchar;
      base6 = ldf nchar in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      pat4 = ld pat;
      pat5 = force? pat4;
      checkMissing(pat5);
      nchar = ldf nchar in base;
      r41 = dyn nchar(pat5, "c", FALSE, NA_LGL);
      goto L0(r41);
    L2():
      r39 = dyn base6(<sym pat>, "c");
      goto L0(r39);
    };
    r43 = dyn substring(p9, p10);
    check L45() else D21();
  D8():
    deopt 27 [r18];
  D19():
    deopt 63 [r37];
  D21():
    deopt 69 [r43];
  L28():
    st evList = r18;
    character = ldf character;
    check L29() else D9();
  L43():
    st clNames = r37;
    goto L12();
  L45():
    popenv;
    return r43;
  D9():
    deopt 30 [];
  L29():
    r19 = dyn character();
    check L30() else D10();
  D10():
    deopt 31 [r19];
  L30():
    st clNames = r19;
    evList = ld evList;
    check L31() else D11();
  D11():
    deopt 33 [evList];
  L31():
    evList1 = force? evList;
    checkMissing(evList1);
    s = toForSeq(evList1);
    l = length(s);
    i = 0;
    goto L9(i);
  L9(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L32() else L11();
  L11():
    x = `[[`(s, i2, NULL, TRUE);
    st ev = x;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L32():
    unique = ldf unique;
    check L39() else D16();
  D16():
    deopt 53 [];
  L10(i7, r21):
    st clNames = r21;
    goto L9(i7);
  L33():
    clNames = ld clNames;
    check L35() else D12();
  L34():
    r20 = dyn base3(<sym clNames>, <lang grep(pat, names(ev), value=TRUE)>);
    goto L10(i2, r20);
  L39():
    p6 = prom<V +>{
      clNames2 = ld clNames;
      clNames3 = force? clNames2;
      checkMissing(clNames3);
      return clNames3;
    };
    r30 = dyn unique(p6);
    check L40() else D17();
  D12():
    deopt 37 [i2, clNames];
  D17():
    deopt 55 [r30];
  L35():
    clNames1 = force? clNames;
    checkMissing(clNames1);
    grep = ldf grep;
    check L36() else D13();
  L40():
    st clNames = r30;
    goto L12();
  D13():
    deopt 40 [i2];
  L36():
    p4 = prom<V +>{
      pat = ld pat;
      pat1 = force? pat;
      checkMissing(pat1);
      return pat1;
    };
    p5 = prom<V +>{
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      ev = ld ev;
      ev1 = force? ev;
      checkMissing(ev1);
      names = ldf names in base;
      r25 = dyn names(ev1);
      goto L0(r25);
    L2():
      r23 = dyn base4(<sym ev>);
      goto L0(r23);
    };
    r27 = dyn grep[, , value](p4, p5, TRUE);
    check L37() else D14();
  D14():
    deopt 45 [i2, r27];
  L37():
    c3 = ldf c in base;
    r28 = dyn c3(clNames1, r27);
    check L38() else D15();
  D15():
    deopt 47 [i2, r28];
  L38():
    goto L10(i2, r28);
  }
}