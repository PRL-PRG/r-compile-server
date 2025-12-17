fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner716851556;
    st registerNames = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner716851556(names, package, `.listFile`, add) {
  (reg names:*, reg package:*, reg _listFile:*, reg add:*) -+> V { var names:*, var package:*, var `.listFile`:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg c:L, reg topenv:cls, reg parent_frame:cls, reg r4:V, reg p:p(V +), reg r6:V, reg _simplePackageName:cls, reg env:*, reg env1:V, reg p1:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg package1:*, reg package2:V, reg is_environment:cls, reg r12:V, reg c1:L, reg package3:*, reg package4:V, reg _simplePackageName1:cls, reg env2:*, reg env3:V, reg p2:p(V +), reg r14:V, reg asNamespace:cls, reg package5:*, reg package6:V, reg p3:p(V +), reg r16:V, reg get0:cls, reg _listFile1:*, reg _listFile2:V, reg p4:p(V +), reg env4:*, reg env5:V, reg p5:p(V +), reg character:cls, reg r19:V, reg p6:p(V +), reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg missing1:cls, reg r24:V, reg r25:V, reg c2:L, reg environmentIsLocked:cls, reg env6:*, reg env7:V, reg p7:p(V +), reg r27:V, reg c3:L, reg stop:cls, reg gettextf:cls, reg package7:*, reg package8:V, reg p8:p(V +), reg r29:V, reg p9:p(V +), reg r31:V, reg add1:*, reg add2:V, reg c4:L, reg unique:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg current:*, reg current1:V, reg names1:*, reg names2:V, reg c5:cls, reg r35:V, reg p10:p(V +), reg r37:V, reg r38:V, reg names3:*, reg names4:V, reg assign:cls, reg _listFile3:*, reg _listFile4:V, reg p11:p(V +), reg current2:*, reg current3:V, reg p12:p(V +), reg env8:*, reg env9:V, reg p13:p(V +), reg r42:V, reg current4:*, reg current5:V |
    mkenv;
    st names = names;
    st package = package;
    st `.listFile` = _listFile;
    add_isMissing = missing.0(add);
    if add_isMissing then L0(TRUE) else L0(add);
  L0(add_orDefault):
    st add = add_orDefault;
    r = clos inner2916718377;
    st `.simplePackageName` = r;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L1(r2):
    c = `as.logical`(r2);
    if c then L15() else L2();
  L13():
    missing = ldf missing in base;
    r3 = dyn missing(<sym package>);
    goto L1(r3);
  L14():
    r1 = dyn base(<sym package>);
    goto L1(r1);
  L2():
    sym1 = ldf `is.environment`;
    base1 = ldf `is.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L3():
    get0 = ldf get0;
    check L32() else D11();
  L15():
    topenv = ldf topenv;
    check L16() else D0();
  D0():
    deopt 7 [];
  D11():
    deopt 36 [];
  L4(r11):
    c1 = `as.logical`(r11);
    if c1 then L25() else L5();
  L16():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r4 = dyn parent_frame(2);
      return r4;
    };
    r6 = dyn topenv(p);
    check L17() else D1();
  L21():
    package1 = ld package;
    check L23() else D4();
  L22():
    r10 = dyn base1(<sym package>);
    goto L4(r10);
  L32():
    p4 = prom<V +>{
      _listFile1 = ld `.listFile`;
      _listFile2 = force? _listFile1;
      checkMissing(_listFile2);
      return _listFile2;
    };
    p5 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    p6 = prom<V +>{
      character = ldf character;
      r19 = dyn character();
      return r19;
    };
    r21 = dyn get0[, envir, inherits, ifnotfound](p4, p5, FALSE, p6);
    check L33() else D12();
  D1():
    deopt 9 [r6];
  D4():
    deopt 18 [package1];
  D12():
    deopt 44 [r21];
  L5():
    asNamespace = ldf asNamespace;
    check L30() else D9();
  L17():
    st env = r6;
    _simplePackageName = ldf `.simplePackageName`;
    check L18() else D2();
  L23():
    package2 = force? package1;
    checkMissing(package2);
    is_environment = ldf `is.environment` in base;
    r12 = dyn is_environment(package2);
    check L24() else D5();
  L25():
    package3 = ld package;
    check L26() else D6();
  L33():
    st current = r21;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  D2():
    deopt 12 [];
  D5():
    deopt 21 [r12];
  D6():
    deopt 22 [package3];
  D9():
    deopt 31 [];
  L6(r23):
    r25 = `!`(r23);
    c2 = `as.logical`(r25);
    if c2 then L36() else L7();
  L18():
    p1 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r8 = dyn _simplePackageName(p1);
    check L19() else D3();
  L24():
    goto L4(r12);
  L26():
    package4 = force? package3;
    checkMissing(package4);
    st env = package4;
    _simplePackageName1 = ldf `.simplePackageName`;
    check L27() else D7();
  L30():
    p3 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    r16 = dyn asNamespace(p3);
    check L31() else D10();
  L34():
    missing1 = ldf missing in base;
    r24 = dyn missing1(<sym names>);
    goto L6(r24);
  L35():
    r22 = dyn base2(<sym names>);
    goto L6(r22);
  D3():
    deopt 14 [r8];
  D7():
    deopt 26 [];
  D10():
    deopt 33 [r16];
  L7():
    goto L12();
  L12():
    current4 = ld current;
    check L52() else D23();
  L19():
    st package = r8;
    goto L3();
  L27():
    p2 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r14 = dyn _simplePackageName1(p2);
    check L28() else D8();
  L31():
    st env = r16;
    goto L3();
  L36():
    environmentIsLocked = ldf environmentIsLocked;
    check L37() else D13();
  D8():
    deopt 28 [r14];
  D13():
    deopt 51 [];
  D23():
    deopt 78 [current4];
  L28():
    st package = r14;
    goto L3();
  L37():
    p7 = prom<V +>{
      env6 = ld env;
      env7 = force? env6;
      checkMissing(env7);
      return env7;
    };
    r27 = dyn environmentIsLocked(p7);
    check L38() else D14();
  L52():
    current5 = force? current4;
    checkMissing(current5);
    popenv;
    return current5;
  D14():
    deopt 53 [r27];
  L38():
    c3 = `as.logical`(r27);
    if c3 then L39() else L8();
  L8():
    goto L9();
  L9():
    add1 = ld add;
    check L43() else D17();
  L39():
    stop = ldf stop;
    check L40() else D15();
  D15():
    deopt 55 [];
  D17():
    deopt 60 [add1];
  L40():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      p8 = prom<V +>{
        package7 = ld package;
        package8 = force? package7;
        checkMissing(package8);
        return package8;
      };
      r29 = dyn gettextf("The namespace for package \"%s\" is locked; no changes in the global variables list may be made.", p8);
      return r29;
    };
    r31 = dyn stop(p9);
    check L41() else D16();
  L43():
    add2 = force? add1;
    checkMissing(add2);
    c4 = `as.logical`(add2);
    if c4 then L44() else L10();
  D16():
    deopt 57 [r31];
  L10():
    names3 = ld names;
    check L48() else D20();
  L11(r38):
    st current = r38;
    assign = ldf assign;
    check L49() else D21();
  L41():
    goto L9();
  L44():
    unique = ldf unique;
    check L45() else D18();
  D18():
    deopt 63 [];
  D20():
    deopt 66 [names3];
  D21():
    deopt 70 [];
  L45():
    p10 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      current = ld current;
      current1 = force? current;
      checkMissing(current1);
      names1 = ld names;
      names2 = force? names1;
      checkMissing(names2);
      c5 = ldf c in base;
      r35 = dyn c5(current1, names2);
      goto L0(r35);
    L2():
      r33 = dyn base3(<sym current>, <sym names>);
      goto L0(r33);
    };
    r37 = dyn unique(p10);
    check L46() else D19();
  L48():
    names4 = force? names3;
    checkMissing(names4);
    goto L11(names4);
  L49():
    p11 = prom<V +>{
      _listFile3 = ld `.listFile`;
      _listFile4 = force? _listFile3;
      checkMissing(_listFile4);
      return _listFile4;
    };
    p12 = prom<V +>{
      current2 = ld current;
      current3 = force? current2;
      checkMissing(current3);
      return current3;
    };
    p13 = prom<V +>{
      env8 = ld env;
      env9 = force? env8;
      checkMissing(env9);
      return env9;
    };
    r42 = dyn assign[, , envir](p11, p12, p13);
    check L50() else D22();
  D19():
    deopt 65 [r37];
  D22():
    deopt 75 [r42];
  L46():
    goto L11(r37);
  L50():
    goto L12();
  }
}
fun inner2916718377(env) {
  (reg env:*) -+> V { var env:*, reg get0:cls, reg env1:*, reg env2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st env = env;
    get0 = ldf get0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r1 = dyn get0[, envir, inherits, ifnotfound](".packageName", p, FALSE, "(unknown package)");
    check L1() else D1();
  D1():
    deopt 9 [r1];
  L1():
    popenv;
    return r1;
  }
}