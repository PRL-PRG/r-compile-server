fun main() {
  () -+> V { reg r:cls, reg getFromNamespace:cls, reg r1:V |
    mkenv;
    r = clos inner800273938;
    st getFromNamespace = r;
    getFromNamespace = ldf getFromNamespace;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn getFromNamespace("findGeneric", "utils");
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner800273938(x, ns, pos, envir) {
  (reg x:*, reg ns:*, reg pos:*, reg envir:*) -+> V { var x:*, var ns:*, var pos:*, reg pos_isMissing:L, reg pos_orDefault:*, reg p:p(V +), var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg pos1:*, reg pos2:V, reg as_environment:cls, reg r3:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg missing:cls, reg r7:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg envir1:*, reg envir2:V, reg attr:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg nm:*, reg nm1:V, reg c1:V, reg c2:L, reg c3:V, reg startsWith:cls, reg nm2:*, reg nm3:V, reg p2:p(V +), reg r14:V, reg r15:V, reg c5:L, reg c6:V, reg c8:L, reg stop:cls, reg r16:V, reg asNamespace:cls, reg substring:cls, reg nm4:*, reg nm5:V, reg p3:p(V +), reg r19:V, reg p4:p(V +), reg r21:V, reg asNamespace1:cls, reg ns1:*, reg ns2:V, reg p5:p(V +), reg r24:V, reg get:cls, reg x1:*, reg x2:V, reg p6:p(V +), reg ns3:*, reg ns4:V, reg p7:p(V +), reg r27:V |
    mkenv;
    st x = x;
    st ns = ns;
    pos_isMissing = missing.0(pos);
    if pos_isMissing then L0() else L1(pos);
  L0():
    p = prom<V +>{
      return -1.0;
    };
    goto L1(p);
  L1(pos_orDefault):
    st pos = pos_orDefault;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L2() else L3(envir);
  L2():
    p1 = prom<V +>{
      sym = ldf `as.environment`;
      base = ldf `as.environment` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      pos1 = ld pos;
      pos2 = force? pos1;
      checkMissing(pos2);
      as_environment = ldf `as.environment` in base;
      r3 = dyn as_environment(pos2);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym pos>);
      goto L0(r1);
    };
    goto L3(p1);
  L3(envir_orDefault):
    st envir = envir_orDefault;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L4(r6):
    c = `as.logical`(r6);
    if c then L14() else L5();
  L12():
    missing = ldf missing in base;
    r7 = dyn missing(<sym ns>);
    goto L4(r7);
  L13():
    r5 = dyn base1(<sym ns>);
    goto L4(r5);
  L5():
    asNamespace1 = ldf asNamespace;
    check L33() else D9();
  L11():
    get = ldf get;
    check L35() else D11();
  L14():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  D9():
    deopt 36 [];
  D11():
    deopt 41 [];
  L6(r9):
    st nm = r9;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L15():
    envir1 = ld envir;
    check L17() else D0();
  L16():
    r8 = dyn base2[, , exact](<sym envir>, "name", TRUE);
    goto L6(r8);
  L33():
    p5 = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r24 = dyn asNamespace1(p5);
    check L34() else D10();
  L35():
    p6 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p7 = prom<V +>{
      ns3 = ld ns;
      ns4 = force? ns3;
      checkMissing(ns4);
      return ns4;
    };
    r27 = dyn get[, envir, inherits](p6, p7, FALSE);
    check L36() else D12();
  D0():
    deopt 5 [envir1];
  D10():
    deopt 38 [r24];
  D12():
    deopt 47 [r27];
  L7(r12):
    c2 = `as.logical`(r12);
    if c2 then L8(c2) else L22();
  L17():
    envir2 = force? envir1;
    checkMissing(envir2);
    attr = ldf attr in base;
    r10 = dyn attr(envir2, "name", TRUE);
    check L18() else D1();
  L19():
    nm = ld nm;
    check L21() else D2();
  L20():
    r11 = dyn base3(<sym nm>);
    goto L7(r11);
  L34():
    st ns = r24;
    goto L11();
  L36():
    popenv;
    return r27;
  D1():
    deopt 11 [r10];
  D2():
    deopt 14 [nm];
  L8(c3):
    c8 = `as.logical`(c3);
    if c8 then L26() else L9();
  L18():
    goto L6(r10);
  L21():
    nm1 = force? nm;
    checkMissing(nm1);
    c1 = `==`(nm1, NULL);
    goto L7(c1);
  L22():
    startsWith = ldf startsWith;
    check L23() else D3();
  D3():
    deopt 18 [c2];
  L9():
    goto L10();
  L10():
    asNamespace = ldf asNamespace;
    check L30() else D7();
  L23():
    p2 = prom<V +>{
      nm2 = ld nm;
      nm3 = force? nm2;
      checkMissing(nm3);
      return nm3;
    };
    r14 = dyn startsWith(p2, "package:");
    check L24() else D4();
  L26():
    stop = ldf stop;
    check L27() else D5();
  D4():
    deopt 21 [c2, r14];
  D5():
    deopt 25 [];
  D7():
    deopt 31 [];
  L24():
    r15 = `!`(r14);
    c5 = `as.logical`(r15);
    c6 = `||`(c2, c5);
    goto L8(c6);
  L27():
    r16 = dyn stop("environment specified is not a package");
    check L28() else D6();
  L30():
    p4 = prom<V +>{
      substring = ldf substring;
      p3 = prom<V +>{
        nm4 = ld nm;
        nm5 = force? nm4;
        checkMissing(nm5);
        return nm5;
      };
      r19 = dyn substring(p3, 9);
      return r19;
    };
    r21 = dyn asNamespace(p4);
    check L31() else D8();
  D6():
    deopt 27 [r16];
  D8():
    deopt 33 [r21];
  L28():
    goto L10();
  L31():
    st ns = r21;
    goto L11();
  }
}