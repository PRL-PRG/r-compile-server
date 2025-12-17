fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1656835615;
    st `index.search` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1656835615(topic, paths, firstOnly) {
  (reg topic:*, reg paths:*, reg firstOnly:*) -+> V { var topic:*, var paths:*, var firstOnly:*, reg firstOnly_isMissing:L, reg firstOnly_orDefault:*, reg character:cls, reg r:V, reg paths1:*, reg paths2:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg file_exists:cls, reg file_path:cls, reg p:*, reg p1:V, reg p2:p(V +), reg r2:V, reg p3:p(V +), reg r4:V, reg c1:L, reg readRDS:cls, reg f:*, reg f1:V, reg p4:p(V +), reg r6:V, reg i7:I, reg file_exists1:cls, reg file_path1:cls, reg p5:*, reg p6:V, reg p7:p(V +), reg r9:V, reg p8:p(V +), reg r11:V, reg c2:L, reg scan:cls, reg f2:*, reg f3:V, reg p9:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg list:cls, reg r15:V, reg p10:p(V +), reg r17:V, reg structure:cls, reg foo:*, reg foo1:V, reg c3:L, reg foo3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r18:V, reg p11:p(V +), reg foo4:*, reg foo5:V, reg c4:L, reg foo7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r20:V, reg p12:p(V +), reg r22:V, reg al:*, reg al1:V, reg c5:L, reg i11:I, reg al3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i13:I, reg dx5:V, reg topic1:*, reg topic2:V, reg __:cls, reg r23:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg i16:I, reg r25:V, reg f4:*, reg f5:V, reg is_na:cls, reg r26:V, reg c6:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg i23:I, reg r29:V, reg res:*, reg res1:V, reg file_path2:cls, reg p13:*, reg p14:V, reg p15:p(V +), reg f6:*, reg f7:V, reg p16:p(V +), reg r32:V, reg c7:cls, reg r33:V, reg firstOnly1:*, reg firstOnly2:V, reg c8:L, reg res2:*, reg res3:V |
    mkenv;
    st topic = topic;
    st paths = paths;
    firstOnly_isMissing = missing.0(firstOnly);
    if firstOnly_isMissing then L0(FALSE) else L0(firstOnly);
  L0(firstOnly_orDefault):
    st firstOnly = firstOnly_orDefault;
    character = ldf character;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    r = dyn character();
    check L15() else D1();
  D1():
    deopt 2 [r];
  L15():
    st res = r;
    paths1 = ld paths;
    check L16() else D2();
  D2():
    deopt 4 [paths1];
  L16():
    paths2 = force? paths1;
    checkMissing(paths2);
    s = toForSeq(paths2);
    l = length(s);
    i = 0;
    goto L1(i);
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L17() else L13();
  L11():
    res2 = ld res;
    check L55() else D22();
  L13():
    x = `[[`(s, i2, NULL, TRUE);
    st p = x;
    file_exists = ldf `file.exists`;
    check L18() else D3();
  L17():
    goto L11();
  D3():
    deopt 7 [i2];
  D22():
    deopt 81 [res2];
  L18():
    p3 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        p = ld p;
        p1 = force? p;
        checkMissing(p1);
        return p1;
      };
      r2 = dyn file_path(p2, "help", "aliases.rds");
      st f = r2;
      invisible.0();
      return r2;
    };
    r4 = dyn file_exists(p3);
    check L19() else D4();
  L55():
    res3 = force? res2;
    checkMissing(res3);
    popenv;
    return res3;
  D4():
    deopt 9 [i2, r4];
  L19():
    c1 = `as.logical`(r4);
    if c1 then L20() else L2();
  L2():
    file_exists1 = ldf `file.exists`;
    check L24() else D7();
  L3(i7):
    al = ld al;
    check L33() else D13();
  L20():
    readRDS = ldf readRDS;
    check L21() else D5();
  D5():
    deopt 11 [i2];
  D7():
    deopt 16 [i2];
  D13():
    deopt 43 [i7, al];
  L21():
    p4 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r6 = dyn readRDS(p4);
    check L22() else D6();
  L24():
    p8 = prom<V +>{
      file_path1 = ldf `file.path`;
      p7 = prom<V +>{
        p5 = ld p;
        p6 = force? p5;
        checkMissing(p6);
        return p6;
      };
      r9 = dyn file_path1(p7, "help", "AnIndex");
      st f = r9;
      invisible.0();
      return r9;
    };
    r11 = dyn file_exists1(p8);
    check L25() else D8();
  L33():
    al1 = force? al;
    checkMissing(al1);
    c5 = `is.object`(al1);
    if c5 then L34() else L35(i7, al1);
  D6():
    deopt 13 [i2, r6];
  D8():
    deopt 18 [i2, r11];
  L5(i13, dx5):
    st f = dx5;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L38() else L39();
  L22():
    st al = r6;
    goto L3(i2);
  L25():
    c2 = `as.logical`(r11);
    if c2 then L26() else L4();
  L34():
    dr4 = tryDispatchBuiltin.1("[", al1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L36() else L35(i7, dr4);
  L35(i11, al3):
    topic1 = ld topic;
    check L37() else D14();
  D14():
    deopt 45 [i11, al3, topic1];
  L4():
    goto L1(i2);
  L6(i16, r25):
    c6 = `as.logical`(r25);
    if c6 then L42() else L7();
  L26():
    scan = ldf scan;
    check L27() else D9();
  L36():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(i7, dx4);
  L37():
    topic2 = force? topic1;
    __ = ldf `[` in base;
    r23 = dyn __(al3, topic2);
    goto L5(i11, r23);
  L38():
    f4 = ld f;
    check L40() else D15();
  L39():
    r24 = dyn base1(<sym f>);
    goto L6(i13, r24);
  D9():
    deopt 20 [i2];
  D15():
    deopt 51 [i13, f4];
  L7():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L27():
    p9 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    p10 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r14):
      return r14;
    L1():
      list = ldf list in base;
      r15 = dyn list("", "");
      goto L0(r15);
    L2():
      r13 = dyn base[a, b]("", "");
      goto L0(r13);
    };
    r17 = dyn scan[, what, sep, quote, `na.strings`, quiet](p9, p10, "\t", "", "", TRUE);
    check L28() else D10();
  L40():
    f5 = force? f4;
    checkMissing(f5);
    is_na = ldf `is.na` in base;
    r26 = dyn is_na(f5);
    check L41() else D16();
  L42():
    goto L1(i16);
  D10():
    deopt 32 [i2, r17];
  D16():
    deopt 54 [i13, r26];
  L9(i23, r29):
    st res = r29;
    firstOnly1 = ld firstOnly;
    check L51() else D21();
  L28():
    st foo = r17;
    structure = ldf structure;
    check L29() else D11();
  L41():
    goto L6(i13, r26);
  L45():
    res = ld res;
    check L47() else D17();
  L46():
    r28 = dyn base2(<sym res>, <lang file.path(p, "help", f)>);
    goto L9(i16, r28);
  D11():
    deopt 35 [i2];
  D17():
    deopt 61 [i16, res];
  D21():
    deopt 72 [i23, firstOnly1];
  L29():
    p11 = prom<V +>{
      foo = ld foo;
      foo1 = force? foo;
      checkMissing(foo1);
      c3 = `is.object`(foo1);
      if c3 then L1() else L2(foo1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", foo1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(foo3):
      r18 = `$`(foo3, <sym b>);
      goto L0(r18);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p12 = prom<V +>{
      foo4 = ld foo;
      foo5 = force? foo4;
      checkMissing(foo5);
      c4 = `is.object`(foo5);
      if c4 then L1() else L2(foo5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", foo5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(foo7):
      r20 = `$`(foo7, <sym a>);
      goto L0(r20);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r22 = dyn structure[, names](p11, p12);
    check L30() else D12();
  L47():
    res1 = force? res;
    checkMissing(res1);
    file_path2 = ldf `file.path`;
    check L48() else D18();
  L51():
    firstOnly2 = force? firstOnly1;
    checkMissing(firstOnly2);
    c8 = `as.logical`(firstOnly2);
    if c8 then L52() else L10();
  D12():
    deopt 39 [i2, r22];
  D18():
    deopt 64 [i16];
  L10():
    goto L1(i23);
  L30():
    st al = r22;
    goto L3(i2);
  L48():
    p15 = prom<V +>{
      p13 = ld p;
      p14 = force? p13;
      checkMissing(p14);
      return p14;
    };
    p16 = prom<V +>{
      f6 = ld f;
      f7 = force? f6;
      checkMissing(f7);
      return f7;
    };
    r32 = dyn file_path2(p15, "help", p16);
    check L49() else D19();
  L52():
    goto L11();
  D19():
    deopt 68 [i16, r32];
  L49():
    c7 = ldf c in base;
    r33 = dyn c7(res1, r32);
    check L50() else D20();
  D20():
    deopt 70 [i16, r33];
  L50():
    goto L9(i16, r33);
  }
}